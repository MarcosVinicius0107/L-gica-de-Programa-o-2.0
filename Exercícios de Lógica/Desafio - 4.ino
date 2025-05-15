// C++ code
//Exibir os números ímpares de 1 a 99

void setup()
{
  Serial.begin(9600);

  for(int contador = 1; contador <= 99; contador += 2){
    Serial.println(contador);
  }
}

void loop()
{
  
  //delay(3000);
}