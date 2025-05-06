/*while - È uma estrutura de repetição que só executa repetição/laço enquanto
a condição for verdadeira*/

int numero1 = 0;//variável global

void setup()
{
  Serial.begin(9600);
}

//função
void loop()
{
 //o 0 também conta
 //while
  int contadorWhile = 5; //variável local
  int contador = 1;
  
  while (contadorWhile >=0){
  Serial.println(String(contadorWhile));
  //contadorWhile = contadorWhile + 1
  contadorWhile--;
  } 
    
  while (contador <=5){
  Serial.println(String(contador));
  //contadorWhile = contadorWhile + 1
  contador++;
  } 
  delay(10000);
  
}