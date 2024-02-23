#include <stdio.h>

int main()
{
    char input[300];
    char *filename = "64070260.txt";
    char c;

    FILE *fpw = fopen(filename, "w");
    if (fpw == NULL)
    {
        printf("Error opening the file %s", filename);
        return -1;
    }
    printf("Enter contents to store in file: \n");
    scanf("%[^\n]s", input);
    fprintf(fpw, "%s", input);
    
    fclose(fpw);

    FILE *fp = fopen(filename, "r");

    char buffer[300];

    printf("The file contetnt are: \n");
    while (fgets(buffer, 300, fp) != NULL)
    {
        printf("%s\n", buffer);
    }

    fclose(fp);
    return 0;
}