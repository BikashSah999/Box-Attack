#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
 int gd=0,gm;
 int bx1=310,by1=449,bx2=340,by2=479,cx1,cy1,cx2,cy2,mx1,my1,mx2,my2,x=13,score=0;
 int ox1=100,oy1=0,ox2=200,oy2=30;
 int ox3=250,oy3=0,ox4=400,oy4=30;
 int ox5=440,oy5=0,ox6=550,oy6=30;
 int ox7=80+rand()%30,oy7=160,ox8=ox7+130+rand()%50,oy8=190;
 int ox9=ox8+40,oy9=160,ox10=559-rand()%30,oy10=190;
 int ox11=80,ox12=80+200+rand()%50,oy11=310,oy12=340;
 int ox13=ox12+40,oy13=310,ox14=558,oy14=340;
 int gameover=0;
 char ch;
 char scoredisp[5];
 initgraph(&gd,&gm,"C://TURBOC3/BGI");
 setbkcolor(RED);

 //defining the side rectangles
	 setcolor(YELLOW);
	 rectangle(0,0,79,479);
	 setfillstyle(1,BLUE);
	 floodfill(1,1,YELLOW);
	 rectangle(559,0,639,479);
	 setfillstyle(1,BLUE);
	 floodfill(600,10,YELLOW);

	 setcolor(YELLOW);
	 settextstyle(2,0,9);
	 outtextxy(30,5,"B");
	 outtextxy(30,35,"O");
	 outtextxy(30,65,"X");
	 outtextxy(30,125,"A");
	 outtextxy(30,155,"T");
	 outtextxy(30,185,"T");
	 outtextxy(30,215,"A");
	 outtextxy(30,245,"C");
	 outtextxy(30,275,"K");

	 setcolor(BLUE);
	 line(269,100,369,100);
	 line(269,100,269,175);
	 line(269,175,369,175);
	 line(369,175,369,250);
	 line(369,250,249,250);
	 line(249,250,249,80);
	 line(249,80,389,80);
	 line(389,80,389,250);
	 settextstyle(1,0,2);
	 outtextxy(280,300,"Loading...");
	 outtextxy(280,150,"tarters");
	 delay(3000);
	 setcolor(RED);
	 line(269,100,369,100);
	 line(269,100,269,175);
	 line(269,175,369,175);
	 line(369,175,369,250);
	 line(369,250,249,250);
	 line(249,250,249,80);
	 line(249,80,389,80);
	 line(389,80,389,250);
	 settextstyle(1,0,2);
	 outtextxy(280,300,"Loading...");
	 outtextxy(280,150,"tarters");

 // defining the game mode
	setcolor(WHITE);
	settextstyle(1,0,4);
	outtextxy(200,60,"GAME LEVEL");
	setcolor(BLUE);
	settextstyle(1,0,4);
	outtextxy(130,120,"Press e : Easy Level");
	setcolor(YELLOW);
	settextstyle(1,0,4);
	outtextxy(130,180,"Press m : Medium Level");
	setcolor(GREEN);
	settextstyle(1,0,4);
	outtextxy(130,240,"Press h : Hard Level");
	ch=getch();
	if (ch==101){
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(200,60,"GAME LEVEL");
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,120,"Press e : Easy Level");
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,180,"Press m : Medium Level");
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,240,"Press h : Hard Level");
 //defining starting of the game
	setcolor(BLUE);
	settextstyle(1,0,4);
	outtextxy(130,220,"Press Any Key To Start");
	getch();
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,220,"Press Any Key To Start");
	setcolor(YELLOW);
	settextstyle(2,0,7);
	outtextxy(578,90,"EASY");

 //defining obstacles
	//first obstacle
	setcolor(BLUE);
	rectangle(ox1,oy1,ox2,oy2);
	setfillstyle(1,BLUE);
	floodfill(ox1+1,oy1+1,BLUE);
	//second obstaccle
	setcolor(BLUE);
	rectangle(ox3,oy3,ox4,oy4);
	setfillstyle(1,BLUE);
	floodfill(ox3+1,oy3+1,BLUE);
	//third obstacle
	setcolor(BLUE);
	rectangle(ox5,oy5,ox6,oy6);
	setfillstyle(1,BLUE);
	floodfill(ox5+1,oy5+1,BLUE);
	//fourth obstacle
	setcolor(BLUE);
	rectangle(ox7,oy7,ox8,oy8);
	setfillstyle(1,BLUE);
	floodfill(ox7+1,oy7+1,BLUE);
	//fifth obstacle
	setcolor(BLUE);
	rectangle(ox9,oy9,ox10,oy10);
	setfillstyle(1,BLUE);
	floodfill(ox9+1,oy9+1,BLUE);
	//sixth obstacle
	setcolor(BLUE);
	rectangle(ox11,oy11,ox12,oy12);
	setfillstyle(1,BLUE);
	floodfill(ox11+1,oy11+1,BLUE);
	//seventh obstacle
	setcolor(BLUE);
	rectangle(ox13,oy13,ox14,oy14);
	setfillstyle(1,BLUE);
	floodfill(ox13+1,oy13+1,BLUE);

 //creating object
	setcolor(GREEN);
	rectangle(bx1,by1,bx2,by2);
	setfillstyle(1,GREEN);
	floodfill(bx1+1,by1+1,GREEN);
	setcolor(BLUE);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx1,cy1,BLUE);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx2,cy2,BLUE);
	setcolor(BLUE);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,BLUE);
	floodfill(mx1+1,my1+1,BLUE);
 //moving obstacles and object
 while(1){
 //moving obstacle
	while(!kbhit()){
	//declaring score
	setcolor(YELLOW);
	settextstyle(1,0,1);
	outtextxy(575,10,"SCORE");
	setcolor(YELLOW);
	settextstyle(1,0,3);
	sprintf(scoredisp,"%d",score);
	outtextxy(575,30,scoredisp);
	if(oy1==479||oy7==479||oy11==479){
	setcolor(BLUE);
	settextstyle(1,0,3);
	sprintf(scoredisp,"%d",score);
	outtextxy(575,30,scoredisp);
	score=score+1;
	}
	//moving first obstacle
	setcolor(RED);
	line(ox1,oy1,ox2,oy1);
	setcolor(BLUE);
	rectangle(ox1,oy1=oy1+1,ox2,oy2=oy2+1);
	setfillstyle(1,BLUE);
	floodfill(ox1+1,oy1+1,BLUE);
	if(oy1>479){
	oy1=oy1-oy1;
	oy2=oy2-oy2+30;
	ox1=80+rand()%30;
	ox2=ox1+120+rand()%30;;
	}
	//game over condition
	if(((bx1>=ox1&&bx1<=ox2)||(bx2>=ox1&&bx2<=ox2))&&((oy2>=by1&&oy2<=by2)||(oy1>=by1&&oy1<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	//moving second obstacle
	setcolor(RED);
	line(ox3,oy3,ox4,oy3);
	setcolor(BLUE);
	rectangle(ox3,oy3=oy3+1,ox4,oy4=oy4+1);
	setfillstyle(1,BLUE);
	floodfill(ox3+1,oy3+1,BLUE);
	//game over condition
	if(((bx1>=ox3&&bx1<=ox4)||(bx2>=ox3&&bx2<=ox4))&&((oy3>=by1&&oy3<=by2)||(oy4>=by1&&oy4<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy3>479){
	oy3=oy3-oy3;
	oy4=oy4-oy4+30;
	ox3=ox2+40;
	ox4=ox3+120+rand()%30;
	}
	//moving fourth obstacle
	setcolor(RED);
	line(ox7,oy7,ox8,oy7);
	setcolor(BLUE);
	rectangle(ox7,oy7=oy7+1,ox8,oy8=oy8+1);
	setfillstyle(1,BLUE);
	floodfill(ox7+1,oy7+1,BLUE);
	//game over condition
	if(((bx1>=ox7&&bx1<=ox8)||(bx2>=ox7&&bx2<=ox8))&&((oy7>=by1&&oy7<=by2)||(oy8>=by1&&oy8<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;

	}
	if(oy7>479){
	oy7=oy7-oy7;
	oy8=oy8-oy8+30;
	ox7=80+rand()%30;
	ox8=ox7+130+rand()%150;
	}
	//moving fifth obstacle
	setcolor(RED);
	line(ox9,oy9,ox10,oy9);
	setcolor(BLUE);
	rectangle(ox9,oy9=oy9+1,ox10,oy10=oy10+1);
	setfillstyle(1,BLUE);
	floodfill(ox9+1,oy9+1,BLUE);
	//game over condition
	if(((bx1>=ox9&&bx1<=ox10)||(bx2>=ox9&&bx2<=ox10))&&((oy9>=by1&&oy9<=by2)||(oy10>=by1&&oy10<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy9>479){
	oy9=oy9-oy9;
	oy10=oy10-oy10+30;
	ox9=ox8+40;
	ox10=559-rand()%30;
	}
	//moving sixth obstacle
	setcolor(RED);
	line(ox11,oy11,ox12,oy11);
	setcolor(BLUE);
	rectangle(ox11,oy11=oy11+1,ox12,oy12=oy12+1);
	setfillstyle(1,BLUE);
	floodfill(ox11+1,oy11+1,BLUE);
	//game over condition
	if(((bx1>=ox11&&bx1<=ox12)||(bx2>=ox11&&bx2<=ox12))&&((oy11>=by1&&oy11<=by2)||(oy12>=by1&&oy12<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy11>479){
	oy11=oy11-oy11;
	oy12=oy12-oy12+30;
	ox11=80;
	ox12=ox11+100+rand()%150;
	}
	//moving seventh obstacle
	setcolor(RED);
	line(ox13,oy13,ox14,oy13);
	setcolor(BLUE);
	rectangle(ox13,oy13=oy13+1,ox14,oy14=oy14+1);
	setfillstyle(1,BLUE);
	floodfill(ox13+1,oy13+1,BLUE);
	//game over condition
	if(((bx1>=ox13&&bx1<=ox14)||(bx2>=ox13&&bx2<=ox14))&&((oy13>=by1&&oy13<=by2)||(oy14>=by1&&oy14<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");	delay(1000);
	gameover=1;
	break;
	}
	if(oy13>479){
	oy13=oy13-oy13;
	oy14=oy14-oy14+30;
	ox14=558;
	ox13=ox12+40;
	}

	//moving third obstacle
	setcolor(RED);
	line(ox5,oy5,ox6,oy5);
	setcolor(BLUE);
	rectangle(ox5,oy5=oy5+1,ox6,oy6=oy6+1);
	setfillstyle(1,BLUE);
	floodfill(ox5+1,oy5+1,BLUE);
	delay(x);
	//game over condition
	if(((bx1>=ox5&&bx1<=ox6)||(bx2>=ox5&&bx2<=ox6))&&((oy5>=by1&&oy5<=by2)||(oy6>=by1&&oy6<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy5>479){
	oy5=oy5-oy5;
	oy6=oy6-oy6+30;
	ox5=ox4+40;
	ox6=ox5+50+rand()%18;
	x=x-2;
	if(x<=2){
	x=x+2;
	}
	}
	}
	if(gameover==1)
	{
		break;
	}
	ch=getch();
	if(ch==27){
	break;
	}
	else if(ch==97){
	setcolor(RED);
	rectangle(bx1,by1,bx2,by2);
	setfillstyle(1,RED);
	floodfill(bx1+1,by1+1,RED);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx1,cy1,RED);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx2,cy2,RED);
	setcolor(RED);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,RED);
	floodfill(mx1+1,my1+1,RED);
	setcolor(GREEN);
	rectangle(bx1=bx1-5,by1,bx2=bx2-5,by2);
	setfillstyle(1,GREEN);
	floodfill(bx1+1,by1+1,GREEN);
	setcolor(BLUE);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx1,cy1,BLUE);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx2,cy2,BLUE);
	setcolor(BLUE);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,BLUE);
	floodfill(mx1+1,my1+1,BLUE);
	//game over condition while touchng left box
	if(bx1<=79){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	gameover=1;
	delay(1000);
	break;
	}
	}
	else if(ch==100){
	setcolor(RED);
	rectangle(bx1,by1,bx2,by2);
	setfillstyle(1,RED);
	floodfill(bx1+1,by1+1,RED);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx1,cy1,RED);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx2,cy2,RED);
	setcolor(RED);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,RED);
	floodfill(mx1+1,my1+1,RED);
	setcolor(GREEN);
	rectangle(bx1=bx1+5,by1,bx2=bx2+5,by2);
	setfillstyle(1,GREEN);
	floodfill(bx1+1,by1+1,GREEN);
	setcolor(BLUE);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx1,cy1,BLUE);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx2,cy2,BLUE);
	setcolor(BLUE);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,BLUE);
	floodfill(mx1+1,my1+1,BLUE);
	//game over condition while touchng right box
	if(bx2>=559){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	}

 }

 while(1){
 ch=getch();
    if(ch==13){
	main();
    }
   if(ch==27){
	exit(0);
  }
  }
  }
else if(ch==109){
	x=9;
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(200,60,"GAME LEVEL");
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,120,"Press e : Easy Level");
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,180,"Press m : Medium Level");
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,240,"Press h : Hard Level");
 //defining starting of the game
	setcolor(BLUE);
	settextstyle(1,0,4);
	outtextxy(130,220,"Press Any Key To Start");
	getch();
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,220,"Press Any Key To Start");

	setcolor(YELLOW);
	settextstyle(2,0,7);
	outtextxy(565,90,"Medium");

 //defining obstacles
	//first obstacle
	setcolor(BLUE);
	rectangle(ox1,oy1,ox2,oy2);
	setfillstyle(1,BLUE);
	floodfill(ox1+1,oy1+1,BLUE);
	//second obstaccle
	setcolor(BLUE);
	rectangle(ox3,oy3,ox4,oy4);
	setfillstyle(1,BLUE);
	floodfill(ox3+1,oy3+1,BLUE);
	//third obstacle
	setcolor(BLUE);
	rectangle(ox5,oy5,ox6,oy6);
	setfillstyle(1,BLUE);
	floodfill(ox5+1,oy5+1,BLUE);
	//fourth obstacle
	setcolor(BLUE);
	rectangle(ox7,oy7,ox8,oy8);
	setfillstyle(1,BLUE);
	floodfill(ox7+1,oy7+1,BLUE);
	//fifth obstacle
	setcolor(BLUE);
	rectangle(ox9,oy9,ox10,oy10);
	setfillstyle(1,BLUE);
	floodfill(ox9+1,oy9+1,BLUE);
	//sixth obstacle
	setcolor(BLUE);
	rectangle(ox11,oy11,ox12,oy12);
	setfillstyle(1,BLUE);
	floodfill(ox11+1,oy11+1,BLUE);
	//seventh obstacle
	setcolor(BLUE);
	rectangle(ox13,oy13,ox14,oy14);
	setfillstyle(1,BLUE);
	floodfill(ox13+1,oy13+1,BLUE);

 //creating object
	setcolor(GREEN);
	rectangle(bx1,by1,bx2,by2);
	setfillstyle(1,GREEN);
	floodfill(bx1+1,by1+1,GREEN);
	setcolor(BLUE);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx1,cy1,BLUE);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx2,cy2,BLUE);
	setcolor(BLUE);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,BLUE);
	floodfill(mx1+1,my1+1,BLUE);
 //moving obstacles and object
 while(1){
 //moving obstacle
	while(!kbhit()){
	//declaring score
	setcolor(YELLOW);
	settextstyle(1,0,1);
	outtextxy(575,10,"SCORE");
	setcolor(YELLOW);
	settextstyle(1,0,3);
	sprintf(scoredisp,"%d",score);
	outtextxy(575,30,scoredisp);
	if(oy1==479||oy7==479||oy11==479){
	setcolor(BLUE);
	settextstyle(1,0,3);
	sprintf(scoredisp,"%d",score);
	outtextxy(575,30,scoredisp);
	score=score+1;
	}
	//moving first obstacle
	setcolor(RED);
	line(ox1,oy1,ox2,oy1);
	setcolor(BLUE);
	rectangle(ox1,oy1=oy1+1,ox2,oy2=oy2+1);
	setfillstyle(1,BLUE);
	floodfill(ox1+1,oy1+1,BLUE);
	if(oy1>479){
	oy1=oy1-oy1;
	oy2=oy2-oy2+30;
	ox1=80+rand()%30;
	ox2=ox1+120+rand()%30;;
	}
	//game over condition
	if(((bx1>=ox1&&bx1<=ox2)||(bx2>=ox1&&bx2<=ox2))&&((oy2>=by1&&oy2<=by2)||(oy1>=by1&&oy1<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	//moving second obstacle
	setcolor(RED);
	line(ox3,oy3,ox4,oy3);
	setcolor(BLUE);
	rectangle(ox3,oy3=oy3+1,ox4,oy4=oy4+1);
	setfillstyle(1,BLUE);
	floodfill(ox3+1,oy3+1,BLUE);
	//game over condition
	if(((bx1>=ox3&&bx1<=ox4)||(bx2>=ox3&&bx2<=ox4))&&((oy3>=by1&&oy3<=by2)||(oy4>=by1&&oy4<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy3>479){
	oy3=oy3-oy3;
	oy4=oy4-oy4+30;
	ox3=ox2+40;
	ox4=ox3+120+rand()%30;
	}
	//moving fourth obstacle
	setcolor(RED);
	line(ox7,oy7,ox8,oy7);
	setcolor(BLUE);
	rectangle(ox7,oy7=oy7+1,ox8,oy8=oy8+1);
	setfillstyle(1,BLUE);
	floodfill(ox7+1,oy7+1,BLUE);
	//game over condition
	if(((bx1>=ox7&&bx1<=ox8)||(bx2>=ox7&&bx2<=ox8))&&((oy7>=by1&&oy7<=by2)||(oy8>=by1&&oy8<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;

	}
	if(oy7>479){
	oy7=oy7-oy7;
	oy8=oy8-oy8+30;
	ox7=80+rand()%30;
	ox8=ox7+110+rand()%170;
	}
	//moving fifth obstacle
	setcolor(RED);
	line(ox9,oy9,ox10,oy9);
	setcolor(BLUE);
	rectangle(ox9,oy9=oy9+1,ox10,oy10=oy10+1);
	setfillstyle(1,BLUE);
	floodfill(ox9+1,oy9+1,BLUE);
	//game over condition
	if(((bx1>=ox9&&bx1<=ox10)||(bx2>=ox9&&bx2<=ox10))&&((oy9>=by1&&oy9<=by2)||(oy10>=by1&&oy10<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy9>479){
	oy9=oy9-oy9;
	oy10=oy10-oy10+30;
	ox9=ox8+40;
	ox10=559-rand()%30;
	}
	//moving sixth obstacle
	setcolor(RED);
	line(ox11,oy11,ox12,oy11);
	setcolor(BLUE);
	rectangle(ox11,oy11=oy11+1,ox12,oy12=oy12+1);
	setfillstyle(1,BLUE);
	floodfill(ox11+1,oy11+1,BLUE);
	//game over condition
	if(((bx1>=ox11&&bx1<=ox12)||(bx2>=ox11&&bx2<=ox12))&&((oy11>=by1&&oy11<=by2)||(oy12>=by1&&oy12<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy11>479){
	oy11=oy11-oy11;
	oy12=oy12-oy12+30;
	ox11=80;
	ox12=ox11+70+rand()%170;
	}
	//moving seventh obstacle
	setcolor(RED);
	line(ox13,oy13,ox14,oy13);
	setcolor(BLUE);
	rectangle(ox13,oy13=oy13+1,ox14,oy14=oy14+1);
	setfillstyle(1,BLUE);
	floodfill(ox13+1,oy13+1,BLUE);
	//game over condition
	if(((bx1>=ox13&&bx1<=ox14)||(bx2>=ox13&&bx2<=ox14))&&((oy13>=by1&&oy13<=by2)||(oy14>=by1&&oy14<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");	delay(1000);
	gameover=1;
	break;
	}
	if(oy13>479){
	oy13=oy13-oy13;
	oy14=oy14-oy14+30;
	ox14=558;
	ox13=ox12+40;
	}

	//moving third obstacle
	setcolor(RED);
	line(ox5,oy5,ox6,oy5);
	setcolor(BLUE);
	rectangle(ox5,oy5=oy5+1,ox6,oy6=oy6+1);
	setfillstyle(1,BLUE);
	floodfill(ox5+1,oy5+1,BLUE);
	delay(x);
	//game over condition
	if(((bx1>=ox5&&bx1<=ox6)||(bx2>=ox5&&bx2<=ox6))&&((oy5>=by1&&oy5<=by2)||(oy6>=by1&&oy6<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy5>479){
	oy5=oy5-oy5;
	oy6=oy6-oy6+30;
	ox5=ox4+40;
	ox6=ox5+50+rand()%18;
	x=x-2;
	if(x<=1){
	x=x+1;
	}
	}
	}
	if(gameover==1)
	{
		break;
	}
	ch=getch();
	if(ch==27){
	break;
	}
	else if(ch==97){
	setcolor(RED);
	rectangle(bx1,by1,bx2,by2);
	setfillstyle(1,RED);
	floodfill(bx1+1,by1+1,RED);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx1,cy1,RED);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx2,cy2,RED);
	setcolor(RED);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,RED);
	floodfill(mx1+1,my1+1,RED);
	setcolor(GREEN);
	rectangle(bx1=bx1-5,by1,bx2=bx2-5,by2);
	setfillstyle(1,GREEN);
	floodfill(bx1+1,by1+1,GREEN);
	setcolor(BLUE);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx1,cy1,BLUE);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx2,cy2,BLUE);
	setcolor(BLUE);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,BLUE);
	floodfill(mx1+1,my1+1,BLUE);
	//game over condition while touchng left box
	if(bx1<=79){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	gameover=1;
	delay(1000);
	break;
	}
	}
	else if(ch==100){
	setcolor(RED);
	rectangle(bx1,by1,bx2,by2);
	setfillstyle(1,RED);
	floodfill(bx1+1,by1+1,RED);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx1,cy1,RED);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx2,cy2,RED);
	setcolor(RED);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,RED);
	floodfill(mx1+1,my1+1,RED);
	setcolor(GREEN);
	rectangle(bx1=bx1+5,by1,bx2=bx2+5,by2);
	setfillstyle(1,GREEN);
	floodfill(bx1+1,by1+1,GREEN);
	setcolor(BLUE);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx1,cy1,BLUE);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx2,cy2,BLUE);
	setcolor(BLUE);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,BLUE);
	floodfill(mx1+1,my1+1,BLUE);
	//game over condition while touchng right box
	if(bx2>=559){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	}

 }

 while(1){
 ch=getch();
    if(ch==13){
	main();
    }
   if(ch==27){
	exit(0);
  }
  }
  }
 else if(ch==104){
	x=5;
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(200,60,"GAME LEVEL");
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,120,"Press e : Easy Level");
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,180,"Press m : Medium Level");
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,240,"Press h : Hard Level");
 //defining starting of the game
	setcolor(BLUE);
	settextstyle(1,0,4);
	outtextxy(130,220,"Press Any Key To Start");
	getch();
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(130,220,"Press Any Key To Start");
	setcolor(YELLOW);
	settextstyle(2,0,7);
	outtextxy(578,90,"HARD");

 //defining obstacles
	//first obstacle
	setcolor(BLUE);
	rectangle(ox1,oy1,ox2,oy2);
	setfillstyle(1,BLUE);
	floodfill(ox1+1,oy1+1,BLUE);
	//second obstaccle
	setcolor(BLUE);
	rectangle(ox3,oy3,ox4,oy4);
	setfillstyle(1,BLUE);
	floodfill(ox3+1,oy3+1,BLUE);
	//third obstacle
	setcolor(BLUE);
	rectangle(ox5,oy5,ox6,oy6);
	setfillstyle(1,BLUE);
	floodfill(ox5+1,oy5+1,BLUE);
	//fourth obstacle
	setcolor(BLUE);
	rectangle(ox7,oy7,ox8,oy8);
	setfillstyle(1,BLUE);
	floodfill(ox7+1,oy7+1,BLUE);
	//fifth obstacle
	setcolor(BLUE);
	rectangle(ox9,oy9,ox10,oy10);
	setfillstyle(1,BLUE);
	floodfill(ox9+1,oy9+1,BLUE);
	//sixth obstacle
	setcolor(BLUE);
	rectangle(ox11,oy11,ox12,oy12);
	setfillstyle(1,BLUE);
	floodfill(ox11+1,oy11+1,BLUE);
	//seventh obstacle
	setcolor(BLUE);
	rectangle(ox13,oy13,ox14,oy14);
	setfillstyle(1,BLUE);
	floodfill(ox13+1,oy13+1,BLUE);

 //creating object
	setcolor(GREEN);
	rectangle(bx1,by1,bx2,by2);
	setfillstyle(1,GREEN);
	floodfill(bx1+1,by1+1,GREEN);
	setcolor(BLUE);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx1,cy1,BLUE);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx2,cy2,BLUE);
	setcolor(BLUE);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,BLUE);
	floodfill(mx1+1,my1+1,BLUE);
 //moving obstacles and object
 while(1){
 //moving obstacle
	while(!kbhit()){
	//declaring score
	setcolor(YELLOW);
	settextstyle(1,0,1);
	outtextxy(575,10,"SCORE");
	setcolor(YELLOW);
	settextstyle(1,0,3);
	sprintf(scoredisp,"%d",score);
	outtextxy(575,30,scoredisp);
	if(oy1==479||oy7==479||oy11==479){
	setcolor(BLUE);
	settextstyle(1,0,3);
	sprintf(scoredisp,"%d",score);
	outtextxy(575,30,scoredisp);
	score=score+1;
	}
	if (score>15){
	x=x-1;}

	//moving first obstacle
	setcolor(RED);
	line(ox1,oy1,ox2,oy1);
	setcolor(BLUE);
	rectangle(ox1,oy1=oy1+1,ox2,oy2=oy2+1);
	setfillstyle(1,BLUE);
	floodfill(ox1+1,oy1+1,BLUE);
	if(oy1>479){
	oy1=oy1-oy1;
	oy2=oy2-oy2+30;
	ox1=80+rand()%30;
	ox2=ox1+120+rand()%30;;
	}
	//game over condition
	if(((bx1>=ox1&&bx1<=ox2)||(bx2>=ox1&&bx2<=ox2))&&((oy2>=by1&&oy2<=by2)||(oy1>=by1&&oy1<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	//moving second obstacle
	setcolor(RED);
	line(ox3,oy3,ox4,oy3);
	setcolor(BLUE);
	rectangle(ox3,oy3=oy3+1,ox4,oy4=oy4+1);
	setfillstyle(1,BLUE);
	floodfill(ox3+1,oy3+1,BLUE);
	//game over condition
	if(((bx1>=ox3&&bx1<=ox4)||(bx2>=ox3&&bx2<=ox4))&&((oy3>=by1&&oy3<=by2)||(oy4>=by1&&oy4<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy3>479){
	oy3=oy3-oy3;
	oy4=oy4-oy4+30;
	ox3=ox2+40;
	ox4=ox3+120+rand()%30;
	}
	//moving fourth obstacle
	setcolor(RED);
	line(ox7,oy7,ox8,oy7);
	setcolor(BLUE);
	rectangle(ox7,oy7=oy7+1,ox8,oy8=oy8+1);
	setfillstyle(1,BLUE);
	floodfill(ox7+1,oy7+1,BLUE);
	//game over condition
	if(((bx1>=ox7&&bx1<=ox8)||(bx2>=ox7&&bx2<=ox8))&&((oy7>=by1&&oy7<=by2)||(oy8>=by1&&oy8<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;

	}
	if(oy7>479){
	oy7=oy7-oy7;
	oy8=oy8-oy8+30;
	ox7=80+rand()%30;
	ox8=ox7+200+rand()%50;
	}
	//moving fifth obstacle
	setcolor(RED);
	line(ox9,oy9,ox10,oy9);
	setcolor(BLUE);
	rectangle(ox9,oy9=oy9+1,ox10,oy10=oy10+1);
	setfillstyle(1,BLUE);
	floodfill(ox9+1,oy9+1,BLUE);
	//game over condition
	if(((bx1>=ox9&&bx1<=ox10)||(bx2>=ox9&&bx2<=ox10))&&((oy9>=by1&&oy9<=by2)||(oy10>=by1&&oy10<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy9>479){
	oy9=oy9-oy9;
	oy10=oy10-oy10+30;
	ox9=ox8+40;
	ox10=559-rand()%30;
	}
	//moving sixth obstacle
	setcolor(RED);
	line(ox11,oy11,ox12,oy11);
	setcolor(BLUE);
	rectangle(ox11,oy11=oy11+1,ox12,oy12=oy12+1);
	setfillstyle(1,BLUE);
	floodfill(ox11+1,oy11+1,BLUE);
	//game over condition
	if(((bx1>=ox11&&bx1<=ox12)||(bx2>=ox11&&bx2<=ox12))&&((oy11>=by1&&oy11<=by2)||(oy12>=by1&&oy12<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy11>479){
	oy11=oy11-oy11;
	oy12=oy12-oy12+30;
	ox11=80;
	ox12=ox11+150+rand()%50;
	}
	//moving seventh obstacle
	setcolor(RED);
	line(ox13,oy13,ox14,oy13);
	setcolor(BLUE);
	rectangle(ox13,oy13=oy13+1,ox14,oy14=oy14+1);
	setfillstyle(1,BLUE);
	floodfill(ox13+1,oy13+1,BLUE);
	//game over condition
	if(((bx1>=ox13&&bx1<=ox14)||(bx2>=ox13&&bx2<=ox14))&&((oy13>=by1&&oy13<=by2)||(oy14>=by1&&oy14<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");	delay(1000);
	gameover=1;
	break;
	}
	if(oy13>479){
	oy13=oy13-oy13;
	oy14=oy14-oy14+30;
	ox14=558;
	ox13=ox12+40;
	}

	//moving third obstacle
	setcolor(RED);
	line(ox5,oy5,ox6,oy5);
	setcolor(BLUE);
	rectangle(ox5,oy5=oy5+1,ox6,oy6=oy6+1);
	setfillstyle(1,BLUE);
	floodfill(ox5+1,oy5+1,BLUE);
	delay(x);
	//game over condition
	if(((bx1>=ox5&&bx1<=ox6)||(bx2>=ox5&&bx2<=ox6))&&((oy5>=by1&&oy5<=by2)||(oy6>=by1&&oy6<=by2))){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	if(oy5>479){
	oy5=oy5-oy5;
	oy6=oy6-oy6+30;
	ox5=ox4+40;
	ox6=ox5+50+rand()%18;
	x=x-1;
	if(x<=4){
	x=x+1;
	}
	}
	}
	if(gameover==1)
	{
		break;
	}
	ch=getch();
	if(ch==27){
	break;
	}
	else if(ch==97){
	setcolor(RED);
	rectangle(bx1,by1,bx2,by2);
	setfillstyle(1,RED);
	floodfill(bx1+1,by1+1,RED);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx1,cy1,RED);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx2,cy2,RED);
	setcolor(RED);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,RED);
	floodfill(mx1+1,my1+1,RED);
	setcolor(GREEN);
	rectangle(bx1=bx1-5,by1,bx2=bx2-5,by2);
	setfillstyle(1,GREEN);
	floodfill(bx1+1,by1+1,GREEN);
	setcolor(BLUE);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx1,cy1,BLUE);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx2,cy2,BLUE);
	setcolor(BLUE);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,BLUE);
	floodfill(mx1+1,my1+1,BLUE);
	//game over condition while touchng left box
	if(bx1<=79){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	gameover=1;
	delay(1000);
	break;
	}
	}
	else if(ch==100){
	setcolor(RED);
	rectangle(bx1,by1,bx2,by2);
	setfillstyle(1,RED);
	floodfill(bx1+1,by1+1,RED);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx1,cy1,RED);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,RED);
	floodfill(cx2,cy2,RED);
	setcolor(RED);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,RED);
	floodfill(mx1+1,my1+1,RED);
	setcolor(GREEN);
	rectangle(bx1=bx1+5,by1,bx2=bx2+5,by2);
	setfillstyle(1,GREEN);
	floodfill(bx1+1,by1+1,GREEN);
	setcolor(BLUE);
	circle(cx1=bx1+7,cy1=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx1,cy1,BLUE);
	circle(cx2=bx2-7,cy2=by1+10,3);
	setfillstyle(1,BLUE);
	floodfill(cx2,cy2,BLUE);
	setcolor(BLUE);
	rectangle(mx1=bx1+7,my1=by1+22,mx2=bx2-7,my2=by1+25);
	setfillstyle(1,BLUE);
	floodfill(mx1+1,my1+1,BLUE);
	//game over condition while touchng right box
	if(bx2>=559){
	setcolor(WHITE);
	settextstyle(1,0,5);
	outtextxy(200,170,"GAME OVER");
	settextstyle(1,0,2);
	outtextxy(130,240,"Press Enter to restart and Esc to exit");
	delay(1000);
	gameover=1;
	break;
	}
	}

 }

 while(1){
 ch=getch();
    if(ch==13){
	main();
    }
   if(ch==27){
	exit(0);
  }
  }
 }
 else{
 setcolor(WHITE);
 settextstyle(1,0,4);
 outtextxy(220,400,"Invalid Input");
 delay(2000);
 main();
 }
  closegraph();
}