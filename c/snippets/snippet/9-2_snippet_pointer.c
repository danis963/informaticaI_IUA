 int *ptr=NULL;
 int  val=5;
 
 ptr=&val;
 *ptr=*ptr + 10;
 
 printf("Valor de val %d\n",val);
 printf("Posicion de memoria de val %p\n",&val);
 printf("Valor de ptr %X\n",ptr);
 printf("Posicion de memoria de ptr %p\n",&ptr);
 printf("Val accedido por ptr %d\n",*ptr);
 
