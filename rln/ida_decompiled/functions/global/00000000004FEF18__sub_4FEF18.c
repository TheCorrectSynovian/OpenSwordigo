/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FEF18
 * Mangled: sub_4FEF18
 * Demangled: sub_4FEF18
 *
 * Callers: 1
 *   0x00000000004F1CF4  sub_4F1CF4
 *
 * Callees: 6
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FE674  sub_4FE674
 *   0x00000000004FEB5C  sub_4FEB5C
 *   0x00000000005001E8  sub_5001E8
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 25
 *   insn=0x00000000004FEF34 string=0x00000000004FEF38 "T"
 *   insn=0x00000000004FEF38 string=0x00000000004FEF3C "h"
 *   insn=0x00000000004FEF44 string=0x00000000004FEF48 "h&B)"
 *   insn=0x00000000004FEF50 string=0x00000000004FEF54 "b\n@"
 *   insn=0x00000000004FEF50 string=0x00000000004FEF70 "h"
 *   insn=0x00000000004FEF58 string=0x00000000004FEF5C "_"
 *   insn=0x00000000004FEF5C string=0x00000000004FEF60 "j"
 *   insn=0x00000000004FEF74 string=0x00000000004FEF78 "!"
 *   insn=0x00000000004FEF78 string=0x00000000004FEF7C "h\n@"
 *   insn=0x00000000004FEF90 string=0x00000000004FEF94 ""
 *   insn=0x00000000004FEFA0 string=0x00000000004FEFA4 "\t=G8"
 *   insn=0x00000000004FEFB8 string=0x00000000004FEFBC "+"
 *   insn=0x00000000004FEFC4 string=0x00000000004FEFCC "g"
 *   insn=0x00000000004FEFC4 string=0x000000000059B058 "function or expression too complex"
 *   insn=0x00000000004FEFD4 string=0x00000000004FEFD8 ""
 *   insn=0x00000000004FEFD8 string=0x00000000004FEFDC ")\t"
 *   insn=0x00000000004FEFE8 string=0x00000000004FEFEC "w\n@"
 *   insn=0x00000000004FF000 string=0x00000000004FF004 ")]"
 *   insn=0x00000000004FF008 string=0x00000000004FF00C "(9"
 *   insn=0x00000000004FF00C string=0x00000000004FF010 "i"
 *   insn=0x00000000004FF018 string=0x00000000004FF01C "s"
 *   insn=0x00000000004FF024 string=0x00000000004FF028 "!"
 *   insn=0x00000000004FF040 string=0x00000000004FF044 ""
 *   insn=0x00000000004FF04C string=0x00000000004FF050 "v\n"
 *   insn=0x00000000004FF050 string=0x00000000004FF054 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FEF18(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  signed int v6; // w2
  int v7; // w8
  int v8; // w22
  int v9; // w23
  int v10; // w23
  int v11; // w0
  __int64 result; // x0
  int v13; // w8

  sub_4FE488(a1, a2);
  if ( *a2 != 12 )
  {
LABEL_4:
    sub_4FE5C0(a1, a2);
    goto LABEL_5;
  }
  if ( a2[4] != a2[5] )
  {
    v6 = a2[2];
    if ( v6 >= *(unsigned __int8 *)(a1 + 74) )
    {
      sub_4FE674(a1, a2, v6);
      goto LABEL_5;
    }
    goto LABEL_4;
  }
LABEL_5:
  if ( *a2 == 12 )
  {
    v7 = a2[2];
    if ( (v7 & 0x100) == 0 && v7 >= *(unsigned __int8 *)(a1 + 74) )
      --*(_DWORD *)(a1 + 60);
  }
  v8 = *(_DWORD *)(a1 + 60);
  v9 = v8 + 2;
  if ( v8 + 2 > *(unsigned __int8 *)(*(_QWORD *)a1 + 115LL) )
  {
    if ( v8 >= 248 )
      sub_500968(*(_QWORD *)(a1 + 24), "function or expression too complex");
    *(_BYTE *)(*(_QWORD *)a1 + 115LL) = v9;
  }
  *(_DWORD *)(a1 + 60) = v9;
  v10 = a2[2];
  v11 = sub_4FEB5C(a1, a3);
  result = sub_5001E8(a1, (v8 << 6) | (v10 << 23) | (v11 << 14) | 0xBu, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  if ( *a3 == 12 )
  {
    v13 = a3[2];
    if ( (v13 & 0x100) == 0 && v13 >= *(unsigned __int8 *)(a1 + 74) )
      --*(_DWORD *)(a1 + 60);
  }
  a2[2] = v8;
  *a2 = 12;
  return result;
}

