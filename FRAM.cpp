#include <FRAM.h>
MB85RC16V ram;
uint16_t framAddr=0x0000;

  /*byte*/
  typedef union
  {
	  unsigned char  Hex[4];
	  byte       Val;
  }THex2byte;
  /*char*/
  typedef union
  {
	  unsigned char  Hex[4];
	  char       Val;
  }THex2char;
  /*int*/
  typedef union
  {
	  unsigned char  Hex[4];
	  int       Val;
  }THex2int;
  /*uint*/
  typedef union
  {
	  unsigned char  Hex[4];
	  unsigned int   Val;
  }THex2uint;
  /*long*/
  typedef union
  {
	  unsigned char  Hex[4];
	  long   Val;
  }THex2long;
  /*ulong*/
  typedef union
  {
	  unsigned char  Hex[4];
	  unsigned long   Val;
  }THex2ulong;
  /*float*/
  typedef union
  {
	  unsigned char  Hex[4];
	  float       Val;
  }THex2Float;
  /*double*/
  typedef union
  {
	  unsigned char  Hex[4];
	  double       Val;
  }THex2double;


  /*����������*/
FRAM::FRAM(void)
{
}

//=====================��д byte ========================
/*д��byte����*/
void FRAM::Write(byte data)
{
	ram.begin(sector);      //I2C��ַλ
	THex2byte DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ��
	ram.write8(Addr, type);             //������״̬λ��д���ļ�����
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ʵ�����ݴ洢λ��
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //д������
		address++;
	}
}
/*��ȡbyte����*/
byte FRAM::byteRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ�ã�ȡ��Ŀ��Ĵ洢״̬��ַλ��
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ȡ��ʵ�����ݴ洢λ��
	THex2byte DATA;                   //����ת����ʼ��
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //��ȡ����
		address++;
	}
	return  DATA.Val;
}



//=====================��д char ========================
/*д��char����*/
void FRAM::Write(char data)
{
	ram.begin(sector);      //I2C��ַλ
	THex2char DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ��
	ram.write8(Addr, type);             //������״̬λ��д���ļ�����
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ʵ�����ݴ洢λ��
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //д������
		address++;
	}
}
/*��ȡchar����*/
char FRAM::charRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ�ã�ȡ��Ŀ��Ĵ洢״̬��ַλ��
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ȡ��ʵ�����ݴ洢λ��
	THex2char DATA;                   //����ת����ʼ��
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //��ȡ����
		address++;
	}
	return  DATA.Val;
}

//=====================��д int ========================
/*д��int����*/
void FRAM::Write(int data)
{
	ram.begin(sector);      //I2C��ַλ
	THex2int DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ��
	ram.write8(Addr, type);             //������״̬λ��д���ļ�����
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ʵ�����ݴ洢λ��
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //д������
		address++;
	}
}
/*��ȡint����*/
int FRAM::intRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ�ã�ȡ��Ŀ��Ĵ洢״̬��ַλ��
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ȡ��ʵ�����ݴ洢λ��
	THex2int DATA;                   //����ת����ʼ��
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //��ȡ����
		address++;
	}
	return  DATA.Val;
}



//=====================��д unsigned int ========================
/*д��unsigned int����*/
void FRAM::Write(unsigned int data)
{
	ram.begin(sector);      //I2C��ַλ
	THex2uint DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ��
	ram.write8(Addr, type);             //������״̬λ��д���ļ�����
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ʵ�����ݴ洢λ��
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //д������
		address++;
	}
}
/*��ȡunsigned int����*/
unsigned int FRAM::uintRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ�ã�ȡ��Ŀ��Ĵ洢״̬��ַλ��
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ȡ��ʵ�����ݴ洢λ��
	THex2uint DATA;                   //����ת����ʼ��
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //��ȡ����
		address++;
	}
	return  DATA.Val;
}


//=====================��д unsigned long ========================
/*д��ulong����*/
void FRAM::Write(unsigned long data)
{
	ram.begin(sector);      //I2C��ַλ
	THex2ulong DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ��
	ram.write8(Addr, type);             //������״̬λ��д���ļ�����
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ʵ�����ݴ洢λ��
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //д������
		address++;
	}
}
/*��ȡulong����*/
unsigned long FRAM::ulongRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ�ã�ȡ��Ŀ��Ĵ洢״̬��ַλ��
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ȡ��ʵ�����ݴ洢λ��
	THex2ulong DATA;                   //����ת����ʼ��
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //��ȡ����
		address++;
	}
	return  DATA.Val;
}


//=====================��д ulong ========================
/*д��long����*/
void FRAM::Write(long data)
{
	ram.begin(sector);      //I2C��ַλ
	THex2long DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ��
	ram.write8(Addr, type);             //������״̬λ��д���ļ�����
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ʵ�����ݴ洢λ��
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //д������
		address++;
	}
}
/*��ȡlong����*/
long FRAM::longRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ�ã�ȡ��Ŀ��Ĵ洢״̬��ַλ��
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ȡ��ʵ�����ݴ洢λ��
	THex2long DATA;                   //����ת����ʼ��
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //��ȡ����
		address++;
	}
	return  DATA.Val;
}


//=====================��д float ========================

/*д��float����*/
void FRAM::Write(float data)
{
  ram.begin(sector);      //I2C��ַλ
  THex2Float DATA;
  DATA.Val =data;
  uint16_t Addr=framAddr+id;         //����һ����ַλ���������״̬�洢λ��
  ram.write8(Addr,type);             //������״̬λ��д���ļ�����
  uint16_t address = 51 + 0x0000 + Addr * 4;   //ʵ�����ݴ洢λ��
  for(int a=0; a<4;a++)
  {
	  ram.write8(address, DATA.Hex[a]);        //д������
	  address++;
  }
}
/*��ȡfloat����*/
float FRAM::floatRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ�ã�ȡ��Ŀ��Ĵ洢״̬��ַλ��
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ȡ��ʵ�����ݴ洢λ��
	THex2Float DATA;                   //����ת����ʼ��
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a]=ram.read8(address);        //��ȡ����
		address++;
	}
	return  DATA.Val;
}


//=====================��д double ========================

/*д��float����*/
void FRAM::Write(double data)
{
	ram.begin(sector);      //I2C��ַλ
	THex2double DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ��
	ram.write8(Addr, type);             //������״̬λ��д���ļ�����
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ʵ�����ݴ洢λ��
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //д������
		address++;
	}
}
/*��ȡfloat����*/
double FRAM::doubleRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //����һ����ַλ���������״̬�洢λ�ã�ȡ��Ŀ��Ĵ洢״̬��ַλ��
	uint16_t address = 51 + 0x0000 + Addr * 4;   //ȡ��ʵ�����ݴ洢λ��
	THex2double DATA;                   //����ת����ʼ��
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //��ȡ����
		address++;
	}
	return  DATA.Val;
}