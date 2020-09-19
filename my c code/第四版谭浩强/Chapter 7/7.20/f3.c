void delete_str(char str[], char c)
{
	int i,j;
	for (i = 0,j=0;str[i] != '\0'; i++)
	{
		if (str[i] != c)
		{
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}