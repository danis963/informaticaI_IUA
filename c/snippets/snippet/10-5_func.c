void prom (int , int , float *);

int main(void)
{
	int   n1 =10;
	int   n2 =40;
	float n1f=0;
	convertFloatToInt(n1,n2,n1f);
	return(0);
}


void prom (int a, int b, float p)
{
	p = (a + b) /2.0; 
}

