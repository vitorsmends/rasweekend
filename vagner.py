import math

def f(x):
    return (10*math.cos(2*math.pi/5-x)/math.pow(math.sin(2*math.pi/5-x), 2))-(8*math.cos(x)/math.pow(math.sin(x), 2))

def derivate(x):
    dx = math.pow(10,-12);
    return ((f(x+dx)-f(x-dx))/(2*dx));

if __name__ == '__main__':
 
    xo = math.pi/4
    dx = math.pow(10, -12)
    k = 0

    x = xo -(f(xo)/derivate(xo))

    while ((abs(x-xo) > dx or f(x)>dx)):
        xo = x
        x = xo-(f(xo)/derivate(xo))
        k += 1

    if k>100:
        print("fora");
    else:
        print("o valor da raiz eh: {}".format(x))
        print("o número de interações: {}".format(k))
        L = (10/math.sin(2*math.pi/5-x))+(8/math.sin(x))
        print("o comprimento da barra eh: {}".format(L))