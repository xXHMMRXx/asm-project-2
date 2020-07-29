
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <bios.h>

#define IZQ 0x4b00
#define DER 0x4d00
#define ESC 283
#define ENTER 0x1c0d

int gdriver=EGA, gmode=EGAHI, errorcode;
int ancho,alto, colores, x=0, y=0, index, tecla, OP;
float i;
char c;
int band = 0;

void base();
void simulacion();
int  menu();
void datos();
void objetivos();
void botones( int band );
void imagen();
void stars();
void MG();

int main(void)

{

	
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	errorcode = graphresult();

		if (errorcode != grOk)
		{
			printf("Error inicializando gráficos: %s\n",
			grapherrormsg(errorcode));
			printf("Pulse cualquier tecla para salir...");
			getch();
			exit(1);
		}

	datos();
	menu();

}

int menu()

{

	tecla = 0;
	cleardevice();
	//imagen();
	MG();
	stars();
	imagen();
	MG();
	imagen();
	MG();
	botones( band );

	do

	{
		if( bioskey( 1 ) )

		{

			tecla = bioskey( 0 );//lee si esta ahi en el buffer lo que tecleo
			if (tecla == IZQ && band == 0 ) band = 2;
			else if (tecla == IZQ && band <= 2 ) band--;
			if (tecla == DER && band == 2 ) band = 0;
			else if (tecla == DER && band >= 0 ) band++;
			botones( band );
		} 

	
	OP=band;


	} while( tecla != ENTER);

			if (OP==0)

			{ 
				
				cleardevice();
				setbkcolor(BLACK);
				MG();
				objetivos();

				getch();
	
				menu();
			
			} 

			if (OP==1)

			{

				setbkcolor(BLACK);
				simulacion();

			}

			if (OP==2)

			{

				setbkcolor(BLACK);
				cleardevice();
				closegraph();
				return(0);

			}

}

void simulacion(){

	cleardevice();
	MG();
	base();

	int a=0, b=1, c=0, d=0, e=0,f=0,g=0,h=0,c1=0,c2=0;
	int A4=0,A5=0,A6=0,A7=0,A8=0,A10=0,A11=0;
	int color = 0;
	int r=0, r1=0, r2=0;
	int p=0,h1=0;

	for (a ; a <= 4; a++, b--)
	{

		cleardevice();
		//MG();
		base();

		setcolor( color );
		circle( 248, 285, 20 );//pelota
		circle( 248, 285, 19 );//pelota
		circle( 248, 285, 18 );//pelota
		circle( 248, 285, 17 );//pelota
		circle( 248, 285, 16 );//pelota
		circle( 248, 285, 15 );//pelota
		circle( 248, 285, 14 );//pelota
		circle( 248, 285, 13 );//pelota
		circle( 248, 285, 12 );//pelota
		circle( 248, 285, 11 );//pelota
		circle( 248, 285, 10 );//pelota
		circle( 248, 285, 9 );//pelota
		circle( 248, 285, 8 );//pelota
		circle( 248, 285, 7 );//pelota
		circle( 248, 285, 6 );//pelota
		circle( 248, 285, 5 );//pelota
		circle( 248, 285, 4 );//pelota
		circle( 248, 285, 3 );//pelota
		circle( 248, 285, 2 );//pelota
		circle( 248, 285, 1 );//pelota

		circle( 269, 140, 15 );
		circle( 269, 140, 14 );
		circle( 269, 140, 13 );
		circle( 269, 140, 12 );
		circle( 269, 140, 11 );
		circle( 269, 140, 10 );
		circle( 269, 140, 5 );
		circle( 269, 140, 4 );
		circle( 269, 140, 3 );
		circle( 269, 140, 2 );
		circle( 269, 140, 1 );

		line( 269, 140, 300, 140 );// pinza
		line( 269, 140, 252, 170 );// pinza
		line( 252, 170, 283, 170 );// pinza
		line( 300, 140, 283, 170 );// pinza

		line( 204, 129, 269, 129 );
		line( 204, 151, 269, 151 );

		circle( 140, 140, 15 );
		circle( 140, 140, 14 );
		circle( 140, 140, 13 );
		circle( 140, 140, 12 );
		circle( 140, 140, 11 );
		circle( 140, 140, 10 );
		circle( 140, 140, 5 );
		circle( 140, 140, 4 );
		circle( 140, 140, 3 );
		circle( 140, 140, 2 );
		circle( 140, 140, 1 );

		line( 95, 140, 139, 129 );
		line( 95, 162, 141, 151 );

		circle( 205, 140, 15 );
		circle( 205, 140, 14 );
		circle( 205, 140, 13 );
		circle( 205, 140, 12 );
		circle( 205, 140, 11 );
		circle( 205, 140, 10 );
		circle( 205, 140, 5 );
		circle( 205, 140, 4 );
		circle( 205, 140, 3 );
		circle( 205, 140, 2 );
		circle( 205, 140, 1 );

		line( a+140, 129, a+205, 129 );
		line( b+140, 151, b+205, 151 );

		delay(50);

		color++;

	}

		a = 1;


			while(c <= 9)	{

			cleardevice();
			//MG();
			base();

			setcolor( color );
			circle( 248, 285, 20 );//pelota
			circle( 248, 285, 19 );//pelota
			circle( 248, 285, 18 );//pelota
			circle( 248, 285, 17 );//pelota
			circle( 248, 285, 16 );//pelota
			circle( 248, 285, 15 );//pelota
			circle( 248, 285, 14 );//pelota
			circle( 248, 285, 13 );//pelota
			circle( 248, 285, 12 );//pelota
			circle( 248, 285, 11 );//pelota
			circle( 248, 285, 10 );//pelota
			circle( 248, 285, 9 );//pelota
			circle( 248, 285, 8 );//pelota
			circle( 248, 285, 7 );//pelota
			circle( 248, 285, 6 );//pelota
			circle( 248, 285, 5 );//pelota
			circle( 248, 285, 4 );//pelota
			circle( 248, 285, 3 );//pelota
			circle( 248, 285, 2 );//pelota
			circle( 248, 285, 1 );//pelota

			circle( c2+269, c1+140, 15 );
			circle( c2+269, c1+140, 14 );
			circle( c2+269, c1+140, 13 );
			circle( c2+269, c1+140, 12 );
			circle( c2+269, c1+140, 11 );
			circle( c2+269, c1+140, 10 );
			circle( c2+269, c1+140, 5 );
			circle( c2+269, c1+140, 4 );
			circle( c2+269, c1+140, 3 );
			circle( c2+269, c1+140, 2 );
			circle( c2+269, c1+140, 1 );


			line( c2+269, c1+140, c2+300, c1+140);// pinza
			line( c2+269, c1+140, c2+251, c1+170);// pinza
			line( c2+252, c1+170, c2+283, c1+170 );// pinza
			line( c2+300, c1+140, c2+283, c1+170 );// pinza
			c1++;
			c2--;

			circle( 140, 140, 15 );
			circle( 140, 140, 14 );
			circle( 140, 140, 13 );
			circle( 140, 140, 12 );
			circle( 140, 140, 11 );
			circle( 140, 140, 10 );
			circle( 140, 140, 5 );
			circle( 140, 140, 4 );
			circle( 140, 140, 3 );
			circle( 140, 140, 2 );
			circle( 140, 140, 1 );

			line( 95, 140, 139, 129 );
			line( 95, 162, 141, 151 );


			circle( d+205, e+140, 15 );
			circle( d+205, e+140, 14 );
			circle( d+205, e+140, 13 );
			circle( d+205, e+140, 12 );
			circle( d+205, e+140, 11 );
			circle( d+205, e+140, 10 );
			circle( d+205, e+140, 5 );
			circle( d+205, e+140, 4 );
			circle( d+205, e+140, 3 );
			circle( d+205, e+140, 2 );
			circle( d+205, e+140, 1 );

			line( 145, 129, d+210, a+129 );
			line( 135, 151, d+200, a+151 );
			a++;

			line( h+204, g+129, h+269, g+129 );
			line( h+204, g+151, h+269, g+151 );
			g++;
			h--;

			delay(50);
			e++;
			d--;
			c++;
			color++;

			}

			color = 0;

			while(c <= 34)

			{

				cleardevice();
				//MG();
				base();
				color++;

			setcolor(color);
			circle( 248, 285, 20 );//pelota
			circle( 248, 285, 19 );//pelota
			circle( 248, 285, 18 );//pelota
			circle( 248, 285, 17 );//pelota
			circle( 248, 285, 16 );//pelota
			circle( 248, 285, 15 );//pelota
			circle( 248, 285, 14 );//pelota
			circle( 248, 285, 13 );//pelota
			circle( 248, 285, 12 );//pelota
			circle( 248, 285, 11 );//pelota
			circle( 248, 285, 10 );//pelota
			circle( 248, 285, 9 );//pelota
			circle( 248, 285, 8 );//pelota
			circle( 248, 285, 7 );//pelota
			circle( 248, 285, 6 );//pelota
			circle( 248, 285, 5 );//pelota
			circle( 248, 285, 4 );//pelota
			circle( 248, 285, 3 );//pelota
			circle( 248, 285, 2 );//pelota
			circle( 248, 285, 1 );//pelota

			circle( c2+269, c1+140, 15 );
			circle( c2+269, c1+140, 14 );
			circle( c2+269, c1+140, 13 );
			circle( c2+269, c1+140, 12 );
			circle( c2+269, c1+140, 11 );
			circle( c2+269, c1+140, 10 );
			circle( c2+269, c1+140, 5 );
			circle( c2+269, c1+140, 4 );
			circle( c2+269, c1+140, 3 );
			circle( c2+269, c1+140, 2 );
			circle( c2+269, c1+140, 1 );

			line( c2+269, c1+140, c2+300, c1+140);// pinza
			line( c2+269, c1+140, c2+251, c1+170);// pinza
			line( c2+252, c1+170, c2+283, c1+170 );// pinza
			line( c2+300, c1+140, c2+283, c1+170 );// pinza
			c1++;
			c2--;

				circle( 140, 140, 15 );
				circle( 140, 140, 14 );
				circle( 140, 140, 13 );
				circle( 140, 140, 12 );
				circle( 140, 140, 11 );
				circle( 140, 140, 10 );
				circle( 140, 140, 5 );
				circle( 140, 140, 4 );
				circle( 140, 140, 3 );
				circle( 140, 140, 2 );
				circle( 140, 140, 1 );

				line( 95, 140, 139, 129 );
				line( 95, 162, 141, 151 );


				circle( d+205, e+140, 15 );
				circle( d+205, e+140, 14 );
				circle( d+205, e+140, 13 );
				circle( d+205, e+140, 12 );
				circle( d+205, e+140, 11 );
				circle( d+205, e+140, 10 );
				circle( d+205, e+140, 5 );
				circle( d+205, e+140, 4 );
				circle( d+205, e+140, 3 );
				circle( d+205, e+140, 2 );
				circle( d+205, e+140, 1 );

					line( 145, 129, d+210, a+129 );
					line( 135, 151, d+200, a+151 );
					a++;

					line( h+204, g+129, h+269, g+129 );
					line( h+204, g+151, h+269, g+151 );
					g++;
					h--;

				delay(50);
				e++;
				d--;
				c++;

					if (color == 15)

						color = 0;

			}


		int a1 = 0, a2 = 0, a3 =0 ;
		color = 0;

		while(a1 == 0)

		{

			cleardevice();
				//MG();
				base();
				color++;

			setcolor(color);
			circle( 248, 285, 20 );//pelota
			circle( 248, 285, 19 );//pelota
			circle( 248, 285, 18 );//pelota
			circle( 248, 285, 17 );//pelota
			circle( 248, 285, 16 );//pelota
			circle( 248, 285, 15 );//pelota
			circle( 248, 285, 14 );//pelota
			circle( 248, 285, 13 );//pelota
			circle( 248, 285, 12 );//pelota
			circle( 248, 285, 11 );//pelota
			circle( 248, 285, 10 );//pelota
			circle( 248, 285, 9 );//pelota
			circle( 248, 285, 8 );//pelota
			circle( 248, 285, 7 );//pelota
			circle( 248, 285, 6 );//pelota
			circle( 248, 285, 5 );//pelota
			circle( 248, 285, 4 );//pelota
			circle( 248, 285, 3 );//pelota
			circle( 248, 285, 2 );//pelota
			circle( 248, 285, 1 );//pelota

			circle( 140, 140, 15 );
			circle( 140, 140, 14 );
			circle( 140, 140, 13 );
			circle( 140, 140, 12 );
			circle( 140, 140, 11 );
			circle( 140, 140, 10 );
			circle( 140, 140, 5 );
			circle( 140, 140, 4 );
			circle( 140, 140, 3 );
			circle( 140, 140, 2 );
			circle( 140, 140, 1 );

			line( 95, 140, 139, 129 );
			line( 95, 162, 141, 151 );

			circle( c2+269, c1+140, 15 );
			circle( c2+269, c1+140, 14 );
			circle( c2+269, c1+140, 13 );
			circle( c2+269, c1+140, 12 );
			circle( c2+269, c1+140, 11 );
			circle( c2+269, c1+140, 10 );
			circle( c2+269, c1+140, 5 );
			circle( c2+269, c1+140, 4 );
			circle( c2+269, c1+140, 3 );
			circle( c2+269, c1+140, 2 );
			circle( c2+269, c1+140, 1 );

			line( c2+269, c1+140, c2+300, c1+140);// pinza
			line( c2+269, c1+140, c2+251, c1+170);// pinza

				circle( d+205, e+140, 15 );
				circle( d+205, e+140, 14 );
				circle( d+205, e+140, 13 );
				circle( d+205, e+140, 12 );
				circle( d+205, e+140, 11 );
				circle( d+205, e+140, 10 );
				circle( d+205, e+140, 5 );
				circle( d+205, e+140, 4 );
				circle( d+205, e+140, 3 );
				circle( d+205, e+140, 2 );
				circle( d+205, e+140, 1 );

					line( 145, 129, d+210, a+129 );
					line( 135, 151, d+200, a+151 );

					line( h+204, g+129, h+269, g+129 );
					line( h+204, g+151, h+269, g+151 );

				delay(50);

					if (color == 15)

						color = 0;

					line( 266, 175, a2+248, 205 );// pinza
					line( 217, 205, a3+248, a2+205 );// pinza


					a2++;
					a3--;

					delay(50);


					if(a2 == 25)

						a1 = 1;


		}

		int b1=0,b2=0;

		while(a1 == 1)

		{

				cleardevice();
				//MG();
				base();
				color++;

			setcolor(color);
			circle( 248, 285, 20 );//pelota
			circle( 248, 285, 19 );//pelota
			circle( 248, 285, 18 );//pelota
			circle( 248, 285, 17 );//pelota
			circle( 248, 285, 16 );//pelota
			circle( 248, 285, 15 );//pelota
			circle( 248, 285, 14 );//pelota
			circle( 248, 285, 13 );//pelota
			circle( 248, 285, 12 );//pelota
			circle( 248, 285, 11 );//pelota
			circle( 248, 285, 10 );//pelota
		    circle( 248, 285, 9 );//pelota
			circle( 248, 285, 8 );//pelota
	 		circle( 248, 285, 7 );//pelota
	     	circle( 248, 285, 6 );//pelota
			circle( 248, 285, 5 );//pelota
			circle( 248, 285, 4 );//pelota
			circle( 248, 285, 3 );//pelota
			circle( 248, 285, 2 );//pelota
			circle( 248, 285, 1 );//pelota

			circle( 140, b1+140, 15 );
			circle( 140, b1+140, 14 );
			circle( 140, b1+140, 13 );
			circle( 140, b1+140, 12 );
			circle( 140, b1+140, 11 );
			circle( 140, b1+140, 10 );
			circle( 140, b1+140, 5 );
			circle( 140, b1+140, 4 );
			circle( 140, b1+140, 3 );
			circle( 140, b1+140, 2 );
			circle( 140, b1+140, 1 );


			line( 95, b1+140, 139, b1+129 );
			line( 95, b1+162, 141, b1+151 );

			circle( c2+269, b1+c1+140, 15 );
			circle( c2+269, b1+c1+140, 14 );
			circle( c2+269, b1+c1+140, 13 );
			circle( c2+269, b1+c1+140, 12 );
			circle( c2+269, b1+c1+140, 11 );
			circle( c2+269, b1+c1+140, 10 );
			circle( c2+269, b1+c1+140, 5 );
			circle( c2+269, b1+c1+140, 4 );
			circle( c2+269, b1+c1+140, 3 );
			circle( c2+269, b1+c1+140, 2 );
			circle( c2+269, b1+c1+140, 1 );

			line( c2+269, b1+c1+140, c2+300, b1+c1+140);// pinza
			line( c2+269, b1+c1+140, c2+251, b1+c1+170);// pinza

				circle( d+205, b1+e+140, 15 );
				circle( d+205, b1+e+140, 14 );
				circle( d+205, b1+e+140, 13 );
				circle( d+205, b1+e+140, 12 );
				circle( d+205, b1+e+140, 11 );
				circle( d+205, b1+e+140, 10 );
				circle( d+205, b1+e+140, 5 );
				circle( d+205, b1+e+140, 4 );
				circle( d+205, b1+e+140, 3 );
				circle( d+205, b1+e+140, 2 );
				circle( d+205, b1+e+140, 1 );

					line( 145, b1+129, d+210, b1+a+129 );
					line( 135, b1+151, d+200, b1+a+151 );

					line( h+204, b1+g+129, h+269, b1+g+129 );
					line( h+204, b1+g+151, h+269, b1+g+151 );

				delay(50);

					if (color == 15)

						color = 0;

					line( 266, b1+175, a2+248, b1+205 );// pinza
					line( 217, b1+205, a3+248, b1+a2+205 );// pinza

					delay(50);
					b1++;
					b2--;

					if(b1 == 75)

						a1 = 2;

		}


	while(a1 == 2)

	{


			cleardevice();
			//MG();
			base();
			color++;

			setcolor(color);
			circle( 248, 285, 20 );//pelota
			circle( 248, 285, 19 );//pelota
			circle( 248, 285, 18 );//pelota
			circle( 248, 285, 17 );//pelota
			circle( 248, 285, 16 );//pelota
			circle( 248, 285, 15 );//pelota
			circle( 248, 285, 14 );//pelota
			circle( 248, 285, 13 );//pelota
			circle( 248, 285, 12 );//pelota
			circle( 248, 285, 11 );//pelota
			circle( 248, 285, 10 );//pelota
		    circle( 248, 285, 9 );//pelota
			circle( 248, 285, 8 );//pelota
	 		circle( 248, 285, 7 );//pelota
	     	circle( 248, 285, 6 );//pelota
			circle( 248, 285, 5 );//pelota
			circle( 248, 285, 4 );//pelota
			circle( 248, 285, 3 );//pelota
			circle( 248, 285, 2 );//pelota
			circle( 248, 285, 1 );//pelota

			circle( 140, b1+140, 15 );
			circle( 140, b1+140, 14 );
			circle( 140, b1+140, 13 );
			circle( 140, b1+140, 12 );
			circle( 140, b1+140, 11 );
			circle( 140, b1+140, 10 );
			circle( 140, b1+140, 5 );
			circle( 140, b1+140, 4 );
			circle( 140, b1+140, 3 );
			circle( 140, b1+140, 2 );
			circle( 140, b1+140, 1 );

			line( 95, b1+140, 139, b1+129 );
			line( 95, b1+162, 141, b1+151 );

			circle( c2+269, b1+c1+140, 15 );
			circle( c2+269, b1+c1+140, 14 );
			circle( c2+269, b1+c1+140, 13 );
			circle( c2+269, b1+c1+140, 12 );
			circle( c2+269, b1+c1+140, 11 );
			circle( c2+269, b1+c1+140, 10 );
			circle( c2+269, b1+c1+140, 5 );
			circle( c2+269, b1+c1+140, 4 );
			circle( c2+269, b1+c1+140, 3 );
			circle( c2+269, b1+c1+140, 2 );
			circle( c2+269, b1+c1+140, 1 );

			line( c2+269, b1+c1+140, c2+300, b1+c1+140);// pinza
			line( c2+269, b1+c1+140, c2+251, b1+c1+170);// pinza

				circle( d+205, b1+e+140, 15 );
				circle( d+205, b1+e+140, 14 );
				circle( d+205, b1+e+140, 13 );
				circle( d+205, b1+e+140, 12 );
				circle( d+205, b1+e+140, 11 );
				circle( d+205, b1+e+140, 10 );
				circle( d+205, b1+e+140, 5 );
				circle( d+205, b1+e+140, 4 );
				circle( d+205, b1+e+140, 3 );
				circle( d+205, b1+e+140, 2 );
				circle( d+205, b1+e+140, 1 );

					line( 145, b1+129, d+210, b1+a+129 );
					line( 135, b1+151, d+200, b1+a+151 );

					line( h+204, b1+g+129, h+269, b1+g+129 );
					line( h+204, b1+g+151, h+269, b1+g+151 );

				delay(50);


						r1=a2;
						r2=a3;

					if (color == 15)

						color = 0;

					line( 266, b1+175, a2+248, b1+205 );// pinza
					line( 217, b1+205, a3+248, b1+a2+205 );// pinza

					a2--;
					a3++;
					delay(50);
					if(a2 == 19)

					{


						while(r == 0)

						{


								cleardevice();
								//MG();
								base();
								color++;

							setcolor(color);
							circle( 248, 285, 20 );//pelota
							circle( 248, 285, 19 );//pelota
							circle( 248, 285, 18 );//pelota
							circle( 248, 285, 17 );//pelota
							circle( 248, 285, 16 );//pelota
							circle( 248, 285, 15 );//pelota
							circle( 248, 285, 14 );//pelota
							circle( 248, 285, 13 );//pelota
							circle( 248, 285, 12 );//pelota
							circle( 248, 285, 11 );//pelota
							circle( 248, 285, 10 );//pelota
							circle( 248, 285, 9 );//pelota
							circle( 248, 285, 8 );//pelota
							circle( 248, 285, 7 );//pelota
							circle( 248, 285, 6 );//pelota
							circle( 248, 285, 5 );//pelota
							circle( 248, 285, 4 );//pelota
							circle( 248, 285, 3 );//pelota
							circle( 248, 285, 2 );//pelota
							circle( 248, 285, 1 );//pelota

							circle( 140, b1+140, 15 );
							circle( 140, b1+140, 14 );
							circle( 140, b1+140, 13 );
							circle( 140, b1+140, 12 );
							circle( 140, b1+140, 11 );
							circle( 140, b1+140, 10 );
							circle( 140, b1+140, 5 );
							circle( 140, b1+140, 4 );
							circle( 140, b1+140, 3 );
							circle( 140, b1+140, 2 );
							circle( 140, b1+140, 1 );

							line( 95, b1+140, 139, b1+129 );
							line( 95, b1+162, 141, b1+151 );

							circle( c2+269, b1+c1+140, 15 );
							circle( c2+269, b1+c1+140, 14 );
							circle( c2+269, b1+c1+140, 13 );
							circle( c2+269, b1+c1+140, 12 );
							circle( c2+269, b1+c1+140, 11 );
							circle( c2+269, b1+c1+140, 10 );
							circle( c2+269, b1+c1+140, 5 );
							circle( c2+269, b1+c1+140, 4 );
							circle( c2+269, b1+c1+140, 3 );
							circle( c2+269, b1+c1+140, 2 );
							circle( c2+269, b1+c1+140, 1 );

							line( c2+269, b1+c1+140, c2+300, b1+c1+140);// pinza
							line( c2+269, b1+c1+140, c2+251, b1+c1+170);// pinza

								circle( d+205, b1+e+140, 15 );
								circle( d+205, b1+e+140, 14 );
								circle( d+205, b1+e+140, 13 );
								circle( d+205, b1+e+140, 12 );
								circle( d+205, b1+e+140, 11 );
								circle( d+205, b1+e+140, 10 );
								circle( d+205, b1+e+140, 5 );
								circle( d+205, b1+e+140, 4 );
								circle( d+205, b1+e+140, 3 );
								circle( d+205, b1+e+140, 2 );
								circle( d+205, b1+e+140, 1 );

									line( 145, b1+129, d+210, b1+a+129 );
									line( 135, b1+151, d+200, b1+a+151 );

									line( h+204, b1+g+129, h+269, b1+g+129 );
									line( h+204, b1+g+151, h+269, b1+g+151 );


									if (color == 15)

										color = 0;

							line( 266, b1+175, a2+248, b1+205 );// pinza
							line( 217, b1+205, r2+248, b1+r1+205 );// pinza
							r1--;
							r2++;

							delay(50);

							if(r1 == 14)
									r=1;

						}


						a1 = 3;

					}


			//Sube pelota
			while(a1 == 3)

			{

				p--;
				cleardevice();
				//MG();
				base();
				color++;

				setcolor(color);
				circle( 248, p+285, 20 );//pelota
				circle( 248, p+285, 19 );//pelota
				circle( 248, p+285, 18 );//pelota
				circle( 248, p+285, 17 );//pelota
				circle( 248, p+285, 16 );//pelota
				circle( 248, p+285, 15 );//pelota
				circle( 248, p+285, 14 );//pelota
				circle( 248, p+285, 13 );//pelota
				circle( 248, p+285, 12 );//pelota
				circle( 248, p+285, 11 );//pelota
				circle( 248, p+285, 10 );//pelota
				circle( 248, p+285, 9 );//pelota
				circle( 248, p+285, 8 );//pelota
				circle( 248, p+285, 7 );//pelota
				circle( 248, p+285, 6 );//pelota
				circle( 248, p+285, 5 );//pelota
				circle( 248, p+285, 4 );//pelota
				circle( 248, p+285, 3 );//pelota
				circle( 248, p+285, 2 );//pelota
				circle( 248, p+285, 1 );//pelota

				circle( 140, b1+140, 15 );
				circle( 140, b1+140, 14 );
				circle( 140, b1+140, 13 );
				circle( 140, b1+140, 12 );
				circle( 140, b1+140, 11 );
				circle( 140, b1+140, 10 );
				circle( 140, b1+140, 5 );
				circle( 140, b1+140, 4 );
				circle( 140, b1+140, 3 );
				circle( 140, b1+140, 2 );
				circle( 140, b1+140, 1 );

				line( 95, b1+140, 139, b1+129 );
				line( 95, b1+162, 141, b1+151 );

				circle( c2+269, b1+c1+140, 15 );
				circle( c2+269, b1+c1+140, 14 );
				circle( c2+269, b1+c1+140, 13 );
				circle( c2+269, b1+c1+140, 12 );
				circle( c2+269, b1+c1+140, 11 );
				circle( c2+269, b1+c1+140, 10 );
				circle( c2+269, b1+c1+140, 5 );
				circle( c2+269, b1+c1+140, 4 );
				circle( c2+269, b1+c1+140, 3 );
				circle( c2+269, b1+c1+140, 2 );
				circle( c2+269, b1+c1+140, 1 );

				line( c2+269, b1+c1+140, c2+300, b1+c1+140);// pinza
				line( c2+269, b1+c1+140, c2+251, b1+c1+170);// pinza

					circle( d+205, b1+e+140, 15 );
					circle( d+205, b1+e+140, 14 );
					circle( d+205, b1+e+140, 13 );
					circle( d+205, b1+e+140, 12 );
					circle( d+205, b1+e+140, 11 );
					circle( d+205, b1+e+140, 10 );
					circle( d+205, b1+e+140, 5 );
					circle( d+205, b1+e+140, 4 );
					circle( d+205, b1+e+140, 3 );
					circle( d+205, b1+e+140, 2 );
					circle( d+205, b1+e+140, 1 );

						line( 145, b1+129, d+210, b1+a+129 );
						line( 135, b1+151, d+200, b1+a+151 );

						line( h+204, b1+g+129, h+269, b1+g+129 );
						line( h+204, b1+g+151, h+269, b1+g+151 );

					delay(50);

						if (color == 15)

							color = 0;

						line( 266, b1+175, a2+248, b1+205 );// pinza
						line( 217, b1+205, r2+248, b1+r1+205 );// pinza

						delay(50);
						b1--;


						if(b1 == 0)

							a1 = 4;


			}


	}


			color=0;
			c=34;
			int t1=0,t2=0;

			while(c <= 34)

			{

				cleardevice();
				//MG();
				base();
				color++;

			setcolor(color);
			circle( t1+248, t2+210, 20 );//pelota
			circle( t1+248, t2+210, 19 );//pelota
			circle( t1+248, t2+210, 18 );//pelota
			circle( t1+248, t2+210, 17 );//pelota
			circle( t1+248, t2+210, 16 );//pelota
			circle( t1+248, t2+210, 15 );//pelota
			circle( t1+248, t2+210, 14 );//pelota
			circle( t1+248, t2+210, 13 );//pelota
			circle( t1+248, t2+210, 12 );//pelota
			circle( t1+248, t2+210, 11 );//pelota
			circle( t1+248, t2+210, 10 );//pelota
			circle( t1+248, t2+210, 9 );//pelota
			circle( t1+248, t2+210, 8 );//pelota
			circle( t1+248, t2+210, 7 );//pelota
			circle( t1+248, t2+210, 6 );//pelota
			circle( t1+248, t2+210, 5 );//pelota
			circle( t1+248, t2+210, 4 );//pelota
			circle( t1+248, t2+210, 3 );//pelota
			circle( t1+248, t2+210, 2 );//pelota
			circle( t1+248, t2+210, 1 );//pelota
			t1++;
			t2--;

			circle( c2+269, c1+140, 15 );
			circle( c2+269, c1+140, 14 );
			circle( c2+269, c1+140, 13 );
			circle( c2+269, c1+140, 12 );
			circle( c2+269, c1+140, 11 );
			circle( c2+269, c1+140, 10 );
			circle( c2+269, c1+140, 5 );
			circle( c2+269, c1+140, 4 );
			circle( c2+269, c1+140, 3 );
			circle( c2+269, c1+140, 2 );
			circle( c2+269, c1+140, 1 );



			line( c2+269, b1+c1+140, c2+300, b1+c1+140);// pinza
			line( c2+269, b1+c1+140, c2+251, b1+c1+170);// pinza
			line( c2+300, c1+b1+140, c2+a2+283, c1+b1+170 );// pinza
			line( c2+252, c1+b1+170, c2+r2+283, c1+b1+r1+170 );// pinza

			c1--;
			c2++;

				circle( 140, 140, 15 );
				circle( 140, 140, 14 );
				circle( 140, 140, 13 );
				circle( 140, 140, 12 );
				circle( 140, 140, 11 );
				circle( 140, 140, 10 );
				circle( 140, 140, 5 );
				circle( 140, 140, 4 );
				circle( 140, 140, 3 );
				circle( 140, 140, 2 );
				circle( 140, 140, 1 );

				line( 95, 140, 139, 129 );
				line( 95, 162, 141, 151 );


				circle( d+205, e+140, 15 );
				circle( d+205, e+140, 14 );
				circle( d+205, e+140, 13 );
				circle( d+205, e+140, 12 );
				circle( d+205, e+140, 11 );
				circle( d+205, e+140, 10 );
				circle( d+205, e+140, 5 );
				circle( d+205, e+140, 4 );
				circle( d+205, e+140, 3 );
				circle( d+205, e+140, 2 );
				circle( d+205, e+140, 1 );

					line( 145, 129, d+210, a+129 );
					line( 135, 151, d+200, a+151 );
					a--;

					line( h+204, g+129, h+269, g+129 );
					line( h+204, g+151, h+269, g+151 );
					g--;
					h++;

				delay(50);
				e--;
				d++;
				c--;

					if (color == 15)

						color = 0;

					if(c == 0)

						c=35;

			}

			int A1=0,A2=0;

			while(f==0)

			{

				cleardevice();
				//MG();
				base();
				color++;

			setcolor(color);
			circle( t1+248, t2+210, 20 );//pelota
			circle( t1+248, t2+210, 19 );//pelota
			circle( t1+248, t2+210, 18 );//pelota
			circle( t1+248, t2+210, 17 );//pelota
			circle( t1+248, t2+210, 16 );//pelota
			circle( t1+248, t2+210, 15 );//pelota
			circle( t1+248, t2+210, 14 );//pelota
			circle( t1+248, t2+210, 13 );//pelota
			circle( t1+248, t2+210, 12 );//pelota
			circle( t1+248, t2+210, 11 );//pelota
			circle( t1+248, t2+210, 10 );//pelota
			circle( t1+248, t2+210, 9 );//pelota
			circle( t1+248, t2+210, 8 );//pelota
			circle( t1+248, t2+210, 7 );//pelota
			circle( t1+248, t2+210, 6 );//pelota
			circle( t1+248, t2+210, 5 );//pelota
			circle( t1+248, t2+210, 4 );//pelota
			circle( t1+248, t2+210, 3 );//pelota
			circle( t1+248, t2+210, 2 );//pelota
			circle( t1+248, t2+210, 1 );//pelota
			t1--;
			t2--;

			circle( c2+269, c1+140, 15 );
			circle( c2+269, c1+140, 14 );
			circle( c2+269, c1+140, 13 );
			circle( c2+269, c1+140, 12 );
			circle( c2+269, c1+140, 11 );
			circle( c2+269, c1+140, 10 );
			circle( c2+269, c1+140, 5 );
			circle( c2+269, c1+140, 4 );
			circle( c2+269, c1+140, 3 );
			circle( c2+269, c1+140, 2 );
			circle( c2+269, c1+140, 1 );

			line( c2+269, b1+c1+140, c2+300, b1+c1+140);// pinza
			line( c2+269, b1+c1+140, c2+251, b1+c1+170);// pinza
			line( c2+300, c1+b1+140, c2+a2+283, c1+b1+170 );// pinza
			line( c2+252, c1+b1+170, c2+r2+283, c1+b1+r1+170 );// pinza

			c1--;
			c2--;

				circle( 140, 140, 15 );
				circle( 140, 140, 14 );
				circle( 140, 140, 13 );
				circle( 140, 140, 12 );
				circle( 140, 140, 11 );
				circle( 140, 140, 10 );
				circle( 140, 140, 5 );
				circle( 140, 140, 4 );
				circle( 140, 140, 3 );
				circle( 140, 140, 2 );
				circle( 140, 140, 1 );

				line( 95, 140, 139, 129 );
				line( 95, 162, 141, 151 );


				circle( A1+d+205, A2+e+140, 15 );
				circle( A1+d+205, A2+e+140, 14 );
				circle( A1+d+205, A2+e+140, 13 );
				circle( A1+d+205, A2+e+140, 12 );
				circle( A1+d+205, A2+e+140, 11 );
				circle( A1+d+205, A2+e+140, 10 );
				circle( A1+d+205, A2+e+140, 5 );
				circle( A1+d+205, A2+e+140, 4 );
				circle( A1+d+205, A2+e+140, 3 );
				circle( A1+d+205, A2+e+140, 2 );
				circle( A1+d+205, A2+e+140, 1 );

				A1--;
				A2--;

					line( 132, 129, h1+d+200, a+129 );
					line( 143, 151, h1+d+210, a+151 );
					a--;
					h1--;

					line( h+204, g+129, h+269, g+129 );
					line( h+204, g+151, h+269, g+151 );
					g--;
					h--;

				delay(50);

					if (color == 15)

						color = 0;

					if(A2 == -34)

						f=1;

			}

		A10=h;
		A11=g;

		while(A4==0){

			cleardevice();
				//MG();
				base();
				color++;

			setcolor(color);
			circle( t1+248, t2+210, 20 );//pelota
			circle( t1+248, t2+210, 19 );//pelota
			circle( t1+248, t2+210, 18 );//pelota
			circle( t1+248, t2+210, 17 );//pelota
			circle( t1+248, t2+210, 16 );//pelota
			circle( t1+248, t2+210, 15 );//pelota
			circle( t1+248, t2+210, 14 );//pelota
			circle( t1+248, t2+210, 13 );//pelota
			circle( t1+248, t2+210, 12 );//pelota
			circle( t1+248, t2+210, 11 );//pelota
			circle( t1+248, t2+210, 10 );//pelota
			circle( t1+248, t2+210, 9 );//pelota
			circle( t1+248, t2+210, 8 );//pelota
			circle( t1+248, t2+210, 7 );//pelota
			circle( t1+248, t2+210, 6 );//pelota
			circle( t1+248, t2+210, 5 );//pelota
			circle( t1+248, t2+210, 4 );//pelota
			circle( t1+248, t2+210, 3 );//pelota
			circle( t1+248, t2+210, 2 );//pelota
			circle( t1+248, t2+210, 1 );//pelota
			t1--;
			t2--;

			circle(A6+c2+269, A7+c1+140, 15 );
			circle(A6+c2+269, A7+c1+140, 14 );
			circle(A6+c2+269, A7+c1+140, 13 );
			circle(A6+c2+269, A7+c1+140, 12 );
			circle(A6+c2+269, A7+c1+140, 11 );
			circle(A6+c2+269, A7+c1+140, 10 );
			circle(A6+c2+269, A7+c1+140, 5 );
			circle(A6+c2+269, A7+c1+140, 4 );
			circle(A6+c2+269, A7+c1+140, 3 );
			circle(A6+c2+269, A7+c1+140, 2 );
			circle(A6+c2+269, A7+c1+140, 1 );

			A6--;
			A7--;

			line( A8+c2+269, A6+b1+c1+140, A8+c2+300, A6+b1+c1+140);// pinza
			line( A8+c2+269, A6+b1+c1+140, A8+c2+251, A6+b1+c1+170);// pinza
			line( A8+c2+300, A6+c1+b1+140, A8+c2+a2+283, A6+c1+b1+170 );// pinza
			line( A8+c2+252, A6+c1+b1+170, A8+c2+r2+283, A6+c1+b1+r1+170 );// pinza
			A8--;


				circle( 140, 140, 15 );
				circle( 140, 140, 14 );
				circle( 140, 140, 13 );
				circle( 140, 140, 12 );
				circle( 140, 140, 11 );
				circle( 140, 140, 10 );
				circle( 140, 140, 5 );
				circle( 140, 140, 4 );
				circle( 140, 140, 3 );
				circle( 140, 140, 2 );
				circle( 140, 140, 1 );

				line( 95, 140, 139, 129 );
				line( 95, 162, 141, 151 );

				circle( A1+d+205, A2+e+140, 15 );
				circle( A1+d+205, A2+e+140, 14 );
				circle( A1+d+205, A2+e+140, 13 );
				circle( A1+d+205, A2+e+140, 12 );
				circle( A1+d+205, A2+e+140, 11 );
				circle( A1+d+205, A2+e+140, 10 );
				circle( A1+d+205, A2+e+140, 5 );
				circle( A1+d+205, A2+e+140, 4 );
				circle( A1+d+205, A2+e+140, 3 );
				circle( A1+d+205, A2+e+140, 2 );
				circle( A1+d+205, A2+e+140, 1 );

					line( 132, 129, h1+d+200, a+129 );
					line( 143, 151, h1+d+210, a+151 );

					line( A10+198, A11+129, h+257, g+133 );
					line( A10+211, A11+151, h+277, g+150 );
					g--;
					h--;
					A5--;

				delay(50);

					if (color == 15)

						color = 0;

					if(A5 == -34)

						A4=1;


		}


		int l=0,l1=0,l2=0;

		while(l == 0)

		{


				cleardevice();
				//MG();
				base();
				color++;

			setcolor(color);
			circle( l1+t1+248, l2+t2+210, 20 );//pelota
			circle( l1+t1+248, l2+t2+210, 19 );//pelota
			circle( l1+t1+248, l2+t2+210, 18 );//pelota
			circle( l1+t1+248, l2+t2+210, 17 );//pelota
			circle( l1+t1+248, l2+t2+210, 16 );//pelota
			circle( l1+t1+248, l2+t2+210, 15 );//pelota
			circle( l1+t1+248, l2+t2+210, 14 );//pelota
			circle( l1+t1+248, l2+t2+210, 13 );//pelota
			circle( l1+t1+248, l2+t2+210, 12 );//pelota
			circle( l1+t1+248, l2+t2+210, 11 );//pelota
			circle( l1+t1+248, l2+t2+210, 10 );//pelota
			circle( l1+t1+248, l2+t2+210, 9 );//pelota
			circle( l1+t1+248, l2+t2+210, 8 );//pelota
			circle( l1+t1+248, l2+t2+210, 7 );//pelota
			circle( l1+t1+248, l2+t2+210, 6 );//pelota
			circle( l1+t1+248, l2+t2+210, 5 );//pelota
			circle( l1+t1+248, l2+t2+210, 4 );//pelota
			circle( l1+t1+248, l2+t2+210, 3 );//pelota
			circle( l1+t1+248, l2+t2+210, 2 );//pelota
			circle( l1+t1+248, l2+t2+210, 1 );//pelota


			circle(A6+c2+269, A7+c1+140, 15 );
			circle(A6+c2+269, A7+c1+140, 14 );
			circle(A6+c2+269, A7+c1+140, 13 );
			circle(A6+c2+269, A7+c1+140, 12 );
			circle(A6+c2+269, A7+c1+140, 11 );
			circle(A6+c2+269, A7+c1+140, 10 );
			circle(A6+c2+269, A7+c1+140, 5 );
			circle(A6+c2+269, A7+c1+140, 4 );
			circle(A6+c2+269, A7+c1+140, 3 );
			circle(A6+c2+269, A7+c1+140, 2 );
			circle(A6+c2+269, A7+c1+140, 1 );



			line( A8+c2+269, A6+b1+c1+140, l2+A8+c2+300, l2+A6+b1+c1+140);// pinza
			line( A8+c2+269, A6+b1+c1+140, l1+A8+c2+251, A6+b1+c1+170);// pinza
			line( l2+A8+c2+300, l2+A6+c1+b1+140, A8+c2+a2+283, l2+l2+A6+c1+b1+170 );// pinza
			line( l1+A8+c2+252, A6+c1+b1+170, l1+A8+c2+r2+283, A6+c1+b1+r1+170 );// pinza
			l1++;
			l2--;

				circle( 140, 140, 15 );
				circle( 140, 140, 14 );
				circle( 140, 140, 13 );
				circle( 140, 140, 12 );
				circle( 140, 140, 11 );
				circle( 140, 140, 10 );
				circle( 140, 140, 5 );
				circle( 140, 140, 4 );
				circle( 140, 140, 3 );
				circle( 140, 140, 2 );
				circle( 140, 140, 1 );

				line( 95, 140, 139, 129 );
				line( 95, 162, 141, 151 );

				circle( A1+d+205, A2+e+140, 15 );
				circle( A1+d+205, A2+e+140, 14 );
				circle( A1+d+205, A2+e+140, 13 );
				circle( A1+d+205, A2+e+140, 12 );
				circle( A1+d+205, A2+e+140, 11 );
				circle( A1+d+205, A2+e+140, 10 );
				circle( A1+d+205, A2+e+140, 5 );
				circle( A1+d+205, A2+e+140, 4 );
				circle( A1+d+205, A2+e+140, 3 );
				circle( A1+d+205, A2+e+140, 2 );
				circle( A1+d+205, A2+e+140, 1 );


					line( 132, 129, h1+d+200, a+129 );
					line( 143, 151, h1+d+210, a+151 );

					line( A10+198, A11+129, h+257, g+133 );
					line( A10+211, A11+151, h+277, g+150 );

				delay(50);

					if (color == 15)

						color = 0;

					if(l1 == 20)

						l=1;

		}

		int pp=0, pp1=0, pp2=0;

		while(pp2==0){


			pp1++;
			pp1++;
			pp--;

			cleardevice();
				//MG();
				base();
				color++;

			setcolor(color);
			circle( pp1+l1+t1+248, pp+l2+t2+210, 20 );//pelota
			circle( pp1+l1+t1+248, pp+l2+t2+210, 19 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 18 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 17 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 16 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 15 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 14 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 13 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 12 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 11 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 10 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 9 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 8 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 7 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 6 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 5 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 4 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 3 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 2 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 1 );
			
			circle(A6+c2+269, A7+c1+140, 15 );
			circle(A6+c2+269, A7+c1+140, 14 );
			circle(A6+c2+269, A7+c1+140, 13 );
			circle(A6+c2+269, A7+c1+140, 12 );
			circle(A6+c2+269, A7+c1+140, 11 );
			circle(A6+c2+269, A7+c1+140, 10 );
			circle(A6+c2+269, A7+c1+140, 5 );
			circle(A6+c2+269, A7+c1+140, 4 );
			circle(A6+c2+269, A7+c1+140, 3 );
			circle(A6+c2+269, A7+c1+140, 2 );
			circle(A6+c2+269, A7+c1+140, 1 );


			line( A8+c2+269, A6+b1+c1+140, l2+A8+c2+300, l2+A6+b1+c1+140);// pinza
			line( A8+c2+269, A6+b1+c1+140, l1+A8+c2+251, A6+b1+c1+170);// pinza
			line( l2+A8+c2+300, l2+A6+c1+b1+140, A8+c2+a2+283, l2+l2+A6+c1+b1+170 );// pinza
			line( l1+A8+c2+252, A6+c1+b1+170, l1+A8+c2+r2+283, A6+c1+b1+r1+170 );// pinza
			
				circle( 140, 140, 15 );
				circle( 140, 140, 14 );
				circle( 140, 140, 13 );
				circle( 140, 140, 12 );
				circle( 140, 140, 11 );
				circle( 140, 140, 10 );
				circle( 140, 140, 5 );
				circle( 140, 140, 4 );
				circle( 140, 140, 3 );
				circle( 140, 140, 2 );
				circle( 140, 140, 1 );




				line( 95, 140, 139, 129 );
				line( 95, 162, 141, 151 );

				circle( A1+d+205, A2+e+140, 15 );
				circle( A1+d+205, A2+e+140, 14 );
				circle( A1+d+205, A2+e+140, 13 );
				circle( A1+d+205, A2+e+140, 12 );
				circle( A1+d+205, A2+e+140, 11 );
				circle( A1+d+205, A2+e+140, 10 );
				circle( A1+d+205, A2+e+140, 5 );
				circle( A1+d+205, A2+e+140, 4 );
				circle( A1+d+205, A2+e+140, 3 );
				circle( A1+d+205, A2+e+140, 2 );
				circle( A1+d+205, A2+e+140, 1 );

					line( 132, 129, h1+d+200, a+129 );
					line( 143, 151, h1+d+210, a+151 );

					line( A10+198, A11+129, h+257, g+133 );
					line( A10+211, A11+151, h+277, g+150 );

				delay(50);

					if (color == 15)

						color = 0;

					if(pp == -60)

						pp2=1;


	}


			while(pp2==1)

			{


				pp1++;
				pp1++;
				pp++;

				cleardevice();
				//MG();
				base();
				color++;

			setcolor(color);
			circle( pp1+l1+t1+248, pp+l2+t2+210, 20 );//pelota
			circle( pp1+l1+t1+248, pp+l2+t2+210, 19 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 18 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 17 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 16 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 15 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 14 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 13 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 12 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 11 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 10 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 9 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 8 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 7 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 6 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 5 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 4 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 3 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 2 );
			circle( pp1+l1+t1+248, pp+l2+t2+210, 1 );
			
			circle(A6+c2+269, A7+c1+140, 15 );
			circle(A6+c2+269, A7+c1+140, 14 );
			circle(A6+c2+269, A7+c1+140, 13 );
			circle(A6+c2+269, A7+c1+140, 12 );
			circle(A6+c2+269, A7+c1+140, 11 );
			circle(A6+c2+269, A7+c1+140, 10 );
			circle(A6+c2+269, A7+c1+140, 5 );
			circle(A6+c2+269, A7+c1+140, 4 );
			circle(A6+c2+269, A7+c1+140, 3 );
			circle(A6+c2+269, A7+c1+140, 2 );
			circle(A6+c2+269, A7+c1+140, 1 );

			line( A8+c2+269, A6+b1+c1+140, l2+A8+c2+300, l2+A6+b1+c1+140);// pinza
			line( A8+c2+269, A6+b1+c1+140, l1+A8+c2+251, A6+b1+c1+170);// pinza
			line( l2+A8+c2+300, l2+A6+c1+b1+140, A8+c2+a2+283, l2+l2+A6+c1+b1+170 );// pinza
			line( l1+A8+c2+252, A6+c1+b1+170, l1+A8+c2+r2+283, A6+c1+b1+r1+170 );// pinza
			
				circle( 140, 140, 15 );
				circle( 140, 140, 14 );
				circle( 140, 140, 13 );
				circle( 140, 140, 12 );
				circle( 140, 140, 11 );
				circle( 140, 140, 10 );
				circle( 140, 140, 5 );
				circle( 140, 140, 4 );
				circle( 140, 140, 3 );
				circle( 140, 140, 2 );
				circle( 140, 140, 1 );

				line( 95, 140, 139, 129 );
				line( 95, 162, 141, 151 );

				circle( A1+d+205, A2+e+140, 15 );
				circle( A1+d+205, A2+e+140, 14 );
				circle( A1+d+205, A2+e+140, 13 );
				circle( A1+d+205, A2+e+140, 12 );
				circle( A1+d+205, A2+e+140, 11 );
				circle( A1+d+205, A2+e+140, 10 );
				circle( A1+d+205, A2+e+140, 5 );
				circle( A1+d+205, A2+e+140, 4 );
				circle( A1+d+205, A2+e+140, 3 );
				circle( A1+d+205, A2+e+140, 2 );
				circle( A1+d+205, A2+e+140, 1 );

					line( 132, 129, h1+d+200, a+129 );
					line( 143, 151, h1+d+210, a+151 );

					line( A10+198, A11+129, h+257, g+133 );
					line( A10+211, A11+151, h+277, g+150 );

				delay(50);

					if (color == 15)

						color = 0;


					if(pp == 40)

						pp2=2;


			}

			int dd=0;

			while(pp2==2)

			{

				cleardevice();
				//MG();
				base();
				color++;
				dd++;

			setcolor(color);
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 20 );//pelota
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 19 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 18 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 17 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 16 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 15 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 14 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 13 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 12 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 11 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 10 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 9 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 8 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 7 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 6 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 5 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 4 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 3 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 2 );
			circle( pp1+l1+t1+248, dd+pp+l2+t2+210, 1 );
			
			circle(A6+c2+269, A7+c1+140, 15 );
			circle(A6+c2+269, A7+c1+140, 14 );
			circle(A6+c2+269, A7+c1+140, 13 );
			circle(A6+c2+269, A7+c1+140, 12 );
			circle(A6+c2+269, A7+c1+140, 11 );
			circle(A6+c2+269, A7+c1+140, 10 );
			circle(A6+c2+269, A7+c1+140, 5 );
			circle(A6+c2+269, A7+c1+140, 4 );
			circle(A6+c2+269, A7+c1+140, 3 );
			circle(A6+c2+269, A7+c1+140, 2 );
			circle(A6+c2+269, A7+c1+140, 1 );

			line( A8+c2+269, A6+b1+c1+140, l2+A8+c2+300, l2+A6+b1+c1+140);// pinza
			line( A8+c2+269, A6+b1+c1+140, l1+A8+c2+251, A6+b1+c1+170);// pinza
			line( l2+A8+c2+300, l2+A6+c1+b1+140, A8+c2+a2+283, l2+l2+A6+c1+b1+170 );// pinza
			line( l1+A8+c2+252, A6+c1+b1+170, l1+A8+c2+r2+283, A6+c1+b1+r1+170 );// pinza
			
				circle( 140, 140, 15 );
				circle( 140, 140, 14 );
				circle( 140, 140, 13 );
				circle( 140, 140, 12 );
				circle( 140, 140, 11 );
				circle( 140, 140, 10 );
				circle( 140, 140, 5 );
				circle( 140, 140, 4 );
				circle( 140, 140, 3 );
				circle( 140, 140, 2 );
				circle( 140, 140, 1 );

				line( 95, 140, 139, 129 );
				line( 95, 162, 141, 151 );

				circle( A1+d+205, A2+e+140, 15 );
				circle( A1+d+205, A2+e+140, 14 );
				circle( A1+d+205, A2+e+140, 13 );
				circle( A1+d+205, A2+e+140, 12 );
				circle( A1+d+205, A2+e+140, 11 );
				circle( A1+d+205, A2+e+140, 10 );
				circle( A1+d+205, A2+e+140, 5 );
				circle( A1+d+205, A2+e+140, 4 );
				circle( A1+d+205, A2+e+140, 3 );
				circle( A1+d+205, A2+e+140, 2 );
				circle( A1+d+205, A2+e+140, 1 );

					line( 132, 129, h1+d+200, a+129 );
					line( 143, 151, h1+d+210, a+151 );

					line( A10+198, A11+129, h+257, g+133 );
					line( A10+211, A11+151, h+277, g+150 );

						setcolor( 12 );
						arc(554,140,180,0,25);
						setcolor( 12 );
						arc(554,141,180,0,25);
						setcolor( 12 );
						arc(554,142,180,0,25);

				delay(50);

					if (color == 15)

						color = 0;


					if(dd == 155)

						pp2=3;

			}


			int ddd=0;

			while(pp2==3)

			{


					cleardevice();
				//MG();
				base();
				color++;
				ddd--;

			setcolor(color);
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 20 );//pelota
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 19 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 18 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 17 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 16 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 15 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 14 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 13 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 12 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 11 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 10 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 9 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 8 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 7 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 6 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 5 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 4 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 3 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 2 );
			circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 1 );
			
			circle(A6+c2+269, A7+c1+140, 15 );
			circle(A6+c2+269, A7+c1+140, 14 );
			circle(A6+c2+269, A7+c1+140, 13 );
			circle(A6+c2+269, A7+c1+140, 12 );
			circle(A6+c2+269, A7+c1+140, 11 );
			circle(A6+c2+269, A7+c1+140, 10 );
			circle(A6+c2+269, A7+c1+140, 5 );
			circle(A6+c2+269, A7+c1+140, 4 );
			circle(A6+c2+269, A7+c1+140, 3 );
			circle(A6+c2+269, A7+c1+140, 2 );
			circle(A6+c2+269, A7+c1+140, 1 );

			line( A8+c2+269, A6+b1+c1+140, l2+A8+c2+300, l2+A6+b1+c1+140);// pinza
			line( A8+c2+269, A6+b1+c1+140, l1+A8+c2+251, A6+b1+c1+170);// pinza
			line( l2+A8+c2+300, l2+A6+c1+b1+140, A8+c2+a2+283, l2+l2+A6+c1+b1+170 );// pinza
			line( l1+A8+c2+252, A6+c1+b1+170, l1+A8+c2+r2+283, A6+c1+b1+r1+170 );// pinza
			
				circle( 140, 140, 15 );
				circle( 140, 140, 14 );
				circle( 140, 140, 13 );
				circle( 140, 140, 12 );
				circle( 140, 140, 11 );
				circle( 140, 140, 10 );
				circle( 140, 140, 5 );
				circle( 140, 140, 4 );
				circle( 140, 140, 3 );
				circle( 140, 140, 2 );
				circle( 140, 140, 1 );

				line( 95, 140, 139, 129 );
				line( 95, 162, 141, 151 );

				circle( A1+d+205, A2+e+140, 15 );
				circle( A1+d+205, A2+e+140, 14 );
				circle( A1+d+205, A2+e+140, 13 );
				circle( A1+d+205, A2+e+140, 12 );
				circle( A1+d+205, A2+e+140, 11 );
				circle( A1+d+205, A2+e+140, 10 );
				circle( A1+d+205, A2+e+140, 5 );
				circle( A1+d+205, A2+e+140, 4 );
				circle( A1+d+205, A2+e+140, 3 );
				circle( A1+d+205, A2+e+140, 2 );
				circle( A1+d+205, A2+e+140, 1 );

					line( 132, 129, h1+d+200, a+129 );
					line( 143, 151, h1+d+210, a+151 );

					line( A10+198, A11+129, h+257, g+133 );
					line( A10+211, A11+151, h+277, g+150 );


				delay(30);

					if (color == 15)

						color = 0;


					if(ddd == -80)

						pp2=4;


			}


			while(pp2==4)

			{


					cleardevice();
					//MG();
					base();
					color++;
					ddd++;

				setcolor(color);
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 20 );//pelota
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 19 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 18 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 17 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 16 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 15 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 14 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 13 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 12 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 11 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 10 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 9 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 8 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 7 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 6 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 5 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 4 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 3 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 2 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 1 );
				
				circle(A6+c2+269, A7+c1+140, 15 );
				circle(A6+c2+269, A7+c1+140, 14 );
				circle(A6+c2+269, A7+c1+140, 13 );
				circle(A6+c2+269, A7+c1+140, 12 );
				circle(A6+c2+269, A7+c1+140, 11 );
				circle(A6+c2+269, A7+c1+140, 10 );
				circle(A6+c2+269, A7+c1+140, 5 );
				circle(A6+c2+269, A7+c1+140, 4 );
				circle(A6+c2+269, A7+c1+140, 3 );
				circle(A6+c2+269, A7+c1+140, 2 );
				circle(A6+c2+269, A7+c1+140, 1 );

				line( A8+c2+269, A6+b1+c1+140, l2+A8+c2+300, l2+A6+b1+c1+140);// pinza
				line( A8+c2+269, A6+b1+c1+140, l1+A8+c2+251, A6+b1+c1+170);// pinza
				line( l2+A8+c2+300, l2+A6+c1+b1+140, A8+c2+a2+283, l2+l2+A6+c1+b1+170 );// pinza
				line( l1+A8+c2+252, A6+c1+b1+170, l1+A8+c2+r2+283, A6+c1+b1+r1+170 );// pinza
				
					circle( 140, 140, 15 );
					circle( 140, 140, 14 );
					circle( 140, 140, 13 );
					circle( 140, 140, 12 );
					circle( 140, 140, 11 );
					circle( 140, 140, 10 );
					circle( 140, 140, 5 );
					circle( 140, 140, 4 );
					circle( 140, 140, 3 );
					circle( 140, 140, 2 );
					circle( 140, 140, 1 );

					line( 95, 140, 139, 129 );
					line( 95, 162, 141, 151 );

					circle( A1+d+205, A2+e+140, 15 );
					circle( A1+d+205, A2+e+140, 14 );
					circle( A1+d+205, A2+e+140, 13 );
					circle( A1+d+205, A2+e+140, 12 );
					circle( A1+d+205, A2+e+140, 11 );
					circle( A1+d+205, A2+e+140, 10 );
					circle( A1+d+205, A2+e+140, 5 );
					circle( A1+d+205, A2+e+140, 4 );
					circle( A1+d+205, A2+e+140, 3 );
					circle( A1+d+205, A2+e+140, 2 );
					circle( A1+d+205, A2+e+140, 1 );

						line( 132, 129, h1+d+200, a+129 );
						line( 143, 151, h1+d+210, a+151 );

						line( A10+198, A11+129, h+257, g+133 );
						line( A10+211, A11+151, h+277, g+150 );


					delay(50);

						if (color == 15)

							color = 0;


						if(ddd == 0)

							pp2=5;


			}


			while(pp2==5)

			{


					cleardevice();
					//MG();
					base();
					color++;
					ddd--;

				setcolor(color);
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 20 );//pelota
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 19 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 18 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 17 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 16 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 15 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 14 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 13 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 12 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 11 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 10 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 9 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 8 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 7 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 6 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 5 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 4 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 3 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 2 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 1 );
				
				circle(A6+c2+269, A7+c1+140, 15 );
				circle(A6+c2+269, A7+c1+140, 14 );
				circle(A6+c2+269, A7+c1+140, 13 );
				circle(A6+c2+269, A7+c1+140, 12 );
				circle(A6+c2+269, A7+c1+140, 11 );
				circle(A6+c2+269, A7+c1+140, 10 );
				circle(A6+c2+269, A7+c1+140, 5 );
				circle(A6+c2+269, A7+c1+140, 4 );
				circle(A6+c2+269, A7+c1+140, 3 );
				circle(A6+c2+269, A7+c1+140, 2 );
				circle(A6+c2+269, A7+c1+140, 1 );

				line( A8+c2+269, A6+b1+c1+140, l2+A8+c2+300, l2+A6+b1+c1+140);// pinza
				line( A8+c2+269, A6+b1+c1+140, l1+A8+c2+251, A6+b1+c1+170);// pinza
				line( l2+A8+c2+300, l2+A6+c1+b1+140, A8+c2+a2+283, l2+l2+A6+c1+b1+170 );// pinza
				line( l1+A8+c2+252, A6+c1+b1+170, l1+A8+c2+r2+283, A6+c1+b1+r1+170 );// pinza
				
					circle( 140, 140, 15 );
					circle( 140, 140, 14 );
					circle( 140, 140, 13 );
					circle( 140, 140, 12 );
					circle( 140, 140, 11 );
					circle( 140, 140, 10 );
					circle( 140, 140, 5 );
					circle( 140, 140, 4 );
					circle( 140, 140, 3 );
					circle( 140, 140, 2 );
					circle( 140, 140, 1 );

					line( 95, 140, 139, 129 );
					line( 95, 162, 141, 151 );

					circle( A1+d+205, A2+e+140, 15 );
					circle( A1+d+205, A2+e+140, 14 );
					circle( A1+d+205, A2+e+140, 13 );
					circle( A1+d+205, A2+e+140, 12 );
					circle( A1+d+205, A2+e+140, 11 );
					circle( A1+d+205, A2+e+140, 10 );
					circle( A1+d+205, A2+e+140, 5 );
					circle( A1+d+205, A2+e+140, 4 );
					circle( A1+d+205, A2+e+140, 3 );
					circle( A1+d+205, A2+e+140, 2 );
					circle( A1+d+205, A2+e+140, 1 );

						line( 132, 129, h1+d+200, a+129 );
						line( 143, 151, h1+d+210, a+151 );

						line( A10+198, A11+129, h+257, g+133 );
						line( A10+211, A11+151, h+277, g+150 );


					delay(50);

						if (color == 15)

							color = 0;


						if(ddd == -40)

							pp2=6;


			}


			while(pp2==6)

			{


					cleardevice();
					//MG();
					base();
					color++;
					ddd++;

				setcolor(color);
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 20 );//pelota
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 19 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 18 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 17 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 16 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 15 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 14 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 13 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 12 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 11 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 10 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 9 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 8 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 7 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 6 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 5 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 4 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 3 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 2 );
				circle( pp1+l1+t1+248, ddd+dd+pp+l2+t2+210, 1 );
				
				circle(A6+c2+269, A7+c1+140, 15 );
				circle(A6+c2+269, A7+c1+140, 14 );
				circle(A6+c2+269, A7+c1+140, 13 );
				circle(A6+c2+269, A7+c1+140, 12 );
				circle(A6+c2+269, A7+c1+140, 11 );
				circle(A6+c2+269, A7+c1+140, 10 );
				circle(A6+c2+269, A7+c1+140, 5 );
				circle(A6+c2+269, A7+c1+140, 4 );
				circle(A6+c2+269, A7+c1+140, 3 );
				circle(A6+c2+269, A7+c1+140, 2 );
				circle(A6+c2+269, A7+c1+140, 1 );

				line( A8+c2+269, A6+b1+c1+140, l2+A8+c2+300, l2+A6+b1+c1+140);// pinza
				line( A8+c2+269, A6+b1+c1+140, l1+A8+c2+251, A6+b1+c1+170);// pinza
				line( l2+A8+c2+300, l2+A6+c1+b1+140, A8+c2+a2+283, l2+l2+A6+c1+b1+170 );// pinza
				line( l1+A8+c2+252, A6+c1+b1+170, l1+A8+c2+r2+283, A6+c1+b1+r1+170 );// pinza
				
					circle( 140, 140, 15 );
					circle( 140, 140, 14 );
					circle( 140, 140, 13 );
					circle( 140, 140, 12 );
					circle( 140, 140, 11 );
					circle( 140, 140, 10 );
					circle( 140, 140, 5 );
					circle( 140, 140, 4 );
					circle( 140, 140, 3 );
					circle( 140, 140, 2 );
					circle( 140, 140, 1 );

					line( 95, 140, 139, 129 );
					line( 95, 162, 141, 151 );

					circle( A1+d+205, A2+e+140, 15 );
					circle( A1+d+205, A2+e+140, 14 );
					circle( A1+d+205, A2+e+140, 13 );
					circle( A1+d+205, A2+e+140, 12 );
					circle( A1+d+205, A2+e+140, 11 );
					circle( A1+d+205, A2+e+140, 10 );
					circle( A1+d+205, A2+e+140, 5 );
					circle( A1+d+205, A2+e+140, 4 );
					circle( A1+d+205, A2+e+140, 3 );
					circle( A1+d+205, A2+e+140, 2 );
					circle( A1+d+205, A2+e+140, 1 );

						line( 132, 129, h1+d+200, a+129 );
						line( 143, 151, h1+d+210, a+151 );

						line( A10+198, A11+129, h+257, g+133 );
						line( A10+211, A11+151, h+277, g+150 );


					delay(50);

						if (color == 15)

							color = 0;


						if(ddd == 0)

							pp2=7;

			}

		
	menu();

}

void base(){

	setcolor( 12 );
	bar3d( 20, 100, 80, 300, 30, 1 );
	bar3d( 608, 100, 500, 289, 10, 1 );
	line(110, 278, 500, 278);
	line(20, 311, 620, 311);
	arc(554,140,180,0,25);
	arc(554,141,180,0,25);
	arc(554,142,180,0,25);
	//setcolor( 0 );
	//line(110, 136, 110, 157);


}

void datos(){

	MG();
	stars();
	MG();

	setcolor(2);
	settextstyle(8,0,1);

	outtextxy(150,40, "            GRAFICION:          ");
	outtextxy(150,80, "             ALUMNO:            ");
	outtextxy(150,100,"VELASCO MAGALLON CARLOS WBILIO  ");
	outtextxy(150,120,"           GRUPO: 5S11          ");
	outtextxy(150,140,"            PROFESOR:           ");
	outtextxy(150,160,"  ING. GERARDO NAVA HERNANDEZ   ");
	outtextxy(150,200,"            PROYECTO            ");

	getch();

}

void objetivos(){

	setcolor(2);
	settextstyle(8,0,1);

	outtextxy(150,40,"             OBJETIVOS            ");
	outtextxy(150,80,"EN ESTE PROYECTO VOY A UTILIZAR LOS");
	outtextxy(150,100,"CONOCIMIENTOS ADQUIRIDOS DURANTE ");
	outtextxy(150,120,"EL PRIMER Y SEGUNDO PARCIAL DE LA");
	outtextxy(150,140,"MATERIA DE GRAFICACION CON EL FIN");
	outtextxy(150,160,"DE LLEVARLO A LA PRACTICA.");

}

void botones( int band ){

if( band == 0 ){
setcolor( 2 ); setfillstyle( 7, 8 );
bar3d( 50, 250, 180, 275, 10, 1 );
setcolor( 2 ); outtextxy( 65, 247, "OBJETIVOS" );
setfillstyle( 1, BLACK ); setcolor( 2 );
bar3d( 250, 250, 380, 275, 10, 1 );
setcolor( 2 ); outtextxy( 260, 247, "SIMULACION" );
bar3d( 450, 250, 580, 275, 10, 1); setcolor( 2 );
outtextxy( 495, 247, "SALIR" );
}
if( band == 1 ){
setcolor( 2 ); setfillstyle( 7, 8 );
bar3d( 250, 250, 380, 275, 10, 1 );
setcolor( 2 ); outtextxy( 260, 247, "SIMULACION" );
setfillstyle( 1, BLACK ); setcolor( 2 );
bar3d( 50, 250, 180, 275, 10, 1 );
setcolor( 2 ); outtextxy( 65, 247, "OBJETIVOS" );
bar3d( 450, 250, 580, 275, 10, 1 ); setcolor( 2 );
outtextxy( 495, 247, "SALIR" );
}
if( band == 2 ){
setcolor( 2 ); setfillstyle( 7, 8 );
bar3d( 450, 250, 580, 275, 10, 1 );
setcolor( 2 ); outtextxy( 495, 247, "SALIR" );
setfillstyle( 1, BLACK ); setcolor( 2 );
bar3d( 250, 250, 380, 275, 10, 1);
setcolor( 2 ); outtextxy( 260, 247, "SIMULACION" );
bar3d( 50, 250, 180, 275, 10, 1 ); setcolor( 2 );
outtextxy( 65, 247, "OBJETIVOS" );
}
}

	void MG()
{

	setcolor(4);
	line(12, 12, 12, 338);
	setcolor(5);
	line(12, 12, 628, 12);
	setcolor(6);
	line(628, 12, 628, 338);
	setcolor(9);
	line(12, 338, 628, 338);

}


void stars(){

	int i=0,j=0,k=0;

	while(i<=700){

		j=random(628);
		k=random(337);

			if(j<13 || k<13)

				putpixel(j,k,0);

			else{	

			putpixel(j,k,random(getmaxcolor()));
			delay(4);
			i++;
			
			}

	}
}

 void imagen(){


 	asm{

		MOV  CX,265
	    MOV  DX,60 }

P5:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,380
	JNE  P5
	
	MOV  CX,265
	MOV  DX,61}

P51:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,380
	JNE  P51


	MOV  CX,273
	MOV  DX,58}

P6:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P6
	
	MOV  CX,273
	MOV  DX,59}

P61:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P61

	MOV  CX,273
	MOV  DX,56}

P7:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P7
	
	MOV  CX,273
	MOV  DX,57}

P71:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P71


	MOV  CX,273
	MOV  DX,54}

P9:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,305
	JNE  P9
	
	MOV  CX,273
	MOV  DX,55}

P91:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,305
	JNE  P91


	MOV  CX,340
	MOV  DX,54}

P10:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P10
	
	MOV  CX,340
	MOV  DX,55}

P101:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P101

	MOV  CX,356
	MOV  DX,52}

P12:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P12
	
	MOV  CX,356
	MOV  DX,53}

P121:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P121


	MOV  CX,273
	MOV  DX,52}

P13:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,289
	JNE  P13
	
	MOV  CX,273
	MOV  DX,53}

P131:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,289
	JNE  P131

	MOV  CX,273
	MOV  DX,50}

P14:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,281
	JNE  P14
	
	MOV  CX,273
	MOV  DX,51}

P141:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,281
	JNE  P141

	MOV  CX,273
	MOV  DX,48}

P15:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,281
	JNE  P15
	
	MOV  CX,273
	MOV  DX,49}

P151:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,281
	JNE  P151

	MOV  CX,364
	MOV  DX,50}

P16:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P16
	
	MOV  CX,364
	MOV  DX,51}

P161:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P161

	MOV  CX,364
	MOV  DX,48}

P17:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P17
	
	MOV  CX,364
	MOV  DX,49}

P171:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P171


	MOV  CX,265
	MOV  DX,62}

P18:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,380
	JNE  P18
	
	MOV  CX,265
	MOV  DX,63}

P181:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,380
	JNE  P181

	MOV  CX,265
	MOV  DX,64}

P19:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,380
	JNE  P19
	
	MOV  CX,265
	MOV  DX,65}

P191:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,380
	JNE  P191


	MOV  CX,265
	MOV  DX,66}

P20:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,380
	JNE  P20
	
	MOV  CX,265
	MOV  DX,67}

P201:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,380
	JNE  P201

	MOV  CX,273
	MOV  DX,64}

P22:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,281
	JNE  P22
	
	MOV  CX,273
	MOV  DX,65}

P221:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,281
	JNE  P221

	MOV  CX,273
	MOV  DX,62}

P23:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,281
	JNE  P23
	
	MOV  CX,273
	MOV  DX,63}

P231:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,281
	JNE  P231

	MOV  CX,281
	MOV  DX,64}

P24:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,289
	JNE  P24
	
	MOV  CX,281
	MOV  DX,65}

P241:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,289
	JNE  P241


	MOV  CX,364
	MOV  DX,62}

P25:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P25
	
	MOV  CX,364
	MOV  DX,63}

P251:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P251

	MOV  CX,364
	MOV  DX,64}

P26:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P26
	
	MOV  CX,364
	MOV  DX,65}

P261:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P261

	MOV  CX,356
	MOV  DX,64}

P27:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P27
	
	MOV  CX,356
	MOV  DX,65}

P271:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P271

	MOV  CX,273
	MOV  DX,68}

P28:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P28
	
	MOV  CX,273
	MOV  DX,69}

P281:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P281

	MOV  CX,273
	MOV  DX,70}

P29:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P29
	
	MOV  CX,273
	MOV  DX,71}

P291:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P291

	MOV  CX,273
	MOV  DX,72}

P30:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P30
	
	MOV  CX,273
	MOV  DX,73}

P301:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,372
	JNE  P301

	MOV  CX,281
	MOV  DX,74}

P32:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P32
	
	MOV  CX,281
	MOV  DX,75}

P321:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P321

	MOV  CX,289
	MOV  DX,76}

P33:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,356
	JNE  P33
	
	MOV  CX,289
	MOV  DX,77}

P331:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,356
	JNE  P331

	MOV  CX,289
	MOV  DX,76}

P34:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,297
	JNE  P34
	
	MOV  CX,289
	MOV  DX,77}

P341:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,297
	JNE  P341

	MOV  CX,348
	MOV  DX,76}

P35:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,356
	JNE  P35
	
	MOV  CX,348
	MOV  DX,77}

P351:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,356
	JNE  P351


	MOV  CX,281
	MOV  DX,81}

P36:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,289
	JNE  P36
	
	MOV  CX,281
	MOV  DX,80}

P361:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,289
	JNE  P361

	MOV  CX,356
	MOV  DX,80}

P37:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P37
	
	MOV  CX,356
	MOV  DX,81}

P371:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P371

	MOV  CX,281
	MOV  DX,82}

P38:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P38
	
	MOV  CX,281
	MOV  DX,83}

P381:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P381

	MOV  CX,281
	MOV  DX,84}

P39:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P39
	
	MOV  CX,281
	MOV  DX,85}

P391:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P391

	MOV  CX,281
	MOV  DX,86}

P40:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P40
	
	MOV  CX,281
	MOV  DX,87}

P401:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P401

	MOV  CX,281
	MOV  DX,88}

P42:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P42
	
	MOV  CX,281
	MOV  DX,89}

P421:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,364
	JNE  P421

	MOV  CX,289
	MOV  DX,88}

P43:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,356
	JNE  P43
	
	MOV  CX,289
	MOV  DX,89}

P431:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,356
	JNE  P431

	MOV  CX,289
	MOV  DX,90}

P44:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,356
	JNE  P44
	
	MOV  CX,289
	MOV  DX,91}

P441:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,356
	JNE  P441


	MOV  CX,297
	MOV  DX,86}

P45:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,348
	JNE  P45
	
	MOV  CX,297
	MOV  DX,87}

P451:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,348
	JNE  P451

	MOV  CX,250
	MOV  DX,58}

P46:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,242
	JNE  P46
	
	MOV  CX,250
	MOV  DX,59}

P461:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,242
	JNE  P461

	MOV  CX,250
	MOV  DX,60}

P47:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,226
	JNE  P47
	
	MOV  CX,250
	MOV  DX,61}

P471:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,226
	JNE  P471

	MOV  CX,250
	MOV  DX,62}

P48:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,218
	JNE  P48
	
	MOV  CX,250
	MOV  DX,63}

P481:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,218
	JNE  P481

	MOV  CX,242
	MOV  DX,62}

P49:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,226
	JNE  P49
	
	MOV  CX,242
	MOV  DX,63}

P491:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,226
	JNE  P491

	MOV  CX,258
	MOV  DX,64}

P50:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,210
	JNE  P50
	
	MOV  CX,258
	MOV  DX,65}

P501:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,210
	JNE  P501

	MOV  CX,250
	MOV  DX,64}

P52:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,218
	JNE  P52
	
	MOV  CX,250
	MOV  DX,65}

P521:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,218
	JNE  P521


	MOV  CX,258
	MOV  DX,65}

P53:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,210
	JNE  P53
	
	MOV  CX,258
	MOV  DX,66}

P531:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,210
	JNE  P531


	MOV  CX,250
	MOV  DX,65}

P54:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,218
	JNE  P54
	
	MOV  CX,250
	MOV  DX,66}

P541:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,218
	JNE  P541

	MOV  CX,266
	MOV  DX,67}

P55:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,202
	JNE  P55
	
	MOV  CX,266
	MOV  DX,68}

P551:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,202
	JNE  P551


	MOV  CX,258
	MOV  DX,67}

P56:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,218
	JNE  P56
	
	MOV  CX,258
	MOV  DX,68}

P561:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,218
	JNE  P561

	MOV  CX,266
	MOV  DX,69}

P57:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,202
	JNE  P57
	
	MOV  CX,266
	MOV  DX,70}

P571:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,202
	JNE  P571


	MOV  CX,266
	MOV  DX,69}

P58:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,210
	JNE  P58
	
	MOV  CX,266
	MOV  DX,70}

P581:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,210
	JNE  P581

	MOV  CX,258
	MOV  DX,70}

P59:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,234
	JNE  P59
	
	MOV  CX,258
	MOV  DX,71}

P601:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	DEC  cX
	CMP  cX,234
	JNE  P601

	MOV  CX,396
	MOV  DX,58}

P462:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,404
	JNE  P462
	
	MOV  CX,396
	MOV  DX,59}

P4612:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,404
	JNE  P4612

	MOV  CX,396
	MOV  DX,60}

P472:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,420
	JNE  P472
	
	MOV  CX,396
	MOV  DX,61}

P4712:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,420
	JNE  P4712

	MOV  CX,396
	MOV  DX,62}

P482:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,428
	JNE  P482
	
	MOV  CX,396
	MOV  DX,63}

P4812:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,428
	JNE  P4812

	MOV  CX,404
	MOV  DX,62}

P492:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,420
	JNE  P492
	
	MOV  CX,404
	MOV  DX,63}

P4912:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,420
	JNE  P4912

	MOV  CX,388
	MOV  DX,64}

P502:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,436
	JNE  P502
	
	MOV  CX,388
	MOV  DX,65}

P5012:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,436
	JNE  P5012

	MOV  CX,396
	MOV  DX,64}

P522:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,428
	JNE  P522
	
	MOV  CX,396
	MOV  DX,65}

P5212:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,428
	JNE  P5212


	MOV  CX,388
	MOV  DX,65}

P532:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,436
	JNE  P532
	
	MOV  CX,388
	MOV  DX,66}

P5312:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,436
	JNE  P5312


	MOV  CX,396
	MOV  DX,65}

P542:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,428
	JNE  P542
	
	MOV  CX,396
	MOV  DX,66}

P5412:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,428
	JNE  P5412

	MOV  CX,380
	MOV  DX,67}

P552:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,444
	JNE  P552
	
	MOV  CX,380
	MOV  DX,68}

P5512:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,444
	JNE  P5512


	MOV  CX,388
	MOV  DX,67}

P562:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,428
	JNE  P562
	
	MOV  CX,388
	MOV  DX,68}

P5612:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,428
	JNE  P5612

	MOV  CX,380
	MOV  DX,69}

P572:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,444
	JNE  P572
	
	MOV  CX,380
	MOV  DX,70}

P5712:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,444
	JNE  P5712

	MOV  CX,380
	MOV  DX,69}

P582:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,436
	JNE  P582
	
	MOV  CX,380
	MOV  DX,70}

P5812:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,436
	JNE  P5812

	MOV  CX,388
	MOV  DX,70}

P592:asm{	MOV  AH,0CH	
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,412
	JNE  P592
	
	MOV  CX,388
	MOV  DX,71}

P6012:asm{	MOV  AH,0CH
	MOV  AL,0009H
	INT  10H

	INC  cX
	CMP  cX,412
	JNE  P6012

	MOV  CX,364
	MOV  DX,90}

PD1:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  PD1
	
	MOV  CX,364
	MOV  DX,91}

PD11:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  PD11

	MOV  CX,364
	MOV  DX,91}

PDA1:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  PDA1
	
	MOV  CX,364
	MOV  DX,92}

PDA11:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  PDA11

	MOV  CX,364
	MOV  DX,93}

PD2:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  PD2
	
	MOV  CX,364
	MOV  DX,94}

PD21:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  PD21

	MOV  CX,372
	MOV  DX,93}

PD3:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,380
	JNE  PD3
	
	MOV  CX,372
	MOV  DX,94}

PD31:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	INC  cX
	CMP  cX,380
	JNE  PD31


	MOV  CX,280
	MOV  DX,90}

PI1:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,257
	JNE  PI1
	
	MOV  CX,280
	MOV  DX,91}

PI11:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,257
	JNE  PI11

	MOV  CX,280
	MOV  DX,91}

PIA1:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,257
	JNE  PIA1
	
	MOV  CX,280
	MOV  DX,92}

PIA11:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,257
	JNE  PIA11

	MOV  CX,280
	MOV  DX,93}

PI2:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	DEC  cX
	CMP  cX,257
	JNE  PI2
	
	MOV  CX,280
	MOV  DX,94}

PI21:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	DEC  cX
	CMP  cX,257
	JNE  PI21

	MOV  CX,272
	MOV  DX,93}

PI3:asm{	MOV  AH,0CH	
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,264
	JNE  PI3
	
	MOV  CX,272
	MOV  DX,94}

PI31:asm{	MOV  AH,0CH
	MOV  AL,0006H
	INT  10H

	DEC  cX
	CMP  cX,264
	JNE  PI31

	MOV  CX,15
	MOV  DX,12}


T1:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,146
	JNE  T1
	
	MOV  CX,80
	MOV  DX,121}

T2:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,146
	JNE  T2

	MOV  CX,80
	MOV  DX,122}

T3:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,146
	JNE  T3

	MOV  CX,80
	MOV  DX,123}

T4:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,146
	JNE  T4

	MOV  CX,102
	MOV  DX,124}

T5:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T5
	
	MOV  CX,102
	MOV  DX,125}

T6:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T6

	MOV  CX,102
	MOV  DX,126}

T7:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T7

	MOV  CX,102
	MOV  DX,127}

T8:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T8

	MOV  CX,102
	MOV  DX,128}

T9:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T9
	
	MOV  CX,102
	MOV  DX,129}

T10:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T10

	MOV  CX,102
	MOV  DX,130}

T11:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T11

	MOV  CX,102
	MOV  DX,131}

T12:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T12

	MOV  CX,102
	MOV  DX,132}

T13:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T13
	
	MOV  CX,102
	MOV  DX,133}

T14:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T14

	MOV  CX,102
	MOV  DX,134}

T15:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T15

	MOV  CX,102
	MOV  DX,135}

T16:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,124
	JNE  T16


	MOV  CX,160
	MOV  DX,120}

E1:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,226
	JNE  E1
	
	MOV  CX,160
	MOV  DX,121}

E2:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,226
	JNE  E2

	MOV  CX,160
	MOV  DX,122}

E3:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,226
	JNE  E3

	MOV  CX,160
	MOV  DX,123}

E4:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,226
	JNE  E4

	MOV  CX,160
	MOV  DX,124}

E5:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E5
	
	MOV  CX,160
	MOV  DX,125}

E6:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E6

	MOV  CX,160
	MOV  DX,126}

E7:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E7

	MOV  CX,160
	MOV  DX,127}

E8:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E8

	MOV  CX,160
	MOV  DX,128}

E9:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E9
	
	MOV  CX,160
	MOV  DX,129}

E10:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E10

	MOV  CX,160
	MOV  DX,130}

E11:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E11

	MOV  CX,160
	MOV  DX,131}

E12:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E12

	MOV  CX,160
	MOV  DX,132}

E13:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E13
	
	MOV  CX,160
	MOV  DX,133}

E14:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E14

	MOV  CX,160
	MOV  DX,134}

E15:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E15

	MOV  CX,160
	MOV  DX,135}

E16:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  E16

	MOV  CX,160
	MOV  DX,132}

E17:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,226
	JNE  E17
	
	MOV  CX,160
	MOV  DX,133}

E18:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,226
	JNE  E18

	MOV  CX,160
	MOV  DX,134}

E19:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,226
	JNE  E19

	MOV  CX,160
	MOV  DX,135}

E20:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,226
	JNE  E20


	MOV  CX,160
	MOV  DX,126}

E21:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,204
	JNE  E21

	MOV  CX,160
	MOV  DX,127}

E22:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,204
	JNE  E22

	MOV  CX,160
	MOV  DX,128}

E23:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,204
	JNE  E23

	MOV  CX,160
	MOV  DX,129}

E24:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,204
	JNE  E24


	MOV  CX,241
	MOV  DX,120}

S01:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S01
	
	MOV  CX,241
	MOV  DX,121}

S2:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S2

	MOV  CX,241
	MOV  DX,122}

S3:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S3

	MOV  CX,241
	MOV  DX,123}

S4:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
JNE  S4

        MOV  CX,241
	MOV  DX,126}

S5:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,274
	JNE  S5

	MOV  CX,241
	MOV  DX,127}

S6:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,274
	JNE  S6

	MOV  CX,241
	MOV  DX,128}

S7:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,274
	JNE  S7

	MOV  CX,241
	MOV  DX,129}

S8:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,274
	JNE  S8


        MOV  CX,160
	MOV  DX,124}

S9:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S9
	
	MOV  CX,160
	MOV  DX,125}

S10:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S10

	MOV  CX,160
	MOV  DX,126}

S11:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S11

	MOV  CX,160
	MOV  DX,127}

S12:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S12

	MOV  CX,160
	MOV  DX,128}

S13:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S13
	
	MOV  CX,160
	MOV  DX,129}

S14:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S14

	MOV  CX,160
	MOV  DX,130}

S15:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S15

	MOV  CX,160
	MOV  DX,131}

S16:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S16

	MOV  CX,160
	MOV  DX,132}

S17:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S17
	
	MOV  CX,160
	MOV  DX,133}

S18:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S18

	MOV  CX,160
	MOV  DX,134}

S19:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,182
	JNE  S19


	MOV  CX,241
	MOV  DX,124}

S20:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,263
	JNE  S20
	
	MOV  CX,241
	MOV  DX,125}

S21:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,263
	JNE  S21

	MOV  CX,241
	MOV  DX,126}

S22:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,263
	JNE  S22

	MOV  CX,241
	MOV  DX,127}

S23:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,263
	JNE  S23

	MOV  CX,274
	MOV  DX,126}

S24:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S24
	
	MOV  CX,274
	MOV  DX,127}

S25:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S25

	MOV  CX,274
	MOV  DX,128}

S26:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S26

	MOV  CX,274
	MOV  DX,129}

S27:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S27

	MOV  CX,274
	MOV  DX,130}

S28:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S28
	
	MOV  CX,274
	MOV  DX,131}

S29:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S29

	MOV  CX,274
	MOV  DX,132}

S30:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S30

	MOV  CX,274
	MOV  DX,133}

S31:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S31


	MOV  CX,241
	MOV  DX,132}

S32:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S32
	
	MOV  CX,241
	MOV  DX,133}

S33:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S33

	MOV  CX,241
	MOV  DX,134}

S34:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S34

	MOV  CX,241
	MOV  DX,135}

S35:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,307
	JNE  S35

	MOV  CX,322
	MOV  DX,120}

O0:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O0
	
	MOV  CX,322
	MOV  DX,121}

O1:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O1

	MOV  CX,322
	MOV  DX,122}

O2:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O2

	MOV  CX,322
	MOV  DX,123}

O3:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O3


	MOV  CX,322
	MOV  DX,132}

O4:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O4
	
	MOV  CX,322
	MOV  DX,133}

O5:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O5

	MOV  CX,322
	MOV  DX,134}

O6:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O6

	MOV  CX,322
	MOV  DX,135}

O7:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O7

	MOV  CX,322
	MOV  DX,124}

O8:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,344
	JNE  O8
	
	MOV  CX,322
	MOV  DX,125}

O9:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,344
	JNE  O9

	MOV  CX,322
	MOV  DX,126}

O10:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,344
	JNE  O10

	MOV  CX,322
	MOV  DX,127}

O11:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,344
	JNE  O11

	MOV  CX,322
	MOV  DX,128}

O12:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,344
	JNE  O12
	
	MOV  CX,322
	MOV  DX,129}

O13:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,344
	JNE  O13

	MOV  CX,322
	MOV  DX,130}

O14:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,344
	JNE  O14

	MOV  CX,322
	MOV  DX,131}

O15:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,344
	JNE  O15

	MOV  CX,366
	MOV  DX,124}

O16:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O16
	
	MOV  CX,366
	MOV  DX,125}

O17:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O17

	MOV  CX,366
	MOV  DX,126}

O18:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O18

	MOV  CX,366
	MOV  DX,127}

O19:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O19

	MOV  CX,366
	MOV  DX,128}

O20:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O20
	
	MOV  CX,366
	MOV  DX,129}

O21:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O21

	MOV  CX,366
	MOV  DX,130}

O22:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O22

	MOV  CX,366
	MOV  DX,131}

O23:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,388
	JNE  O23

	MOV  CX,403
	MOV  DX,120}

E0122:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,469
	JNE  E0122
	
	MOV  CX,403
	MOV  DX,121}

E0222:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,469
	JNE  E0222

	MOV  CX,403
	MOV  DX,122}

E32:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,469
	JNE  E32

	MOV  CX,403
	MOV  DX,123}

E42:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,469
	JNE  E42

	MOV  CX,403
	MOV  DX,124}

E52:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E52
	
	MOV  CX,403
	MOV  DX,125}

E62:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E62

	MOV  CX,403
	MOV  DX,126}

E72:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E72

	MOV  CX,403
	MOV  DX,127}

E82:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E82

	MOV  CX,403
	MOV  DX,128}

E92:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E92
	
	MOV  CX,403
	MOV  DX,129}

E102:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E102

	MOV  CX,403
	MOV  DX,130}

E112:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E112

	MOV  CX,403
	MOV  DX,131}

E122:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E122

	MOV  CX,403
	MOV  DX,132}

E132:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E132
	
	MOV  CX,403
	MOV  DX,133}

E142:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E142

	MOV  CX,403
	MOV  DX,134}

E152:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E152

	MOV  CX,403
	MOV  DX,135}

E162:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,425
	JNE  E162

	MOV  CX,403
	MOV  DX,132}

E172:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,469
	JNE  E172
	
	MOV  CX,403
	MOV  DX,133}

E182:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,469
	JNE  E182

	MOV  CX,403
	MOV  DX,134}

E192:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,469
	JNE  E192

	MOV  CX,403
	MOV  DX,135}

E202:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,469
	JNE  E202


        MOV  CX,403
	MOV  DX,126}

E212:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,447
	JNE  E212

	MOV  CX,403
	MOV  DX,127}

E222:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,447
	JNE  E222

	MOV  CX,403
	MOV  DX,128}

E232:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,447
	JNE  E232

	MOV  CX,403
	MOV  DX,129}

E242:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,447
	JNE  E242

MOV  CX,484
	MOV  DX,120}

M0:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M0
	
	MOV  CX,484
	MOV  DX,121}

M1:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M1

	MOV  CX,484
	MOV  DX,122}

M2:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M2

	MOV  CX,484
	MOV  DX,123}

M3:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M3

	MOV  CX,484
	MOV  DX,124}

M4:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M4
	
	MOV  CX,484
	MOV  DX,125}

M5:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M5

	MOV  CX,484
	MOV  DX,126}

M6:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M6

	MOV  CX,484
	MOV  DX,127}

M7:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M7

	MOV  CX,484
	MOV  DX,128}

M8:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M8
	
	MOV  CX,484
	MOV  DX,129}

M9:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M9

	MOV  CX,484
	MOV  DX,130}

M10:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M10

	MOV  CX,484
	MOV  DX,131}

M11:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M11

	MOV  CX,484
	MOV  DX,132}

M12:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M12

	MOV  CX,484
	MOV  DX,133}

M13:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M13

	MOV  CX,484
	MOV  DX,134}

M14:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M14

	MOV  CX,484
	MOV  DX,135}

M15:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,506
	JNE  M15

	MOV  CX,506
	MOV  DX,123}

M16:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,513
	JNE  M16

	MOV  CX,506
	MOV  DX,124}

M17:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,513
	JNE  M17

	MOV  CX,513
	MOV  DX,125}

M18:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,520
	JNE  M18

	MOV  CX,513
	MOV  DX,126}

M19:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,520
	JNE  M19

	MOV  CX,520
	MOV  DX,123}

M20:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,527
	JNE  M20

	MOV  CX,520
	MOV  DX,124}

M21:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,527
	JNE  M21

	MOV  CX,527
	MOV  DX,120}

M22:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,549
	JNE  M22
	
	MOV  CX,527
	MOV  DX,121}

M23:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,549
	JNE  M23

	MOV  CX,527
	MOV  DX,122}

M24:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,549
	JNE  M24

	MOV  CX,527
	MOV  DX,123}

M25:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,549
	JNE  M25

	MOV  CX,527
	MOV  DX,124}

M26:asm{	MOV  AH,0CH	
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,549
	JNE  M26
	
	MOV  CX,527
	MOV  DX,125}

M27:asm{	MOV  AH,0CH
	MOV  AL,000FH
	INT  10H

	INC  cX
	CMP  cX,549
	JNE  M27

	MOV  CX,527
	MOV  DX,126}
	
	setcolor(15);

	line(548, 126, 527, 126);
	line(548, 127, 527, 127);
	line(548, 128, 527, 128);
	line(548, 129, 527, 129);
	line(548, 130, 527, 130);
	line(548, 131, 527, 131);
	line(548, 132, 527, 132);
	line(548, 133, 527, 133);
	line(548, 134, 527, 134);
	line(548, 135, 527, 135);
	line(548, 136, 527, 136);


 }