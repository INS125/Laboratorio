#include <stdio.h>

int main (){
    
    char c = 'H';
    char *p_c = &c;
    char **p_pc = &p_c;
    char ***p_ppc = &p_pc;
    ***p_ppc = 'X';
    
    printf("%c \n", c);
    
    return 0;
}
