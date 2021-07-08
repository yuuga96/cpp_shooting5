#include"libOne.h"
#include "TAKO.h"
void TAKO::setImage(int img){  //クラス名＋::(コロンを二つ)
	Img = img;
}  
void TAKO:: init(){		//::でクラスの関数
	Px = random() % (int)width;
	Py = random() % (int)height;
	Angle = 0;
}					
void TAKO:: move(){
	Angle += 0.01f;
}
void TAKO:: draw(){
	image(Img, Px, Py, Angle);
}
