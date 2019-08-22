#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void dda(int,int,int,int);
void polygon();
int main()
{
	polygon();
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
void polygon()
{
	int n,j=0,x[10],y[10];
	cout<<"Enter point no's : ";
	cin>>n;
	cout<<"Enter all X & Y co-ordinates : \n";
	for(int i=0;i<n;i++)
	{
		cout<<" Enter x["<<i<<"] value : ";
		cin>>x[i];
		cout<<" Enter y["<<i<<"] value : ";
		cin>>y[i];
	}
	x[i]=x[0];
	y[i]=y[0];
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	while(j<n)
	{
		dda(x[j],y[j],x[j+1],y[j+1]);
		j++;
	}
	getch();
	cleardevice();
}