

/*

Faça um programa que pergunte ao usuário sua idade e se ele tem ingresso.

Após validação, exiba a mensagem se ele pode entrar na festa ou não.

OBS: Condição para entrar na festa é ter o ingresso e ser maior de idade

---
Logo em seguida altere o programa para acender um led caso o usuário possa entrar na festa,
caso contrário acenda um led vermelho

*/


// C++ code
//Variáveis
int ledVermelho = 5;
int ledVerde = 6;
  
  
int idade = 0;
String ingresso = "sim";

//_Àrea de configuração do arduíno
//Roda apenas uma vez antes do loop
void setup()
{
  pinMode(ledVermelho, OUTPUT);// configura o led vermelho como saída
  pinMode(ledVerde, OUTPUT);// configura o led verdeo como saída
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  //Perguntar a idade
  Serial.println("Qual a sua idade?");
  while( !Serial.available() ){}
  idade = Serial.parseInt();
    
  //Perguntar se tem o ingresso
    Serial.println("Ganhou ingresso? sim/nao");
  	while( !Serial.available() ){}
  	ingresso = Serial.readString();
  
  	Serial.println("Idade: " + String(idade) );
   	Serial.println("Esta com ingresso na mao: " + ingresso);
  
  if( idade >= 18 && ingresso == "sim" ){
    digitalWrite(ledVerde, HIGH);//acende o verde
    digitalWrite(ledVermelho, LOW);//acende o vermelho
  	//bloquinho do sim (true)
    Serial.print( "Parabens.. ");
    Serial.println( "Espero que voce curta a festa");
    Serial.println( "Serah nesta sexta!!");
  } else {
    digitalWrite(ledVerde, LOW);//apaga o verde
    digitalWrite(ledVermelho, HIGH);//apaga o vermelho
  	//bloquinho do não (false)
    Serial.println( "Nao pode entrar na festa");
    Serial.println( "Que pena, nao foi desta vez!");
  }


  
  delay(1000);
}




