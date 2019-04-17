int Ftime(int q)
{
int value;
switch(q)
{
case 1:
value = 2;
break;
case 2:
value = 10;
break;
case 3:
value = 20;
break;
default:
value =0;
};
return value;
};
int Fprice(int q)
{
int value;
switch(q)
{
case 1:
value = 30;
break;
case 2:
value = 100;
break;
case 3:
value = 350;
break;
default:
value =0;
};
return value;
}

char * Fname(int q)
{
char * value;
switch(q)
{
case 1:
value = "UREA";
break;
case 2:
value = "AMMONIUM NITRATE";
break;
case 3:
value = "CALCIUM NITRATE";
break;
default:
value = 0;
};
return value;
}
char * Sname(int q)
{
char * value;
switch(q)
{
case 1:
value = "RICE";
break;
case 2:
value = "WHEAT";
break;
case 3:
value = "CORN";
break;
case 4:
value = "STRAWBERRY";
break;
case 5:
value = "PUMPKIN";
break;
case 6:
value = "WATERMELON";
break;
case 7:
value = "SQUASH";
break;
default:
value = " ";
break;
};
return value;
};
int Sprice(int q)
{
int value;
switch(q)
{
case 1:
value = 50;
break;
case 2:
value = 80;
break;
case 3:
value = 120;
break;
case 4:
value = 200;
break;
case 5:
value = 350;
break;
case 6:
value = 600;
break;
case 7:
value = 3000;
break;
default:
value = 0;
break;
};
return value;
};
int Sreward(int q)
{
int value;
switch(q)
{
case 1:
value = 70;
break;
case 2:
value = 120;
break;
case 3:
value = 170;
break;
case 4:
value = 320;
break;
case 5:
value = 700;
break;
case 6:
value = 1240;
break;
case 7:
value = 9000;
break;
default:
value = 0;
break;
};
return value;
};
int Scolor(int q)
{
int value;
switch(q)
{
case 1:
value = WHITE;
break;
case 2:
value = YELLOW;
break;
case 3:
value = YELLOW;
break;
case 4:
value = MAGENTA;
break;
case 5:
value = RED;
break;
case 6:
value = CYAN;
break;
case 7:
value = BLUE;
break;
default:
value = 0;
break;
}
return value;
};
int Sstyle(int q)
{
int value;
switch(q)
{
case 1:
value = WIDE_DOT_FILL;
break;
case 2:
value = LTSLASH_FILL;
break;
case 3:
value = INTERLEAVE_FILL;
break;
case 4:
value = SOLID_FILL;
break;
case 5:
value = LINE_FILL;
break;
case 6:
value = HATCH_FILL;
break;
case 7:
value = XHATCH_FILL;
break;
default:
value = 0;
break;
};
return value;
};
int Stime(int q)
{
int value;
switch(q)
{
case 1:
value = 1;
break;
case 2:
value = 3;
break;
case 3:
value = 10;
break;
case 4:
value = 20;
break;
case 5:
value = 30;
break;
case 6:
value = 60;
break;
case 7:
value = 720;
break;
default:
value = 0;
break;
};
return value*60;
};

