// C++ code
/*Solicite dois números e uma operação (soma, subtração, 
multiplicação ou divisão).
Realize a operação indicada.
Mostre o resultado.*/

//Variáveis
float numero1 = 0;
float numero2 = 0;
float numero = 3;
int escolhaDaOperacao;
int contador =0;
float resultado;// variavel global

float somar(float numero1Parametro, float numero2Parametro, float numero3Parametro = 0){
  
  return (numero1Parametro + numero2Parametro + numero3Parametro); //retornar a soma
}

// Quando usamos void na função, não precisamos de retorno
float subtrair(float numero1Parametro, float numero2Parametro){

  return (numero1Parametro - numero2Parametro);
  
}

float multiplicar(float numero1Parametro, float numero2Parametro){

  return (numero1Parametro * numero2Parametro);
  
}

float dividir(float numero1Parametro, float numero2Parametro){

  return (numero1Parametro / numero2Parametro);
  
}







void setup()
{
  Serial.begin(9600);
  
  
  do
  {
    Serial.println("|--------------------------------------------------|");
    Serial.println("|                    MENU                          |");
    Serial.println("|                                                  |");
    Serial.println("| Bem Vindo(a) a calculadora mega inteligente :P!!!|");
    Serial.println("| Escolha uma das/operacoes:                       |");        
    Serial.println("| 1 - Somar                                        |");
    Serial.println("| 2 - Subtrair                                     |");
    Serial.println("| 3 - Multiplicar                                  |");
    Serial.println("| 4 - Dividir                                      |");
    Serial.println("|--------------------------------------------------|");
    
    Serial.println();
    Serial.println();

    while(!Serial.available()){}

    escolhaDaOperacao = Serial.parseInt();

    Serial. println("Agora, para realizar a operacao, digite o primeiro numero:");
    while(!Serial.available());
    numero1 = Serial.parseFloat();

    Serial. println("Agora, digite o segundo numero:");
    while(!Serial.available());
    numero2 = Serial.parseFloat();
   
    
    switch(escolhaDaOperacao){
      case 1:
         
       resultado = somar(numero1,numero2); //chamada da função
        Serial.println("_________________________________________________ ");
        Serial.println("|                                                |");
      	Serial.println("|     WOW MY GOD!!! O resultado eh: " + String(resultado) + "            |");
        Serial.println("|________________________________________________|");
      
      break;
      case 2:
      resultado = subtrair (numero1,numero2);
      	Serial.println("_________________________________________________ ");
        Serial.println("|                                                |");
      	Serial.println("|     WOW MY GOD!!! O resultado eh: " + String(resultado) + "         |");
        Serial.println("|________________________________________________|");
   
      break;
      case 3:
      resultado = multiplicar (numero1,numero2);
      	Serial.println("_________________________________________________ ");
        Serial.println("|                                                |");
      	Serial.println("|     WOW MY GOD!!! O resultado eh: " + String(resultado) + "   |");
        Serial.println("|________________________________________________|");
   
      break;
      case 4:
      resultado = dividir (numero1,numero2);
      	Serial.println("_________________________________________________ ");
        Serial.println("|                                                |");
      	Serial.println("|     WOW MY GOD!!! O resultado eh: " + String(resultado) + "         |");
        Serial.println("|________________________________________________|");
      	break;
    
    }
    
    Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(!Serial.available());
    
    if(Serial.readString() == "s")
    {
    	contador++;
    }
    else
    {
      	contador = 0;
    	Serial.println("Ate breve, obrigado por usar nossa calculadora inteligente!!! :)");
      	Serial.println("Caso queira voltar, reinicie o sistema.");
    }
  }
  while(contador != 0);  
}

void loop()
{
  //Sem código
}