int rows = 20;
int cols = 20;

int playerX;
int playerY;

int enemyX;
int enemyY;

char [][] grid = new char [rows][cols];

char player= 'P';
char enemy = 'E';

boolean gameover;

void setup(){
 size (500,500);
 
 playerX=10;
 playerY=10;
 
 enemyX=100;
 enemyY=100;
 
 gameover = false;
  
  //myFont = createFont("ZapfDingbats.ttf", 14);
  //textFont(myFont);
}

void draw(){
 background(0);
 
if(playerX>=10){
  playerX = 0;
}

if(playerX<=-1){
  playerX=9;
}

if(playerY>=10){
  playerY=1;
}
if(playerY<=0){
  playerY=19;
}

for (int i=0; i<rows; i++){
  for (int j=0; j<cols; j++){
    
    if((i+j)%2 ==1){
      grid[i][j]='o';
  } else {
    grid [i][j]='x';
}

grid [playerX][playerY] = player;
grid [enemyX][enemyY] = enemy;
text(grid[i][j], i*5, j*5);
  }
}

if (gameover == true){
  for (int i=0; i<rows; i++){
    for (int j=0; j<cols; j++){
      grid[i][j]='Q';
      text(grid[i][j], i*5, j*5);
    }
  }
  textSize(40);
  fill(255,0,0);
  text("GAME OVER!", 25,150);
}
}

void keyPressed(){
  int random = int(random(2));
  
  if (key == 'w'){
    playerY--;
  }
  
  if (key == 's'){
    playerY++;
  }
  if(key =='a'){
    playerX--;
  }
  if(key=='d'){
    playerX++;
  }
  if (enemyX != playerX && enemyY != playerY){
  
  if (random==0){
    if (playerX>enemyX){
      enemyX++;
    }
    if (playerX < enemyX){
      enemyX--;
    }
  }
  
  if(random ==1){
    if (playerY > enemyY){
      enemyY++;
    }
    if (playerY < enemyY){
      enemyY--;
    }
  }
} 
if (enemyX == playerX && enemyY == playerY){
  gameover = true;
}


  }