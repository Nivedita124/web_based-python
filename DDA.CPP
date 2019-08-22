#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void dda(int,int,int,int);
int main()
{
	int gdriver = DETECT, gmode;
	int x1,x2,y1,y2;
	cout<<"Enter the startpoint : ";
	cin>>x1;
	cin>>y1;
	cout<<"Enter the end point : ";
	cin>>x2;
	cin>>y2;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	dda(x1,y1,x2,y2);
	getch();
	return 0;
}
void dda(int x1,int y1,int x2,int y2)
{
	float dx,dy,steps,x,y,xi,yi;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
		steps=abs(dx);
	else
		steps=abs(dy);
	xi=dx/steps;
	yi=dy/steps;
	x=x1;
	y=y1;
	putpixel(x,y,RED);
	for(int k=1;k<=steps;k++)
	{
		x=x+xi;
		y=y+yi;
		putpixel(x,y,RED);
	}
}