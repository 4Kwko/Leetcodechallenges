int main()
{

    char criptografado[100];
    int charPos[26];
    char Str[100];
    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                         'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                         's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    printf("Digite uma palavra: ");
    scanf("%s", Str);
    printf("A palavra digitada foi: %s\n", Str);

    int i;
    int casas;

    printf("insira o número de troca: ");
    scanf("%d", &casas);

    // pega a posicao dos caracteres na string
    for (i = 0; Str[i] != '\0'; i++)
    {
        int j;
        while (Str[i] != alfabeto[j])
        {
            j++;
        }
        charPos[i] = j;
        j = 0;
    }

    int stringSize = i;

    // printa as posicoes dos caracteres pra conferir
    int k;
    printf("CharPos: ");
    for (k = 0; k < stringSize; k++)
    {
        printf("%d ", charPos[k]);
    }

    printf("\nstringSize = %d", stringSize);

    // passa os caracteres para a nova string

    int z;

    for (z = 0; z < stringSize; z++)
    {
        if (charPos[z] + casas > 25)
        {
            criptografado[z] = alfabeto[charPos[z] + casas - 26];
        }
        else
        {
            criptografado[z] = alfabeto[charPos[z] + casas];
        }
    }

    printf("\n");

    int p;
    for (p = 0; p < stringSize; p++)
    {
        printf("%c", criptografado[p]);
    }
}
