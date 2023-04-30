#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 char tabuleiro[10][10]=
{  '-', '1', '2', '3', '4', '5', '6', '7', '8', '-',    /*TABULEIRO,  USEI UMA MATRIZ  10 X 10*/
   '1', 't', 'c', 'b', 'k', 'q', 'b', 'c', 't', '|',
   '2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', '|',
   '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|',
   '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|',
   '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|',
   '6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|',
   '7', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', '|',
   '8', 'T', 'C', 'B', 'Q', 'K', 'B', 'C', 'T', '|',
   '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'
};


void jogador1(void);

void main(void)
{
while(1){
 jogador1();
}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void jogador1(void)
{
   int pesa;
   int x,y,z,h;
   unsigned  int l,c;
   int t,i;


for(t=0; t<10; ++t) {                 /*exibe o tabuleiro*/
for(i=0; i<10; ++i)
printf("%3c",tabuleiro[t][i]);
printf("\n");
  }


printf("Digite a peça que deseja movimentar (ex: linha:7 e coluna:1)  ");
scanf("%d%d",&z,&h);


////////////////////////////////////////////////////////////////////////////////

/*TORRE*/
if (tabuleiro[z][h]=='T'){
/*cima*/
l=z-1;
c=h; 
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l-1;
}
} 
/*baixo*/
l=z+1;
c=h; 
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l+1;
}
} 
/*esquerda*/
l=z;
c=h-1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
c=c-1;
}
} 
/*direita*/
l=z;
c=h+1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
c=c+1;
}
} 

for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
printf("%3c",tabuleiro[t][i]);
printf("\n");
}

printf("Digite o local que deseja movimentar a pesa ");
scanf("%d%d",&x,&y);
 ///////////////////////////////
if ((tabuleiro[x][y]=='x') |  (tabuleiro[x][y]=='t')  |  (tabuleiro[x][y]=='c')  |  (tabuleiro[x][y]=='b')  |  (tabuleiro[x][y]=='q') |  (tabuleiro[x][y]=='p')){
tabuleiro[x][y]=tabuleiro[z][h];
tabuleiro[z][h]=' ';
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
if(tabuleiro[t][i]=='x') {
tabuleiro[t][i]=' ';
}
else

printf("%3c",tabuleiro[t][i]);
printf("\n");
}
}



 }

////////////////////////////////////////////////////////////////////////////////
/*CAVALO*/
if (tabuleiro[z][h]=='C'){

/*cima esquerda*/
l=z-2;
c=h-1;
if(tabuleiro[l][c]==' '){
tabuleiro[l][c]='x';
}

/*baixo esquerda*/
l=z+2;
c=h-1;
if(tabuleiro[l][c]==' '){
tabuleiro[l][c]='x';
}

/*cima direita*/
l=z-2;
c=h+1;
if(tabuleiro[l][c]==' '){
tabuleiro[l][c]='x';
}

/*baixo direito*/
l=z+2;
c=h+1;
if(tabuleiro[l][c]==' '){
tabuleiro[l][c]='x';
}

/*esquerda baixo*/
l=z+1;
c=h-2;
if(tabuleiro[l][c]==' '){
tabuleiro[l][c]='x';
}
/*esquerda cima*/
l=z-1;
c=h-2;
if(tabuleiro[l][c]==' '){
tabuleiro[l][c]='x';
}
/*direita baixo*/
l=z+1;
c=h+2;
if(tabuleiro[l][c]==' '){
tabuleiro[l][c]='x';
}
/*direita cima*/
l=z-1;
c=h+2;
if(tabuleiro[l][c]==' '){
tabuleiro[l][c]='x';
}
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
printf("%3c",tabuleiro[t][i]);
printf("\n");
  }
printf("Digite o local que deseja movimentar a pesa ");
scanf("%d%d",&x,&y);
 ///////////////////////////////
if  ((tabuleiro[x][y]=='x') |  (tabuleiro[x][y]=='t')  |  (tabuleiro[x][y]=='c')  |  (tabuleiro[x][y]=='b')  |  (tabuleiro[x][y]=='q') |  (tabuleiro[x][y]=='p')) {
tabuleiro[x][y]=tabuleiro[z][h];
tabuleiro[z][h]=' ';
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
if(tabuleiro[t][i]=='x') {
tabuleiro[t][i]=' ';
}
else

printf("%3c",tabuleiro[t][i]);
printf("\n");
}
}




 }
////////////////////////////////////////////////////////////////////////////////
/*BISPO*/
if (tabuleiro[z][h]=='B'){
/*cima direita*/
l=z-1;
c=h+1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l-1;
c=c+1;
}
}
/*cima esquerda*/
l=z-1;
c=h-1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l-1;
c=c-1;
}
}
/*baixo direita*/
l=z+1;
c=h+1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l+1;
c=c+1;
}
}
/*baixo esquerda*/
l=z+1;
c=h-1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l+1;
c=c-1;
}
}
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
printf("%3c",tabuleiro[t][i]);
printf("\n");
  }
printf("Digite o local que deseja movimentar a pesa ");
scanf("%d%d",&x,&y);
 ///////////////////////////////
if  ((tabuleiro[x][y]=='x') |  (tabuleiro[x][y]=='t')  |  (tabuleiro[x][y]=='c')  |  (tabuleiro[x][y]=='b')  |  (tabuleiro[x][y]=='q') |  (tabuleiro[x][y]=='p')) {
tabuleiro[x][y]=tabuleiro[z][h];
tabuleiro[z][h]=' ';
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
if(tabuleiro[t][i]=='x') {
tabuleiro[t][i]=' ';
}
else

printf("%3c",tabuleiro[t][i]);
printf("\n");
}
}


 }
////////////////////////////////////////////////////////////////////////////////
/*RAINHA*/
if (tabuleiro[z][h]=='Q'){
 /*cima*/
l=z-1;
c=h; 
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l-1;
}
} 
/*baixo*/
l=z+1;
c=h; 
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l+1;
}
} 
/*esquerda*/
l=z;
c=h-1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
c=c-1;
}
} 
/*direita*/
l=z;
c=h+1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
c=c+1;
}
} 
/*cima direita*/
l=z-1;
c=h+1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l-1;
c=c+1;
}
}
/*cima esquerda*/
l=z-1;
c=h-1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l-1;
c=c-1;
}
}
/*baixo direita*/
l=z+1;
c=h+1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l+1;
c=c+1;
}
}
/*baixo esquerda*/
l=z+1;
c=h-1;
if (tabuleiro[l][c] ==' ' ) {
while(tabuleiro[l][c] == ' ') {
tabuleiro[l][c]='x';
l=l+1;
c=c-1;
}
}
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
printf("%3c",tabuleiro[t][i]);
printf("\n");
  }
  printf("Digite o local que deseja movimentar a pesa ");
scanf("%d%d",&x,&y);
 ///////////////////////////////
if  ((tabuleiro[x][y]=='x') |  (tabuleiro[x][y]=='t')  |  (tabuleiro[x][y]=='c')  |  (tabuleiro[x][y]=='b')  |  (tabuleiro[x][y]=='q') |  (tabuleiro[x][y]=='p')) {
tabuleiro[x][y]=tabuleiro[z][h];
tabuleiro[z][h]=' ';
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
if(tabuleiro[t][i]=='x') {
tabuleiro[t][i]=' ';
}
else

printf("%3c",tabuleiro[t][i]);
printf("\n");
}
}

   /////////////////////////////////////////

 }

////////////////////////////////////////////////////////////////////////////////
/*REI*/
if (tabuleiro[z][h]=='K'){
  /*cima*/
l=z-1;
c=h; 
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
}
/*baixo*/
l=z+1;
c=h; 
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
}
/*esquerda*/
l=z;
c=h-1;
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
} 
/*direita*/
l=z;
c=h+1;
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
}
  /*cima direita*/
l=z-1;
c=h+1;
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
}
/*cima esquerda*/
l=z-1;
c=h-1;
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
}
/*baixo direita*/
l=z+1;
c=h+1;
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
}
/*baixo esquerda*/
l=z+1;
c=h-1;
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
}
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
printf("%3c",tabuleiro[t][i]);
printf("\n");
  }
  printf("Digite o local que deseja movimentar a pesa ");
scanf("%d%d",&x,&y);
 ///////////////////////////////
if  ((tabuleiro[x][y]=='x') |  (tabuleiro[x][y]=='t')  |  (tabuleiro[x][y]=='c')  |  (tabuleiro[x][y]=='b')  |  (tabuleiro[x][y]=='q') |  (tabuleiro[x][y]=='p')) {
tabuleiro[x][y]=tabuleiro[z][h];
tabuleiro[z][h]=' ';
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
if(tabuleiro[t][i]=='x') {
tabuleiro[t][i]=' ';
}
else

printf("%3c",tabuleiro[t][i]);
printf("\n");
}
}

 }
////////////////////////////////////////////////////////////////////////////////
/*PEAO*/
if (tabuleiro[z][h]=='P'){
if (z==7){

 /*cima*/
l=z-2;
c=h; 
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
}
l=z-1;
c=h; 
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
}
}
else
l=z-1;
c=h; 
if (tabuleiro[l][c] ==' ' ) {
tabuleiro[l][c]='x';
}
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
printf("%3c",tabuleiro[t][i]);
printf("\n");
  }
 printf("Digite o local que deseja movimentar a pesa ");
scanf("%d%d",&x,&y);
 ///////////////////////////////
if  ((tabuleiro[x][y]=='x') |  (tabuleiro[x][y]=='t')  |  (tabuleiro[x][y]=='c')  |  (tabuleiro[x][y]=='b')  |  (tabuleiro[x][y]=='q') |  (tabuleiro[x][y]=='p')) {
tabuleiro[x][y]=tabuleiro[z][h];
tabuleiro[z][h]=' ';
for(t=0; t<10; ++t) {
for(i=0; i<10; ++i)
if(tabuleiro[t][i]=='x') {
tabuleiro[t][i]=' ';
}
else

printf("%3c",tabuleiro[t][i]);
printf("\n");
}
}


}


}