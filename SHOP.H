void seeds();
void buy(int);
void shop(){
int gd= DETECT,gm;
clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
//-------------------------
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(RED);
outtextxy(70,447,"(b)");
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
setcolor(CYAN);
outtextxy(10,17,"CHOOSE YOUR SECTION:");
//------------------------------------
	settextstyle(DEFAULT_FONT,HORIZ_DIR, 2);
	setcolor(RED);
	outtextxy(0,120,"(1)");
	setcolor(BROWN);
	outtextxy(60,220,"FERTILIZERS");
	setcolor(RED);
	outtextxy(0,220,"(2)");
	setcolor(MAGENTA);
	outtextxy(60,320,"JACKPOT!");
	setcolor(RED);
	outtextxy(0,320,"(3)");
	setcolor(GREEN);
	outtextxy(60,120,"SEEDS");
setcolor(CYAN);
outtextxy(0,440,"BACK");
char chk;
chk= getch();
 closegraph();
 switch(chk){
 case '1':
 seeds();
 break;
 case '2':
 fert();
 break;
/* case '3':
 jack();
 break;
 */case 'b':
 game();
 default:
 shop();
 };
};
void seeds()
{
int gd= DETECT,gm;
clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
//-------------------------
	settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(WHITE);
rectangle(0,40,630,420);
setcolor(RED); //rice
	outtextxy(0,70,"(1)");
	setcolor(MAGENTA);
	outtextxy(40,70,"RICE:");
	setcolor(YELLOW);
	outtextxy(110,70,"PRICE:");
	outtextxy(200,70,"REWARD:");
	outtextxy(300,70,"GROWTH TIME:");
	setcolor(WHITE);
	outtextxy(160,70,"50");
	outtextxy(260,70,"70");
	outtextxy(405,70,"1 Min.");
	rectangle(475,50,550,90);
	setcolor(Scolor(1));
	setfillstyle(Sstyle(1),Scolor(1));
       floodfill(476,51,WHITE);
setcolor(RED); //wheat
	outtextxy(0,120,"(2)");
	setcolor(MAGENTA);
	outtextxy(40,120,"WHEAT:");
	setcolor(YELLOW);
	outtextxy(110,120,"PRICE:");
	outtextxy(200,120,"REWARD:");
	outtextxy(300,120,"GROWTH TIME:");
	setcolor(WHITE);
	outtextxy(160,120,"80");
	outtextxy(260,120,"120");
	outtextxy(405,120,"3 Min.");
	rectangle(475,100,550,140);
	setfillstyle(Sstyle(2),Scolor(2));
	floodfill(476,101,WHITE);

setcolor(RED); //corn
	outtextxy(0,170,"(3)");
	setcolor(MAGENTA);
	outtextxy(40,170,"CORN:");
	setcolor(YELLOW);
	outtextxy(110,170,"PRICE:");
	outtextxy(200,170,"REWARD:");
	outtextxy(300,170,"GROWTH TIME:");
	setcolor(WHITE);
	outtextxy(160,170,"120");
	outtextxy(260,170,"170");
	outtextxy(405,170,"10 Min.");
	rectangle(475,150,550,190);
	setfillstyle(s3.style,s3.color);
	floodfill(476,151,WHITE);
 setcolor(RED); //strawberry
	outtextxy(0,220,"(4)");
	setcolor(MAGENTA);
	outtextxy(40,220,"STRAWBER.:");
	setcolor(YELLOW);
	outtextxy(110,220,"PRICE:");
	outtextxy(200,220,"REWARD:");
	outtextxy(300,220,"GROWTH TIME:");
	setcolor(WHITE);
	outtextxy(160,220,"200");
	outtextxy(260,220,"320");
	outtextxy(405,220,"20 Min.");
	rectangle(475,200,550,240);
	setfillstyle(s4.style,s4.color);
	floodfill(476,201,WHITE);
setcolor(RED); //pumpkin
	outtextxy(0,270,"(5)");
	setcolor(MAGENTA);
	outtextxy(40,270,"PUMPKIN:");
	setcolor(YELLOW);
	outtextxy(110,270,"PRICE:");
	outtextxy(200,270,"REWARD:");
	outtextxy(300,270,"GROWTH TIME:");
	setcolor(WHITE);
	outtextxy(160,270,"350");
	outtextxy(260,270,"600");
	outtextxy(405,270,"30 Min.");
	rectangle(475,250,550,290);
	setfillstyle(s5.style,s5.color);
	floodfill(476,251,WHITE);
setcolor(RED); //watermelon
	outtextxy(0,320,"(6)");
	setcolor(MAGENTA);
	outtextxy(40,320,"WATERMEL.:");
	setcolor(YELLOW);
	outtextxy(110,320,"PRICE:");
	outtextxy(200,320,"REWARD:");
	outtextxy(300,320,"GROWTH TIME:");
	setcolor(WHITE);
	outtextxy(160,320,"600");
	outtextxy(260,320,"1240");
	outtextxy(405,320,"60 Min.");
	rectangle(475,300,550,340);
	setfillstyle(s6.style,s6.color);
	floodfill(476,301,WHITE);
 setcolor(RED); //squash
	outtextxy(0,370,"(7)");
	setcolor(MAGENTA);
	outtextxy(40,370,"SQUAHSH:");
	setcolor(YELLOW);
	outtextxy(110,370,"PRICE:");
	outtextxy(200,370,"REWARD:");
	outtextxy(300,370,"GROWTH TIME:");
	setcolor(WHITE);
	outtextxy(160,370,"3000");
	outtextxy(260,370,"9000");
	outtextxy(405,370,"720 Min.");
	rectangle(475,350,550,390);
	setfillstyle(s7.style,s7.color);
	floodfill(476,351,WHITE);
 //-------------------------
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(RED);
outtextxy(70,447,"(b)");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
setcolor(GREEN);
outtextxy(10,17,"SEEDS:");
outtextxy(0,440,"BACK");
char chk;
chk=getch();
closegraph();
switch (chk)
{
case 'b':
shop();
break;
case '1':
buy(1);
break;
case '2':
buy(2);
break;
case '3':
buy(3);
break;
case '4':
buy(4);
break;
case '5':
buy(5);
break;
case '6':
buy(6);
break;
case '7':
buy(7);
break;
default:
seeds();
};};

void fert()
{
int gd= DETECT,gm;
clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
//-------------------------
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(RED);
outtextxy(70,447,"(b)");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
setcolor(BROWN);
outtextxy(10,17,"FERTILIZERS:");
outtextxy(0,440,"BACK");
//---------------------------
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(WHITE);
rectangle(0,40,630,420);


setcolor(RED); //UREA
	outtextxy(0,70,"(1)");
	setcolor(MAGENTA);
	outtextxy(40,70,"UREA:");
	setcolor(YELLOW);
	outtextxy(170,70,"PRICE:");
	outtextxy(300,70,"TIME REDUCTION:");
	setcolor(WHITE);
	outtextxy(220,70,"30");
	outtextxy(425,70,"2 Min.");
setcolor(RED); //AMMONIUM NITRATE

	outtextxy(0,120,"(2)");
	setcolor(MAGENTA);
	outtextxy(40,120,"AMMONIUM NITRATE:");
	setcolor(YELLOW);
	outtextxy(170,120,"PRICE:");
	outtextxy(300,120,"TIME REDUCTION:");
	setcolor(WHITE);
	outtextxy(220,120,"100");
	outtextxy(425,120,"10 Min.");

setcolor(RED); //CALCIUM NITRATE
	outtextxy(0,170,"(3)");
	setcolor(MAGENTA);
	outtextxy(40,170,"CALCIUM NITRATE:");
	setcolor(YELLOW);
	outtextxy(170,170,"PRICE:");
	outtextxy(300,170,"TIME REDUCTION:");
	setcolor(WHITE);
	outtextxy(220,170,"350");
	outtextxy(425,170,"20 Min.");
char chk;
chk=getch();
closegraph();
switch (chk)
{
case 'b':
shop();
break;
case '1':
buyf(1);
break;
case '2':
buyf(2);
break;
case '3':
buyf(3);
break;
default:
fert();
};
};
void buy(int val){
if(p1.cash>=Sprice(val)){
p1.cash=p1.cash - Sprice(val);
int chk=-1;
for(int i=0;i<p1.SLim+1;i++)
{
if(p1.Seeds[i]==val){
chk=i;
break;
};
};
if(chk==-1){
p1.Seeds[p1.SLim]=val;
p1.SQuant[p1.SLim]=1;
p1.SLim++;
}else{
p1.SQuant[chk]++;
};
succ();
game();
}else{cout<<"NOT ENOUGH CASH!";getch();game();};

};
void buyf(int val){
if(p1.cash>=Fprice(val)){
p1.cash=p1.cash - Fprice(val);
int chk=-1;
for(int i=0;i<p1.SLim+1;i++)
{
if(p1.Fert[i]==val){
chk=i;
break;
};
};
if(chk==-1){
p1.Fert[p1.SLim]=val;
p1.FQuant[p1.SLim]=1;
p1.FLim++;
}else{
p1.FQuant[chk]++;
};
succ();
game();
}else{cout<<"NOT ENOUGH CASH!";getch();game();};

};

//------------------------------------
