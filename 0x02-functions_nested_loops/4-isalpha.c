
/**
 *_isalpha - program execution starts here
 *@c: character to be checked
 *Description: this is the main function
 *Return: an integer to signify success or failure
 */
int _isalpha(int c)
{
         int is_lowercase = (c >= a && c <= 'z');
         int is_uppercase = (c >= A && c <= 'Z');
         
          return (is_lowercase || is_uppercase);
}
