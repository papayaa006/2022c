PImage img;
void setup(){
  size(400, 400);
  imgBG=loadImage("BG.png")
  img=loadImage("astro.png");
  image=loadImage("image.png")
}

void draw(){
  image(imgBG, 0, 0);
  image(img, mouseX, mouseY);
  image(img, 0, 0);
}
