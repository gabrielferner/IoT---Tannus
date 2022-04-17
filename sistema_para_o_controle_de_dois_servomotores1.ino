int potenc1 = 0;
int potenc2 = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  potenc1 = analogRead(A0);
  potenc1 += map(potenc1, 0, 1023, 0, 180);
  analogWrite(9, potenc1);
  
  potenc2 = analogRead(A1);
  potenc2 += map(potenc2, 0, 1023, 0, 180);
  analogWrite(10, potenc2);
  
  
  delay(10);
}
