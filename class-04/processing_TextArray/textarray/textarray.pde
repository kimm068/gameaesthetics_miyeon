int row= 20;
int col=20;

int px; //player-x
int py; //player-y
int ox; //obstacle-x
int oy; // obstacle-y
int ex; //emeraldx
int ey; //emeraldy

//boolean gameover;

char [][]grid = new char[row][col];

char player = 'P';
char enemy = 'E';
char obstacle = '#';

void setup(){
 size(500,500);

 
px = 1;
py = 1;
ox = 13;
oy = 17;
ex = 18;
ey = 18;
//PFont font;
//font = loadFont("ZapfDingbats.ttf");
//textFont(font, 14);

//gameover = false;
}

void draw(){
  background(0);
  textSize(20);
  text("use arrow key to play, avoid #", 100, 450);
  
  //if (px>=20){
  //  px = 0;
  //}
  //if (px<=-1){
  //  px = 20;
  //}
  //if(py>=20){
  //  ex=0;
  //}
  //if(py<=-1){
  //  ey=20;
  //}
  
  for (int i=0; i < row; i++) {
    for (int j=0; j < col; j++) {
        grid[i][j] = '-';
    grid[px][py] = player;
    grid[ex][ey] = enemy;
    grid [ox][oy] = obstacle;
    text(grid[i][j], i*20,j*20);
     }
  }
  
  
  if (px==ex && py==ey){
    textSize(40);
    fill(0,0,255);
    text("YOU WIN!", 100, 150);
}
  if (px==ox && py==oy){
      textSize(40);
    fill(255,0,0);
    text("YOU ARE DEAD!", 100, 150);
}
}
void keyPressed(){
 if(key== CODED){
  if (keyCode == UP){
   py--;
 }
 if (keyCode == DOWN){
   py++;
 }
 if (keyCode==LEFT){
   px--;
 }
 if (keyCode== RIGHT){
   px++;
 }
  
   }
}