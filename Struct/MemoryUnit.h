#ifndef __Sovins_MemoryUnit_H__
#define __Sovins_MemoryUnit_H__
union 8ByteMemoryUnit
{
  unsigned long long 8Byte;
  unsigned int 4Byte[2];
  unsigned short 2Byte[4];
  unsigned char Byte[8];
};
#endif