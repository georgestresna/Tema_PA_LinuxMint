#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    //FILE *fin=fopen("./date/t2/d.in", "r");
    FILE *fout=fopen("r.out","w");

    //char buffer[100];
    //while(fgets(buffer, sizeof(buffer), fin))
    //printf("%s\n", buffer);
    fprintf(fout, "test");
    

    //fclose(fin);
    fclose(fout);

    return 0;
}
