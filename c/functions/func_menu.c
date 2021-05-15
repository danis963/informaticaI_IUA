int menu (void)
{
	int opcion=0;
	printf("1-Comenzar juego\n");
	printf("2-Guardar partida\n");
	printf("3-Cargar partida\n");
	printf("4-Salir\n");
	scanf("%d",&opcion);
	return(opcion);
}
