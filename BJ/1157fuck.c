#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char a[1000005], alpha;
int len, cnt[30], max = 0, c;

int main()
{
	int i;

	scanf("%s", a);
	len = strlen(a);

	for (i = 0;i < len;i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') cnt[a[i] - 'A']++;
		else if (a[i] >= 'a' && a[i] <= 'z') cnt[a[i] - 'a']++;
	}
	for (i = 0;i < 26;i++) {
		if (max < cnt[i]) { max = cnt[i]; alpha = i+'A'; }
	}
	for (i = 0;i < 26;i++) {
		if (max == cnt[i]) c++;
	}
	if (c >= 2) printf("?\n");
	else printf("%c\n",alpha);
}