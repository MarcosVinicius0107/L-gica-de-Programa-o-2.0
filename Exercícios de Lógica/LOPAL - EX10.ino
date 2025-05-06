// C++ code
/*Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.*/
// Variáveis 
String produto = "";
float precoCompra = 0;
float precoVenda = 0;
float percentual = 0;

void setup() {
  Serial.begin(9600);
}

void loop() 
{
    Serial.println("Digite o nome do produto: ");
    while (!Serial.available());
    produto = Serial.readString();
  	produto.trim();

    Serial.println("Digite o valor do produto quando efetuada a compra:");
    while (!Serial.available());
    precoCompra = Serial.parseFloat();
  	while (Serial.available()) Serial.read();

    Serial.println("Digite o percentual a ser aplicado para obtencao de lucro na venda (ex: 1.0 para 100%):");
    while (!Serial.available());
    percentual = Serial.parseFloat();
  	while (Serial.available()) Serial.read();

    precoVenda = precoCompra + (precoCompra * percentual);

    Serial.println("Relatorio");
    Serial.println("----------------------------------------------------------------------");
    Serial.print("Produto: ");
    Serial.println(produto);
    Serial.print("Preco de compra: R$ ");
    Serial.println(precoCompra, 2);
    Serial.print("Percentual de lucro: ");
    Serial.print(percentual * 100, 2);
    Serial.println("%");
    Serial.print("Preco de venda: R$ ");
    Serial.println(precoVenda, 2);
  	Serial.println();
    if (percentual < 0.5) 
    {
      Serial.println("ATENCAO: O produto sera vendido com uma margem muito pequena de lucro.");
    }
  Serial.println("----------------------------------------------------------------------");
  Serial.println();
  delay(5000);
}