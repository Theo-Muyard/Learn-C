#include <stdio.h>

// The max length allowed for an word
#define MAXWORD 15

int main()
{
	// Define variables
	int c;
	int words_len[MAXWORD + 1];
	int len;
	int i;
	int j;

	// Declare the words_len array with all these values set to 0.
	for (i = 0; i <= MAXWORD; i++)
		words_len[i] = 0;

	len = 0;
	while ((c = getchar()) != EOF)
	{
		// If we are outside a word
		if (c == ' ' || c == '\t' || c == '\n')
		{
			// If len of the current word is greater than 0 and less than or equal to the MAXWORD value
			if (len > 0 && len <= MAXWORD)
				++words_len[len]; // Raise the number of words of this len
			len = 0;
		}
		// Else, we are inside a word
		else
			++len; // Raise the len of this word
	}
	// If we are inside a word (len > 0)
	if (len > 0)
		++words_len[len];

	printf("\nWORD LENGTH HISTOGRAM:\n");
	/*
	Loop on words_len array;
	*/
	for (i = 1; i <= MAXWORD; i++)
	{
		// If the current len countains more than 1 word found, display it
		if (words_len[i] >= 1)
		{
			printf("%3d: ", i); // The current len
			/*
			Loop J times to display an *
			The number of * correspond to the number of words found
			*/
			for (j = 0; j < words_len[i]; j++)
				printf("*");
			printf("\n");
		}
	}
}