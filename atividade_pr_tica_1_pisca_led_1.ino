#define led_vermelho 4
#define led_azul 5
#define B1 3
#define B2 2

long TimeAnterior=0;
long Time = 2000;


void setup()
{
  pinMode(B1, INPUT);
  pinMode(B2, INPUT);
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_azul, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
 
  
  if (millis() >= TimeAnterior+2000)
  {
    
   	TimeAnterior = millis();
    digitalWrite(led_vermelho, !digitalRead(led_vermelho));
    
  }
  
  if (digitalRead(B1))
  {
    digitalWrite(led_azul,1);
  }
  
  if (digitalRead(B2))
  {
    digitalWrite(led_azul,0);
  }
}