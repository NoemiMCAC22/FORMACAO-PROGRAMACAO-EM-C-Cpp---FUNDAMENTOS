#include <stdio.h>
/*O valor de y é 4, e o programa comentado fica:*/
int main()
{
 int y, *p, x; y = 0; /* atribui o valor 0 a y => y=0 */
 p = &y; /* atribui o endereco de y ao ponteiro p, p contem o endereco de y*/
 x = *p;  /* atribui o conteudo de onde p aponta (valor de y) para x, que passa a valer 0 */ 
 x = 4; /* atribui 4 a x */
 (*p)++; /* incremento de 1 o conteudo de onde p aponta, alterando o valor de y para 1 */
 x--; /* decrementa 1 de x => x = 3 */
 (*p) += x; /* adiciona x ao conteudo de onde p aponta, alterando o valor de y para 4 */
 printf ("y = %d\n", y); /* imprime "y = 4" */
 return(0);
}