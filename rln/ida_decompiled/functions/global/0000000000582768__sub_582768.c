/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000582768
 * Mangled: sub_582768
 * Demangled: sub_582768
 *
 * Callers: 1
 *   0x00000000005829FC  sub_5829FC
 *
 * Callees: 4
 *   0x0000000000581DA4  sub_581DA4
 *   0x0000000000581E04  sub_581E04
 *   0x0000000000581EC4  sub_581EC4
 *   0x0000000000582044  sub_582044
 *
 * Referenced strings: 21
 *   insn=0x000000000058279C string=0x00000000005827A0 "8"
 *   insn=0x00000000005827A0 string=0x00000000005827A4 "a"
 *   insn=0x00000000005827A8 string=0x00000000005827AC "u"
 *   insn=0x00000000005827B0 string=0x00000000005827B4 "a"
 *   insn=0x00000000005827B4 string=0x00000000005827B8 "5"
 *   insn=0x00000000005827BC string=0x00000000005827C0 "`"
 *   insn=0x00000000005827D0 string=0x00000000005827D4 "a"
 *   insn=0x00000000005827D4 string=0x00000000005827E0 ""
 *   insn=0x00000000005827D8 string=0x00000000005827DC "4"
 *   insn=0x00000000005827F4 string=0x00000000005827F8 " "
 *   insn=0x0000000000582800 string=0x0000000000582804 "a"
 *   insn=0x0000000000582800 string=0x0000000000582810 "!(C"
 *   insn=0x0000000000582808 string=0x000000000058280C "\t"
 *   insn=0x000000000058280C string=0x0000000000582830 ";"
 *   insn=0x0000000000582810 string=0x0000000000582814 "?"
 *   insn=0x0000000000582834 string=0x0000000000582838 "b""
 *   insn=0x0000000000582848 string=0x000000000058284C "V"
 *   insn=0x0000000000582864 string=0x0000000000582868 "!"
 *   insn=0x000000000058286C string=0x0000000000582870 "?"
 *   insn=0x0000000000582874 string=0x0000000000582894 "`"
 *   insn=0x0000000000582898 string=0x000000000058289C "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_582768(__int64 a1, char *a2)
{
  char *v4; // x26
  int v5; // w25
  __int64 v6; // x22
  __int64 v7; // x0
  signed int v8; // w21
  __int64 v9; // x21
  int v10; // w0
  unsigned __int8 v12; // w27
  unsigned __int64 v13; // x1
  unsigned int v14; // w0
  __int64 v15; // x1
  unsigned __int64 v16; // [xsp+68h] [xbp+68h] BYREF

  v4 = 0;
  LOBYTE(v5) = 0;
  v6 = 0;
  v7 = 0;
  while ( *(_DWORD *)a2 )
  {
    v8 = *((_DWORD *)a2 + 1);
    if ( v8 )
    {
      v9 = (__int64)&a2[-v8 + 4];
      if ( v9 == v7 )
      {
        v9 = v7;
      }
      else
      {
        v10 = sub_582044(v9);
        v5 = v10;
        if ( v10 == 255 )
          return -1;
        v12 = v10;
        v4 = (char *)sub_581E04(v10, a1);
        v13 = *(unsigned __int16 *)(a1 + 32);
        if ( (v13 & 0x7F8) == 0x7F8 )
        {
          *(_WORD *)(a1 + 32) = v13 & 0xF807 | (8 * v12);
        }
        else if ( (unsigned __int8)(v13 >> 3) != v5 )
        {
          *(_BYTE *)(a1 + 32) |= 4u;
        }
      }
      sub_581EC4(v5, v4, a2 + 8, &v16);
      v14 = sub_581DA4(v5);
      v15 = -1;
      if ( v14 <= 7uLL )
        v15 = (1LL << (8 * (unsigned __int8)v14)) - 1;
      if ( (v15 & v16) != 0 )
      {
        ++v6;
        if ( v16 < *(_QWORD *)a1 )
          *(_QWORD *)a1 = v16;
      }
    }
    else
    {
      v9 = v7;
    }
    a2 += *(unsigned int *)a2 + 4;
    v7 = v9;
  }
  return v6;
}

