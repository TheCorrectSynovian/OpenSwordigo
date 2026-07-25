/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000501C4C
 * Mangled: sub_501C4C
 * Demangled: sub_501C4C
 *
 * Callers: 2
 *   0x0000000000500AC8  sub_500AC8
 *   0x0000000000501F70  sub_501F70
 *
 * Callees: 2
 *   0x00000000004F8650  sub_4F8650
 *   0x00000000005007A0  sub_5007A0
 *
 * Referenced strings: 26
 *   insn=0x0000000000501C58 string=0x0000000000501C5C "`"@"
 *   insn=0x0000000000501C5C string=0x0000000000501C60 "t"
 *   insn=0x0000000000501C60 string=0x0000000000501C64 ""
 *   insn=0x0000000000501C64 string=0x0000000000501C68 "\t"
 *   insn=0x0000000000501C68 string=0x0000000000501C6C "\t"
 *   insn=0x0000000000501C70 string=0x0000000000501C74 ""
 *   insn=0x0000000000501C70 string=0x0000000000501C88 "r"
 *   insn=0x0000000000501C74 string=0x0000000000501C78 "\t"
 *   insn=0x0000000000501C78 string=0x0000000000501C7C "\t"
 *   insn=0x0000000000501C8C string=0x0000000000501C90 "`"
 *   insn=0x0000000000501C90 string=0x0000000000501C94 "`"
 *   insn=0x0000000000501C9C string=0x0000000000501CD8 "h"
 *   insn=0x0000000000501CA4 string=0x0000000000501CA8 "`"@"
 *   insn=0x0000000000501CA8 string=0x0000000000501CAC ""
 *   insn=0x0000000000501CAC string=0x0000000000501CB0 "\t"
 *   insn=0x0000000000501CB0 string=0x0000000000501CB4 "\t"
 *   insn=0x0000000000501CB8 string=0x0000000000501CBC ""
 *   insn=0x0000000000501CB8 string=0x0000000000501CD0 "`"
 *   insn=0x0000000000501CBC string=0x0000000000501CC0 "\t"
 *   insn=0x0000000000501CC0 string=0x0000000000501CC4 "\t"
 *   insn=0x0000000000501CCC string=0x0000000000501CD4 "`"
 *   insn=0x0000000000501CDC string=0x0000000000501CE0 "\n"
 *   insn=0x0000000000501CE4 string=0x0000000000501CE8 "j"
 *   insn=0x0000000000501CE8 string=0x0000000000501CEC ""
 *   insn=0x0000000000501CEC string=0x0000000000501CF0 "b"
 *   insn=0x0000000000501CF8 string=0x000000000059B342 "chunk has too many lines"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_501C4C(__int64 a1)
{
  _QWORD *v2; // x0
  int v3; // w20
  unsigned __int8 *v5; // x8
  __int64 result; // x0
  _QWORD *v7; // x0
  unsigned __int8 *v9; // x8
  int v10; // w8

  v2 = *(_QWORD **)(a1 + 64);
  v3 = *(_DWORD *)a1;
  if ( (*v2)-- )
  {
    v5 = (unsigned __int8 *)v2[1];
    v2[1] = v5 + 1;
    result = *v5;
  }
  else
  {
    result = sub_4F8650((__int64)v2);
  }
  *(_DWORD *)a1 = result;
  if ( ((_DWORD)result == 13 || (_DWORD)result == 10) && (_DWORD)result != v3 )
  {
    v7 = *(_QWORD **)(a1 + 64);
    if ( (*v7)-- )
    {
      v9 = (unsigned __int8 *)v7[1];
      v7[1] = v9 + 1;
      result = *v9;
    }
    else
    {
      result = sub_4F8650((__int64)v7);
    }
    *(_DWORD *)a1 = result;
  }
  v10 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v10 + 1;
  if ( v10 >= 2147483644 )
    sub_5007A0(a1, "chunk has too many lines", *(_DWORD *)(a1 + 16));
  return result;
}

