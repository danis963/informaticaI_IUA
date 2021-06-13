int modificaNumeros (int * , int * );
int main(void)
{
	int   n1 =10;
	int   n2 =40;
	int   n3 =0;
	n3=modificaNumeros(&n1,&n2);
	return(0);
}

int modificaNumeros (int *a, int *b)
{
	int rdo=0;
	*a=*a+10;
	*b=*b+10;
	rdo=*a + *b;
	return(rdo); }

