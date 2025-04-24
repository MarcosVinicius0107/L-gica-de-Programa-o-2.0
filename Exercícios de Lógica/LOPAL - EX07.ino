
//Faça um programa que receba o nome, cargo, e salário de um funcionário. Calcule o
//salário a ser acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

//Variáveis
String nome = "";
String cargo = "";
float salarioInicial = 0;
float salarioAcrescido = 0;

void setup()
{
  Serial.begin (9600);
}

void loop()
{
     
  //Cabeçalho - 2 pipes + tracinho
    Serial.println("|------------------------------|");
    Serial.println("|                              |");
    Serial.println("|    LOPAL - EX_07             |");        
    Serial.println("|                              |");
    Serial.println("|------------------------------|");
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  //Entrada 
  Serial.println("Digite seu nome");//pergunta o nome do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  nome = Serial.readString();//resposta do usuário / ler um texto da serial
  nome.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite seu cargo");//pergunta o cargo do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  cargo = Serial.readString();//resposta do usuário / ler um texto da serial
  cargo.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite seu salario");//pergunta o salário do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  salarioInicial = Serial.parseFloat();//resposta do usuário
  
  //processamento
  salarioAcrescido = salarioInicial + (salarioInicial * 0.10);
  
  //saída
  Serial.println();
  Serial.println();
  
  Serial.println("Relatório");
  Serial.println();
  Serial.println("------------------------------");
  Serial.println();
  
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.println("Salario Inicial: " + String(salarioInicial) );
  Serial.println("Salario Atualizado: " + String(salarioAcrescido));
  Serial.println();
  
  Serial.print("------------------------------");
  
  Serial.println("Digite uma letra + <Enter> para continuar ...");//ajuste técnico para fazer o programa parar
  while (! Serial.available() );
  
  Serial.println();
  Serial.println();
  
  Serial.println();//limpa o cache do \n - o <Enter>
  
  
  }
  
  