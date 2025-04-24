// C++ code
//
void setup()
{Serial.begin(9600); // Confugura a porta serial do Arduino
  pinMode(LED_BUILTIN, OUTPUT);// Configura o LED interno como saída
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // Acende o led
  Serial.print("Hello "); // Escreve na porta serial
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW); // Apaga o led
  Serial.println("World!"); // Escreve na porta serial
  delay(1000); // Wait for 1000 millisecond(s)
}