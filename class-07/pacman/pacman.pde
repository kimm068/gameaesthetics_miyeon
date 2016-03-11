// 0 dots
// 1 wall
// 2 invisible wall
// 3 packman level

int[][] grid = {
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
  {1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1}, 
  {1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1}, 
  {1, 0, 1, 2, 2, 1, 0, 1, 2, 2, 2, 1, 0, 1, 1, 0, 1, 2, 2, 2, 1, 0, 1, 2, 2, 1, 0, 1}, 
  {1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1}, 
  {1, 3, 0, 0, 0, 0, 3, 0, 0, 3, 0, 0, 3, 0, 0, 3, 0, 0, 3, 0, 0, 3, 0, 0, 0, 0, 3, 1}, 
  {1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1}, 
  {1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1}, 
  {1, 0, 0, 0, 0, 0, 3, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 3, 0, 0, 0, 0, 0, 1}, 
  {1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1}, 
  {2, 2, 2, 2, 2, 1, 0, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 0, 1, 2, 2, 2, 2, 2}, 
  {2, 2, 2, 2, 2, 1, 0, 1, 1, 2, 2, 2, 3, 2, 2, 3, 2, 2, 2, 1, 1, 0, 1, 2, 2, 2, 2, 2}, 
  {2, 2, 2, 2, 2, 1, 0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 0, 1, 2, 2, 2, 2, 2}, 
  {1, 1, 1, 1, 1, 1, 0, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 0, 1, 1, 1, 1, 1, 1}, 
  {0, 0, 0, 0, 0, 0, 3, 2, 2, 3, 1, 2, 2, 2, 2, 2, 2, 1, 3, 2, 2, 3, 0, 0, 0, 0, 0, 0}, 
  {1, 1, 1, 1, 1, 1, 0, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 0, 1, 1, 1, 1, 1, 1}, 
  {2, 2, 2, 2, 2, 1, 0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 0, 1, 2, 2, 2, 2, 2}, 
  {2, 2, 2, 2, 2, 1, 0, 1, 1, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 1, 1, 0, 1, 2, 2, 2, 2, 2}, 
  {2, 2, 2, 2, 2, 1, 0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 0, 1, 2, 2, 2, 2, 2}, 
  {1, 1, 1, 1, 1, 1, 0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 0, 1, 1, 1, 1, 1, 1}, 
  {1, 0, 0, 0, 0, 0, 3, 0, 0, 3, 0, 0, 0, 1, 1, 0, 0, 0, 3, 0, 0, 3, 0, 0, 0, 0, 0, 1}, 
  {1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1}, 
  {1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1}, 
  {1, 0, 0, 0, 1, 1, 3, 0, 0, 3, 0, 0, 3, 0, 0, 3, 0, 0, 3, 0, 0, 3, 1, 1, 0, 0, 0, 1}, 
  {1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1}, 
  {1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1}, 
  {1, 0, 0, 3, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 3, 0, 0, 1}, 
  {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1}, 
  {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1}, 
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, 
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int playerX=13;
int playerY=23;
float cellW;
float cellH;

int ghostX =1;
int ghostY =1;

int ghostDirX = 1;
int ghostDirY = 0;



void setup(){
  size(780,780);
  cellW = width/grid[0].length;
  cellH = height/grid.length;
  drawEverything();
}

void draw(){
}

void keyPressed(){
  if (keyCode==UP){
    if (grid[playerY-1][playerX]!=1){
    playerY--;
  }
  }
  if (keyCode==DOWN){
   if (grid[playerY+1][playerX]!=1){
    playerY++;
  }
  }
  if (keyCode ==LEFT){
        if (grid[playerY][playerX-1]!=1){
    playerX--;
  }
  }
  if (keyCode == RIGHT){
   if (grid[playerY][playerX+1]!=1){
    playerX++;
  }
  }
  updateGhost();
  drawEverything();

}
void updateGhost(){
  //needs to have a direction
  //if not in a decision cell, (3)
  //if the position ahead is free, move in current direction
  //if its not free, find the other open position and move to it
  //if it is in a dicision cell
  
  //after direction has been changed, or not, move in current direction
 
  if (grid[ghostY][ghostX] !=3);
   if(grid[ghostY+ghostDirY][ghostX+ghostDirX]==1){
      if (ghostDirX !=0){
        if (grid [ghostY+1][ghostX]!=1){
          ghostDirX = 0;
          ghostDirY = 1;
        }
        if (grid [ghostY-1][ghostX]!=1){
          ghostDirX = 0;
          ghostDirY = -1;
        }
        
         else if (ghostDirY !=0){
        if (grid [ghostY][ghostX+1]!=1){
          ghostDirY = 0;
          ghostDirX = 1;
        }

        if (grid [ghostY][ghostX-1]!=1){
          ghostDirY = 0;
          ghostDirX = -1;
        }
    }
  }
} else {
  if (ghostDirX !=0){
    //check what's free in up, down or continue directions
    boolean upFree =false;
    boolean downFree=false;
    boolean contFree=false;

    float upDist=0;
    float downDist=0;
    float contDist=0;
    
    if (grid[ghostY-1][ghostX] !=1){
      upFree = true;
      upDist = dist(ghostX, ghostY-1, playerX, playerY);
    } 
    if (grid[ghostY+1][ghostX] !=1){
      downFree=true;
      downDist = dist (ghostX, ghostY+1, playerX, playerY);
    }
    if (grid[ghostY][ghostX+ghostDirX] !=1){
      contFree=true;
      contDist = dist (ghostX + ghostDirX, ghostY, playerX, playerY);
    }
    if (upFree && downFree){
      if (upDist<downDist){
        ghostDirX = 0;
        ghostDirY = -1;
      } else {
        ghostDirX = 0;
        ghostDirY = 1;
      }
    } else if (downFree && contFree){
      if (downDist < contDist){
        ghostDirX = 0;
        ghostDirY =1;
      } else {}
    } else if (contFree && upFree){
      if (contDist < upDist){
      }
      
      else {
        ghostDirX = 0;
        ghostDirY = -1;
        
      }
    }
 
}

ghostX += ghostDirX;
ghostY += ghostDirY;
}

}
}


void drawEverything(){
 for (int i = 0; i< grid[0].length; i++){
   for (int j=0; j<grid.length; j++){
     stroke(0);
    if (grid[j][i]==1){
      fill(255);
   } else if (grid[j][i]==3){
     fill (0,255,0);
   } else{
     fill(0);
   }
   rect(i*cellW, j*cellH, cellW, cellH);
   
   
if (grid[j][i] ==0){
  fill(255);
  noStroke();
  ellipse (i*cellW + cellW/2, j * cellH + cellH/2, 3, 3);

}
 }
}

noStroke();
ellipseMode(CORNER);
fill (255,255,0);
ellipse(playerX*cellW,playerY*cellH, cellW, cellH);

fill(255,0,0);
rect(ghostX * cellW, ghostY * cellH, cellW, cellH);


}