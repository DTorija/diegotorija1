void setup() {
pinMode(A0,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);

}

void loop() 
{
float V=0,I=0,RL=0;
delay(3000);
Serial.println("-----------------------");
Serial.print("Lectura analogica: ");
Serial.println(analogRead(A0));
V=analogRead(A0);
V=((5.0*V)/1023.0);
Serial.print("Voltaje de entrada: ");
Serial.print(V);
Serial.println(" V");
RL=613.5*((5.0/V)-1.0);
Serial.print("Valor de RL: ");
Serial.println(RL);
I=pow((RL/126951),-1.1655);
Serial.print("Intensidad luminosa: ");
Serial.print(I);
Serial.println(" lux");

if(I<=2000)
{
  digitalWrite(13,HIGH);
}else
{
  digitalWrite(13,LOW);

}
}
