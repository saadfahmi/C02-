#include <stdio.h>
int ft_str_is_printable(char *str){

    while(*str != '\0'){

        if(*str < 32 || *str > 126){

            return 0;

        }

        str++;
    }

    return 1;

}
int main(){

    printf("%d", ft_str_is_printable("dwujakdas-120"));
    printf("%d", ft_str_is_printable("bffff\ngrrr"));


}