/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514E00
 * Mangled: _ZN11CPVRTString6resizeEmc
 * Demangled: CPVRTString::resize(ulong,char)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 20
 *   insn=0x0000000000514E18 string=0x0000000000514E1C "z\n@"
 *   insn=0x0000000000514E24 string=0x0000000000514E28 "_"
 *   insn=0x0000000000514E2C string=0x0000000000514E30 "h"
 *   insn=0x0000000000514E2C string=0x0000000000514EA4 "h"
 *   insn=0x0000000000514E30 string=0x0000000000514E34 "t"
 *   insn=0x0000000000514E40 string=0x0000000000514E44 """
 *   insn=0x0000000000514E48 string=0x0000000000514E4C "\t"
 *   insn=0x0000000000514E4C string=0x0000000000514E50 "B"
 *   insn=0x0000000000514E4C string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000514E58 string=0x0000000000514E5C "x"
 *   insn=0x0000000000514E5C string=0x0000000000514E60 "T"
 *   insn=0x0000000000514E60 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000514E74 string=0x0000000000514E78 "r"
 *   insn=0x0000000000514E78 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000514E80 string=0x0000000000514E84 "`"
 *   insn=0x0000000000514E84 string=0x0000000000514E88 ""
 *   insn=0x0000000000514E8C string=0x0000000000514E90 "h\n"
 *   insn=0x0000000000514E98 string=0x0000000000514E9C "t"
 *   insn=0x0000000000514E98 string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000514EA4 string=0x0000000000514EA8 "u\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTString::resize(CPVRTString *this, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // x26
  char *v7; // x20
  unsigned __int64 v8; // x24
  unsigned __int64 v9; // x22
  char *v10; // x25
  char *v11; // x0
  char *v12; // x0
  __int64 v13; // x8

  v4 = *((_QWORD *)this + 2);
  if ( v4 >= a2 )
  {
    v13 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 2) = a2;
    *(_BYTE *)(v13 + a2) = 0;
  }
  else
  {
    v7 = (char *)*((_QWORD *)this + 1);
    v8 = a2 + 1;
    v9 = a2 - v4;
    if ( *((_QWORD *)this + 3) < a2 + 1 )
    {
      v10 = (char *)malloc(a2 + 1);
      *((_QWORD *)this + 3) = v8;
      memmove(v10, v7, v4 + 1);
      v7 = v10;
    }
    v11 = &v7[v4];
    if ( v9 )
    {
      memset(v11, a3, a2 - v4);
      v11 = &v7[a2];
    }
    *v11 = 0;
    v12 = (char *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 2) += v9;
    if ( v7 != v12 )
    {
      free(v12);
      *((_QWORD *)this + 1) = v7;
    }
  }
}

