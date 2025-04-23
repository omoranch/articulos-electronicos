#include <iostream>
#include <stdio.h>

int main(void)
{
	int x,productos,articulo,unidades;
	float descuento=0.0,pcd,garantia,cg,art,pcg,subsub=0.0,cuenta=0,total=0,sub=0.0;
	printf("¿Cuántos artículos vas a comprar? ");
	scanf("%i",&x);
	for (productos=1; productos<=x; productos++)
	{
		printf("\n¿Qué artículo comprarás?(celular=1, laptop=2, audifonos=3) ");
		scanf("%i",&articulo);
		switch (articulo)
		{
			case 1:
				art=5000.00;
				break;
				case 2:
					art=12000.00;
					break;
					case 3:
						art=1500.00;
						break;
		}
		printf("Indica cuántas unidades de ese artículo comprarás: ");
		scanf("%i",&unidades);
		if (unidades>3)
		{
			sub=(art*unidades);
			descuento=(sub*0.20);
			pcd=(sub-descuento);
			cuenta=pcd;
			subsub=pcd;
		}
		else if (unidades>=2&&unidades<=3)
		{
			sub=(art*unidades);
			descuento=(sub*0.10);
			pcd=(sub-descuento);
			cuenta=pcd;
			subsub=pcd;
		}
		else
		{
			sub=art*unidades;
			cuenta=sub;
			subsub=sub;
		}
		printf("¿Desea agregar garantía extendida a su producto?(1=si, 0=no): ");
		scanf("%f",&garantia);
		if (garantia==1)
		{
			cg=(subsub*0.10);
			pcg=(subsub+cg);
			cuenta=pcg;
			printf("El precio de tu producto con garantía, es de:%.2f pesos.",pcg);
		}
		else
		{
			cuenta=subsub;
			printf("El precio de tu producto es de:%.2f pesos.",subsub);
		}
		total+=cuenta;
	}
	printf("\nEl total de tu compra es de:%.2f pesos.",total);
	return 0;
}