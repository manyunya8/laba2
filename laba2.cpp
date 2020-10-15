char* ShortestWord(char* a)
{
    int k = 0;
    char* b;
    char* i;
    b = a + 256;
    i = a;

    while (*i != '\0') 
    {
        if (*i < 'A' || *i > 'Z' && *i < 'a' || *i > 'z') 
        {
            if (k < b - a && k != 0)
            {
                a = i - k;
                b = i;
            }
            k = 0;
        }
        else 
        {
            k++;
        }
        i++;
    }
    if (k < b - a && k != 0) 
    {
        a = i - k;
        b = i;
    }

    if (b - a != 256) 
    {
        char static res[256];
        int j = 0;
        while (a != b) 
        {
            res[j] = *a;
            a++;
            j++;
        }
        res[j] = 0;
        return res;
    }
    else 
    {
        char static noword[] = "No words";
        return noword;
    }
}