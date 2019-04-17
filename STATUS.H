void harv(int);
void status(){
int gd= DETECT,gm;
clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
setcolor(MAGENTA);
rectangle(1,1,630,400);
 //customizing the fields
	for(int k=0;k<8;k++){
//-------------------------------------
	setcolor(BROWN);
	setfillstyle(CLOSE_DOT_FILL, BROWN);
	rectangle(10,10+(50*k),200,50+(50*k));
	setcolor(MAGENTA);
	line(1,55+(50*k),630,55+(50*k));
	floodfill(17,12+(50*k),BROWN);
if(f[k].init>=1){  //crop field display
	setcolor(f[k].color);
	setfillstyle(f[k].style, f[k].color);
	rectangle(85-f[k].i,10+(50*k),125+f[k].i,50+(50*k));
	floodfill(86,11+(50*k),f[k].color);
	 };
//-------------------------------

if(f[k].init==1 || f[k].init==2){
setcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(220,10+(50*k),"CROP:");

setcolor(WHITE);
outtextxy(270,10+(50*k),Sname(f[k].Sid));
setcolor(YELLOW);
outtextxy(220,35+(50*k),"PROGRESS:");
char pp[60];
if(f[k].i==75){
sprintf(pp,"PRESS %d TO HARVEST CROP!",k);
setcolor(RED);
outtextxy(320,35+(50*k),pp);
}else{
setcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(370,10+(50*k),"FERTILIZER:");
if(f[k].Fcheck==1){
outtextxy(470,10+(50*k),Fname(f[k].Fid));
}else{
setcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(460,10+(50*k),"USE ONE!");
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(RED);
outtextxy(540,10+(50*k),"(f)");
};
sprintf(pp,"%d \%",f[k].i+25);
setcolor(WHITE);
outtextxy(320,35+(50*k),pp);

};
};
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(RED);
outtextxy(70,447,"(b)");
outtextxy(260,447,"(r)");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 setcolor(YELLOW);
outtextxy(0,440,"BACK");
outtextxy(150,440,"REFRESH");
};
int ch;
ch=getch();
switch(ch)
{
case 98:
game();
break;
case 114:
status();
break;
case 102:
pfert();
break;
default:
if(ch>47 && ch<56){
if(f[ch-48].init==2)
harv(ch-48);
else
status();
break;
};
};
};
void harv(int b)
{
f[b].init=0;
f[b].Fcheck=0;
p1.cash=p1.cash+Sreward(b);
save();
succ();
game();
};