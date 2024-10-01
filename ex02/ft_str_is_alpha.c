#include <stdio.h>  
#include <string.h>
int ft_str_is_alpha(char *str){

    int i;
    i = 0;
    if(str[i] == '\0'){
        return(1);


    }
    while(str[i]!= '\0'){

        if(str[i] >= 'A' && str[i] <= 'Z' ){

            i++;

        } else {


        }

    }

}
int main(){

    
    printf("%d", ft_str_is_alpha("abcdefghijkl"));

}