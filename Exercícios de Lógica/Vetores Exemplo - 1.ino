// C++ code
//
void setup()
{
  Serial.begin(9600);
  
 //Variável primitiva / comum -  só guarda um valor por vez
  int numero = 5;
  
  numero = numero + 2;
  //vetores - variáveis construídas (estruturas de dados)
  // podem guardar vários valores em um único nome
  
  //               0   1   2   3   4 -índices/posições
  int numeross[5] = {10, 20, 30, 40, 50};//gavateiro com 5 gavetas
  
  Serial.println(numero);//7
  Serial.println(numeross[3]);//40 - recupera o valor da 4a gaveta
  
  numeross[3] = 400;//troca o valor que está na 4a gaveta
  
  Serial.print(numeross[3]);//imprime o novo valor da 4a gaveta
  
}// fim do setup

void loop()
{
 
}