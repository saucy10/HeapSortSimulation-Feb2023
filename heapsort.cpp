#include<graphics.h>
#include<stdlib.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<string.h>
void description();
void application();
void algorithm();
void maincall();
void bh(int *,int);
void h(int *,int);
void tree(int *,int);
void login()
{
cleardevice();
char pwd[10],usn[10],ch;
int i;
settextstyle(1,0,2);
setcolor(3);
outtextxy(200,136,"Username:");
gotoxy(42,10);
while((ch=getch())!=13)
{
usn[i]=ch;
printf("%c",usn[i]);
if(i==10)
break;
}
usn[i]='\0';

outtextxy(200,185,"Password:");

gotoxy(42,13);
i=0;
while((ch=getch())!=13)
{
 pwd[i]=ch;
 printf("*");
 i++;
 }
 pwd[i]='\0';

 if((strcmp(usn,"suhas")&&strcmp(pwd,"123")==0 ))

 {
 cleardevice();
 settextstyle(7,0,3);
 setcolor(15);
 outtextxy(200,200,"Logged In Succesfully");
 outtextxy(100,350,"press any key to continue.....");
 getch();
}
else
{
settextstyle(7,0,3);
setcolor(12);
outtextxy(200,200,"inputs dosent match");
delay(1000);
exit(0);
}
}
void main()
{
int gdriver=DETECT,gmode,i;
int n,c;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
login();
cleardevice();
rectangle(0,0,getmaxx(),getmaxy());
rectangle(2,2,getmaxx()-2,getmaxy()-2);
while(!kbhit())
{
setbkcolor(BLACK);
settextstyle(1,0,20);
setcolor(LIGHTGREEN);
outtextxy(50,150,"W");
delay(100);
outtextxy(140,150,"E");
delay(100);
outtextxy(210,150,"L");
delay(100);
outtextxy(280,150,"C");
delay(100);
outtextxy(350,150,"O");
delay(100);
outtextxy(410,150,"M");
delay(100);
outtextxy(500,150,"E");
delay(100);
for(i=10;i<550;i+=5)
{
putpixel(50+i,300,0+i);
putpixel(50+i,160,0+i);
delay(5);
}
}
cleardevice();
setbkcolor(BLACK);
for(int f=0;f<7;f++)
{
cleardevice();
setcolor(f+3);
settextstyle(7,0,6);
outtextxy(1,100,"HEAP SORT");
outtextxy(20,280,"SIMULATION PROJECT");
delay(500);
}
cleardevice();
setbkcolor(BLACK);
settextstyle(1,0,3);
setcolor(LIGHTGREEN);
outtextxy(230,15,"HEAPSORT");
delay(20);
for(i=0;i<=120;i++)
{
putpixel(227+i,43,YELLOW);
delay(5);
}
delay(10);
setcolor(LIGHTGREEN);
delay(50);
outtextxy(0,80,"                              ");
delay(20);
for(i=0;i<180;i++)
{
putpixel(0+i,108,YELLOW);
delay(5);
setcolor(WHITE);
}
settextstyle(0,0,2);
delay(500);
outtextxy(0,160,"          Suhas P        ");
delay(500);
outtextxy(0,220,"                              ");
delay(500);
settextstyle(1,0,2);
setcolor(LIGHTGREEN);
outtextxy(0,290,"                               ");
delay(20);
for(i=0;i<258;i++)
{
putpixel(0+i,315,YELLOW);
delay(5);
}
for(i=0;i<7;i++)
{
settextstyle(1,0,6);
setcolor(13);
delay(30);
outtextxy(0,320,"                                   ");
delay(100);
}
getch();
while(n!=5)
{
cleardevice();
settextstyle(3,0,5);
setcolor(11);
outtextxy(200,10,"MAIN MENU");
delay(10);
for(i=0;i<780;i++)
{
putpixel(0+i,60,BROWN);
delay(1);
}
settextstyle(1,0,2);
setcolor(15);
rectangle(0,0,getmaxx(),getmaxy());
rectangle(3,3,getmaxx()-3,getmaxy()-3);
setcolor(GREEN);
delay(30);
outtextxy(10,100,"1.ABOUT THE PROJECT");
delay(10);
outtextxy(10,150,"2.HEAP SORT ALGORITHM");
delay(10);
outtextxy(10,200,"3.WORKING OF HEAP SORT");
delay(10);
outtextxy(10,250,"4.APPLICATION OF HEAPSORT");
delay(10);
outtextxy(10,300,"5.EXIT");
delay(10);
setcolor(YELLOW);
outtextxy(10,350,"SELECT YOUR OPTION:");
scanf("%d",&n);
gotoxy(29,23);
printf("%d",n);
switch(n)
{
case 1:
{
description();
break;
}
case 2:
{
algorithm();
break;
}
case 3:
{
maincall();
break;
}
case 4:
{
application();
break;
}
case 5:
{
cleardevice();
for(i=1;i<20;i++)
{
setcolor(i);
settextstyle(1,0,9);
outtextxy(20,170,":THANK YOU:");
delay(50);
}
delay(15);
exit(1);
break;
}
default:
{
setcolor(RED);
outtextxy(10,370,"invalid choice");
delay(1000);
}
}
}
}

void description()
{
int i;
cleardevice();
settextstyle(1,0,1);
setcolor(RED);
delay(3);
outtextxy(180,15,"DESCRIPTION OF HEAPSORT");
delay(1);
for(i=0;i<=245;i++)
{
putpixel(180+i,40,BLUE);
delay(1);
}
settextstyle(1,0,2);
setcolor(MAGENTA);
delay(5);
outtextxy(0,70,"HEAP SORT");
delay(5);
for(i=0;i<=105;i++)
{
putpixel(0+i,95,MAGENTA);
delay(1);
}
settextstyle(3,0,1);
setcolor(WHITE);
delay(10);
outtextxy(0,100,"The steps of the heap sort algorithm are:");
delay(10);
outtextxy(0,130,"* Use data to form a heap.");
delay(5);
outtextxy(0,150,"* Remove highest priority item from heap(largest).");
delay(5);
outtextxy(0,170,"* Reform heap with remaining data.");
delay(5);
outtextxy(0,190,"* You repeate step 2 & 3 untill you finish all the data.");
delay(5);
outtextxy(0,210,"* You could do step 1 by inserting the items one at a time into heap:");
delay(5);
outtextxy(0,230,"* This would be O(nlogn(n)). Turns out we can do on Ologn.This does not");
delay(5);
outtextxy(0,250,"* Change overall complexity but is more efficient.");
delay(5);
outtextxy(0,270,"* You would have to modify the normal heap implementation to avoid");
delay(5);
outtextxy(0,290,"* Needing a second array");
delay(5);
outtextxy(0,310,"* Instead we will enter all values and make it into a heap in one pass");
delay(5);
outtextxy(0,330,"* As with other heap operation,we first make it a complete binary tree");
delay(5);
outtextxy(0,350,"* And then fix up so the ordering is correct.We have already seen");
delay(5);
outtextxy(0,370,"* That there is a relationship between complete binarytree and an array");
setcolor(BROWN);
delay(10);
outtextxy(0,400,"FOR EXAMPLE LOOK OUT OUR HEAP SORT WORKING");
getch();
}


void algorithm()
{
int i;
cleardevice();
settextstyle(1,0,2);
setcolor(YELLOW);
delay(2);
outtextxy(230,15,"ALGORITHM OF HEAP SORT");
delay(2);
for(i=0;i<=270;i++)
{
putpixel(225+i,40,YELLOW);
delay(2);
}
settextstyle(3,0,1);
setcolor(LIGHTBLUE);
delay(2);
outtextxy(105,90,"ALGORITHM:");
delay(2);
for(i=0;i<=105;i++)
{
putpixel(100+i,115,LIGHTBLUE);
delay(1);
}
settextstyle(3,0,1);
setcolor(CYAN);
delay(500);
outtextxy(0,140,"STEP 1:Read the array size 'n'");
delay(500);
outtextxy(0,170,"STEP 2:Read the array elements a[n]");
delay(500);
outtextxy(0,200,"STEP 3:[Call the function HEAP]");
outtextxy(0,230,"Heapify(a,n)");
delay(500);
outtextxy(0,260,"STEP 4:print the elements a[n]");
delay(500);
outtextxy(0,290,"STEP 5:STOP");
delay(500);
for(i=0;i<=400;i++)
{
putpixel(375,60+i,BROWN);
delay(1);
}
delay(3);
settextstyle(3,0,1);
setcolor(LIGHTBLUE);
outtextxy(470,90,"Function heapify:");
delay(2);
for(i=0;i<=150;i++)
{
putpixel(465+i,115,LIGHTBLUE);
delay(1);
}
delay(5);
settextstyle(3,0,1);
setcolor(CYAN);
outtextxy(385,150,"Heapify(int a[],int n)");
delay(5);
outtextxy(390,170,"{");
delay(5);
outtextxy(395,190,"for(i<-2 to n)");
delay(5);
outtextxy(400,210,"{");
delay(5);
outtextxy(405,230,"it<-a[2]");
delay(5);
outtextxy(405,250,"x<-2");
delay(5);
outtextxy(405,270,"y<-x/2");
delay(5);
outtextxy(410,290,"while(y=0&&it>a[y])");
delay(5);
outtextxy(415,310,"{");
delay(5);
outtextxy(420,330,"a[x]=a[y]");
delay(5);
outtextxy(420,350,"y=x/2");
delay(5);
outtextxy(415,370,"}");
delay(5);
outtextxy(415,390,"a[x]=it");
delay(5);
outtextxy(400,410,"}");
delay(5);
outtextxy(390,430,"}");
getch();
}




void maincall()
{
cleardevice();
int i,n,x=5,y=5;
clock_t s,e;
s=clock();
setcolor(GREEN);
gotoxy(1,25);
cout<<"enter the size of elements:";
cin>>n;
int a[20];
setcolor(GREEN);
gotoxy(1,27);
cout<<"enter elements:";
for(i=1;i<=n;i++)
{
cin>>a[i];
}
cleardevice();
char str[10];
settextstyle(0,0,0);
for(i=1;i<=n;i++)
{
setcolor(2);
circle(10+x,45,15);
delay(10);
sprintf(str,"%d",a[i]);
outtextxy(10+x,40,str);
delay(10);
x+=40;
}
delay(20);
settextstyle(1,0,1);
outtextxy(50,65,"UNSORTED LIST");
delay(10);
setcolor(BLUE);
settextstyle(1,0,1);
outtextxy(250,57,"HEAP TREE");
delay(20);
for(i=0;i<=104;i++)
{
putpixel(248+i,80,LIGHTGRAY);
delay(10);
}
tree(a,n);
cleardevice();
bh(a,n);
delay(10);
setcolor(BLUE);
settextstyle(1,0,1);
outtextxy(250,57,"BUILDING MAX HEAP TREE");
delay(20);
for(i=0;i<=208;i++)
{
putpixel(248+i,80,LIGHTBLUE);
delay(10);
}
tree(a,n);
cleardevice();
h(a,n);
delay(10);
setcolor(BLUE);
settextstyle(1,0,1);
outtextxy(250,64,"HEAPIFIED TREE");
delay(20);
for(i=0;i<=144;i++)
{
putpixel(248+i,85,LIGHTBLUE);
delay(10);
}
tree(a,n);
cleardevice();
setcolor(13);
settextstyle(7,0,4);
outtextxy(140,90+y,"THE SORTED LIST IS");
delay(100);
settextstyle(0,0,0);
for(i=1;i<=n;i++)
{
setcolor(LIGHTBLUE);
setfillstyle(1,RED);
circle(70+y,250,18);
floodfill(70+y,250,LIGHTBLUE);
delay(100);
sprintf(str,"%d",a[i]);
outtextxy(70+y,245,str);
delay(100);
y+=40;
}
e=clock();
setcolor(18);
gotoxy(1,20);
printf("\nTIME COMPLEXITY:%f\n",(e-s)/CLK_TCK);
delay(15);
setcolor(15);
gotoxy(1,22);
int sum=n*2;
int t=sum+4;
printf("WE HAVE NODE'S n=");
gotoxy(18,22);
printf("%d",n);
gotoxy(1,23);
printf("sum is n*2=");
gotoxy(13,23);
printf("%d",sum);
gotoxy(1,24);
printf("INCREMENT VARIABLES(i,x):2*2=4 bytes");
gotoxy(1,25);
printf("SPACE COMPLEXITY:");
gotoxy(20,25);
printf("%d",t);
getch();
}







void mh(int *a,int i,int n)
{
int j,t;
t=a[i];
j=2*i;
while(j<=n)
{
if(j<n && a[j+1]>a[j])
j=j+1;
if(t>a[j])
break;
else if(t<=a[j])
{
a[j/2]=a[j];
j=2*j;
}
}
a[j/2]=t;
return;
}
void h(int *a,int n)
{
int i,t;
for(i=n;i>=2;i--)
{
t=a[i];
a[i]=a[1];
a[1]=t;
mh(a,1,i-1);
}
}
void bh(int *a,int n)
{
int i;
for(i=n/2;i>=1;i--)
{
mh(a,i,n);
}
}

void tree(int *a,int n)
{
delay(20);
char str[10];
delay(20);
settextstyle(1,0,1);
setcolor(RED);
setfillstyle(SOLID_FILL,BROWN);
delay(10);
int xv[20];
int yv[20];
xv[1]=300;yv[1]=100;
xv[2]=180;yv[2]=165;
xv[3]=420;yv[3]=165;
xv[4]=118;yv[4]=245;
xv[5]=245;yv[5]=245;
xv[6]=357;yv[6]=245;
xv[7]=477;yv[7]=245;
xv[8]=65;yv[8]=340;
xv[9]=131;yv[9]=340;
xv[10]=195;yv[10]=340;
xv[11]=270;yv[11]=340;
xv[12]=338;yv[12]=340;
xv[13]=408;yv[13]=340;
xv[14]=475;yv[14]=340;
xv[15]=545;yv[15]=340;
settextstyle(1,0,1);
setcolor(RED);
setfillstyle(SOLID_FILL,BROWN);
delay(10);
outtextxy(250,95,"a[0]");
int l=1;
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
if(n>1)
{
l++;
line(300,115,180,150);
delay(50);
outtextxy(130,160,"a[1]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>2)
{
l++;
line(300,115,420,150);
delay(50);
outtextxy(370,160,"a[2]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>3)
{
l++;
line(180,180,120,230);
delay(50);
outtextxy(68,240,"a[3]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>4)
{
l++;
line(180,180,245,230);
delay(50);
outtextxy(190,240,"a[4]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>5)
{
l++;
line(420,180,360,230);
delay(50);
outtextxy(307,241,"a[5]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>6)
{
l++;
line(420,180,480,230);
delay(50);
outtextxy(427,240,"a[6]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>7)
{
l++;
line(118,260,70,324);
delay(50);
outtextxy(15,335,"a[7]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>8)
{
l++;
line(118,260,136,324);
delay(50);
outtextxy(85,335,"a[8]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>9)
{
l++;
line(245,260,200,324);
delay(50);
outtextxy(148,335,"a[9]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>10)
{
l++;
line(245,260,275,324);
delay(50);
outtextxy(216,335,"a[10]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>11)
{
l++;
line(357,260,335,324);
delay(50);
outtextxy(285,335,"a[11]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>12)
{
l++;
line(357,260,405,324);
delay(50);
outtextxy(355,335,"a[12]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>13)
{
l++;
line(477,260,465,324);
delay(50);
outtextxy(425,335,"a[13]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
if(n>14)
{
l++;
line(477,260,535,324);
delay(50);
outtextxy(490,335,"a[14]");
circle(xv[l],yv[l],15);
floodfill(xv[l],yv[l],RED);
delay(50);
}
delay(50);
int i=1;
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(290,90,str);
if(n>1)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(170,155,str);
}
if(n>2)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(410,155,str);
}
if(n>3)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(110,235,str);
}
if(n>4)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(235,235,str);
}
if(n>5)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(345,235,str);
}
if(n>6)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(470,235,str);
}
if(n>7)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(55,330,str);
}
if(n>8)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(125,330,str);
}
if(n>9)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(190,330,str);
}
if(n>10)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(255,330,str);
}
if(n>11)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(325,330,str);
}
if(n>12)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(395,330,str);
}
if(n>13)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(465,330,str);
}
if(n>14)
{
i++;
delay(50);
setcolor(BLACK);
sprintf(str,"%d",a[i]);
outtextxy(530,330,str);
}
getch();
}

void application()
{
int i,gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
cleardevice();
settextstyle(10,0,3);
setcolor(11);
/*for(i=0;i<400;i+=10)
{ */
outtextxy(85,150,"USING HEAP SORT TO");
outtextxy(130,230,"FIND THE SHORTEST PATH");
getch();
delay(100);
cleardevice();
// }
cleardevice();
setfillstyle(1,9);
bar(0,0,getmaxx(),getmaxy());
floodfill(1,1,9);
delay(1000);
setcolor(0);
rectangle(20,365,330,460);
settextstyle(0,0,1);
outtextxy(30,380,"A person leaves from Bangalore.");
outtextxy(30,410,"He wants to travel all the places");
outtextxy(40,440,"With less number of kms");
setcolor(4);
settextstyle(3,0,1);
setfillstyle(1,4);
delay(500);
outtextxy(325,170,"1.Bangalore");
fillellipse(320,170,3,3);
delay(500);
outtextxy(0,90,"5.Chikmagalur");
fillellipse(80,90,3,3);
delay(500);
outtextxy(120,10,"6.Shimoga");
fillellipse(160,10,3,3);
delay(500);
outtextxy(220,10,"7.Hampi");
fillellipse(240,10,3,3);
delay(500);
outtextxy(325,90,"8.Chitradurga");
fillellipse(320,90,3,3);
delay(500);
outtextxy(240,255,"2.Mysore");
fillellipse(240,250,3,3);
delay(500);
outtextxy(150,255,"3.Madikeri");
fillellipse(160,250,3,3);
delay(500);
outtextxy(0,170,"4.Dharmasthala");
fillellipse(80,170,3,3);
delay(1000);
setcolor(0);
circle(325,160,4);
line(325,164,325,174);
line(322,169,328,169);
line(322,174,328,174);
delay(1000);
settextstyle(0,0,1);
setcolor(0);
for(i=0;i<140;i+=15)
{
line(350,307+i,getmaxx()-1,307+i);
}
for(i=0;i<300;i+=32)
{
line(350+i,307,350+i,442);
}


outtextxy(360,310,"d   1   2   3   4   5   6   7   8");
outtextxy(360,325,"1   0  144 267 297 245 301 340 201");
outtextxy(370,450,"* d -> distance in kms");
delay(500);
setcolor(4);
line(320,170,240,250);
line(320,170,160,250);
line(320,170,80,170);
line(320,170,80,90);
line(320,170,160,10);
line(320,170,240,10);
line(320,170,320,90);

delay(1000);
setcolor(0);
outtextxy(360,340,"2  144  0  117 215 188 245 426 285");
delay(500);
setcolor(4);
line(240,250,160,250);
line(240,250,80,170);
line(240,250,80,90);
line(240,250,160,10);
line(240,250,240,10);
line(240,250,320,90);

delay(1000);
setcolor(0);
outtextxy(360,355,"3  267 117  0  122 163 256 426 281");
delay(500);
setcolor(4);
line(160,250,80,170);
line(160,250,80,90);
line(160,250,160,10);
line(160,250,240,10);
line(160,250,320,90);

delay(1000);
setcolor(0);
outtextxy(360,370,"4  297 215 122  0   87 165 373 238");
delay(500);
setcolor(4);
line(80,170,80,90);
line(80,170,160,10);
line(80,170,240,10);
line(80,170,320,90);

delay(1000);
setcolor(0);
outtextxy(360,385,"5  245 188 163  87  0   96 292 150 ");
delay(500);
setcolor(4);

line(80,90,160,10);
line(80,90,240,10);
line(80,90,320,90);

delay(1000);
setcolor(0);
outtextxy(360,400,"6  301 245 256 165  96  0  213 105 ");
delay(500);
setcolor(4);
line(160,10,240,10);
line(160,10,320,90);

delay(1000);
setcolor(0);
outtextxy(360,415,"7  340 426 426 373 292 213  0  142 ");
delay(500);
setcolor(4);
line(240,10,320,90);

delay(1000);
setcolor(0);
outtextxy(360,430,"8  201 285 281 238 150 105 142  0  ");
delay(500);

rectangle(445,10,620,280);
outtextxy(480,15,"WORKING");

delay(1000);
setcolor(0);
outtextxy(450,
30,"Bangalore");
settextstyle(0,1,1);
outtextxy(465,38,"<-");
setfillstyle(1,GREEN);
fillellipse(320,170,3,3);

getch();




    setcolor(0);
    settextstyle(0, 0, 1);
    outtextxy(450, 60, "Mysore          +144");
    settextstyle(0, 1, 1);
    outtextxy(465, 68, "<-");
    setfillstyle(1, GREEN);
    fillellipse(240, 250, 3, 3);
    setcolor(BLUE);
    line(320, 170, 240, 250);
    setcolor(9);
    circle(325, 160, 4);
    line(325, 164, 325, 174);
    line(322, 169, 328, 169);
    line(322, 174, 328, 174);
    setcolor(0);
    circle(245, 250, 4);
    line(245, 254, 245, 264);
    line(242, 259, 248, 259);
    line(242, 264, 248, 264);

    getch();

    setcolor(0);
    settextstyle(0, 0, 1);
    outtextxy(450, 90, "Madikeri        +117");
    settextstyle(0, 1, 1);
    outtextxy(465, 98, "<-");
    setfillstyle(1, GREEN);
    fillellipse(160, 250, 3, 3);
    setcolor(BLUE);
    line(240, 250, 160, 250);
    setcolor(9);
    circle(245, 250, 4);
    line(245, 254, 245, 264);
    line(242, 259, 248, 259);
    line(242, 264, 248, 264);
    setcolor(0);
    circle(165, 250, 4);
    line(165, 254, 165, 264);
    line(162, 259, 168, 259);
    line(162, 264, 168, 264);

    getch();

    setcolor(0);
    settextstyle(0, 0, 1);
   
    outtextxy(450, 120, "Dharmasthala    +122");
    settextstyle(0, 1, 1);
    outtextxy(465, 128, "<-");
    setfillstyle(1, GREEN);
    fillellipse(80, 170, 3, 3);
    setcolor(BLUE);
    line(160, 250, 80, 170);
    setcolor(9);
    circle(165, 250, 4);
    line(165, 254, 165, 264);
    line(162, 259, 168, 259);
    line(162, 264, 168, 264);
    setcolor(0);
    circle(85, 170, 4);
    line(85, 174, 85, 184);
    line(82, 179, 88, 179);
    line(82, 184, 88, 184);

    getch();

    setcolor(0);
    settextstyle(0, 0, 1);
    outtextxy(450, 150, "Chikmagalur      +87");
    settextstyle(0, 1, 1);
    outtextxy(465, 158, "<-");
    setfillstyle(1, GREEN);
    fillellipse(80, 90, 3, 3);
    setcolor(BLUE);
    line(80, 170, 80, 90);
    setcolor(9);
    circle(85, 170, 4);
    line(85, 174, 85, 184);
    line(82, 179, 88, 179);
    line(82, 184, 88, 184);
    setcolor(0);
    circle(85, 90, 4);
    line(85, 94, 85, 104);
    line(82, 99, 88, 99);
    line(82, 104, 88, 104);

    getch();

    setcolor(0);
    settextstyle(0, 0, 1);
    outtextxy(450, 180, "Shimoga          +96");
    settextstyle(0, 1, 1);
    outtextxy(465, 188, "<-");
    setfillstyle(1, GREEN);
    fillellipse(160, 10, 3, 3);
    setcolor(BLUE);
    line(80, 90, 160, 10);
    setcolor(9);
    circle(85, 90, 4);
    line(85, 94, 85, 104);
    line(82, 99, 88, 99);
    line(82, 104, 88, 104);
    setcolor(0);
    circle(165, 10, 4);
    line(165, 14, 165, 24);
    line(162, 19, 168, 19);
    line(162, 24, 168, 24);

    getch();
setcolor(0);
settextstyle(0,0,1);
outtextxy(450,210,"Chitradurga     +105");
settextstyle(0,1,1);
outtextxy(465,218,"<-");
setfillstyle(1,GREEN);
fillellipse(320,90,3,3);
setcolor(BLUE);
line(160,10,320,90);
setcolor(9);
circle(165,10,4);
line(165,14,165,24);
line(162,19,168,19);
line(162,24,168,24);
setcolor(0);
circle(325,90,4);
line(325,94,325,104);
line(322,99,328,99);
line(322,104,328,104);

getch();

setcolor(0);
settextstyle(0,0,1);
outtextxy(450,240,"Hampi           +142");
settextstyle(0,1,1);
outtextxy(465,248,"<-");
setfillstyle(1,GREEN);
fillellipse(240,10,3,3);
setcolor(BLUE);
line(320,90,240,10);
setcolor(9);
circle(325,90,4);
line(325,94,325,104);
line(322,99,328,99);
line(322,104,328,104);
setcolor(0);
circle(245,10,4);
line(245,14,245,24);
line(242,19,248,19);
line(242,24,248,24);

getch();
setcolor(0);
settextstyle(0,0,1);
outtextxy(450,270,"Total Kms       =813");

getch();
cleardevice();
setcolor(GREEN);
setfillstyle(1,GREEN);
outtextxy(325,170,"1.Bangalore");
fillellipse(320,170,3,3);
line(320,170,240,250);
line(240,250,160,250);
line(160,250,80,170);
line(80,170,80,90);
line(80,90,160,10);
line(160,10,320,90);
line(320,90,240,10);
outtextxy(0,90,"5.Chikmagalur");
fillellipse(80,90,3,3);
outtextxy(120,10,"6.Shimoga");
fillellipse(160,10,3,3);
outtextxy(220,10,"7.Hampi");
fillellipse(240,10,3,3);
outtextxy(325,90,"8.Chitradurga");
fillellipse(320,90,3,3);
outtextxy(240,255,"2.Mysore");
fillellipse(240,250,3,3);
outtextxy(150,255,"3.Madikeri");
fillellipse(160,250,3,3);
outtextxy(0,170,"4.Dharmasthala");
fillellipse(80,170,3,3);

delay(1000);
setcolor(11);
settextstyle(3,0,2);
outtextxy(30,300,"Therefore, the person can visit all the 8 places");
outtextxy(40,325,"with less number of Kms i.e., 813 kms");
outtextxy(50,350,"Using the above route map");
getch();
}
