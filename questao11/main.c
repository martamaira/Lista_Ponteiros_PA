#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value=2.2;
    int i= 3;

    aloha[2]= value; // VÁLIDO
    scanf("%f ", &aloha);  // VÁLIDO
    // aloha= value; //INVÁLIDO
    coisas[4][4]= aloha[3]; // VÁLIDO
    //coisas[5]=aloha; //INVÁLIDO
    //pf = value; //INVÁLIDO
    pf = aloha;  // VÁLIDO

    return 0;
}
