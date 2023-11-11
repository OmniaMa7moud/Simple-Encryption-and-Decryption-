
#include <stdio.h>

char phrase[10] = {0};
int Ekey=0;
int Dkey=0;
int i=0;
int j=0;

void Encryption(void)
{
    int input;
    i=0;
    printf("Please enter your key.\n");
    scanf("%d", &Ekey);

    printf("\nPlease enter your phrase.\n");
    fflush(stdin);
    gets(phrase);
    fflush(stdin);

    printf("The phrase:\n");
    printf("%s\n", phrase);

    while(phrase[i] != '\0')
    {
        if( (phrase[i]>='a' && phrase[i]<='z'))
        {
            j = 0;
            while( j < Ekey )
            {
                if(phrase[i] == 'z'){ phrase[i] = 'a';j++; continue;}
                phrase[i]++;
                j++;
            }
        }
        else if((phrase[i]>='A' && phrase[i]<='Z') )
        {
           j = 0;
            while( j < Ekey )
            {
                if(phrase[i] == 'Z'){ phrase[i] = 'A'; j++; continue;}
                phrase[i]++;
                j++;
            }
        }
        else if(phrase[i]==' ')
        {

        }
        else
        { printf("Error: Number."); }
        i++;
    }
    printf("\nThe Encrypted phrase:\n");
    printf("%s\n", phrase);


}



void Decryption(void)
{

    int input;
    printf("Please enter your key.\n");
    scanf("%d", &Dkey);
/*
    printf("\nPlease enter your phrase.\n");
    fflush(stdin);
    gets(phrase);
    fflush(stdin);

    printf("The phrase:\n");
    printf("%s\n", phrase);
*/

    i=0;
    while(phrase[i] != '\0')
    {
        if( (phrase[i]>='a' && phrase[i]<='z'))
        {
            j = 0;
            while( j < Dkey )
            {
                if(phrase[i] == 'a'){ phrase[i] = 'z';j++; continue;}
                phrase[i]--;
                j++;
            }
        }
        else if((phrase[i]>='A' && phrase[i]<='Z') )
        {
           j = 0;
            while( j < Dkey )
            {
                if(phrase[i] == 'A'){ phrase[i] = 'Z'; j++; continue;}
                phrase[i]--;
                j++;
            }
        }
        else if(phrase[i]==' ')
        {

        }
        else
        { printf("Error: Number."); }
        i++;
    }
    printf("\nThe Decrypted phrase:\n");
    printf("%s\n", phrase);


}





int main()
{
    int option=0;
    while(1)
    {
        printf("\nEnter Your option.\n1-Encryption.\n2-Decryption.\n");
        scanf("%d", &option);
        if(option == 1){Encryption();}
        else if(option == 2){ Decryption();}
        else {printf("wrong enter");}
    }

    return 0;
}
