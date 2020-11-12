float Vector[7];
float Vector1[7];
void setup() {
pinMode(A0,INPUT);
Serial.begin(9600);
}
void loop() {
  float temp=analogRead(A0);
  float aux=0.0,Med;
  int i,j;
  temp=(5.0*temp*100.0)/1023.0;
  Vector[6]=Vector[5];
  Vector[5]=Vector[4];
  Vector[4]=Vector[3];
  Vector[3]=Vector[2];
  Vector[2]=Vector[1];
  Vector[1]=Vector[0];
  Vector[0]=temp;

  Vector1[6]=Vector[6];
  Vector1[5]=Vector[5];
  Vector1[4]=Vector[4];
  Vector1[3]=Vector[3];
  Vector1[2]=Vector[2];
  Vector1[1]=Vector[1];
  Vector1[0]=Vector[0];
  for(i=0;i<7;i++)
  {
    for(j=0;j<6;j++)
  {
    if(Vector1[j]>Vector1[j+1])
    {
      aux=Vector1[j+1];
      Vector1[j+1]=Vector1[j];
      Vector1[j]=aux;      
    }
    
  }
  }
  
  Med=Vector1[3];
  Serial.println(Med);
  //Serial.println("°");
  

}
