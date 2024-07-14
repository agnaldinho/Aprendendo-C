#ifndef _Calculos_h
#define _Calculos_h

//Encontrar a solução de uma equação de segundo grau por Bhaskara
float formulaDeBaskhara(float EncontrarValorA, float EncontrarValorB, float EncontrarValorC);
float formulaDeBaskhara2(float EncontrarValorA, float EncontrarValorB, float EncontrarValorC);

//Dentro de um triângulo retângulo encontrar o valor de um cateto dado o outro cateto e a hipotenusa
float EncontrarCateto(float EncontrarValorA, float EncontrarValorB);

//Dentro de um triângulo retângulo encontrar o valor da hipotenusa dado os dois catetos
float EncontrarHipotenusa(float EncontrarValorA, float EncontrarValorB);

//encontrar o perímetro de um círculo
float EncontrarPerimetroCirculo(float EncontrarValorA);

//Encontrar o volume de uma esfera
float EncontrarVolumeEsfera(float EncontrarValorA);                        
#endif
