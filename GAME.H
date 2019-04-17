
int gd= DETECT,gm;
void game(){
start:

refresh();
clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
//-------------------------------------------------------------
setcolor(GREEN);   //customizing the grass
	setfillstyle(XHATCH_FILL, GREEN);
	rectangle(0,50,610,420);
	floodfill(300,200,GREEN);
//-------------------------------------------------------------
setcolor(BROWN); //customizing the fields
	setfillstyle(CLOSE_DOT_FILL, BROWN);
	rectangle(10,60,200,170); //1
	floodfill(20,70,BROWN);
	rectangle(210,60,400,170); //2
	floodfill(211,70,BROWN);
	rectangle(410,60,600,170); //3
	floodfill(411,70,BROWN);
	rectangle(10,180,200,290); //4
	floodfill(20,190,BROWN);
	rectangle(410,180,600,290); //5
	floodfill(411,190,BROWN);
	rectangle(10,300,200,410); //6
	floodfill(20,320,BROWN);
	rectangle(210,300,400,410); //7
	floodfill(211,320,BROWN);
	rectangle(410,300,600,410); //8
	floodfill(411,320,BROWN);
//--------------------------------------------------------------
//cropfield
if(f[0].init>=1){
	setcolor(f[0].color);
	setfillstyle(f[0].style, f[0].color);
	rectangle(85-f[0].i,95-f[0].j,125+f[0].i,135+f[0].j);
	floodfill(90,106,f[0].color); };
if(f[1].init>=1){
setcolor(f[1].color);//2
	setfillstyle(f[1].style, f[1].color);
	rectangle(285-f[1].i,95-f[1].j,325+f[1].i,135+f[1].j);
	floodfill(286,96,f[1].color);     };
if(f[2].init>=1){
setcolor(f[2].color);//3
	setfillstyle(f[2].style, f[2].color);
	rectangle(485-f[2].i,95-f[2].j,525+f[2].i,135+f[2].j);
	floodfill(486,106,f[2].color);};
if(f[3].init>=1){
setcolor(f[3].color);//4
	setfillstyle(f[3].style, f[3].color);
	rectangle(85-f[3].i,215-f[3].j,125+f[3].i,255+f[3].j);
	floodfill(90,226,f[3].color);};
if(f[4].init>=1){
setcolor(f[4].color);//5
	setfillstyle(f[4].style, f[4].color);
	rectangle(485-f[4].i,215-f[4].j,525+f[4].i,255+f[4].j);
	floodfill(490,221,f[4].color);};
if(f[5].init>=1){
setcolor(f[5].color);//6
	setfillstyle(f[5].style, f[5].color);
	rectangle(85-f[5].i,335-f[5].j,125+f[5].i,375+f[5].j);
	floodfill(90,341,f[5].color);};
if(f[6].init>=1){
setcolor(f[6].color);//7
	setfillstyle(f[6].style, f[6].color);
	rectangle(285-f[6].i,335-f[6].j,325+f[6].i,375+f[6].j);
	floodfill(290,341,f[6].color);};
if(f[7].init>=1) {
setcolor(f[7].color);//8
	setfillstyle(f[7].style, f[7].color);
	rectangle(485-f[7].i,335-f[7].j,525+f[7].i,375+f[7].j);
	floodfill(490,341,f[7].color);};
//---------------------------------------------------------------
setcolor(BROWN);
settextstyle(DEFAULT_FONT,HORIZ_DIR, 4);
outtextxy(210,220,"WiPpTY");
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
outtextxy(190,160,"1");
outtextxy(190,280,"4");
outtextxy(390,160,"2");
outtextxy(590,160,"3");
outtextxy(590,280,"5");
outtextxy(590,400,"8");
outtextxy(190,400,"6");
outtextxy(390,400,"7");
//----------------------------------------------------------------------
setcolor(YELLOW);
rectangle(0,0,610,40);
settextstyle(COMPLEX_FONT,HORIZ_DIR, 2);
outtextxy(10,7,"CASH:");
outtextxy(200,7,"INVENTORY:");
char cas[5];
sprintf(cas,"%d",p1.cash);
outtextxy(70,7,cas);
outtextxy(470,7,"STATUS");
outtextxy(335,7,"5");
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(RED);
outtextxy(362,24,"(i)");
outtextxy(560,24,"(s)");
outtextxy(70,447,"(b)");
outtextxy(440,447,"(h)");
outtextxy(320,447,"(n)");
outtextxy(610,447,"(p)");
settextstyle(DEFAULT_FONT,HORIZ_DIR, 2);
setcolor(WHITE);
outtextxy(0,440,"BACK");
outtextxy(120,440,"INSTRUCTIONS");
setcolor(CYAN);
outtextxy(370,440,"SHOP");
setcolor(BROWN);
outtextxy(480,440,"SOW SEED");
char input;
input=getch();
closegraph();
switch(input)
{
case 'b':
exit(0);
//case 'i':
//inventory();
//break;
case 's':
status();
break;
case 'p':
plant();
break;
case 'h':
shop();
//case 'n':
//instruct();
break;
default:
goto start;
};
getch();
}