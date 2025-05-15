// C++ code
/* Exibir os números pares de 60 a 80
e ímpares de 81 a 101 no mesmo laço while.*/
  
void setup()
{
 Serial.begin(9600);
 
}

void loop()
{
  for(int contador = 60;contador <=80;contador +=2){
  Serial.println("numeros pares" + String(contador));
  }
  for(int contador = 81;contador <=101;contador +=2){
  Serial.println("numeros impares" + String(contador));
  }
 delay(5000); 
} 
