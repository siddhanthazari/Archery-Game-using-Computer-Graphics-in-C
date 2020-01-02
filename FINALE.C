#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>
void shoot(int);                    //   line(280,160,280,0);
void villlian();
void game3();
void herro();
int move();
void master();
void elli1();
void imast();
void score(int);
void elli();
void game1();
void game2();
void g1();
void g2();
void loading();
void new_b();
void mirror();
void blast();
void arrow();
void bounce(int);
void newsflash();
void front();
void rain();
void old_b();
void hero();
void dialog_box();
void border();
void villian();
void dialog_boxH();
void dialog_boxV();
void new_dialog();
void hostages();
void hostages1();
void villian1();
void hostway();
void main_hero();
void newsflash1();
void lose();
void end();
void win();
void countdown();
void convo1();
void convo2();
void newsflash2();
void tutorial();
void in1();
void in2();
int fx,fy,c1;
void main()
{
  int gd=DETECT,gm,b;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
 front();
  new_b();cleardevice();newsflash();cleardevice();
  old_b();getch();new_b();old_b();getch();cleardevice();
  imast();cleardevice();master();cleardevice();
  newsflash1();cleardevice();
  arrow();
  blast();
  for(b=1;b<=5;b++)
  bounce(b);
  mirror(); nosound();cleardevice();
  main_hero();getch();cleardevice();
  newsflash2();
  hostway();convo1();cleardevice();
  in1();setbkcolor(0);tutorial();
  settextstyle(1,0,4);setcolor(15);outtextxy(5,5,"Kick off your skills before challenge");
  game1();loading();                        //try real challenge
  in2();setbkcolor(0);cleardevice();villlian();
  outtextxy(125,220,"GET READY ARROW ... HAHA");getch();cleardevice();
  setbkcolor(0);game2();cleardevice();                    //real game
  if(c1>=150)
  { convo2();//showdown
     countdown();
    game3(); }
  else
  {lose();getch();
  end();}
  getch();
  closegraph();
}
//-----------------------------------

void convo1()
{
 printf("\n\n\n\n\n\n\nDEVIL : Who you are ");getch();
 printf("\n\n\t\tOLIVER : I am ARROW ");           getch();
 printf("\n\nDEVIL : CAN you even shoot an arrow properly, hahaha"); getch();
 printf("\n\n\t\tOLIVER : You will know about my skill soon . . ."); getch();
 printf("\n\nDEVIL : Okay lets have a deal, you complete the challenge and in return i will free the hostages");getch();
 printf("\n\n\t\tOLIVER : okay keep your promise then or i will kill you");getch();
}
void convo2()
{
 printf("\n\n\t\tNow free the hostages as you promised and leave the city ..");getch();
 printf("\n\nDEVIL : PROMISES are made for breaking . .ha ha lol :D"); villlian();getch();
 printf("\n\n\t\tOLIVER : You leave me with no choice than killing you");getch();
 printf("\n\nDEVIL: Let us see ...in final showdown");getch();
 cleardevice();
}
void in1()
{
  setbkcolor(5);
settextstyle(4,0,6);
setcolor(4);
outtextxy(30,10,"Instructions");
settextstyle(1,0,3);
setcolor(14);
outtextxy(30,119,"1. There is a stationary target.");sleep(1);
outtextxy(30,159,"2. The arrow will be rotating from top to bottom ");sleep(1);
outtextxy(30,189," and from bottom to top only once.");sleep(1);
outtextxy(30,229,"3. Press 'S' to shoot.");sleep(1);
outtextxy(30,259,"4. You will be awarded different scores for different colours.");sleep(1);
outtextxy(30,299,"5. The scores are as follows:");getch(); cleardevice();
}

void in2()
{      setbkcolor(5);
settextstyle(4,0,6);
setcolor(4);
outtextxy(30,10,"Instructions");
settextstyle(1,0,3);
setcolor(14);
outtextxy(30,119,"1. There are certain changes here");sleep(1);
outtextxy(30,159,"2. The size of the target is reduced. ");sleep(1);
outtextxy(30,199,"3. The target is shifted upwards.");sleep(1);
outtextxy(30,239,"4. The bow is shifted downwards.");sleep(1);
outtextxy(30,279,"5. Rest everything remains the same.");getch();
}

void tutorial()
{  int x=80;
  setfillstyle(1,1);
      setcolor(1);
     fillellipse(80,230,80,200);
    setfillstyle(1,3);
      setcolor(3);
     fillellipse(80,230,60,150);
	setfillstyle(1,2);
      setcolor(2);
     fillellipse(80,230,40,100);
	setfillstyle(1,4);
      setcolor(4);
     fillellipse(80,230,20,50);
     setcolor(5);
     setlinestyle(1,1,3);
line(x,150,250,150);

outtextxy(260,148,"30");
line(x,225,250,225);
outtextxy(260,220,"40");
line(x,110,250,110);
outtextxy(260,105,"20");
line(x,65,250,65);
outtextxy(260,60,"10");
getch();
cleardevice();
}
void countdown()
{
   int i;
   char a[5];
   settextjustify( CENTER_TEXT, CENTER_TEXT );
   settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
   setcolor(RED);

   for (i = 10; i >=0; i--)
   {
      sprintf(a,"%d",i);
      outtextxy(getmaxx()/2, getmaxy()/2, a);
      sleep(1);
      cleardevice();
   }
    settextjustify( CENTER_TEXT, CENTER_TEXT );
    settextstyle(1,0,6);setcolor(YELLOW);
    outtextxy(getmaxx()/2,getmaxy()/2,"GET READY");

   getch();
   cleardevice();
}
void master()
{
	int x=0,y=10,i;
	setcolor(YELLOW);
	settextstyle(1,0,2);
	outtextxy(0,0,"MASTER: I taught you whatever i could in this span of 5");sleep(1);
	outtextxy(25,48,"months,Today i will be giving you last lesson for Life .");sleep(1);
	outtextxy(90,160,"WATCH THE picture shown to you . .");delay(1000);
	outtextxy(90,200," Now Count the black dots .");delay(900);
	outtextxy(90,200," Now Count the black dots . .");delay(900);
	outtextxy(90,200," Now Count the black dots . . .");delay(900);
	outtextxy(90,200," Now Count the black dots . . . .");delay(1200);
	cleardevice();dot();getch();cleardevice();
	gotoxy(10,120);printf("\nMASTER : So how many black dots appeared and vanished before you . .\n     Sometimes in Life , some things may appear or illusioned before you by others . But never fall prey in those circumstances ,keep your head steady and then only make a move..\n \n ");sleep(6);
	printf("\n\n   Now look at the next image. . . . ");
	getch();
	cleardevice();
	setcolor(14);circ();getch();
	cleardevice();outtextxy(80,240,"The sides of the rectangle are straight");
	cleardevice();outtextxy(50,220,"The sides seemed bent are actually straight");delay(1500);
	cleardevice(); gotoxy(0,0);border();
	printf("\nMASTER : Everything is not the way it seems ,\n take time never jump on conclusions ..\n  ");sleep(3);
	printf("\n\n\t\tOLIVER : I am obliged to learn lessons from you , you \n\t\t     totally transformed me .");sleep(3);
	printf("\n\n\nMASTER : Remember one thing my child ...\n           A man cannot live two lives with one name ..");sleep(3);
	printf("\n\n\n\t\tOLIVER : Master i didnot understand what you meant by that..");sleep(2);
	printf("\n\n\n MASTER : 'TIME EXPLAINS EVERYTHING'");getch();  cleardevice();
	outtextxy(getmaxx()/2-100,getmaxy()-100,"OLIVER QUEEN leaves mt. Albasta .");sleep(1);
	outtextxy(getmaxx()/2-100,getmaxy()-100,"OLIVER QUEEN leaves mt. Albasta . . ");sleep(1);
	outtextxy(getmaxx()/2-100,getmaxy()-100,"OLIVER QUEEN leaves mt. Albasta . . .");sleep(1);
	getch();cleardevice();//border();
	outtextxy(10,10,"Present day .");sleep(1);
	outtextxy(10,10,"Present day . .");sleep(1);
	outtextxy(10,10,"Present day . . .");sleep(1);
	outtextxy(10,10,"Present day . . . .");sleep(1);
	//loading();//newsflash();
	getch();
	cleardevice();
}
void end()
{  int i,j;
 setcolor(5);
   settextstyle(4,0,6);
   for(j=10;j<=110;j+=2)
   {
     outtextxy(250,j,"ARROW");
     delay(20);
     cleardevice();
   }
    outtextxy(250,100,"ARROW");
    getch();
    cleardevice();

    setcolor(4);
    settextstyle(4,0,5);

    for(i=10;i<=150;i+=2)
    {
      outtextxy(i,200,"Project By:");
      delay(20);
      cleardevice();
    }
      outtextxy(150,200,"Project By:");
      getch();
      cleardevice();

	setcolor(14);
    settextstyle(4,0,4);
      for(i=10,j=10;i<=210,j<=210;i+=2,j+=2)
      {
       outtextxy(i,j,"SIDDHANT");
       outtextxy(630-i,j,"HAZARI");
       delay(20);
       cleardevice();
      }
	  outtextxy(210,210,"SIDDHANT");
       outtextxy(420,210,"HAZARI");
      getch();
      cleardevice();
	 for(i=10,j=10;i<=220,j<=220;i+=2,j+=2)
      {
       outtextxy(i,j,"AJINKYA");
       outtextxy(630-i,j,"WASNIK");
       delay(20);
       cleardevice();
      }
	  outtextxy(220,220,"AJINKYA");
       outtextxy(410,220,"WASNIK");
      getch();
      cleardevice();
	 for(i=10,j=10;i<=220,j<=220;i+=2,j+=2)
      {
       outtextxy(i,j,"SHAADAB");
       outtextxy(630-i,j,"IQBAL");
       delay(20);
       cleardevice();
      }
	  outtextxy(220,220,"SHAADAB");
       outtextxy(410,220,"IQBAL");
      getch();
      cleardevice();

      setcolor(5);
      settextstyle(4,0,6);
      outtextxy(250,100,"ARROW");
       setcolor(4);
      settextstyle(4,0,5);
      outtextxy(150,200,"Project By:");
      setcolor(14);
      settextstyle(7,0,4);
      outtextxy(300,300,"SIDDHANT HAZARI");
      outtextxy(300,350,"AJINKYA WASNIK");
      outtextxy(300,400,"SHAADAB IQBAL");
      sleep(2);
 getch();
}
void newsflash1()
{
 setcolor(14);setfillstyle(2,14);
 bar(0,0,getmaxx(),130);
 bar(0,479-130,getmaxx(),479);setcolor(RED);settextstyle(1,0,7);
 outtextxy(70,50,"BREAKING NEWS");settextstyle(1,0,7);
 outtextxy(70,380,"BREAKING NEWS");sleep(1);settextstyle(1,0,4);
 outtextxy(70,200,"No one knows where he was . . .");sleep(2);
 outtextxy(70,230,"How he was . . .");sleep(2);
 outtextxy(70,260,"but he has finally returned . . .");sleep(2);
 cleardevice();bar(0,0,getmaxx(),130);
 bar(0,479-130,getmaxx(),479);setcolor(RED);settextstyle(1,0,7);
 outtextxy(70,50,"BREAKING NEWS");settextstyle(1,0,7);
 outtextxy(70,380,"BREAKING NEWS");settextstyle(1,0,5);setcolor(79);//sound(200);delay(300);nosound();sound(400);delay(200);nosound();sound(500);delay(200);nosound();
 outtextxy(70,224,"OLIVER QUEEN IS BACK");getch();cleardevice();
 settextstyle(1,0,3);
 outtextxy(40,20,"OLIVER's Memory . . . . .");sleep(1);settextstyle(1,0,2);
 outtextxy(40,80,"What did master wanted to convey by saying ");sleep(2);             //convo and launching arrow
 outtextxy(50,115,"'A man cannot live two lives with a name . . .'");getch();
 outtextxy(40,150,"I must take another name . . . .  ");sleep(1);
 outtextxy(40,150,"I must take another name . . . . A ");sleep(1);
 outtextxy(40,150,"I must take another name . . . . A R ");sleep(1);
 outtextxy(40,150,"I must take another name . . . . A R R");sleep(1);
 outtextxy(40,150,"I must take another name . . . . A R R O");sleep(1);
 outtextxy(40,150,"I must take another name . . . . A R R O W");sleep(1);
}
void newsflash2()
{
 setfillstyle(2,YELLOW);
 bar(0,0,getmaxx(),130);
 bar(0,479-130,getmaxx(),479);
 setcolor(RED);settextstyle(1,0,7);outtextxy(70,50,"NEWS FLASH");
 settextstyle(1,0,4);outtextxy(70,380,"NEWS FLASH");
 outtextxy(50,200,"DEVIL's EVIL ACT CONTINUES . . . ");sleep(2);
 outtextxy(70,250,"INNOCENTS KIDNAPPED . .");
 getch();cleardevice();
}
void newsflash()
{
 setfillstyle(2,YELLOW);

 bar(0,0,getmaxx(),130);
 bar(0,479-130,getmaxx(),479);
 setcolor(RED);settextstyle(1,0,7);outtextxy(70,50,"NEWS FLASH");
 settextstyle(1,0,7);outtextxy(70,380,"NEWS FLASH");
 settextstyle(1,0,3);setcolor(RED);
outtextxy(70,200,"TERROR ATTACK IN THE CITY");sleep(2);
outtextxy(30,240,"MANY CASUALTIES REPORTED ACROSS  THE CITY");sleep(2);
outtextxy(35,280,"ALL THIS DESTRUCTION JUST BY ONE MAN");getch();cleardevice();  bar(0,0,getmaxx(),130);
 bar(0,479-130,getmaxx(),479);setcolor(RED);settextstyle(1,0,7);outtextxy(70,50,"NEWS FLASH");
 settextstyle(1,0,7);outtextxy(70,380,"NEWS FLASH");
settextstyle(1,0,4);outtextxy(70,200,"he calls himself. ");sleep(1);outtextxy(70,200,"he calls himself. . ");sleep(1);outtextxy(70,200,"he calls himself. . . ");sleep(1);
settextstyle(1,0,7);outtextxy(70,245,"THE DEVIL");sleep(2);cleardevice();  bar(0,0,getmaxx(),130);
 bar(0,479-130,getmaxx(),479);setcolor(RED);settextstyle(1,0,7);outtextxy(70,50,"BREAKING NEWS");
 settextstyle(1,0,7);outtextxy(70,380,"BREAKING NEWS");sleep(1);settextstyle(1,0,4);outtextxy(70,200,"OLIVER QUEEN goes missing . .");
getch();
 cleardevice();
}
void imast()
{
settextstyle(1,0,2);
outtextxy(20,20,"few days after the catastrophic incident in starling city .");sleep(1);
outtextxy(20,20,"few days after the catastrophic incident in starling city . .");sleep(1);
outtextxy(20,20,"few days after the catastrophic incident in starling city . . . .");sleep(1);
outtextxy(20,45,"Oliver Queen on a deserted snowy island ....");delay(200);
outtextxy(20,45,"Oliver Queen on a deserted snowy island ....Albasta");delay(1200);cleardevice();
rain();
settextstyle(1,0,2);
printf("\t\tOliver finds a master \n\n\nOLIVER:");sleep(1);
printf("I have to stop DEVIL I must bring peace back to my city.Only a true MASTER'S training would make me much good to defeat DEVIL.Mt. Abasta is supposed to have a big ARCHER who can help me.");
getch();
printf("\n\n\n\n\n\n\t\t\t\n MASTER:");sleep(1);
printf(" Seems you have e really nice and dedicated selfless aim.I would definately help you for the cause. ");
getch();
cleardevice();
settextstyle(1,0,2);
outtextxy(10,20,"Oliver Queen leaving Mt. Albasta.");sleep(1);
outtextxy(10,20,"Oliver Queen leaving Mt. Albasta..");sleep(1);
outtextxy(10,20,"Oliver Queen leaving Mt. Albasta...");sleep(1);
outtextxy(10,20,"Oliver Queen leaving Mt. Albasta....");sleep(1);
getch();
}
void front()
{ //border();
settextstyle(1,0,2);
outtextxy(20,20,"6 months ago .");sleep(1);
outtextxy(20,20,"6 months ago . .");sleep(1);
outtextxy(20,20,"6 months ago . . .");sleep(1);
outtextxy(20,20,"6 months ago . . . .");sleep(1);outtextxy(20,70,"Its a bright day in starling city.");sleep(2);cleardevice();
}
void herro(int m)

{int ix=-310,iy=300;
 setcolor(GREEN);
 ellipse(435+ix+m,100+iy,0,180,40,29);ellipse(435+ix+m,100-3+iy,0,180,40,29);
 ellipse(435+ix+m,100+iy,180,260,40,30);ellipse(435+ix+m,100+2+iy,180,260,40,30);
 ellipse(435+ix+m,100+iy,280,0,40,30);ellipse(435+ix+m,100-2+iy,280,0,40,30);
 ellipse(435+ix+m,100+iy,70,110,45,72);
 ellipse(431+ix+m,90+iy,110,182,37,60);
 ellipse(439+ix+m,90+iy,350,72,37,60);
 //shoulders
 ellipse(396+ix+m,152+iy,86,189,25,30);ellipse(396+75+ix+m,152+iy,360,94,25,30);
 //ellipse(425+ix+m,80+iy,11,58,15,60);
 settextstyle(4,0,2);
//laces
ellipse(360+ix+m,137+iy,340,12,70,20);ellipse(358+ix+m,137+iy,340,7,70,20);
 ellipse(507+ix+m,137+iy,160,196,70,25);
 ellipse(509+ix+m,137+iy,160,198,70,25);
 outtextxy(482+ix+m,135+iy,"A");ellipse(489+ix+m,150+iy,0,360,10,10);
}
void lose()
{
 villian();
 setcolor(5);
 settextstyle(1,0,3);
 outtextxy(150,200,"ARROW .");delay(500);outtextxy(150,200,"ARROW . .");delay(500);
 outtextxy(150,80,"That's what you call yourself. .");
 sleep(1);
 outtextxy(150,110,"You have Lost");
 sleep(1);
 outtextxy(150,140,"haa . .!!");delay(500);outtextxy(150,140,"haa . .!! haa . .!!");delay(500);
 outtextxy(150,140,"haa . .!! haa . .!! haa . .!!");delay(500);
}
void game3()
{ int i,sz,j=0,k,x,t,ch,c;
void *a[22];
setcolor(5);
setfillstyle(1,5);

      for(i=10;i<=30;i++)
     {  sz=imagesize(0,i,20,i);
	a[j]=malloc(sz);
	getimage(0,i,20,i,a[j]);
	j++;
     }
     k=j-1;
     x=70;
     while(1)
     {
     villlian();
	 if(x>570)
	 x=70;
       for(i=150;i<=360;i+=10)
       { setcolor(RED);setfillstyle(4,RED);
	 pieslice(x,i,0,360,10);
	 delay(15);
	 j=k;
	 for(t=i-10;t<=i+10;t++)
	 {
	   putimage(x-10,t,a[j],3);
	   j--;
	 }
	 if(kbhit())
	 {  ch=getch();
	 if(ch==27)
	 exit(0);
	 c=move(ch);
	 if(ch=='p')
	 shoot(c);
      //	 cleardevice();
	 }
	     if(i==360)
	     { if(x>(c-40) && x<(c+40))
	     { cleardevice();
	       setcolor(14);
    settextstyle(6,0,4);
	     outtextxy(20,20,"you lose");
	     sleep(1);lose();getch();end();exit(0);
	     }}}
	   x+=125;
     }
}
int move(int z)
{  static int m=0;
   int l=0;
   cleardevice();
  switch(z)
  {
    case 'a':
	  l=-5;
	  break;
    case 'd':
	  l=5;
	  break;
   }
   m+=l;

   herro(m);//pieslice(m,450,0,360,10);
   return(125+m);
}
void shoot(int v)
{                  int j;
       villlian();
       // arrow

     sleep(1);
     cleardevice();

    for(j=361;j>=180;j-=10)
    {
     villlian();
     // arrow

	line(v,j,v,j-40);line(v+1,j,v+1,j-40);line(v+2,j,v+2,j-40);
	line(v,j-40,v-5,j-35);line(v-1,j-40-1,v-5-1,j-35-1);line(v+1,j-40+1,v-5+1,j-35+1);
	line(v,j-40,v+5,j-35);line(v,j-40-1,v-5-1,j-35-1);line(v+1,j-40+1,v-5+1,j-35+1);
	delay(15);
	cleardevice();
    }
    setcolor(14);
    settextstyle(6,0,4);
     if(v>280 && v<360)
     {
      outtextxy(20,20,"you win");
      sleep(1);win();getch();end();exit(0);
      }
     else
     {outtextxy(20,20,"you lose");
     sleep(1);lose();getch();end();exit(0);
     }
}
void main_hero()
{
     int i;
     line(314,118,312,102);			 //ellipse();
     line(312,102,312,86);
     line(312,86,313,80);
     line(313,80,313,70);
     line(313,70,312,60); line(312,60,311,50);line(311,50,314,45);

     line(228,180,230,160);line(230,160,232,150);line(232,150,234,140);
     line(234,140,234,134);line(234,134,235,124);line(235,134,235,124);
     line(235,124,236,120);line(236,120,236,110);line(236,110,240,95);
     line(240,95,247,85);line(247,85,248,80);line(248,80,250,76);
     line(250,76,252,72);line(252,72,255,70);line(255,70,260,60);
			    //268
     line(408,180,406,160);line(406,160,404,150);line(404,150,402,140);
     line(402,140,402,134);line(402,134,401,124);line(401,134,401,124);//
     line(401,124,400,120);line(400,120,400,110);line(400,110,396,95);
     line(396,95,389,85);line(389,85,388,80);line(388,80,386,76);
     line(386,76,384,72);line(384,72,381,70);line(381,70,368,60);

     ellipse(318,180,0,180,90,60);ellipse(318+1,180+1,0,180,90,60);
     ellipse(318,180,0,180,90-2,60-2);ellipse(313,173,60,118,110,130);

     ellipse(318,180,50,130,100,78);ellipse(318,180-1,80,126,100,78);//hood on
     ellipse(288,180,180,260,60,40);
     ellipse(288,180,180,260,58,38);
     ellipse(288,180,180,250,50,36); //layer
     ellipse(288+60,180,270,0,60,40);
     ellipse(288+60,180,270,0,58,38);

     //------------ left shoulders-----------------------//
     line(228,190,215,192);line(215,192,209,194);line(209,194,200,198);
     line(200,198,190,199);ellipse(204,239,100,170,80,40);ellipse(204+2,239+5,100,130,80,40);ellipse(204+2,239+6,105,120,80,40);line(125,234,120,240);
     line(125,234,120,240);ellipse(187,285,146,176,80,80);
     ellipse(175,317,152,176,75,80);ellipse(170,337,155,176,75,80);

     //------------right shoulder------------------------//
     line(408,190,421,192);line(421,192,427,194);line(427,194,436,198);
     line(436,198,446,199);ellipse(434,239,10,80,80,40);line(513,233,518,240);
     line(518,239,523,245);
     ellipse(451,285,4,34,80,80);
     ellipse(465,317,4,28,75,80);
     ellipse(170+300,337,4,22,75,80);

     ellipse(233+1,243,355,40,60,38);ellipse(233,243,355,40,60,38);ellipse(232,241,355,40,64,38);ellipse(232+1,241,355,40,64,38);
     ellipse(393,241,140,190,60,38);ellipse(393,243,140,190,60,38);ellipse(393+3,243,140,190,60,38);ellipse(393+4,243,140,190,60,38);
     //ellipse(60+65,300,330,20,45,86);
     ellipse(180+50,240,180,210,80,80);ellipse(180+50,240+1,180,210,80,80);ellipse(105,310,350,40,70,50);ellipse(105+1,310+1,350,40,70,50);
     ellipse(180+50+180,240,330,360,80,80);ellipse(105+429,312,140,190,70,50);
     ellipse(393,241,180,205,60,208);ellipse(397,241,180,205,60,208); //chain
     ellipse(233,243,335,0,60,208);ellipse(237,243,335,0,60,208);

   //  line(50,333,600,333);
     settextstyle(4,0,3);
     outtextxy(428,250,"A");
     getch();
     cleardevice();
 }
void win()
{
     main_hero();
     setcolor(5);
     settextstyle(7,0,4);
     outtextxy(200,300,"DEVIL .");sleep(1);outtextxy(200,300,"DEVIL . .");sleep(1);outtextxy(200,300,"DEVIL . . .");delay(500);
     outtextxy(129,350,"You have failed this city...");getch();
}
void villlian()
{
  int i,z,ix=240,iy=150;
  setcolor(9);setfillstyle(1,9);
  //ellipse(80,230-iy,50,130,40,60);
  fillellipse(80+ix,230-iy,25,55);
  ellipse(50+ix,240-iy,0,180,40,22);
  ellipse(110+ix,240-iy,0,180,40,22);
  setcolor(9);
  ellipse(50+ix,240-iy,80,180,40,70);

  ellipse(110+ix,240-iy,0,89,40,70);
  fillellipse(80+ix,200-iy,40,45);

  setcolor(15);
  setfillstyle(1,15);
  fillellipse(67+ix,222-iy,8,4);
  fillellipse(94+ix,222-iy,8,4);
  setcolor(GREEN);setfillstyle(1,GREEN);pieslice(67+ix,220-iy,0,360,3);
  setcolor(GREEN);setfillstyle(1,GREEN);pieslice(94+ix,220-iy,0,360,3);
  setcolor(RED);line(78+ix,237-iy,82+ix,237-iy);line(69+ix,253-iy,91+ix,253-iy);

  arc(80+ix,253-iy,180,360,10);
}


void hostway()
{
 int j,gd=DETECT,gm,i;
 initgraph(&gd,&gm,"");
 fx=getmaxx();
 fy=getmaxy();
 border();
 getch();
 hostages();dialog_boxH();
 getch();
 for(j=0;j<=2;j++)
  {
  dialog_box;
  villian1();                   //villian();
  villian();}
  setcolor(YELLOW);
  outtextxy(5,140,"NO ONE WOULD SAVE YOU...");
  for(j=0;j<=2;j++)
  {dialog_boxV();
  villian();
  villian1();
  villian();}
 getch();
 hero();getch();cleardevice();border();villian();hostages1();hero();
 dialog_box();new_dialog();
  villian();
  getch();
  cleardevice();
}

void villian()
{
  int i,z;
  setcolor(9);setfillstyle(1,9);
  ellipse(80,230,50,130,40,60);
  fillellipse(80,230,25,55);
  ellipse(50,240,0,180,40,22);
  ellipse(110,240,0,180,40,22);
  setcolor(9);
  ellipse(50,240,80,180,40,70);

  ellipse(110,240,0,89,40,70);
  fillellipse(80,200,40,45);

  setcolor(15);
  setfillstyle(1,15);
  fillellipse(67,222,8,4);
  fillellipse(94,222,8,4);
  setcolor(GREEN);setfillstyle(1,GREEN);pieslice(67,220,0,360,3);
  setcolor(GREEN);setfillstyle(1,GREEN);pieslice(94,220,0,360,3);
  setcolor(RED);line(78,237,82,237);line(69,253,91,253);

  for(i=0;i<=10;i++)
  {
  arc(80,253,180,360,12-i);
  switch(i)
  {case 0: setcolor(RED);delay(10);
  case 1: setcolor(BLACK);delay(10);
  case 2: setcolor(RED);delay(10);
  case 3: setcolor(BLACK);delay(10);
  case 4: setcolor(RED);delay(10);
  case 5: setcolor(BLACK);delay(10);
  case 6: setcolor(RED);delay(10);
  case 7: setcolor(BLACK);delay(10);
  case 8: setcolor(RED);delay(10);
  case 9: setcolor(BLACK);delay(10);
  case 10: setcolor(BLUE);delay(10);
  case 11: setcolor(RED);delay(10);
  }
}  }
void villian1()
{
  int i,z;
  setcolor(9);setfillstyle(1,9);
  ellipse(80,230,50,130,40,60);
  fillellipse(80,230,25,55);
  ellipse(50,240,0,180,40,22);
  ellipse(110,240,0,180,40,22);
  setcolor(9);
  ellipse(50,240,80,180,40,70);

  ellipse(110,240,0,89,40,70);
  fillellipse(80,200,40,45);

  setcolor(15);
  setfillstyle(1,15);
  fillellipse(67,222,8,4);
  fillellipse(94,222,8,4);
  setcolor(GREEN);setfillstyle(1,GREEN);pieslice(67,220,0,360,3);
  setcolor(GREEN);setfillstyle(1,GREEN);pieslice(94,220,0,360,3);
  setcolor(RED);line(78,237,82,237);line(69,253,91,253);

  for(i=0;i<=10;i++)
  {
  arc(80,253,180,360,12-i);
  switch(i)
  {case 0: setcolor(BLACK);delay(10);
  case 1: setcolor(RED);delay(10);
  case 2: setcolor(BLACK);delay(10);
  case 3: setcolor(RED);delay(10);
  case 4: setcolor(BLACK);delay(10);
  case 5: setcolor(RED);delay(10);
  case 6: setcolor(BLACK);delay(10);
  case 7: setcolor(RED);delay(10);
  case 8: setcolor(BLACK);delay(10);
  case 9: setcolor(RED);delay(10);
  case 10: setcolor(GREEN);delay(10);
  case 11: setcolor(BLACK);delay(10);
  }
}  }
void hostages()
{
  //----------------------------------first----------------------------
  setcolor(YELLOW);
  setfillstyle(1,14);
  pieslice(440,330,0,360,30);
  setcolor(BLUE);//line(429,311,429,315);

  ellipse(440,353,0,180,10,6);
  circle(428,331,3);
  circle(452,331,3);
  //----------------------------------second-----------------------------
  setcolor(YELLOW);
  setfillstyle(1,14);
  pieslice(520,330,0,360,30);
  setcolor(BLUE);//line(519,331,519,305);
  ellipse(520,353,0,180,10,6);
  circle(508,331,3);
  circle(532,331,3);

  //----------------------------------third------------------------------
  setcolor(YELLOW);
  setfillstyle(1,14);
  pieslice(360,330,0,360,30);
  setcolor(BLUE); //line(359,341,379,335);
  ellipse(360,353,0,180,10,6);
  circle(348,331,3);
  circle(372,331,3);

  setcolor(YELLOW);
  setfillstyle(1,14);
  pieslice(590,330,0,360,30);
  setcolor(BLUE);//line(559,331,519,305);
  ellipse(590,353,0,180,10,6);
  circle(578,331,3);
  circle(602,331,3);
}
void hero()
{
 setcolor(GREEN);
 ellipse(435,100,0,180,40,29);ellipse(435,100-3,0,180,40,29);
 ellipse(435,100,180,260,40,30);ellipse(435,100+2,180,260,40,30);
 ellipse(435,100,280,0,40,30);ellipse(435,100-2,280,0,40,30);
 ellipse(435,100,70,110,45,72);
 ellipse(431,90,110,182,37,60);ellipse(439,90,350,72,37,60);ellipse(396,152,86,189,55,30);ellipse(396+75,152,360,94,55,30);
 ellipse(425,80,11,58,15,60);settextstyle(4,0,2);

 ellipse(360,137,340,12,70,20);ellipse(358,137,340,7,70,20);
 ellipse(509,137,160,192,70,20);
 outtextxy(482,150,"A");ellipse(489,165,0,360,10,10);
}
void dialog_boxH()
{
 rectangle(328,250,583,296);
 outtextxy(338,260," HELP !!!   HELP !!!  HELP !!! ");sleep(2);
}
void border()
{
  setcolor(WHITE);
  rectangle(0,0,fx,fy);//setcolor(1);
  rectangle(1,1,fx-1,fy-1);setcolor(2);
  line(0,0,fx/2,fy/2);line(1,1,fx/2-1,fy/2-1);
  line(0,fy,fx/2,fy/2);line(1,fy-1,fx/2-1,fy/2-1);setcolor(3);
  line(fx/2,fy/2,fx,fy/2);line(fx/2,fy/2-1,fx-1,fy/2-1);
}
void dialog_boxV()
{
 setcolor(RED);
 setcolor(YELLOW);
 settextstyle(1,0,3);
 outtextxy(60,100,"HAHA..");
}
void dialog_box()
{
 setcolor(RED);
 setcolor(YELLOW);
 settextstyle(1,0,2.5);
 outtextxy(360,170,"I WILL SAVE THEM ^_^");sleep(2);

 outtextxy(340,200,"YOU FAILED THE CITY ..!!");
}
void new_dialog()
{
 setcolor(BLUE);
 setcolor(YELLOW);
 outtextxy(268,258,"ARR0W !!   ARR0W!!    ARROW!!");
}
void hostages1()
{
  //----------------------------------first----------------------------
  setcolor(YELLOW);
  setfillstyle(1,14);
  pieslice(440,340,0,360,30);
  setcolor(BLUE);
  ellipse(440,353,180,0,10,4);
  circle(428,331,3);
  circle(452,331,3);
  //----------------------------------second-----------------------------
  setcolor(YELLOW);
  setfillstyle(1,14);
  pieslice(520,340,0,360,30);
  setcolor(BLUE);
  ellipse(520,353,180,0,10,4);
  circle(508,331,3);
  circle(532,331,3);

  //----------------------------------third------------------------------
  setcolor(YELLOW);
  setfillstyle(1,14);
  pieslice(360,340,0,360,30);
  setcolor(BLUE);
  ellipse(360,353,180,0,10,4);
  circle(348,331,3);
  circle(372,331,3);

  setcolor(YELLOW);
  setfillstyle(1,14);
  pieslice(590,340,0,360,30);
  setcolor(BLUE);
  ellipse(590,353,180,0,10,4);
  circle(578,331,3);
  circle(602,331,3);
}

void old_b()
{
 int x=420,y=50,a=100,b=100,s=75,t=40,m=160,n=-15,i=360,j=5;setcolor(15);
// outtextxy(0,20,"AFTER MERLIN'S INVASION");
//setfillstyle(1,RED);
rectangle(0,0,getmaxx(),getmaxy());
line(412,200,412,448);
line(630,240,630,448);
line(412,200,480,250);
line(480,250,450,200);
line(450,200,500,270);
line(500,270,530,260);
line(530,260,570,200);
line(570,200,600,200);
line(600,200,630,240);
line(410,448,630,448);
//setcolor(RED);
ellipse(430,180,180,0,23,26);
ellipse(408,184,0,90,10,5);
ellipse(453,184,90,180,15,5);
ellipse(420,174,90,270,6,10);
ellipse(420,153,270,90,6,10);
ellipse(420,158,0,90,20,15);
ellipse(440,168,0,90,4,10);
ellipse(444,180,90,188,5,12);
setfillstyle(1,4);
floodfill(434,160,15);

//--------------------------2------------------------------------------------
//setcolor(RED);
ellipse(430+s,180+t,180,0,23,26);
ellipse(408+s,184+t,0,90,10,5);
ellipse(453+s,184+t,90,180,15,5);
ellipse(420+s,174+t,90,270,6,10);
ellipse(420+s,148+t,270,90,6,15);
ellipse(420+s,154+t,0,90,20,18);
ellipse(440+s,168+t,0,90,4,15);
ellipse(444+s,180+t,90,188,5,12);
setfillstyle(1,4);
floodfill(434+s,160+t,15);

//----------------------------3--------------------------------------------
//setcolor(RED);
ellipse(430+m,180+n,180,0,23,26);
ellipse(408+m,184+n,0,90,10,5);
ellipse(453+m,184+n,90,180,15,5);
ellipse(420+m,174+n,90,270,6,10);
ellipse(420+m,153+n,270,90,6,10);
ellipse(420+m,158+n,0,90,20,15);
ellipse(440+m,168+n,0,90,4,10);
ellipse(444+m,180+n,90,188,5,12);
setfillstyle(1,4);
floodfill(434+m,160+n,15);
setcolor(15);

rectangle(20+x,200+y+20,70+x,250+y);
rectangle(80+x,200+y+20,130+x,250+y);
rectangle(140+x,200+y+20,190+x,250+y);
setfillstyle(8,9);
floodfill(453,290,15);
setfillstyle(8,9);
floodfill(513,290,15);
setfillstyle(8,9);
floodfill(573,290,15);
line(490,380,490,450);
line(540,380,540,450);
line(490,380,540,380);
setfillstyle(3,15);
bar(250-a,0-b,258-a,430-b);
line(158,100,190,50);
line(190,50,230,65);
line(230,65,280,0);
line(570,440,600,350);
line(600,350,550,310);
line(550,310,500,380);
line(500,380,430,300);
line(158,100,190,50);
line(190,50,230,65);
line(230,65,280,0);
line(158,100,190,150);
line(190,150,230,175);
ellipse(30,40,0,180,15,10);
ellipse(59,39,0,180,15,10);
ellipse(30,60,180,0,15,10);
ellipse(59,59,180,0,15,10);
ellipse(15,50,90,270,9,9);
ellipse(75,50,270,90,9,10);
ellipse(30+i,40+j,0,180,15,10);
ellipse(59+i,39+j,0,180,15,10);
ellipse(30+i,60+j,180,0,15,10);
ellipse(59+i,59+j,180,0,15,10);
ellipse(15+i,50+j,90,270,9,9);
ellipse(75+i,50+j,270,90,9,10);
setcolor(15);
bar(380-a,0-b,388-a,430-b);
setfillstyle(1,15);
bar(306-a,90-b,317-a,150-b);
bar(306-a,180-b,317-a,240-b);
bar(306-a,270-b,317-a,290-b);bar(306-a+7,290-b,317-a+7,330-b);
bar(306-a,360-b,317-a,390-b);
bar(306-a,420-b,317-a,440-b);
setfillstyle(1,4);
floodfill(500,400,15);
setfillstyle(1,14);
floodfill(570,400,15);
setfillstyle(1,8);
floodfill(20,40,15);
setfillstyle(1,8);
floodfill(20+i,40+j,15);
getch();
}
void new_b()
{
 int x=420,y=50,a=100,b=100;
 rectangle(0,0,getmaxx(),getmaxy());
rectangle(x,80,210+x,320+y+80);
rectangle(20+x,20+y+20,70+x,70+y);
rectangle(80+x,20+y+20,130+x,70+y);
rectangle(140+x,20+y+20,190+x,70+y);
rectangle(20+x,80+y+20,70+x,130+y);
rectangle(80+x,80+y+20,130+x,130+y);
rectangle(140+x,80+y+20,190+x,130+y);
rectangle(20+x,140+y+20,70+x,190+y);
rectangle(80+x,140+y+20,130+x,190+y);
rectangle(140+x,140+y+20,190+x,190+y);
rectangle(20+x,200+y+20,70+x,250+y);
rectangle(80+x,200+y+20,130+x,250+y);
rectangle(140+x,200+y+20,190+x,250+y);
ellipse(30,40,0,180,15,10);
ellipse(59,39,0,180,15,10);
ellipse(30,60,180,0,15,10);
ellipse(59,59,180,0,15,10);
ellipse(15,50,90,270,9,9);
ellipse(75,50,270,90,9,10);
setfillstyle(1,9);
floodfill(20,40,15);
line(490,380,490,450);
line(540,380,540,450);
line(490,380,540,380);
setfillstyle(3,15);
bar(250-a,0-b,258-a,440-b);
bar(380-a,0-b,388-a,440-b);setfillstyle(1,15);
bar(306-a,0-b,317-a,60-b);
bar(306-a,90-b,317-a,150-b);
bar(306-a,180-b,317-a,240-b);
bar(306-a,270-b,317-a,330-b);
bar(306-a,360-b,317-a,390-b);
bar(306-a,420-b,317-a,440-b);
setfillstyle(1,4);
floodfill(500,400,15);
setfillstyle(1,14);
floodfill(570,400,15);
getch();
}
circ()
{
	int i;
	for(i=0;i<15;i++)
		circle(320,240,i*10);
		rectangle(240,160,400,320);
}

bulb()
{
	int i=1,c=1;
	randomize();
	while(!kbhit())
	{
		if((i%2)==0)
			setcolor(c++);
		setfillstyle(1,getcolor());
		circle(320,240,i*20);
		putpixel(320-i+2,240-i+2,1);
		floodfill(320-i+2,240-i+2,getcolor());
		delay(1000);
		i++;
		if(i>=5)
			i=1;
	}
}

dot()
{
	int i,j,of=40,wid=5;
	setcolor(8);
	setfillstyle(1,getcolor());
	for(i=of;i<getmaxx();i+=of)
		bar(i,0,i+wid,getmaxy());

	for(i=of;i<getmaxy();i+=of)
		bar(0,i,getmaxx(),i+wid);

	for(i=of;i<getmaxx();i+=of)
		for(j=of;j<getmaxy();j+=of)
		{
			setcolor(15);
			setfillstyle(1,getcolor());
			circle(i+2,j+2,4);
			floodfill(i+2,j+2,getcolor());
		}

}

void bounce(int i)
{
  int k,j=0,z,l,x1,size,x,dx;
  float x2;
  void *c[12];
     sound(120);delay(1);
     if(i==1)
     {
   for(k=100;k<=110;k++)
     {  size=imagesize(400,k,410,k);
	c[j]=malloc(size);
	getimage(400,k,410,k,c[j]);
	j++;

     }
	z=j-1;
     }nosound();
     sound(120+80);delay(1);
    sound(120+120); delay(2);
    x1=60*(i-1);
    x=220+x1;
    dx=abs(340-x);

    setcolor(i);
    setfillstyle(1,i);

    if(i==1)
    {
      setcolor(14);
      setfillstyle(1,14);
    }
	 nosound();sound(120+180);delay(3);
    for(l=1;l<=190;l+=5)
    {       j=z;
       x2=dx*l/200;

       if(i==1 || i==2 || i==3)
	      pieslice(340-x2,l+30,0,360,5);
       else
       pieslice(340+x2,l+30,0,360,5);
       delay(3);

      for(k=l+25;k<=l+35;k++)
      {  sound(290);
      if(i==1 || i==2 || i==3)
	putimage(335-x2,k,c[j],3);
	else
	putimage(335+x2,k,c[j],3);
	j--;nosound();
      }
 }    nosound();sound(120+80);delay(1);
 settextstyle(4,0,7);
  switch(i)
  {
  case 1:nosound();sound(140);
    outtextxy(215+x1,160,"A");
    break;
  case 2:nosound();sound(180);
    outtextxy(215+x1,160,"R");
    break;
  case 3:nosound();sound(220);
    outtextxy(215+x1,160,"R");
    break;
  case 4:nosound();sound(260);
    outtextxy(215+x1,160,"O");
    break;
  case 5:nosound();sound(300);
    outtextxy(215+x1,160,"W");delay(1);nosound();
    break;
 }}
void arrow()
{
  int i1,size1,k1,j1=0,z1,r,i2;
  void *a[35];


     for(k1=100;k1<=132;k1++)
     {
     size1=imagesize(400,k1,430,k1);
	a[j1]=malloc(size1);
	getimage(400,k1,430,k1,a[j1]);
	j1++;

     }
     j1--;
     z1=j1;

   rectangle(581,225,595,245);
   line(595,225,600,225);
   line(595,245,600,245);
   line(600,225,600,220);
   line(600,245,600,250);
   line(600,225,610,230);
   line(600,245,610,240);
   line(610,230,639,230);
   line(610,240,639,240);
   line(639,230,635,235);
   line(639,240,635,235);
   line(600,220,615,210);   // 1
   line(600,250,615,260);  //2
   line(615,210,639,230);
   line(615,260,639,240);
     floodfill(620,215,15);
     floodfill(620,255,15);


     putpixel(598,229,15);
       putpixel(598,233,15);
	 putpixel(598,237,15);
	   putpixel(598,241,15);

	 putpixel(588,229,15);
       putpixel(588,233,15);
	 putpixel(588,237,15);
	   putpixel(588,241,15);

		 putpixel(586,229,15);
       putpixel(586,233,15);
	 putpixel(586,237,15);
	   putpixel(586,241,15);


		 putpixel(590,229,15);
       putpixel(590,233,15);
	 putpixel(590,237,15);
	   putpixel(590,241,15);
//=========================sound ==================================//                                                                     //
  for(i2=100,i1=580;i2<581,i1>=100;i1--,i2+=208)
  {      j1=z1;
    r=i1%2;
    sound(i1);
    rectangle(i1,230,580,240);
    line(i1-1,220,i1-1,250);
    line(i1-1,220,i1-18,230);
    line(i1-1,250,i1-18,240);
    line(i1-18,230,i1-18,226);
    line(i1-18,240,i1-18,244);
    line(i1-18,244,i1-30,235);
    line(i1-18,226,i1-30,235);

    delay(5);nosound();

       for(k1=219;k1<=250;k1++)
     {
       putimage(i1-30-r,k1,a[j1],3);
       j1--;

     }

  }
     line(100,220,100,250);
     line(100,220,82,230);
     line(100,250,82,240);
     line(70,235,82,226);
     line(70,235,82,244);
     line(82,230,82,226);
     line(82,240,82,244);
}
void blast()
{   int k,j1=0,size;
    void *c[82];
	      sound(250);delay(2);nosound();
	     for(k=100;k<=180;k++)
     {  size=imagesize(400,k,480,k);
	c[j1]=malloc(size);
	getimage(400,k,480,k,c[j1]);
	j1++;
     }
     j1--;
      setcolor(1);
      setfillstyle(1,1);sound(300);delay(2);
     pieslice(340,40,0,360,5);
       delay(500);nosound();
      setcolor(2);
      setfillstyle(1,2);
      pieslice(340,40,0,360,10);sound(350);delay(2);
	delay(500);nosound();
       setcolor(3);
      setfillstyle(1,3);
       pieslice(340,40,0,360,15);sound(250);delay(2);nosound();
	 delay(500);
	setcolor(4);
      setfillstyle(1,4);
	pieslice(340,40,0,360,20);sound(300);delay(5);
	  delay(500);nosound();
	  setcolor(6);
	  setfillstyle(2,6);
	  pieslice(340,40,20,70,40);sound(200);delay(2);nosound();
	  pieslice(340,40,200,250,40);sound(450);delay(2);
	 setcolor(5);
      setfillstyle(1,5);
	 pieslice(340,40,0,360,25);sound(300);delay(2);
	 delay(500);nosound();

       for(k=0;k<=80;k++)
       {
	 putimage(300,k,c[j1],3);
	 j1--;
       }
}
void mirror()
{       int k,size,j1=0;
	void *c[72];
	   for(k=160;k<230;k++)
     {  nosound();
     size=imagesize(215,k,500,k);
	c[j1]=malloc(size);sound(k);delay(1);
	getimage(215,k,500,k,c[j1]);
	j1++;

     }
      j1--;
      delay(500);
      for(k=241;k<=311;k++)
      { nosound();
      putimage(215,k,c[j1],2);sound(k);
      j1--;
      delay(20);
      }
}
// ------------------------------------

void loading()
{
   int d,f,j,l=50,i1,i2,y1,y2,t1,t2,i3,y3,t3,f1,i4,y4,t4,f2;
   unsigned long int a,b1,b2,c1,c2,b3,c3,b4,c4;

  settextstyle(4,0,5);
  setcolor(14);
   outtextxy(50,50,"Please Wait");
   sleep(1);
    settextstyle(4,0,3);
   outtextxy(50,100,"Until the game loads .  .  .");
   sleep(1);
   a=pow(l,2);

 for(j=1;j<=10;j++)
 {

   for(i1=300;i1>250;i1--)
   {   f=0; f1=0;    f2=0;
     if(j%2!=0)
   {delay(10);
    continue;
    }
	setfillstyle(1,3);
   setcolor(3);

      t1=300-i1;
      b1=pow(t1,2);
      c1=a-b1;
      y1=sqrt(c1);
      pieslice(i1,200+y1,0,360,3);

 // 2 ball

    setfillstyle(1,5);
   setcolor(5);
      i2=i1-10;
      if(i2<250)
      { d=250-i2;
	i2=i2+2*d;
	f=1;
      }
      t2=300-i2;
      b2=pow(t2,2);
      c2=a-b2;
      y2=sqrt(c2);
      if(f==1)
      pieslice(i2,200-y2,0,360,3);
      else
      pieslice(i2,200+y2,0,360,3);

   // ball 3

      setfillstyle(1,4);
   setcolor(4);

      i3=i1-20;
      if(i3<250)
      { d=250-i3;
	i3=i3+2*d;
	f1=1;
      }
      t3=300-i3;
      b3=pow(t3,2);
      c3=a-b3;
      y3=sqrt(c3);
      if(f1==1)
      pieslice(i3,200-y3,0,360,3);
      else
      pieslice(i3,200+y3,0,360,3);


       // ball 4

      setfillstyle(1,14);
   setcolor(14);

      i4=i1-30;
      if(i4<250)
      { d=250-i4;
	i4=i4+2*d;
	f2=1;
      }
      t4=300-i4;
      b4=pow(t4,2);
      c4=a-b4;
      y4=sqrt(c4);
      if(f2==1)
      pieslice(i4,200-y4,0,360,3);
      else
      pieslice(i4,200+y4,0,360,3);



      delay(8);
      cleardevice();

   }

    for(i1=250;i1<300;i1++)
   {
       setfillstyle(1,3);
   setcolor(3);

      t1=300-i1;
      b1=pow(t1,2);
      c1=a-b1;
      y1=sqrt(c1);
      pieslice(i1,200-y1,0,360,3);
 // 2 ball
    setfillstyle(1,5);
   setcolor(5);

      i2=i1+10;
      t2=abs(300-i2);
      b2=pow(t2,2);
      c2=a-b2;
      y2=sqrt(c2);
      pieslice(i2,200-y2,0,360,3);

	// ball 3

      setfillstyle(1,4);
   setcolor(4);
     i3=i1+20;
      t3=abs(300-i3);
      b3=pow(t3,2);
      c3=a-b3;
      y3=sqrt(c3);
      pieslice(i3,200-y3,0,360,3);


	// ball 4

      setfillstyle(1,14);
   setcolor(14);
     i4=i1+30;
      t4=abs(300-i4);
      b4=pow(t4,2);
      c4=a-b4;
      y4=sqrt(c4);
      pieslice(i4,200-y4,0,360,3);


     delay(8);
      cleardevice();

   }

     for(i1=300;i1<350;i1++)
   {                f=0;
   f2=0;
   f1=0;
	 setfillstyle(1,3);
   setcolor(3);

      t1=i1-300;
      b1=pow(t1,2);
      c1=a-b1;
      y1=sqrt(c1);
      pieslice(i1,200-y1,0,360,3);

   // 2 ball
      setfillstyle(1,5);
   setcolor(5);
      i2=i1+10;
      if(i2>350)
      {  d=i2-350;
	 i2=i2-2*d;
	 f=1;
      }
      t2=i2-300;
      b2=pow(t2,2);
      c2=a-b2;
      y2=sqrt(c2);
      if(f==1)
      pieslice(i2,200+y2,0,360,3);
      else
      pieslice(i2,200-y2,0,360,3);
      // ball 3
	 setfillstyle(1,4);
   setcolor(4);
      i3=i1+20;
      if(i3>350)
      {  d=i3-350;
	 i3=i3-2*d;
	 f1=1;
      }
      t3=i3-300;
      b3=pow(t3,2);
      c3=a-b3;
      y3=sqrt(c3);
      if(f1==1)
      pieslice(i3,200+y3,0,360,3);
      else
      pieslice(i3,200-y3,0,360,3);

	 // ball 4
	 setfillstyle(1,14);
   setcolor(14);
      i4=i1+30;
      if(i4>350)
      {  d=i4-350;
	 i4=i4-2*d;
	 f2=1;
      }
      t4=i4-300;
      b4=pow(t4,2);
      c4=a-b4;
      y4=sqrt(c4);
      if(f2==1)
      pieslice(i4,200+y4,0,360,3);
      else
      pieslice(i4,200-y4,0,360,3);


     delay(8);
      cleardevice();

   }
       for(i1=350;i1>300;i1--)
   {
	setfillstyle(1,3);
   setcolor(3);

    if(j%2==0)
    {delay(10);
    continue;
    }
      t1=i1-300;
      b1=pow(t1,2);
      c1=a-b1;
      y1=sqrt(c1);
      pieslice(i1,200+y1,0,360,3);

   // 2 ball
      setfillstyle(1,5);
   setcolor(5);
      i2=i1-10;
      t2=abs(i2-300);
      b2=pow(t2,2);
      c2=a-b2;
      y2=sqrt(c2);
      pieslice(i2,200+y2,0,360,3);


      // ball 3

	setfillstyle(1,4);
   setcolor(4);
      i3=i1-20;
      t3=abs(i3-300);
      b3=pow(t3,2);
      c3=a-b3;
      y3=sqrt(c3);
      pieslice(i3,200+y3,0,360,3);



      // ball 4

	setfillstyle(1,14);
   setcolor(14);
      i4=i1-30;
      t4=abs(i4-300);
      b4=pow(t4,2);
      c4=a-b4;
      y4=sqrt(c4);
      pieslice(i4,200+y4,0,360,3);
    delay(8);
      cleardevice();
   }
 }
}
//----------------------------
// game 1
void game1()
{
  int k;
 settextstyle(5,0,3);
  for(k=1;k<=3;k++)
  { sleep(1);
   cleardevice();
   setcolor(14);
   settextstyle(4,0,5);
   outtextxy(200,200,"Ready To Shoot ?");
   getch();
   cleardevice();
  g1();
  }
  getch();
}
void g1()
{
      int x1,y2,l,j,z;
      static int sc=0;
  double x2,y1,x3;
  long int i,x,y,a,t,p,r;
    a=pow(60,2);
  {
   for(i=590;i>=570;i--)
   { r=1;
   elli1();
    arc(630,230,90,270,50);

     y=630-i;
     t=pow(y,2);
     p=a-t;
     x=sqrt(p);

     line(630,230,i,230-x);
      pieslice(i,230-x,0,360,3);
    delay(10);
	if(kbhit())
      {if(getch()=='s')
       goto end;}
     cleardevice();

   }

   for(i=570;i<=590;i++)
   {     r=2;
     elli1();
      arc(630,230,90,270,50);
     y=630-i;
     t=pow(y,2);
     p=a-t;
     x=sqrt(p);

     line(630,230,i,230+x);
      pieslice(i,230+x,0,360,3);
   delay(10);
	if(kbhit())
      {if(getch()=='s')
       goto end;}
     cleardevice();
      }

     for(i=590;i>=570;i--)
   {         r=2;
     elli1();
      arc(630,230,90,270,50);
     y=630-i;
     t=pow(y,2);
     p=a-t;
     x=sqrt(p);

     line(630,230,i,230+x);
      pieslice(i,230+x,0,360,3);
     delay(10);	if(kbhit())
      {if(getch()=='s')
       goto end;}
     cleardevice();

   }
 }

     for(i=570;i<=590;i++)
   {             r=1;
     elli1();
      arc(630,230,90,270,50);
     y=630-i;
     t=pow(y,2);
     p=a-t;
     x=sqrt(p);
     line(630,230,i,230-x);
      pieslice(i,230-x,0,360,3);
     delay(10);
	if(kbhit())
      {if(getch()=='s')
       goto end;}
     cleardevice();
   }

    end:
   x3=x*400/y;


    if(x3<=50)
     sc=sc+100;
     else if(x3<=100)
     sc=sc+70;
     else if(x3<=150)
     sc=sc+40;
     else if(x3<=200)
     sc=sc+10;

     if(r==1)
{
   for(j=i,l=630;j>=230;j-=10,l-=10)
   {
     y2=630-j;
     x2=y2*x/y;
     x1=630-l;
     y1=x1*x/y;
      elli1();
     line(l,230-y1,j,230-x2);
       pieslice(j,230-x2,0,360,3);
     delay(10);
     cleardevice();

     if(x2>200)
     {
       break;
     }
   }
}
   else
{
      for(j=i,l=630;j>=230;j-=10,l-=10)
   {
     y2=630-j;
     x2=y2*x/y;
     x1=630-l;
     y1=x*x1/y;
     elli1();
     line(l,230+y1,j,230+x2);
     pieslice(j,230+x2,0,360,3);
     delay(10);

     cleardevice();
       if(x2>200)

   {
     break;
    }
   }
}
 cleardevice();
if(r==1)
{      y2=620-j;
     x2=y2*x/y;
     x1=620-l;
     y1=x*x1/y;
     elli1();
     line(l+10,230-y1,j+10,230-x2);
     pieslice(j+10,230-x2,0,360,3);

}
else
{      y2=620-j;
     x2=y2*x/y;
     x1=620-l;
     y1=x*x1/y;
     elli1();
     line(l+10,230+y1,j+10,230+x2);
     pieslice(j+10,230+x2,0,360,3);

}
y2+=10;
x2=y2*x/y;
sleep(1);
cleardevice();
     if(x2>220)
     outtextxy(10,10,"you miss");


sleep(1);
cleardevice();
 score(sc);
}
//-----------------------------game 2

void game2()
{
  int k;
  settextstyle(5,0,3);
  for(k=1;k<=3;k++)
  { sleep(1);
cleardevice();
setcolor(14);
settextstyle(4,0,5);
   outtextxy(200,200,"Get Ready To Shoot");
   getch();
   cleardevice();
  g2();
  }
 getch();
}
void g2()
{
      int x1,y2,l,j;
      static int sc=0;
  double x2,y1,x3;
  long int i,x,y,a,t,p,r;
    a=pow(60,2);
   {
   for(i=610;i>=570;i--)
   { r=1;
   elli();
    arc(630,280,90,270,50);
     y=630-i;
     t=pow(y,2);
     p=a-t;
     x=sqrt(p);
     line(630,280,i,280-x);
      pieslice(i,280-x,0,360,3);
     delay(30);
	if(kbhit())
      {if(getch()=='s')
       goto end;}
     cleardevice();
	}

   for(i=570;i<=610;i++)
   {     r=2;
     elli();
      arc(630,280,90,270,50);
     y=630-i;
     t=pow(y,2);
     p=a-t;
     x=sqrt(p);
     line(630,280,i,280+x);
      pieslice(i,280+x,0,360,3);
     delay(30);

   if(kbhit())
   {
   if(getch()=='s')
   goto end;    }
    cleardevice();
   }

     for(i=610;i>=570;i--)
   {         r=2;
     elli();
      arc(630,280,90,270,50);
     y=630-i;
     t=pow(y,2);
     p=a-t;
     x=sqrt(p);
     line(630,280,i,280+x);
      pieslice(i,280+x,0,360,3);
     delay(30);
	if(kbhit())
      {if(getch()=='s')
       goto end;}
     cleardevice();

   }
 }

     for(i=570;i<=610;i++)
   {             r=1;
     elli();
      arc(630,280,90,270,50);
     y=630-i;
     t=pow(y,2);
     p=a-t;
     x=sqrt(p);
     line(630,280,i,280-x);
      pieslice(i,280-x,0,360,3);
     delay(30);
	if(kbhit())
      {if(getch()=='s')
       goto end;}
     cleardevice();
	 }


   end:
   x3=x*400/y;

 if(r==1)
 {
   if((x3>=0&&x3<10) || (x3<=220&&x3>190))
   sc=sc+40;
   else if((x3>=10&&x3<70) || (x3<=190&&x3>130))
   sc=sc+70;
   else if(x3>=70 && x3<=130)
   sc=sc+100;
   else if(x3>200 && x3<=250)
   sc=sc+10;


 }
 else
 {
   if(x3>=0 && x3<=20)
   sc=sc+40;
   else if(x3>20 && x3<=50)
   sc=sc+10;

 }


   if(r==1)
{
   for(j=i,l=630;j>=230;j-=10,l-=10)
   { y2=630-j;
     x2=y2*x/y;
     x1=630-l;
     y1=x1*x/y;
      elli();
     line(l,280-y1,j,280-x2);
       pieslice(j,280-x2,0,360,3);
     delay(10);
     cleardevice();
     if(x2>270)
     {
     break;
     }
   }
}
   else
{
      for(j=i,l=630;j>=230;j-=10,l-=10)
   {// elli();
     y2=630-j;
     x2=y2*x/y;
     x1=630-l;
     y1=x*x1/y;
     elli();
     line(l,280+y1,j,280+x2);
     pieslice(j,280+x2,0,360,3);
     delay(10);
     cleardevice();
       if(x2>190)
    {
    break;
    }
   }
}
     if(r==1)
     {
	y2=620-j;
     x2=y2*x/y;
     x1=620-l;
     y1=x*x1/y;
     elli();
     line(l+10,280-y1,j,280-x2);
     pieslice(j,280-x2,0,360,3);

     sleep(1);
     cleardevice();

     if(x2>250)
     outtextxy(10,10,"you miss");
     }
     else
     {
	y2=620-j;
     x2=y2*x/y;
     x1=620-l;
     y1=x*x1/y;
     elli();
     line(l+10,280+y1,j,280+x2);
     pieslice(j,280+x2,0,360,3);
     sleep(1);
     cleardevice();

       if(x2>50)
	outtextxy(10,10,"you miss");
     }
     sleep(1);
     cleardevice();
     score(sc);
}
void elli()
{
      setfillstyle(1,1);
      setcolor(1);
     fillellipse(230,180,80,150);
    setfillstyle(1,3);
      setcolor(3);
     fillellipse(230,180,60,120);
	setfillstyle(1,2);
      setcolor(2);
     fillellipse(230,180,40,90);
	setfillstyle(1,4);
      setcolor(4);
     fillellipse(230,180,20,30);
     setcolor(5);
     setlinestyle(1,1,3);

}
void elli1()
{
   setfillstyle(1,1);
      setcolor(1);
     fillellipse(230,230,80,200);
    setfillstyle(2,3);
      setcolor(3);
     fillellipse(230,230,60,150);
	setfillstyle(1,2);
      setcolor(2);
     fillellipse(230,230,40,100);
	setfillstyle(2,4);
      setcolor(4);
     fillellipse(230,230,20,50);
     setcolor(5);
     setlinestyle(1,1,3);
}

  void score(int scor)
{
 char *c[42],a[5];static int m=0;
 int sz,j=0,k;
  m++;if(m==3)
  c1=scor;
 sprintf(a,"%d",scor);
 setcolor(5);
 settextstyle(4,0,5);
 outtextxy(200,180,"Your score is:");
 setcolor(14);
  outtextxy(getmaxx()/2,getmaxy()/2,a);
  sleep(1);
}
//----------------------------
void rain()
{
 int i,j,x,y,fx,fy;
 rectangle(0,0,fx,fy);
 rectangle(3,3,fx-3,fy-3);setcolor(15);
 settextstyle(5,0,5);
 outtextxy(50,150,"Snowing in mt.Albasta . . .");
 getch();

 for(j=0;j<=550;j++)                        //no of times
 {
   for(i=0; i<950; i++)                       //no of lines in rain
   {     x=random(getmaxx());
       y=random(getmaxy());
       line(x,y,x+3,y+3);
   }cleardevice();
 }

}
