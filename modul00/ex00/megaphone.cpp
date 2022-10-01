#include <stdio.h>
#include <iostream>

int main(int ac ,char **av)
{
    int i;
    int j;

    j = 1;
    if(ac > 1)
    {
        while(av[j])
        {
            i = -1;
            while(av[j][++i])
                av[j][i] = toupper(av[j][i]);
            std::cout<<av[j]<<" ";
            j++;
        }
        std::cout<<"\n";
    }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    return (0);
}