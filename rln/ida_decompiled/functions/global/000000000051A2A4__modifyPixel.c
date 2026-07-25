/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051A2A4
 * Mangled: _Z11modifyPixeliiiiimi
 * Demangled: modifyPixel(int,int,int,int,int,ulong,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 24
 *   insn=0x000000000051A2B0 string=0x000000000051A2B4 "k"
 *   insn=0x000000000051A2B4 string=0x000000000051A2B8 "J"
 *   insn=0x000000000051A2BC string=0x000000000051A2C0 "k"
 *   insn=0x000000000051A2C0 string=0x000000000051A2C4 "H"
 *   insn=0x000000000051A2C4 string=0x000000000051A2C8 "\n"
 *   insn=0x000000000051A2C8 string=0x000000000051A2CC "(%"
 *   insn=0x000000000051A2CC string=0x000000000051A2D0 "J"
 *   insn=0x000000000051A2D4 string=0x000000000051A2D8 ""
 *   insn=0x000000000051A2D8 string=0x000000000051A2DC "h"
 *   insn=0x000000000051A2DC string=0x000000000051A2E0 "I"
 *   insn=0x000000000051A2E0 string=0x000000000051A2E4 "(yh"
 *   insn=0x000000000051A2E4 string=0x000000000051A2E8 "\t"
 *   insn=0x000000000051A2E8 string=0x000000000051A2EC "?"
 *   insn=0x000000000051A2F0 string=0x000000000051A2F4 "*="
 *   insn=0x000000000051A2F4 string=0x000000000051A2F8 "?"
 *   insn=0x000000000051A300 string=0x000000000051A308 "\n"
 *   insn=0x000000000051A308 string=0x000000000051A30C "_"
 *   insn=0x000000000051A310 string=0x000000000051A314 "K]"
 *   insn=0x000000000051A314 string=0x000000000051A318 "_"
 *   insn=0x000000000051A320 string=0x000000000051A328 ""
 *   insn=0x000000000051A328 string=0x000000000051A32C "}"
 *   insn=0x000000000051A334 string=0x000000000051A338 "h"
 *   insn=0x000000000051A338 string=0x000000000051A33C "("
 *   insn=0x000000000051A33C string=0x000000000051A340 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall modifyPixel(int a1, int a2, int a3, int a4, int a5, unsigned __int64 a6, int a7)
{
  int v7; // w8
  char v8; // w11
  char v9; // w10
  int v10; // w8
  int v11; // w9
  int v12; // w9
  int v13; // w10
  int v14; // w10
  int v15; // w8
  int v16; // w8

  v7 = a5 + 4 * a4;
  if ( v7 >= 8 )
    v8 = 8;
  else
    v8 = 24;
  if ( v7 < 8 )
    v9 = 8;
  else
    v9 = -8;
  v10 = dword_59C0F0[4 * a7 + (((2 * a6) >> (v9 + (unsigned __int8)v7)) & 2 | (a6 >> (v8 + (unsigned __int8)v7)) & 1)];
  v11 = v10 + a1;
  if ( v10 + a1 > 254 )
  {
    v12 = 16711680;
  }
  else if ( v11 >= 0 )
  {
    v12 = v11 << 16;
  }
  else
  {
    v12 = 0;
  }
  v13 = v10 + a2;
  if ( v10 + a2 > 254 )
  {
    v14 = 65280;
  }
  else if ( v13 >= 0 )
  {
    v14 = v13 << 8;
  }
  else
  {
    v14 = 0;
  }
  v15 = v10 + a3;
  if ( v15 >= 255 )
    v16 = 255;
  else
    v16 = v15 & ~(v15 >> 31);
  return (v12 + v16 + v14) | 0xFF000000;
}

