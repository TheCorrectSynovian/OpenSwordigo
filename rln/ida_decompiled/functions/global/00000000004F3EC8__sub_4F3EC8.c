/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3EC8
 * Mangled: sub_4F3EC8
 * Demangled: sub_4F3EC8
 *
 * Callers: 2
 *   0x00000000004F3A60  sub_4F3A60
 *   0x00000000004F3DB4  sub_4F3DB4
 *
 * Callees: 4
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004EEE4C  sub_4EEE4C
 *
 * Referenced strings: 22
 *   insn=0x00000000004F3EE0 string=0x00000000004F3EE4 "@"
 *   insn=0x00000000004F3EE0 string=0x00000000004F3F34 " "
 *   insn=0x00000000004F3EE8 string=0x00000000004EEE4C ""
 *   insn=0x00000000004F3EF4 string=0x00000000004F3EF8 "!"
 *   insn=0x00000000004F3EF8 string=0x000000000059A0FB "table overflow"
 *   insn=0x00000000004F3F00 string=0x00000000004F3F04 ""
 *   insn=0x00000000004F3F14 string=0x00000000004F3F18 ""
 *   insn=0x00000000004F3F2C string=0x00000000004F3F30 "\t"
 *   insn=0x00000000004F3F40 string=0x00000000004F3F44 "`"
 *   insn=0x00000000004F3F48 string=0x00000000004F3F98 "\t"
 *   insn=0x00000000004F3F54 string=0x00000000004F3F58 "`"
 *   insn=0x00000000004F3F58 string=0x00000000004F3F5C "a"
 *   insn=0x00000000004F3F60 string=0x00000000004F3F64 ""
 *   insn=0x00000000004F3F70 string=0x00000000004F3F74 ""
 *   insn=0x00000000004F3F80 string=0x00000000004F3F84 "`"
 *   insn=0x00000000004F3F84 string=0x00000000004F3F88 "J"
 *   insn=0x00000000004F3F88 string=0x00000000004F3F8C "_"
 *   insn=0x00000000004F3F8C string=0x00000000004F3F90 ")"
 *   insn=0x00000000004F3F90 string=0x00000000004F3F94 ""
 *   insn=0x00000000004F3F98 string=0x00000000004F3F9C ""
 *   insn=0x00000000004F3F9C string=0x00000000004F3FA0 "u."
 *   insn=0x00000000004F3FA0 string=0x00000000004F3FA4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_4F3EC8(__int64 a1, __int64 a2, int a3)
{
  int v5; // w0
  int v6; // w21
  int v7; // w22
  char *result; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x10
  char *v12; // x11

  if ( a3 )
  {
    v5 = sub_4EEE4C(a3 - 1);
    v6 = v5 + 1;
    if ( v5 >= 26 )
      sub_4EB320(a1, "table overflow");
    v7 = 1 << v6;
    if ( 1 << v6 < -1 )
      sub_4EEDE0(a1);
    result = (char *)sub_4EED74(a1, 0, 0, 40LL * v7);
    *(_QWORD *)(a2 + 32) = result;
    if ( v6 == 31 )
    {
      v9 = 0xFFFFFFFF80000000LL;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      v9 = v7;
      do
      {
        v12 = &result[v10];
        *((_QWORD *)v12 + 4) = 0;
        *((_DWORD *)v12 + 6) = 0;
        *((_DWORD *)v12 + 2) = 0;
        result = *(char **)(a2 + 32);
        ++v11;
        v10 += 40;
      }
      while ( v11 < v7 );
    }
  }
  else
  {
    result = (char *)&unk_59A2A0;
    LOBYTE(v6) = 0;
    v9 = 0;
    *(_QWORD *)(a2 + 32) = &unk_59A2A0;
  }
  *(_BYTE *)(a2 + 11) = v6;
  *(_QWORD *)(a2 + 40) = &result[40 * v9];
  return result;
}

