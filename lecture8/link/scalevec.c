/* scalevec.c */
/* $begin scalevec */
void scalevec(int a, int *x, int n) 
{
    int i;

    for (i = 0; i < n; i++)
	x[i] = a * x[i] ;
}
/* $end addvec */

