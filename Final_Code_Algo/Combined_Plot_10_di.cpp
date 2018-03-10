//Program to print dinucleotide INTRA value of each sequence in eleven different file having values for seperate parameter
//INPUT: this program is called from another shell script, run.sh
//OUTPUT: The files are printed in Data directory in same folder. 
#include<ctype.h>
#include<cstring>
#include<iostream>
#include<cmath>
#include<string.h>
 
using namespace std;

int main(int argc,char *argv[])
{ 
char* b_arr2=argv[1];
FILE *fq_a=fopen(argv[2],"a+");
FILE *fq_b=fopen(argv[3],"a+");
FILE *fq_c=fopen(argv[4],"a+");
FILE *fq_d=fopen(argv[5],"a+");
FILE *fq_e=fopen(argv[6],"a+");
FILE *fq_f=fopen(argv[7],"a+");
FILE *fq_g=fopen(argv[8],"a+");
FILE *fq_h=fopen(argv[9],"a+");
FILE *fq_i=fopen(argv[10],"a+");
FILE *fq_j=fopen(argv[11],"a+");
FILE *fq_k=fopen(argv[12],"a+");
FILE *fq_l=fopen(argv[13],"a+");
FILE *fq_m=fopen(argv[14],"a+");
FILE *fq_n=fopen(argv[15],"a+");
FILE *fq_o=fopen(argv[16],"a+");
FILE *fq_p=fopen(argv[17],"a+");
FILE *fq_q=fopen(argv[18],"a+");
FILE *fq_r=fopen(argv[19],"a+");
FILE *fq_s=fopen(argv[20],"a+");
FILE *fq_t=fopen(argv[21],"a+");
FILE *fq_u=fopen(argv[22],"a+");
FILE *fq_v=fopen(argv[23],"a+");
FILE *fq_w=fopen(argv[24],"a+");
FILE *fq_x=fopen(argv[25],"a+");
FILE *fq_y=fopen(argv[26],"a+");
FILE *fq_z=fopen(argv[27],"a+");
FILE *fq_aa=fopen(argv[28],"a+");
FILE *fq_ab=fopen(argv[29],"a+");
FILE *fq_ac=fopen(argv[30],"a+");
FILE *fq_ad=fopen(argv[31],"a+");
FILE *fq_ae=fopen(argv[32],"a+");

int m=0;
double noofbases=0;
long double a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,ma=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,aa=0,ab=0,ac=0,ad=0,ae=0; 
	
	noofbases = strlen(b_arr2);
	
	if (noofbases == 0)
	{
	exit(0);
	}
	noofbases--;
		for(m=1;m<noofbases;m++)
		{
        		if((b_arr2[m-1]=='A' && b_arr2[m]=='A') || (b_arr2[m-1]=='T' && b_arr2[m]=='T'))
                                {
				 a=-0.24586;     b=0.004276;     c=-0.61382;     d=0.596711;     e=1.421711;     f=0.128291;     g=-0.17956;     h=0.120633;     i=-1.48165;     j=-15.3082;     k=3.158861;     l=-0.11;        ma=-0.2; n=3.25; o=0.63; p=-0.08;        q=35.67;        r=3.27; s=35.56;        t=-55.5495;     u=51.04402;     v=50.77228;     w=128.4076;     x=-5.92446;     y=-96.656;      z=-110.254;     aa=118.7842;    ab=38.99565;    ac=-5.44;       ad=-26.71;      ae=-171.84;
				fprintf(fq_a, "%Lf\n", a);
				fprintf(fq_b, "%Lf\n", b);
				fprintf(fq_c, "%Lf\n", c);
				fprintf(fq_d, "%Lf\n", d);
				fprintf(fq_e, "%Lf\n", e);
				fprintf(fq_f, "%Lf\n", f);
				fprintf(fq_g, "%Lf\n", g);
				fprintf(fq_h, "%Lf\n", h);
				fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
      				fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
			else if((b_arr2[m-1]=='G' && b_arr2[m]=='G') || (b_arr2[m-1] =='C' && b_arr2[m] =='C'))
                                {
				a=0.584605;     b=-0.07763;     c=9.909211;     d=3.127632;     e=2.585526;     f=1.2239;       g=-1.1225;      h=1.6701;       i=8.842;        j=5.707;        k=5.719;        l=0.38; ma=0.71;        n=2.96; o=-1.62;        p=-2.55;        q=29.49;        r=2.73; s=31.57;        t=-38.322;      u=39.807;       v=44.997;       w=129.998;      x=-56.716;      y=-61.65;       z=-103.913;     aa=96.172;      ab=37.361;      ac=-8.48;       ad=-26.28;      ae=-166.76;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);
			
				}
                	else if((b_arr2[m-1]=='T'||b_arr2[m-1]=='t') && (b_arr2[m] =='A'|| b_arr2[m] =='a'))
                         	{
				a=0.101842;     b=-0.28579;     c=0.547368;     d=-0.76579;     e=1.471053;     f=0.026053;     g=-0.17737;     h=0.084737;     i=-0.32632;     j=-14.0368;     k=3.305263;     l=-0.05;        ma=0.37;        n=3.39; o=-2.71;        p=1.74; q=32.05;        r=3.41; s=32;   t=-50.82;       u=29.23;        v=53.74;        w=127.846;      x=-37.772;      y=-61.97;       z=-106.74;      aa=119.92;      ab=37.824;      ac=-5.83;       ad=-26.9;       ae=-174.35;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
	                else if((b_arr2[m-1]=='C'|| b_arr2[m-1]=='c') && (b_arr2[m] =='G'|| b_arr2[m] =='g'))
        	                {
				a=0.70475;      b=0.060125;     c=2.910625;     d=0.303125;     e=1.48875;      f=0.355364;     g=-0.35755;     h=0.561455;     i=2.413182;     j=-3.27955;     k=-0.84909;     l=0.24; ma=0.68;        n=3.33; o=1.75; p=4.29; q=37.38;        r=3.33; s=39.1; t=-43.178;      u=57.555;       v=51.502;       w=132.616;      x=-67.013;      y=-62.643;      z=-106.586;     aa=103.3;       ab=37.951;      ac=-8.05;       ad=-27.93;      ae=-176.88;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
                	else if((b_arr2[m-1]=='G'||b_arr2[m-1]=='g') && (b_arr2[m] =='C'||b_arr2[m] =='c'))
                        	{
				a=0.593382;     b=0.082647;     c=0.364706;     d=2.507353;     e=1.244118;     f=0.021286;     g=-0.13686;     h=0.284;        i=-0.98286;     j=-10.4429;     k=-1.11571;     l=-0.28;        ma=0.17;        n=3.35; o=-2.68;        p=-5.28;        q=31.09;        r=3.29; s=30.56;        t=-48.267;      u=36.968;       v=36.646;       w=129.951;      x=-70.502;      y=-63.978;      z=-109.979;     aa=84.877;      ab=38.594;      ac=-8.72;       ad=-28.13;      ae=-165.58;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
	                else if((b_arr2[m-1]=='A'||b_arr2[m-1]=='a') && (b_arr2[m] =='T'||b_arr2[m] =='t'))
        	                {
				a=-0.17819;     b=-0.02597;     c=-0.25972;     d=0.461111;     e=1.2125;       f=0.01375;      g=-0.13375;     h=0.147222;     i=0.279167;     j=-16.5361;     k=4.109722;     l=-0.06;        ma=-0.44;       n=3.31; o=-0.9; p=-2.62;        q=33.42;        r=3.33; s=33.68;        t=-51.913;      u=59.981;       v=47.175;       w=125.847;      x=-31.23;       y=-93.609;      z=-113.738;     aa=107.8554;    ab=40.016;      ac=-5.35;       ad=-27.2;       ae=-173.7;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
                	else if((b_arr2[m-1]=='A' && b_arr2[m]=='C') || (b_arr2[m-1]=='G' && b_arr2[m]=='T'))
                        	{
				a=-0.03125;     b=-0.0505;      c=0.68; d=2.51; e=1.25; f=0.055;        g=-0.12481;     h=0.572885;     i=-5.57885;     j=-9.83846;     k=2.109615;     l=-0.12;        ma=0.73;        n=3.66; o=-4.75;        p=-0.6; q=34.79;        r=2.97; s=37.6; t=-45.4742;     u=42.118;       v=51.8606;      w=126.878;      x=-34.3212;     y=-55.7666;     z=-116.5469;    aa=106.334;     ab=38.65;       ac=-7.14;       ad=-27.73;      ae=-171.11;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
			else if((b_arr2[m-1]=='C' && b_arr2[m]=='A') || (b_arr2[m-1] =='T' && b_arr2[m] =='G'))
                        	{
				a=0.311563;     b=-0.0675;      c=3.004688;     d=0.175;        e=1.054688;     f=-0.00182;     g=-0.14879;     h=0.156212;     i=0.075758;     j=-10.8242;     k=2.072727;     l=-0.07;        ma=0.52;        n=3.29; o=-3.27;        p=1.54; q=36.74;        r=3.21; s=37.25;        t=-52.023;      u=41.3456;      v=35.389;       w=131.452;      x=-75.781;      y=-60.38;       z=-91.5032;     aa=73.933;      ab=38.744;      ac=-7.01;       ad=-27.15;      ae=-179.01;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
                	else if((b_arr2[m-1]=='A' && b_arr2[m]=='G') || (b_arr2[m-1] =='C' && b_arr2[m] =='T'))
                        	{
				a=0.485909;     b=-0.02864;     c=1.825;        d=3.722727;     e=1.652273;     f=-0.06364;     g=-0.16818;     h=-0.14614;     i=-0.85;        j=-11.7341;     k=-3.66818;     l=-0.27;        ma=0.21;        n=3.02; o=3.69; p=-7.27;        q=31;   r=3.06; s=19.06;        t=-36.214;      u=36.155;       v=43.87;        w=129.955;      x=-43.587;      y=-34.57;       z=-88.341;      aa=73.08;       ab=38.941;      ac=-6.27;       ad=-26.89;      ae=-174.93;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
                	else if((b_arr2[m-1]=='G' && b_arr2[m]=='A') || (b_arr2[m-1] =='T' && b_arr2[m] =='C'))
                        	{
				a=-0.15833;     b=0.08; c=0.525926;     d=0.751852;     e=1.177778;     f=0.049815;     g=-0.19926;     h=0.21463;      i=-1.16852;     j=-13.1352;     k=0.942593;     l=0.04; ma=-0.2;        n=3.32; o=2.21; p=2.69; q=37.74;        r=3.33; s=37.81;        t=-42.611;      u=54.835;       v=53.374;       w=131.432;      x=-8.081;       y=-94.004;      z=-110.983;     aa=118.188;     ab=37.945;      ac=-7.8;        ad=-26.78;      ae=-167.6;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
                	else if((b_arr2[m-1]=='A'||b_arr2[m-1]=='a') && (b_arr2[m] =='N'||b_arr2[m] =='n'))
                        	{
				a=0.217; b=-0.031; c=1.889; d=1.339; e=1.456; f=0.181; g=-0.275; h=0.367; i=0.122; j=-9.943; k=1.578; l=-0.030; ma=0.255; n=3.288; o=-0.765; p=-0.814; q=33.937; r=3.193; s=33.419; t=-46.437; u=44.904; v=46.933; w=129.438; x=-43.093; y=-68.523; z=-105.858; aa=100.244; ab=38.502; ac=-7.009; ad=-27.170; ae=-172.176;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
	                else if((b_arr2[m-1]=='T'||b_arr2[m-1]=='t') && (b_arr2[m] =='N'||b_arr2[m] =='n'))
        	                {
				a=0.217; b=-0.031; c=1.889; d=1.339; e=1.456; f=0.181; g=-0.275; h=0.367; i=0.122; j=-9.943; k=1.578; l=-0.030; ma=0.255; n=3.288; o=-0.765; p=-0.814; q=33.937; r=3.193; s=33.419; t=-46.437; u=44.904; v=46.933; w=129.438; x=-43.093; y=-68.523; z=-105.858; aa=100.244; ab=38.502; ac=-7.009; ad=-27.170; ae=-172.176;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
                	else if(b_arr2[m-1]=='G' && b_arr2[m] =='N')
                        	{
				a=0.217; b=-0.031; c=1.889; d=1.339; e=1.456; f=0.181; g=-0.275; h=0.367; i=0.122; j=-9.943; k=1.578; l=-0.030; ma=0.255; n=3.288; o=-0.765; p=-0.814; q=33.937; r=3.193; s=33.419; t=-46.437; u=44.904; v=46.933; w=129.438; x=-43.093; y=-68.523; z=-105.858; aa=100.244; ab=38.502; ac=-7.009; ad=-27.170; ae=-172.176;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
	                else if(b_arr2[m-1]=='C' && b_arr2[m] =='N')
        	                {
				a=0.217; b=-0.031; c=1.889; d=1.339; e=1.456; f=0.181; g=-0.275; h=0.367; i=0.122; j=-9.943; k=1.578; l=-0.030; ma=0.255; n=3.288; o=-0.765; p=-0.814; q=33.937; r=3.193; s=33.419; t=-46.437; u=44.904; v=46.933; w=129.438; x=-43.093; y=-68.523; z=-105.858; aa=100.244; ab=38.502; ac=-7.009; ad=-27.170; ae=-172.176;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
                	else if(b_arr2[m-1]=='N' && b_arr2[m] =='A')
                        	{
				a=0.217; b=-0.031; c=1.889; d=1.339; e=1.456; f=0.181; g=-0.275; h=0.367; i=0.122; j=-9.943; k=1.578; l=-0.030; ma=0.255; n=3.288; o=-0.765; p=-0.814; q=33.937; r=3.193; s=33.419; t=-46.437; u=44.904; v=46.933; w=129.438; x=-43.093; y=-68.523; z=-105.858; aa=100.244; ab=38.502; ac=-7.009; ad=-27.170; ae=-172.176;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
	                else if(b_arr2[m-1]=='N' && b_arr2[m] =='T')
        	                {
				a=0.217; b=-0.031; c=1.889; d=1.339; e=1.456; f=0.181; g=-0.275; h=0.367; i=0.122; j=-9.943; k=1.578; l=-0.030; ma=0.255; n=3.288; o=-0.765; p=-0.814; q=33.937; r=3.193; s=33.419; t=-46.437; u=44.904; v=46.933; w=129.438; x=-43.093; y=-68.523; z=-105.858; aa=100.244; ab=38.502; ac=-7.009; ad=-27.170; ae=-172.176;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
                	else if(b_arr2[m-1]=='N' && b_arr2[m] =='G')
                        	{
				a=0.217; b=-0.031; c=1.889; d=1.339; e=1.456; f=0.181; g=-0.275; h=0.367; i=0.122; j=-9.943; k=1.578; l=-0.030; ma=0.255; n=3.288; o=-0.765; p=-0.814; q=33.937; r=3.193; s=33.419; t=-46.437; u=44.904; v=46.933; w=129.438; x=-43.093; y=-68.523; z=-105.858; aa=100.244; ab=38.502; ac=-7.009; ad=-27.170; ae=-172.176;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
	                else if(b_arr2[m-1]=='N' && b_arr2[m] =='C')
        	                {
				a=0.217; b=-0.031; c=1.889; d=1.339; e=1.456; f=0.181; g=-0.275; h=0.367; i=0.122; j=-9.943; k=1.578; l=-0.030; ma=0.255; n=3.288; o=-0.765; p=-0.814; q=33.937; r=3.193; s=33.419; t=-46.437; u=44.904; v=46.933; w=129.438; x=-43.093; y=-68.523; z=-105.858; aa=100.244; ab=38.502; ac=-7.009; ad=-27.170; ae=-172.176;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
                	else if(b_arr2[m-1]=='N' && b_arr2[m] =='N')
                        	{
				a=0.217; b=-0.031; c=1.889; d=1.339; e=1.456; f=0.181; g=-0.275; h=0.367; i=0.122; j=-9.943; k=1.578; l=-0.030; ma=0.255; n=3.288; o=-0.765; p=-0.814; q=33.937; r=3.193; s=33.419; t=-46.437; u=44.904; v=46.933; w=129.438; x=-43.093; y=-68.523; z=-105.858; aa=100.244; ab=38.502; ac=-7.009; ad=-27.170; ae=-172.176;
				fprintf(fq_a, "%Lf\n", a);
                                fprintf(fq_b, "%Lf\n", b);
                                fprintf(fq_c, "%Lf\n", c);
                                fprintf(fq_d, "%Lf\n", d);
                                fprintf(fq_e, "%Lf\n", e);
                                fprintf(fq_f, "%Lf\n", f);
                                fprintf(fq_g, "%Lf\n", g);
                                fprintf(fq_h, "%Lf\n", h);
                                fprintf(fq_i, "%Lf\n", i);
                                fprintf(fq_j, "%Lf\n", j);
                                fprintf(fq_k, "%Lf\n", k);
                                fprintf(fq_l, "%Lf\n", l);
                                fprintf(fq_m, "%Lf\n", ma);
                                fprintf(fq_n, "%Lf\n", n);
                                fprintf(fq_o, "%Lf\n", o);
                                fprintf(fq_p, "%Lf\n", p);
                                fprintf(fq_q, "%Lf\n", q);
                                fprintf(fq_r, "%Lf\n", r);
                                fprintf(fq_s, "%Lf\n", s);
                                fprintf(fq_t, "%Lf\n", t);
                                fprintf(fq_u, "%Lf\n", u);
                                fprintf(fq_v, "%Lf\n", v);
                                fprintf(fq_w, "%Lf\n", w);
                                fprintf(fq_x, "%Lf\n", x);
                                fprintf(fq_y, "%Lf\n", y);
                                fprintf(fq_z, "%Lf\n", z);
                                fprintf(fq_aa, "%Lf\n", aa);
                                fprintf(fq_ab, "%Lf\n", ab);
                                fprintf(fq_ac, "%Lf\n", ac);
                                fprintf(fq_ad, "%Lf\n", ad);
                                fprintf(fq_ae, "%Lf\n", ae);

				}
        	}
	
	a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,ma=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,aa=0,ab=0,ac=0,ad=0,ae=0; 
       	
	fclose(fq_a);
	fclose(fq_b);
	fclose(fq_c);
	fclose(fq_d);
	fclose(fq_e);
	fclose(fq_f);
	fclose(fq_g);
	fclose(fq_h);
	fclose(fq_i);
    fclose(fq_j);
    fclose(fq_k);
	fclose(fq_l);
	fclose(fq_m);
	fclose(fq_n);
	fclose(fq_o);
	fclose(fq_p);
	fclose(fq_q);
	fclose(fq_r);
	fclose(fq_s);
	fclose(fq_t);
    fclose(fq_u);
    fclose(fq_v);
	fclose(fq_w);
	fclose(fq_x);
	fclose(fq_y);
	fclose(fq_z);
	fclose(fq_aa);
	fclose(fq_ab);
	fclose(fq_ac);
	fclose(fq_ad);
	fclose(fq_ae);

}    