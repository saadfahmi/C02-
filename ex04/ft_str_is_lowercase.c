#include <stdio.h>
int ft_str_is_lowercase(char *str){


    while(*str != '\0'){
    

        if(*str < 'a' && *str > 'z' ){

            return(0);
        }
        else{

        }

        str++;
        
    } 
    return(1);



}
int main(){

    printf("%d", ft_str_is_lowercase("zbaasjdiwda"));
    printf("%d", ft_str_is_lowercase("ABC"));
}