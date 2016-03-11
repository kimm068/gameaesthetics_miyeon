int cellsize = 10;
int width = 500;
int height = 500;

int x= floor((width/cellsize)/2);
int y= floor((height/cellsize)/2);
int fx = 30;
int fy = 30;

int grid[][];
int player[][];
int food [][];

void setup(){
  size (500, 500);
  grid = new int[width/cellsize][height/cellsize];
  player = new int[width/cellsize][height/cellsize];
  food = new int[width/cellsize][height/cellsize];
  noiseSeed(0);
  
}

void draw(){
  background (0);
  noiseDetail (4, 1);
  float increment = 0.08;
  float xoff = 0.0;
  for (int i=0; i<width/cellsize; i++){
    xoff += increment*2;
     float yoff= 0.0;
     for (int j=0; j<height/cellsize; j++){
       yoff+=increment*2;
       float brightness = noise (xoff,yoff,frameCount *0.0005) *255;
  
       grid[i][j] = floor (brightness);
       player[i][j] = 0; // refresh the player's location all the time
     }
    }
    player[x][y] = 1;
    
    for (int i=0; i<width/cellsize; i++){
     for (int j=0; j<height/cellsize; j++){
      fill (grid[i][j]);
        if (player[i][j]==1){
          fill (255,0,0);
        }
        
      noStroke();
      rect(i*cellsize, j*cellsize, cellsize, cellsize);
     }
    }
    
   fill(0,0,255); 
   rect (fx*cellsize,fy*cellsize,cellsize,cellsize);
   
   if (x==fx && y==fy){
    //player[x][y]=0;
    //food[fx][fy]=0;
      textSize(40);
      fill(255,255,255);
     text("YOU WIN", 250, 250);
   }
   
   //if (grid[x][y]==grid[fx][fy]){
   //  //player[x][y]=0;
   //  //food[fx][fy]=0;
   //    textSize(40);
   //    fill(255,255,255);
   //   text("YOU WIN", 250, 250);
   //}
  //println(grid[x+1][y]);
  print (x);
  print (" ");
  println(y);
}

void keyPressed(){
 if (key==CODED){
   if (keyCode == RIGHT){
    if (grid[x+1][y]>255){
      x++;
    }
   }
   if (keyCode == LEFT){
    if (grid[x-1][y]>255){
      x--;
    }
   }
  if (keyCode == UP){
    if (grid[x][y-1]>255){
      y--;
    }
   }
   if (keyCode == DOWN){
    if (grid[x][y+1]>255){
      y++;
      }
     }
   }
 }