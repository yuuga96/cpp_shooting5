#include"libOne.h"
#include"TAKO.h"

void gmain() {
	window(1920, 1080, full);
	int takoImg = loadImage("assets\\enemy.png");
	int num = 30;
	TAKO* takos = new TAKO[num];
	for (int i = 0; i < num; i++) {
		takos[i].setImage(takoImg);
		takos[i].init();
	}
	

	while (notQuit) {
		for (int i = 0; i < num; i++) {
			takos[i].move();
			takos[i].draw();
		}
	}
	delete[] takos;
}

