#include <stdio.h>
int ft_str_is_numeric(char *str){

     while(*str != '\0'){
        if(*str < '0' || *str > '9'){
            return(0);
        }
        else
        {
        }
            str++;
     }
    return(1);

}
int    main()
{
    printf("%d", ft_str_is_numeric("93458923908345834"));
    printf("\n%d", ft_str_is_numeric("fwefkpjwefjwjiefwe"));

}

