/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514D00
 * Mangled: _ZN11CPVRTString5eraseEmm
 * Demangled: CPVRTString::erase(ulong,ulong)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 28
 *   insn=0x0000000000514D18 string=0x0000000000514D1C "_"
 *   insn=0x0000000000514D24 string=0x0000000000514D28 "y\n@"
 *   insn=0x0000000000514D24 string=0x0000000000514D58 "y\n@"
 *   insn=0x0000000000514D28 string=0x0000000000514D2C "H"
 *   insn=0x0000000000514D30 string=0x0000000000514D34 "B"
 *   insn=0x0000000000514D34 string=0x0000000000514D38 "i"
 *   insn=0x0000000000514D34 string=0x0000000000514D5C "?"
 *   insn=0x0000000000514D3C string=0x0000000000514D40 "J"
 *   insn=0x0000000000514D40 string=0x0000000000514D44 "B"
 *   insn=0x0000000000514D44 string=0x0000000000514D48 " "
 *   insn=0x0000000000514D48 string=0x0000000000514D4C "!"
 *   insn=0x0000000000514D50 string=0x0000000000514D54 "$"
 *   insn=0x0000000000514D50 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000514D60 string=0x0000000000514D64 "h"
 *   insn=0x0000000000514D60 string=0x0000000000514DD8 "h"
 *   insn=0x0000000000514D64 string=0x0000000000514D68 "u"
 *   insn=0x0000000000514D74 string=0x0000000000514D78 """
 *   insn=0x0000000000514D7C string=0x0000000000514D80 "<"
 *   insn=0x0000000000514D80 string=0x0000000000514D84 """
 *   insn=0x0000000000514D80 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000514D8C string=0x0000000000514D90 "w"
 *   insn=0x0000000000514DAC string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000514DB4 string=0x0000000000514DB8 "`"
 *   insn=0x0000000000514DB8 string=0x0000000000514DBC ""
 *   insn=0x0000000000514DC0 string=0x0000000000514DC4 "h\n"
 *   insn=0x0000000000514DCC string=0x0000000000514DD0 "u"
 *   insn=0x0000000000514DCC string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000514DD8 string=0x0000000000514DDC "t\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::erase(CPVRTString *this, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // x25
  char *v6; // x21
  unsigned __int64 v7; // x23
  unsigned __int64 v8; // x22
  char *v9; // x24
  char *v10; // x0
  char *v11; // x0
  __int64 v12; // x8

  if ( a3 == -1 )
  {
    v5 = *((_QWORD *)this + 2);
  }
  else
  {
    v5 = *((_QWORD *)this + 2);
    if ( a3 + a2 < v5 )
    {
      memmove((void *)(*((_QWORD *)this + 1) + a2), (const void *)(*((_QWORD *)this + 1) + a3 + a2), 1 - (a3 + a2) + v5);
      return this;
    }
  }
  if ( v5 >= a2 )
  {
    v12 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 2) = a2;
    *(_BYTE *)(v12 + a2) = 0;
  }
  else
  {
    v6 = (char *)*((_QWORD *)this + 1);
    v7 = a2 + 1;
    v8 = a2 - v5;
    if ( *((_QWORD *)this + 3) < a2 + 1 )
    {
      v9 = (char *)malloc(a2 + 1);
      *((_QWORD *)this + 3) = v7;
      memmove(v9, v6, v5 + 1);
      v6 = v9;
    }
    v10 = &v6[v5];
    if ( v8 )
    {
      memset(v10, 0, a2 - v5);
      v10 = &v6[a2];
    }
    *v10 = 0;
    v11 = (char *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 2) += v8;
    if ( v6 != v11 )
    {
      free(v11);
      *((_QWORD *)this + 1) = v6;
    }
  }
  return this;
}

