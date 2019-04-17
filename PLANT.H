void plot(int,int,int,int,int);
void harv();
void pfert();
void fplot(int,int,int);
void fpStep(int);
void plant()
{
pstart:
refresh();
clrscr();
int gd= DETECT,gm;

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
	if(f[0].init==0){
	rectangle(10,60,200,170); //1
	floodfill(20,70,BROWN);}
	if(f[1].init==0){
	rectangle(210,60,400,170); //2
	floodfill(211,70,BROWN);}
	if(f[2].init==0){
	rectangle(410,60,600,170); //3
	floodfill(411,70,BROWN);}
	if(f[3].init==0){
	rectangle(10,180,200,300); //4
	floodfill(20,190,BROWN);}
	if(f[4].init==0){
	rectangle(410,180,600,300); //5
	floodfill(411,190,BROWN);}
	if(f[5].init==0){
	rectangle(10,310,200,410); //6
	floodfill(20,320,BROWN);}
	if(f[6].init==0){
	rectangle(210,310,400,410); //7
	floodfill(211,320,BROWN);}
	if(f[7].init==0){
	rectangle(410,310,600,410); //8
	floodfill(411,320,BROWN);}
//---------------------------------------------------------------
setcolor(BROWN);
settextstyle(DEFAULT_FONT,HORIZ_DIR, 4);
outtextxy(210,220,"WiPpTY");
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
if(f[0].init==0)
outtextxy(190,160,"1");
if(f[3].init==0)
outtextxy(190,290,"4");
if(f[1].init==0)
outtextxy(390,160,"2");
if(f[2].init==0)
outtextxy(590,160,"3");
if(f[4].init==0)
outtextxy(590,290,"5");
if(f[7].init==0)
outtextxy(590,400,"8");
if(f[5].init==0)
outtextxy(190,400,"6");
if(f[6].init==0)
outtextxy(390,400,"7");

settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(RED);
outtextxy(70,447,"(b)");
settextstyle(DEFAULT_FONT,HORIZ_DIR, 2);
setcolor(WHITE);
outtextxy(0,440,"BACK");
//settextstyle(COMPLEX_FONT,HORIZ_DIR, 2);
setcolor(YELLOW);
outtextxy(10,17,"CHOOSE FROM AVAILABLE FIELDS:");
char plantinput;
plantinput=getch();
closegraph();
switch(plantinput)
{
case '1':
if(f[0].init==0){
pStep(1);
}else{goto pstart;};break;
case '2':
if(f[1].init==0){
pStep(2);
}else{goto pstart;};break;
case '3':
if(f[2].init==0){
pStep(3);
}else{goto pstart;};break;
case '4':
if(f[3].init==0){
pStep(4);
}else{goto pstart;}break;
case '5':
if(f[4].init==0){
pStep(5);
}else{goto pstart;};break;
case '6':
if(f[5].init==0){
pStep(6);
}else{goto pstart;};break;
case '7':
if(f[6].init==0){
pStep(7);
}else{goto pstart;};break;
case '8':
if(f[7].init==0){
pStep(8);
}else{goto pstart;};break;
case 'b':
game();break;
default:
goto pstart;
};
};
void pStep(int fval){
int gd= DETECT,gm;
clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
int k=0;
char * rec;
char count[4];
char quant[6];
//-------------------------
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(RED);
outtextxy(70,447,"(b)");
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
setcolor(YELLOW);
outtextxy(10,17,"CHOOSE FROM YOUR SEEDS:");
//------------------------
int d=0;
 if(p1.SLim>0){
 for(int i=0;i<p1.SLim;i++){
 d++;
	sprintf(count,"(%d)",d);
	sprintf(quant,"(x%d)",p1.SQuant[i]);
	rec=Sname(p1.Seeds[i]);
	settextstyle(DEFAULT_FONT,HORIZ_DIR, 2);
	setcolor(RED);
	outtextxy(0,80+k,count);
	setcolor(WHITE);
	outtextxy(60,80+k,rec);
	setcolor(CYAN);
	outtextxy(360,80+k,quant);
	k=k+30;}
 }else{
	settextstyle(DEFAULT_FONT,HORIZ_DIR, 2);
	setcolor(RED);
	outtextxy(0,80,"NO ITEM TO SHOW");

 };
//------------------------------------
 setcolor(YELLOW);
outtextxy(0,440,"BACK");
int get;
get=getch();
if(get-48>0 && get-48<p1.SLim+1){
       plot(fval,Scolor(p1.Seeds[get-49]),Sstyle(p1.Seeds[get-49]),Stime(p1.Seeds[get-49]),p1.Seeds[get-49]);
	if(p1.SQuant[get-49]>1){
	p1.SQuant[get-49]--;
	}else{
	for(int j=get-49;j<p1.SLim;j++){
	p1.Seeds[j]=p1.Seeds[j+1];
	p1.SQuant[j]=p1.SQuant[j+1];
	};
	p1.SLim--;
	};
	succ();
	game();
}else if(get==98){game();}else{pStep(fval);};
 closegraph();
};
void plot(int fal,int col,int styl,int stime,int id){
double min;
--fal;
clock_t tem= clock();
min=tem;
f[fal].init=1;
f[fal].color=col;
f[fal].style=styl;
f[fal].i=0;
f[fal].j=0;
f[fal].min=min;
f[fal].time=stime;
f[fal].ctime=rtime;
f[fal].Sid=id;

save();

};
void pfert()
{
fpstart:
refresh();
clrscr();
int gd= DETECT,gm;

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
	if(f[0].init==1){
	rectangle(10,60,200,170); //1
	floodfill(20,70,BROWN);}
	if(f[1].init==1){
	rectangle(210,60,400,170); //2
	floodfill(211,70,BROWN);}
	if(f[2].init==1){
	rectangle(410,60,600,170); //3
	floodfill(411,70,BROWN);}
	if(f[3].init==1){
	rectangle(10,180,200,300); //4
	floodfill(20,190,BROWN);}
	if(f[4].init==1){
	rectangle(410,180,600,300); //5
	floodfill(411,190,BROWN);}
	if(f[5].init==1){
	rectangle(10,310,200,410); //6
	floodfill(20,320,BROWN);}
	if(f[6].init==1){
	rectangle(210,310,400,410); //7
	floodfill(211,320,BROWN);}
	if(f[7].init==1){
	rectangle(410,310,600,410); //8
	floodfill(411,320,BROWN);}
//--------------------------------------------------------------
setcolor(BROWN);
settextstyle(DEFAULT_FONT,HORIZ_DIR, 4);
outtextxy(210,220,"WiPpTY");
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
if(f[0].init==1)
outtextxy(190,160,"1");
if(f[3].init==1)
outtextxy(190,290,"4");
if(f[1].init==1)
outtextxy(390,160,"2");
if(f[2].init==1)
outtextxy(590,160,"3");
if(f[4].init==1)
outtextxy(590,290,"5");
if(f[7].init==1)
outtextxy(590,400,"8");
if(f[5].init==1)
outtextxy(190,400,"6");
if(f[6].init==1)
outtextxy(390,400,"7");

settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(RED);
outtextxy(70,447,"(b)");
settextstyle(DEFAULT_FONT,HORIZ_DIR, 2);
setcolor(WHITE);
outtextxy(0,440,"BACK");
//settextstyle(COMPLEX_FONT,HORIZ_DIR, 2);
setcolor(YELLOW);
outtextxy(10,17,"CHOOSE FROM AVAILABLE FIELDS:");
char plantinput;
plantinput=getch();
closegraph();
switch(plantinput)
{
case '1':
if(f[0].init==1){
fpStep(1)
;
}else{goto fpstart;};break;
case '2':
if(f[1].init==1){
fpStep(2);
}else{goto fpstart;};break;
case '3':
if(f[2].init==1){
fpStep(3);
}else{goto fpstart;};break;
case '4':
if(f[3].init==1){
fpStep(4);
}else{goto fpstart;}break;
case '5':
if(f[4].init==1){
fpStep(5);
}else{goto fpstart;};break;
case '6':
if(f[5].init==1){
fpStep(6);
}else{goto fpstart;};break;
case '7':
if(f[6].init==1){
fpStep(7);
}else{goto fpstart;};break;
case '8':
if(f[7].init==1){
fpStep(8);
}else{goto fpstart;};break;
case 'b':
game();break;
default:
goto fpstart;
};
};
void fpStep(int fval){
int gd= DETECT,gm;
clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
int k=0;
char * rec;
char count[4];
char quant[6];
//-------------------------
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
setcolor(RED);
outtextxy(70,447,"(b)");
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
setcolor(YELLOW);
outtextxy(10,17,"CHOOSE FROM YOUR FERTILIZERS:");
//------------------------
int d=0;
 if(p1.FLim>0){
 for(int i=0;i<p1.FLim;i++){
 d++;
	sprintf(count,"(%d)",d);
	sprintf(quant,"(x%d)",p1.FQuant[i]);
	rec=Fname(p1.Fert[i]);
	settextstyle(DEFAULT_FONT,HORIZ_DIR, 2);
	setcolor(RED);
	outtextxy(0,80+k,count);
	setcolor(WHITE);
	outtextxy(60,80+k,rec);
	setcolor(CYAN);
	outtextxy(360,80+k,quant);
	k=k+30;}
 }else{
	settextstyle(DEFAULT_FONT,HORIZ_DIR, 2);
	setcolor(RED);
	outtextxy(0,80,"NO ITEM TO SHOW");

 };
//------------------------------------
 setcolor(YELLOW);
outtextxy(0,440,"BACK");
int get;
get=getch();
if(get-48>0 && get-48<p1.FLim+1){
       fplot(fval,Ftime(p1.Fert[get-49]*60),p1.Fert[get-49]);
	if(p1.FQuant[get-49]>1){
	p1.FQuant[get-49]--;
	}else{
	for(int j=get-49;j<p1.FLim;j++){
	p1.Fert[j]=p1.Fert[j+1];
	p1.FQuant[j]=p1.FQuant[j+1];
	};
	p1.FLim--;
	};
	succ();
	game();
}else if(get==98){game();}else{fpStep(fval);};
 closegraph();
};
void fplot(int fal,int stime,int id){
getch();
f[fal-1].Fcheck=1;
f[fal-1].Ftime=stime;
f[fal-1].Fid=id;
save();
};


