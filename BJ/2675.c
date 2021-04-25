#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

int    main(void)
{
    int rep;
    int len;
    int i;
    int n;
    int tot_rep;
    char str[100];

    tot_rep = 0;
    rep = 0;
    len = 0;
    i = 0;
    n = 0;
    scanf("%d", &tot_rep);
    while(tot_rep--)
    {
        str[0] = 0;
        scanf("%d", &rep);
        scanf("%s", str);
        len = ft_strlen(str);
        while(n < len)
        {
            while(i++ < rep)
            {
                printf("%c", str[n]);    
            }
            i = 0;
            n++;
        }
        printf ("\n");
        len = 0;
        n = 0;
    }
    return (0);
}