#include <stdio.h>
#include <string.h>

void string_search (char *string, char *pattern, int s_len, int p_len)
{
    int flag = 0;

    for (int i = 0; i < s_len - p_len + 1; i++)
    {
        int j;
        for (j = 0; j < p_len; j++)
        {
            if (string[i+j] != pattern[j])
            {
                break;
            }
        }
        if (j == p_len)
        {
            printf("Found at index %d", int);
        }
    }
}

int main()
{
    char *string = "ABCABAB ABABABAABAC";
    char *pattern = "ABABAABA";
    int s_len = strlen(string);
    int p_len = strlen(pattern);

    string_search(string, pattern, s_len, p_len);
    return 0;
}
