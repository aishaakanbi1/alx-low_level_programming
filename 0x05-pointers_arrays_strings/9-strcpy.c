/**
 * _strcpy - copy source string to a destination sting
 * @dest: string to copy to
 * @src: string to copy from
 * Description: copy's the contents of a source string to a destination string
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	int letter;

	for (index = 0; ((letter = src[index]) != '\0'); index++)
	{
		dest[index] = letter;
	}
	dest[index] = letter;
	return (dest);
}
