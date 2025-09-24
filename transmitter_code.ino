
#include <SPI.h>        
#include "RF24.h"       
#include "Wire.h"      
#include "I2Cdev.h"     
#include "MPU6050.h"   



MPU6050 mpu;
int16_t ax, ay, az;
int16_t gx, gy, gz;


int data[2];


RF24 radio(8,9);

                                   
const uint64_t pipe = 0xE8E8F0F0E1LL;

void setup(void){
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();              //Initialize the MPU object
  radio.begin();                 //Start the nRF24 communicate     
  radio.openWritingPipe(pipe);   //Sets the address of the receiver to which the program will send data.
}

void loop(void){
  
  //With this function, the acceleration and gyro values of the axes are taken. 
  //If you want to control the car axis differently, you can change the axis name in the map command.
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  //In two-way control, the X axis (data [0]) of the MPU6050 allows the robot to move forward and backward. 
  //Y axis (data [0]) allows the robot to right and left turn.
  data[0] = map(ax, -17000, 17000, 300, 400 ); //Send X axis data
  data[1] = map(ay, -17000, 17000, 100, 200);  //Send Y axis data
  radio.write(data, sizeof(data));
}
