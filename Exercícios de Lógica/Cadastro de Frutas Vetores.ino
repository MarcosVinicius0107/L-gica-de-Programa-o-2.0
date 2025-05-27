// C++ code
// 
String frutaDigitada = "";
void setup()
{
  Serial.begin(9600);
  
  Serial.println("*** SACOLAO DO ZEH ***");
  Serial.println();
  
  String frutas [6];//Cria vetor vazio
  
  Serial.println("Oh ZEH, bora cadastrar as frutas!");
  Serial.println();
  
  for(int i = 0; i <= 5; i++)
  {
  Serial.println("Digite o nome da " + String(i + 1) + " fruta: ");
  while(!Serial.available());
  String frutaDigitada = Serial.readString();
  
  frutas[i] = frutaDigitada;
  
  }
  //Desafio; crie um for para exibir o nome das frutas digitadas pelo usuario
  for(int i = 0; i <= 5; i++)
  {
    Serial.println(String(i + 1) + " fruta: " + String(frutas[i]));
  }
  
 /* Serial.println("Digite o nome da primeira fruta");
  while(!Serial.available());
  String fruta = Serial.readString();
  
  frutas[0] = fruta;
  
  Serial.println("Digite o nome da segunda fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  
  frutas[1] = fruta;
  
  Serial.println("Digite o nome da terceira fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  
  frutas[2] = fruta;
  
  Serial.println("Digite o nome da quarta fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  
  frutas[3] = fruta;
  
  Serial.println("Digite o nome da quinta fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  
  frutas[4] = fruta;*/
}

void loop()
{

}