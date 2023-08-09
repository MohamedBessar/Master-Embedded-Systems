// Mohamed Bessar
// Ex2 Pointers Assignment Write all alphabets using one pointer

int main()
{
	int i;
	char* ptr;
	char alpha[27];
	ptr = alpha;
	printf("The Alphabets are : \n");
	for(i = 0; i < 26; i++)
	{
		*ptr = 'A' + i;
		printf("%c ", *ptr);
		ptr++;
	}
	return 0;
}
