/*
 点阵表情
 */
#ifndef MaxMatrix1_h
#define MaxMatrix1_h
# if ARDUINO >= 100
  #include "Arduino.h"
# else
  # include "WProgram.h"
# endif

//超声波脚定义
#define PIN_DIN 12 
#define PIN_CS 10   
#define PIN_CLK 11

const char zero_code[]={0x00,0x00,0x7C,0x82,0x82,0x7C,0x00,0x00};/*"0",0*/
const char one_code[]={0x00,0x00,0x00,0x84,0xFE,0x80,0x00,0x00};/*"1",1*/
const char two_code[]={0x00,0x00,0xC4,0xA2,0x92,0x8C,0x00,0x00};/*"2",2*/
const char three_code[]={0x00,0x00,0x44,0x92,0x92,0x6C,0x00,0x00};/*"3",3*/
const char four_code[]={0x00,0x00,0x70,0x4C,0xFE,0x40,0x00,0x00};/*"4",4*/
const char five_code[]={0x00,0x00,0x9E,0x92,0x92,0x62,0x00,0x00};/*"5",5*/
const char six_code[]={0x00,0x00,0x7C,0x92,0x92,0x64,0x00,0x00};/*"6",6*/
const char seven_code[]={0x00,0x00,0x06,0xE2,0x12,0x0E,0x00,0x00};/*"7",7*/
const char eight_code[]={0x00,0x00,0x6C,0x92,0x92,0x6C,0x00,0x00};/*"8",8*/
const char nine_code[]={0x00,0x00,0x4C,0x92,0x92,0x7C,0x00,0x00};/*"9",9*/
const char smile_code[]={0x00,0x10,0x20,0x40,0x40,0x20,0x10,0x00};/*"smile",smile*/
const char forward_code[]={0x00,0x81,0xff,0x89,0x1d,0x01,0x02,0x00};/*"F",F*/
const char backward_code[]={0x00,0x81,0xff,0x89,0x89,0x76,0x00,0x00};/*"B",B*/
const char left_code[]={0x00,0x42,0x7e,0x42,0x40,0x60,0x00,0x00};/*"L",L*/
const char right_code[]={0x00,0x81,0xff,0x09,0x19,0xe6,0x80,0x00};/*"R",R*/
//歌曲表情
const char musicmouth[][8]={{0x00,0x10,0x20,0x40,0x40,0x20,0x10,0x00},
                            {0x00,0x40,0x20,0x10,0x10,0x20,0x40,0x00},
                            {0x00,0x40,0x20,0x10,0x20,0x40,0x20,0x00},
                            {0x00,0x20,0x50,0x88,0x88,0x50,0x20,0x00},
                            {0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00},
                            {0x00,0x10,0x30,0x50,0x50,0x30,0x10,0x00},
                            {0x00,0x40,0x60,0x50,0x50,0x60,0x40,0x00},
                            {0x00,0x40,0x60,0x30,0x30,0x60,0x40,0x00},
                            {0x00,0x30,0x48,0x90,0x90,0x48,0x30,0x00},
                            {0x00,0x00,0xa0,0x50,0x28,0x00,0x00,0x00},
                            {0x00,0x88,0x50,0x20,0x50,0x88,0x00,0x00},
                            {0x00,0x00,0x10,0x08,0xe8,0x10,0x00,0x00},
                            {0x00,0x10,0x10,0x70,0x90,0x90,0x70,0x00},
                            {0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00}, 
                            {0x00,0x60,0x10,0x10,0x10,0x10,0x60,0x00},                                                                                     
                                                                                                                
  };
//const char smile_code1[]={0x00,0x26,0x46,0x40,0x40,0x46,0x26,0x00};/*"smile",smile*/
//const char sad_code1[]={0x00,0x46,0x26,0x20,0x20,0x26,0x46,0x00};/*"cry",cry*/
//const char smile_code2[]={0x02,0x22,0x42,0x40,0x40,0x42,0x22,0x02};/*"smile",smile*/
//const char sad_code2[]={0x02,0x42,0x22,0x20,0x20,0x22,0x42,0x02};/*"cry",cry*/
//const char smile_code3[]={0x02,0x27,0x42,0x40,0x40,0x42,0x27,0x02};/*"smile",smile*/
//const char sad_code3[]={0x02,0x47,0x22,0x20,0x20,0x22,0x47,0x02};/*"cry",cry*/
//const char line_code1[]={0x00,0x46,0x46,0x40,0x40,0x46,0x46,0x00};/*"line",line*/
//const char line_code2[]={0x02,0x42,0x42,0x40,0x40,0x42,0x42,0x02};/*"line",line*/
//const char line_code3[]={0x02,0x47,0x42,0x40,0x40,0x42,0x47,0x02};/*"line",line*/
//const char circle_code1[]={0x00,0x46,0x46,0x40,0x40,0x46,0x46,0x00};/*"口",口*/
//const char circle_code2[]={0x02,0x42,0x42,0x40,0x40,0x42,0x42,0x02};/*"口",口*/
//const char circle_code3[]={0x02,0x47,0x42,0x40,0x40,0x42,0x47,0x02};/*"口",口*/

//#define zero 0
//#define one  1                
//#define two  2               
//#define three 3  
//#define four 4
//#define five 5 
//#define six 6 
//#define seven 7  
//#define eight 8 
//#define nine 9
//#define smile 10                  
//#define happyOpen 11  
//#define happyClosed 12  
//#define heart 13
//#define bigSurprise 14  
//#define smallSurprise 15
//#define tongueOut 16
//#define vamp1 17  
//#define vamp2 18  
//#define lineMouth 19
//#define confused 20  
//#define diagonal 21          
//#define sad 22
//#define sadOpen 23 
//#define sadClosed 24
//#define okMouth 25 
//#define xMouth 26
//#define interrogation 27
//#define thunder 28
//#define culito 29
//#define angry 30  
 class MaxMatrix1{
  public:
      
  private:
     
  };
  # endif


