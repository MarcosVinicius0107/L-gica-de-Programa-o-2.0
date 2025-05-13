//Aprendendo sobre variáveis
//Resumidamente são rótulos que podem armazenar valores
//temporariamente que podem variar com o passar do tempo
//e que tem um tipo de dado específico (textos, númericos ou booleanos)

//Configuraão inicial do Arduíno
void setup()
{
  Serial.begin(9600); // Inicia o código
}

//Variáveis
int idade = 0;

  //Lopping infinito - funciona até desligar o arduíno
void loop()
{
  idade = idade + 1; //1
  idade = idade + 1; //2
  idade = idade + 1; //3
  
  Serial.println( String(idade) );//imprimir o valor de idade - 
  delay(1000);
}