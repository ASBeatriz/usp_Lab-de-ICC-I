#include <stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n); //scanf � uma fun��o externa, por isso � necess�rio passar o endere�o (com &) da minha vari�vel para que ela possa acessar
    printf("char: %lld\n", n*sizeof(char));
    printf("int: %lld\n", n*sizeof(int));
    printf("double: %lld\n", n*sizeof(double));

    return 0;
}
