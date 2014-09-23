#ifndef FRAM_H
#define FRAM_H
#include "MB85RC16V.h"

#define  Byte  1
#define  Char  2
#define  Int   3
#define  Uint  4
#define  Long  5
#define  Ulong 6
#define  Float 7
#define  Doble 8

#define  A    0x50
#define  B    0x51
#define  C    0x52
#define  D    0x53
#define  E    0x54
#define  F    0x55
#define  G    0x56
#define  H    0x57



class FRAM{
 
  public:
  
  FRAM(void);
  void Write(byte data);     //1
  byte byteRead(void);  

  void Write(char data);     //2
  char charRead(void);

  void Write(int data);       //3
  int  intRead(void);

  void Write(unsigned int data);  //4
  unsigned int  uintRead(void);

  void Write(long data);    //5 
  long  longRead(void);

  void Write(unsigned long data);   //6
  unsigned long  ulongRead(void);

  void Write(float data);    //7
  float floatRead(void);

  void Write(double data);   //8
  double doubleRead(void);

  byte ls(void);
  byte ls(int id);	

  boolean fdisk();
  /*属性*/
  byte type;     //存储类型
  uint8_t sector;  //扇区号
  uint16_t  id;     //簇
};
#endif