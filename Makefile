all:
	g++ camera.cpp `pkg-config opencv --libs` -o testcamera
	./testcamera
	python qrimg.py
	g++ color.cpp `pkg-config opencv --libs` -o testcolor
	./testcolor
camera:
	g++ camera.cpp `pkg-config opencv --libs` -o testcamera
	./testcamera
qrimg:
	g++ camera.cpp `pkg-config opencv --libs` -o testcamera
	./testcamera
	python qrimg.py
color:
	g++ camera.cpp `pkg-config opencv --libs` -o testcamera
	./testcamera
	g++ color.cpp `pkg-config opencv --libs` -o testcolor
	./testcolor
serial:
	g++ contact.cc -lwiringPi -o serial
	./serial
clean:
	rm testcamera testcolor *.jpg
