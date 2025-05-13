/*while - È uma estrutura de repetição que só executa repetição/laço enquanto
a condição for verdadeira*/

/* Do while - É uma estrutura de repetição que executa PELO MENOS UMA VEZ independente da condição.
Em seguida, continuará executando enquanto a condição for verdadeira*/

/*For - Éuma estrutura de repetição que tem dentro da condição a inicialização, a propria
condição do for e incremento.
Ponto de atenção:as definições são separadas por;*/

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
    
  while (contador <=5){//Só entra se a condição for verdadeira
  Serial.println(String(contador));
  //contadorWhile = contadorWhile + 1
  contador++;
  } 
  delay(10000);

  // do while
  int contadorDoWhile = 1;

  do{
    Serial.println("Contando Do While" + String(contadorDoWhile));
    contadorDoWhile++;
  }
  while(contadorDoWhile <= 5);//Executa pelo meos uma vez e a partir de então só irá entra no corpo se a condição for verdadeira
  delay(1200);
  
  
  //for
  //      variavel      condição do for incremento
  for(int contador = 1; contador <=100; contador+= 5){
     Serial.println("Contador do for: " + String(contador));
  }
  delay(1200);
}