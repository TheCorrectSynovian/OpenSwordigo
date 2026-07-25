/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FE5C0
 * Mangled: sub_4FE5C0
 * Demangled: sub_4FE5C0
 *
 * Callers: 14
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F14B4  sub_4F14B4
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F244C  sub_4F244C
 *   0x00000000004F2C18  sub_4F2C18
 *   0x00000000004F2CCC  sub_4F2CCC
 *   0x00000000004FEA48  sub_4FEA48
 *   0x00000000004FEACC  sub_4FEACC
 *   0x00000000004FEB5C  sub_4FEB5C
 *   0x00000000004FED28  sub_4FED28
 *   0x00000000004FEF18  sub_4FEF18
 *   0x00000000004FF3C4  sub_4FF3C4
 *   0x00000000004FF9D0  sub_4FF9D0
 *   0x00000000004FFC04  sub_4FFC04
 *
 * Callees: 3
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE674  sub_4FE674
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 12
 *   insn=0x00000000004FE5D8 string=0x00000000004FE5DC "h"
 *   insn=0x00000000004FE5E0 string=0x00000000004FE5E4 "!"
 *   insn=0x00000000004FE5E4 string=0x00000000004FE5E8 "h\n@"
 *   insn=0x00000000004FE5FC string=0x00000000004FE600 ""
 *   insn=0x00000000004FE60C string=0x00000000004FE610 "\n=G85"
 *   insn=0x00000000004FE610 string=0x00000000004FE614 "5"
 *   insn=0x00000000004FE614 string=0x00000000004FE618 "?"
 *   insn=0x00000000004FE61C string=0x00000000004FE620 "?"
 *   insn=0x00000000004FE624 string=0x00000000004FE628 "+"
 *   insn=0x00000000004FE630 string=0x000000000059B058 "function or expression too complex"
 *   insn=0x00000000004FE640 string=0x00000000004FE644 ""
 *   insn=0x00000000004FE644 string=0x00000000004FE648 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FE5C0(__int64 a1, _DWORD *a2)
{
  int v4; // w8
  int v5; // w9
  int v6; // w21

  sub_4FE488(a1, a2);
  if ( *a2 == 12 )
  {
    v4 = a2[2];
    if ( (v4 & 0x100) == 0 && v4 >= *(unsigned __int8 *)(a1 + 74) )
      --*(_DWORD *)(a1 + 60);
  }
  v5 = *(_DWORD *)(a1 + 60);
  v6 = v5 + 1;
  if ( v5 >= *(unsigned __int8 *)(*(_QWORD *)a1 + 115LL) )
  {
    if ( v5 >= 249 )
      sub_500968(*(_QWORD *)(a1 + 24), "function or expression too complex");
    *(_BYTE *)(*(_QWORD *)a1 + 115LL) = v6;
  }
  *(_DWORD *)(a1 + 60) = v6;
  return sub_4FE674(a1, a2, (unsigned int)v5);
}

