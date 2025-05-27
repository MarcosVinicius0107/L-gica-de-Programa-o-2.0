String produtos[2] = {"Amaciante","Sabao em po",};
int numeros[1] = {};
void setup()
{
  Serial.begin(9600);
  
  // Exibindo o valor de um indice
  Serial.println(produtos[0]);
  
  //Inserindo valor em um respecivo indice
  produtos[2] = "Detergente";
  
  Serial.println(produtos[2]);
}

void loop()
{
  //sem instruções
}