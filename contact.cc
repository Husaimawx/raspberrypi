/**
 * 接线要求：树莓派的TXD接Arduino的RX3, RXD接Arduino的TX3才能正常使用
 * 程序功能：把树莓派通过串口发送来数据通过Arduino的串口3接收，然后通过Arduino
 * 的串口0转发到Arduino IDE串口监视器中。
 */
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <wiringSerial.h>

int main (int argc, char** argv)
{
	int fd = serialOpen("/dev/ttyAMA0", 115200); 
	if (fd == -1) {
		perror("open /dev/ttyAMA0");
		return 0;
	}

	for (;;) {
		serialPuts(fd, "Hello Arduino");
		sleep(1);	// 
	}

	serialClose(fd);

	return 0;
}


