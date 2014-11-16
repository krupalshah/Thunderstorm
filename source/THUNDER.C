#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h> //for random no. generator



void main()
{

int gd=DETECT,gm,mountain[12],i,j,x=0,y=0,t1[12],t2[12];
initgraph(&gd,&gm,"c:\\tc\\bgi");

setbkcolor(LIGHTBLUE);
mountain[0]=0;
mountain[1]=330;
mountain[2]=160;
mountain[3]=10;
mountain[4]=320;
mountain[5]=330;
mountain[6]=480;
mountain[7]=10;
mountain[8]=640;
mountain[9]=330;
mountain[10]=0;
mountain[11]=330;


t1[0]=10;
t1[1]=50;
t1[2]=200;
t1[3]=20;
t1[4]=210;
t1[5]=40;
t1[6]=380;
t1[7]=10;
t1[8]=200;
t1[9]=80;
t1[10]=10;
t1[11]=50;


t2[0]=50+200;
t2[1]=50+20;
t2[2]=200+200;
t2[3]=20+20;
t2[4]=210+200;
t2[5]=40+20;
t2[6]=400+200;
t2[7]=10+20;
t2[8]=220+200;
t2[9]=80+20;
t2[10]=50+100;
t2[11]=50+20;



//mountain
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,DARKGRAY);
fillpoly(6,mountain);

//lawn
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
bar(0,331,640,480);


//sun
for(i=255;i>=35;i=i-5)
{
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);

fillellipse(320,i,30,35);

delay(2*i-70);

setcolor(LIGHTBLUE);
setfillstyle(SOLID_FILL,LIGHTBLUE);

fillellipse(320,i,30,35);
}





for(j=0;j<150;j++)
{


//thunder1
setcolor(CYAN);
setfillstyle(SOLID_FILL,CYAN);
fillpoly(6,t1);

delay(25);

//thunder1
setcolor(CYAN);
setfillstyle(SOLID_FILL,CYAN);
fillpoly(6,t2);


//rain
x=random(640);
y=random(480);

setcolor(CYAN);
setfillstyle(SOLID_FILL,15);

sector(x,y,87,90,8,8);
sector(x+10,y+10,87,90,8,8);
sector(x+20,y,87,90,8,8);
sector(x+30,y+10,87,90,8,8);

delay(25);



setcolor(LIGHTCYAN);
setfillstyle(SOLID_FILL,LIGHTCYAN);
fillpoly(6,t1);

delay(25);

setcolor(LIGHTCYAN);
setfillstyle(SOLID_FILL,LIGHTCYAN);
fillpoly(6,t2);


}

getch();
closegraph();
}