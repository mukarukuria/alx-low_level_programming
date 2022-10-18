#include "main.h"

/**                                                                                                                                              
 * print_alphabet_x10 - Entry point                                                                                                              
 * Description: Prints alphabets in small letters with a new line at the end                                                                     
 */                                                                                                                                              
void print_alphabet_x10(void)                                                                                                                    
{                                                                                                                                                
        int x = 0;    
        char a;
        while (x < 10)                                                                                                                           
        {                                                                                                                                        
                for (a = 'a'; a <= 'z'; a++)                                                                                                
                        _putchar(a);                                                                                                             
                _putchar('\n');                                                                                                                  
                x++;                                                                                                                             
        }                                                                                                                                        
}   
