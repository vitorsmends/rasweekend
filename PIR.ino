//Declarando as variáveis
int pinSensorPIR = 8;
int pinLed = 9;


void setup(){

  pinMode(pinSensorPIR,INPUT);
  pinMode(pinLed,OUTPUT);
  Serial.begin(9600);
}

void loop() {

 //Lendo o valor do sensor PIR. Este sensor pode assumir 2 valores
 //1 quando detecta algum movimento e 0 quando não detecta.
  int estado = digitalRead(pinSensorPIR);
  Serial.println(estado);

  if(estado == HIGH){
    digitalWrite(pinLed, HIGH);
  }
  else{
    digitalWrite(pinLed, LOW);
  }
}
