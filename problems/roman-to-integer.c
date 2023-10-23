int     romanToInt(char *s)
{
    int roman[100];
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int len = -1;
    int summ = 0;
    while (s[++len] != '\0')
    {
        if (roman[s[len]] < roman[s[len + 1]])
        {
            summ += roman[s[len + 1]] - roman[s[len]];
            len++;
        }
        else
            summ += roman[s[len]];
    }

    return summ;
}