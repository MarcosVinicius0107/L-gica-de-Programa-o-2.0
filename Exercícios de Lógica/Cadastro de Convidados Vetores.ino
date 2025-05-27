// C++ code
//Variáveis Globais
/*
   cria cada vetor tamanho 4, de zero a 3
   fazendo parte do mesmo cadastro

*/
const int qtdCadastro = 4; // Defina a quantidade de cadastros que deseja
String convidados[qtdCadastro];
int idadeConvidados[qtdCadastro];//Camel Case
String emailConvidados[qtdCadastro];

//Funções
void desenhaCabecalho()
{
  Serial.println("============== CADASTRO ==============");
  Serial.println("|                                    |");
  Serial.println("| ******* Churrasco do marcao ****** |");
  Serial.println("|Nome:                               | ");
  Serial.println("|Idade:                              |");
  Serial.println("|Email:                              |");
  Serial.println("--------------------------------------");
  
}
void setup()
{
  Serial.begin(9600);//inicia a comunicação serial
}


void loop()
{
  
  //fazer um cabeçalho bonitinho para o programa
  desenhaCabecalho();//chama a  função pra desenhar o cabeçalho
  
  //cadastrar os dados
  for(int i = 0; i < qtdCadastro; i++)
  {
    //solicitar nome de usuário
    Serial.println("Informe " +String(i + 1)+ "o nome para cadastro ");
    while(!Serial.available());
    convidados[i] = Serial.readString();
  
    //solicitar idade do usuário 
    Serial.println("Informe a idade de " + convidados[i]);
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt(); 

    //solicitar o email  
    Serial.println("Informe o email de " + convidados[i]);
    while(!Serial.available());
    emailConvidados[i] = Serial.readString(); 
    
    Serial.println();
    
  }// fim do setor
  
  Serial.println("=== Lista de Convidados MAIORES DE IDADE ===");
  Serial.println();
  Serial.println();
  
  for (int i = 0; i < qtdCadastro; i++)
  {
    if (idadeConvidados[i] >= 18)
    {
      Serial.println("Nome: " + convidados[i]);
      Serial.println("Idade: "+ String(idadeConvidados[i]));
      Serial.println("Email: " + emailConvidados[i]);
      Serial.println("Permissao para a festa: " +  String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade"));
      Serial.println("------------------------------------");
      Serial.println();
    }//fim do if
    
  }//fim do for
  
   Serial.println();
 
    delay(2000);//pausa de 2 segundos
  }//fim do loop