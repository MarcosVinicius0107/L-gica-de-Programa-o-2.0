// C++ code
/*Exibir os números pares de 60 a 80 
e ímpares de 81 a 101 no mesmo laço while*/
void setup()
{
  Serial.begin(9600);
  int numero = 60;
  
  while ( numero <= 101)
  {
    Serial.println( numero );
    
    if( numero == 80){
      numero -=1;// voltar para 79
    }
  
    numero += 2;// igual 81
  
   }// fim do while
}

void loop()
{
  
}