#include <iostream>
#include <stdio.h>
#include <unistd.h>
using namespace std;


int main(){
    int flag = 1;    
    while(execl("/home/pi/Desktop/dist/testcamera",NULL)!=-1);
    if(flag==1){
	while(execl("/home/pi/Desktop/dist/qrimg",NULL)!=-1);
    }	    
    else {
	while(execl("/home/pi/Desktop/testcolor",NULL)!=-1);
    }
	return 0;
}
