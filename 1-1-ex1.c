#include <stdio.h>
int main()
{
	int n, m;
	int k[50] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &k[i]);
	}
	_Bool f = 0;
	for (int a = 0; a < n; ++a)
	{
		for (int b = 0; b < n; ++b)
		{
			for (int c = 0; c < n; ++c)
			{
				for (int d = 0; d < n; ++d)
				{
					if (k[a] + k[b] + k[c] + k[d] == m)
					{
						f = 1;
					}
				}
			}
		}
	}

	if (f) 
	{
		printf("success\n");
	}
	else printf("failed\n");
	return 1;
}