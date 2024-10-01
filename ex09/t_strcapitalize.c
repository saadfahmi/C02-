#include <stdio.h>
char *ft_strlowcase(char *str){

    int i;
    i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){



            str[i] += 32;
        }

        i++;

    


    }
    
    return (str);

}
char *ft_strcapitalize(char *str){

    int i;
    int y;
    i = 0;
    y = 1;

    while(str[i] != '\0'){

        if(str[i] >= 'a' && str[i] <= 'z'){

            if(y == 1)
            str[i] -= 32;
            y = 0;



            
        }
        else if(str[i] >= '0' && str[i] <= '9')
        y= 0;

        else 
        y = 1;
        i++;
    



        




    }
    return (str);





}
int main(){

    char str[] = "wech cv anoob";
    printf("%s", ft_strcapitalize(str));
    
}