/*Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.*/

// Variáveis
float salarioAtual = 0;
float novoSalario = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Entrada 
  
  Serial.println("Qual eh o salario?");
  while (!Serial.available());
  salarioAtual = Serial.parseFloat();

  // Processamento
  if (salarioAtual < 500)
  {
    novoSalario = salarioAtual + (salarioAtual * 0.30);
  }
  else
  {
    novoSalario = salarioAtual;
  }

  // Saída
  Serial.println();
  Serial.println("--------------------------------");
  Serial.println("            Relatorio           ");
  Serial.println();
  Serial.println("Salario atual: " + String(salarioAtual, 2));

  if (salarioAtual < 500)
  {
    Serial.println("Novo salario com reajuste de 30%: " + String(novoSalario, 2));
  }
  else
  {
    Serial.println("Funcionario nao tem direito a aumento.");
  }

  Serial.println("--------------------------------");
  Serial.println();
  
  
}
