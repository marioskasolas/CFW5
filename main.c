#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int T = 1;

    FILE *fp1;
    fp1 = fopen("file1.txt","r"); if(fp1 == NULL) exit(10);

    FILE *fp2;
    fp2 = fopen("file2.txt","r"); if(fp1 == NULL) exit(11);

    char array1[50],array2[50];
    fgets(array1,50,fp1);
    fgets(array2,50,fp2);

    int strl1 = strlen(array1);
    printf("string 1 : %d\n",strl1);
    int strl2 = strlen(array2);
    printf("string 2: %d\n",strl2);
    if(strl1 != strl2){ printf("They do not match !"); T = 0;}
    if(T == 1){
        for (int i = 0; array1[i] == '\0' || array2[i] == '\0'; i++) {
            if (array2[i] != array1[i]) T = 0;
        }

        if (T == 1) printf("They match!");
    }
}
