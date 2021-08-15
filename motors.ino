int motor1_sp = 3, motor2_sp = 9;
int motor1_a = 4, motor1_b = 5;
int motor2_a = 10, motor2_b = 11;

void setup(){
    //Definindo o que cada pino faz
    pinMode(motor1_sp, OUTPUT);
    pinMode(motor1_a, OUTPUT);
    pinMode(motor1_b, OUTPUT);

    pinMode(motor2_sp, OUTPUT);
    pinMode(motor2_a, OUTPUT);
    pinMode(motor2_b, OUTPUT);

    //Iniciando eles em 0
    digitalWrite(motor1_a, LOW);
    digitalWrite(motor1_b, LOW);
    analogWrite(motor1_sp, 0);
}

void loop(){
    //coloque aqui o seu código
}

void motor1_move(int speed){
    digitalWrite(motor1_a, HIGH);
    digitalWrite(motor1_b, LOW);
    analogWrite(motor1_sp, speed);
}

void motor1_reverse(int speed){
    digitalWrite(motor1_a, LOW);
    digitalWrite(motor1_b, HIGH);
    analogWrite(motor1_sp, speed);
}

void motor2_move(int speed){
    digitalWrite(motor1_a, HIGH);
    digitalWrite(motor1_b, LOW);
    analogWrite(motor1_sp, speed);
}

void motor2_reverse(int speed){
    digitalWrite(motor1_a, LOW);
    digitalWrite(motor1_b, HIGH);
    analogWrite(motor1_sp, speed);
}