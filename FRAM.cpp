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


  /*主函数部分*/
FRAM::FRAM(void)
{
}

//=====================读写 byte ========================
/*写入byte类型*/
void FRAM::Write(byte data)
{
	ram.begin(sector);      //I2C地址位
	THex2byte DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置
	ram.write8(Addr, type);             //在数据状态位置写入文件类型
	uint16_t address = 51 + 0x0000 + Addr * 4;   //实际数据存储位置
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //写入数据
		address++;
	}
}
/*读取byte类型*/
byte FRAM::byteRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置（取得目标的存储状态地址位）
	uint16_t address = 51 + 0x0000 + Addr * 4;   //取得实际数据存储位置
	THex2byte DATA;                   //数据转换初始化
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //读取数据
		address++;
	}
	return  DATA.Val;
}



//=====================读写 char ========================
/*写入char类型*/
void FRAM::Write(char data)
{
	ram.begin(sector);      //I2C地址位
	THex2char DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置
	ram.write8(Addr, type);             //在数据状态位置写入文件类型
	uint16_t address = 51 + 0x0000 + Addr * 4;   //实际数据存储位置
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //写入数据
		address++;
	}
}
/*读取char类型*/
char FRAM::charRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置（取得目标的存储状态地址位）
	uint16_t address = 51 + 0x0000 + Addr * 4;   //取得实际数据存储位置
	THex2char DATA;                   //数据转换初始化
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //读取数据
		address++;
	}
	return  DATA.Val;
}

//=====================读写 int ========================
/*写入int类型*/
void FRAM::Write(int data)
{
	ram.begin(sector);      //I2C地址位
	THex2int DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置
	ram.write8(Addr, type);             //在数据状态位置写入文件类型
	uint16_t address = 51 + 0x0000 + Addr * 4;   //实际数据存储位置
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //写入数据
		address++;
	}
}
/*读取int类型*/
int FRAM::intRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置（取得目标的存储状态地址位）
	uint16_t address = 51 + 0x0000 + Addr * 4;   //取得实际数据存储位置
	THex2int DATA;                   //数据转换初始化
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //读取数据
		address++;
	}
	return  DATA.Val;
}



//=====================读写 unsigned int ========================
/*写入unsigned int类型*/
void FRAM::Write(unsigned int data)
{
	ram.begin(sector);      //I2C地址位
	THex2uint DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置
	ram.write8(Addr, type);             //在数据状态位置写入文件类型
	uint16_t address = 51 + 0x0000 + Addr * 4;   //实际数据存储位置
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //写入数据
		address++;
	}
}
/*读取unsigned int类型*/
unsigned int FRAM::uintRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置（取得目标的存储状态地址位）
	uint16_t address = 51 + 0x0000 + Addr * 4;   //取得实际数据存储位置
	THex2uint DATA;                   //数据转换初始化
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //读取数据
		address++;
	}
	return  DATA.Val;
}


//=====================读写 unsigned long ========================
/*写入ulong类型*/
void FRAM::Write(unsigned long data)
{
	ram.begin(sector);      //I2C地址位
	THex2ulong DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置
	ram.write8(Addr, type);             //在数据状态位置写入文件类型
	uint16_t address = 51 + 0x0000 + Addr * 4;   //实际数据存储位置
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //写入数据
		address++;
	}
}
/*读取ulong类型*/
unsigned long FRAM::ulongRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置（取得目标的存储状态地址位）
	uint16_t address = 51 + 0x0000 + Addr * 4;   //取得实际数据存储位置
	THex2ulong DATA;                   //数据转换初始化
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //读取数据
		address++;
	}
	return  DATA.Val;
}


//=====================读写 ulong ========================
/*写入long类型*/
void FRAM::Write(long data)
{
	ram.begin(sector);      //I2C地址位
	THex2long DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置
	ram.write8(Addr, type);             //在数据状态位置写入文件类型
	uint16_t address = 51 + 0x0000 + Addr * 4;   //实际数据存储位置
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //写入数据
		address++;
	}
}
/*读取long类型*/
long FRAM::longRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置（取得目标的存储状态地址位）
	uint16_t address = 51 + 0x0000 + Addr * 4;   //取得实际数据存储位置
	THex2long DATA;                   //数据转换初始化
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //读取数据
		address++;
	}
	return  DATA.Val;
}


//=====================读写 float ========================

/*写入float类型*/
void FRAM::Write(float data)
{
  ram.begin(sector);      //I2C地址位
  THex2Float DATA;
  DATA.Val =data;
  uint16_t Addr=framAddr+id;         //创建一个地址位这个是数据状态存储位置
  ram.write8(Addr,type);             //在数据状态位置写入文件类型
  uint16_t address = 51 + 0x0000 + Addr * 4;   //实际数据存储位置
  for(int a=0; a<4;a++)
  {
	  ram.write8(address, DATA.Hex[a]);        //写入数据
	  address++;
  }
}
/*读取float类型*/
float FRAM::floatRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置（取得目标的存储状态地址位）
	uint16_t address = 51 + 0x0000 + Addr * 4;   //取得实际数据存储位置
	THex2Float DATA;                   //数据转换初始化
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a]=ram.read8(address);        //读取数据
		address++;
	}
	return  DATA.Val;
}


//=====================读写 double ========================

/*写入float类型*/
void FRAM::Write(double data)
{
	ram.begin(sector);      //I2C地址位
	THex2double DATA;
	DATA.Val = data;
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置
	ram.write8(Addr, type);             //在数据状态位置写入文件类型
	uint16_t address = 51 + 0x0000 + Addr * 4;   //实际数据存储位置
	for (int a = 0; a<4; a++)
	{
		ram.write8(address, DATA.Hex[a]);        //写入数据
		address++;
	}
}
/*读取float类型*/
double FRAM::doubleRead(void)
{
	ram.begin(sector);
	uint16_t Addr = framAddr + id;         //创建一个地址位这个是数据状态存储位置（取得目标的存储状态地址位）
	uint16_t address = 51 + 0x0000 + Addr * 4;   //取得实际数据存储位置
	THex2double DATA;                   //数据转换初始化
	for (int a = 0; a<4; a++)
	{
		DATA.Hex[a] = ram.read8(address);        //读取数据
		address++;
	}
	return  DATA.Val;
}