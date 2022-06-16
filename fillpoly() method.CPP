#include <graphics.h>
#include <iostream.h>
#include <dos.h>
#include <conio.h>
// driver code
int main()
{
 clrscr();
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:/TURBOC3/bgi");
 int arr[] = {320, 150, 400, 250,
		 250, 350, 320, 150};
 fillpoly(4, arr);

 getch();
 closegraph();
 return 0;
}
