//9 HIGH rosso acceso
//10 HIGH verde acceso (con 9 LOW)
//10 LOW arancione acceso (con 9 LOW)
void setup() 
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() 
{
   digitalWrite(9, HIGH);
   delay(4000);
   digitalWrite(9, LOW);
   digitalWrite(10, HIGH);   
   delay(4000);
   digitalWrite(10, LOW);
   delay(2000);
}
