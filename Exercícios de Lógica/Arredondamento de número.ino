// C++ code
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  float numeroQualquer = 3.14151617;
  
  float continhaBasica = numeroQualquer * 2;
  
  Serial.println( String(continhaBasica,6) );//arredonda o texto para 6 casas decimais
  
  delay(1000);
}