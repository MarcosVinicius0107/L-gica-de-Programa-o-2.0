/* Enunciado: Avaliação de Desempenho Escolar
Você foi contratado para criar um sistema que analisa a situação de um aluno com base em suas notas e frequência.

Regras:
Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!*/

//variáveis
float nota1 = 0;
float nota2 = 0;
float media = 0;
float frequencia = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Entrada
  Serial.println("Digite a primera nota: " );
  while(!Serial.available ());
  nota1 = Serial.parseFloat();
  
  Serial.println("Digite a segunda nota: ");
  while(!Serial.available ());
  nota2 = Serial.parseFloat();
  
  Serial.println("Digite a sua frequencia: ");
  while(!Serial.available ());
  frequencia = Serial.parseFloat();
  
  
  //Processamento
  media = (nota1 + nota2) / 2;
  
  
 
  // Saída
  if (media >= 6 && frequencia >=75)
  {
    Serial.println("APROVADO: A media foi de " + String(media));
  }
 
  else if (media =10);
    
    Serial.println("Parabéns! Nota máxima! " + String(media));
    
  else (media < 6 && frequencia < 75);
  
    Serial.println("REPROVADO: A media foi de " + String(media));
  

  // Aguarda um tempo antes de reiniciar
  delay(5000);
}