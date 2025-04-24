// C++ code
//
void setup()
{
  Serial.begin(9600);
}
int caixaPequena = 0;// -32768 até 32767
long CaixaGrande = 0;// -2147483648 até 2147483647

void loop()
{
  caixaPequena = 32768098;//cortou o valor (cortou, pois estoura a faixa permitida)
  CaixaGrande = 32768098;
  
  Serial.println(caixaPequena);
  Serial.println(CaixaGrande);
  
  delay(10000);//10 segundos
}