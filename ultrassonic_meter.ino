#include <LiquidCrystal.h>
//SET_LED RGB
  const byte R = 7;
  const byte B = 5;
  const byte G = 6;
// SET_SENSOR
    byte pinoTransmissor = 2; // trig
    byte pinoReceptor = 3; //echo
	byte pin_botton = 10;
    float cm, duracao;
// SET_LCD
  const int rs = 9, en = 8, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup(){
  	lcd.begin(16, 2);
  	iniciar();
  	delay(1000);
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(pinoTransmissor, OUTPUT); // transmissor
    pinMode(pinoReceptor, INPUT);     // receptor
  	pinMode(pin_botton, INPUT);
    delay(1000);
    Serial.begin(9600);
 
  }

void loop(){
  bool state = digitalRead(pin_botton);
  if(state == true){
    cm = distancia();
    Serial.println(cm);
    delay(300);
    lcd.setCursor(0,0);
    lcd.print(cm);
    lcd.print(" cm");
  }else lcd.clear();
  
  }

float distancia(){  
  
  digitalWrite(pinoTransmissor, LOW);
  delayMicroseconds(5);
  digitalWrite(pinoTransmissor, HIGH); 
  delayMicroseconds(10);
  digitalWrite(pinoTransmissor, LOW);
  duracao = pulseIn(pinoReceptor, HIGH);
  float calcDistancia= (duracao/2) * 0.0343; 

  return calcDistancia;  
    }

void iniciar(){

  for(int n = 3; n > 0; n--){
    lcd.setCursor(0,0);
  	lcd.print("Bem vindo");
    lcd.setCursor(0,1);
    lcd.print("Carregando: ");
    lcd.print(n);
    delay(1000);
    lcd.clear();
  } 
}