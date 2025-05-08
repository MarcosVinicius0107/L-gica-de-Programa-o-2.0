// C++ code
/*Solicite dois números e uma operação (soma, subtração, 
multiplicação ou divisão).
Realize a operação indicada.
Mostre o resultado.*/

//Variáveis
float numero1 = 0;
float numero2 = 0;
float soma;
float subtracao;
float multiplicacao;
float divisao;
int escolhaDaOperacao;
float resultado;
int contador =0;


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
    
    if(escolhaDaOperacao == 1)
    {
    	soma = numero1 + numero2;
        Serial.println("_________________________________________________ ");
        Serial.println("|                                                |");
      	Serial.println("|     WOW MY GOD!!! O resultado eh: " + String(soma) + "            |");
        Serial.println("|________________________________________________|");
    }
    else if(escolhaDaOperacao == 2)
    {
    	subtracao = numero1 - numero2;
      	Serial.println("_________________________________________________ ");
        Serial.println("|                                                |");
      	Serial.println("|     WOW MY GOD!!! O resultado eh: " + String(subtracao) + "         |");
        Serial.println("|________________________________________________|");
    }
    else if(escolhaDaOperacao == 3)
    {
    	multiplicacao = numero1 * numero2;
      	Serial.println("_________________________________________________ ");
        Serial.println("|                                                |");
      	Serial.println("|     WOW MY GOD!!! O resultado eh: " + String(multiplicacao) + "   |");
        Serial.println("|________________________________________________|");
    }
    else if(escolhaDaOperacao == 4)
    {
    	divisao = numero1 / numero2;
      	Serial.println("_________________________________________________ ");
        Serial.println("|                                                |");
      	Serial.println("|     WOW MY GOD!!! O resultado eh: " + String(divisao) + "         |");
        Serial.println("|________________________________________________|");
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