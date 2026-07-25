/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EE4B0
 * Mangled: sub_4EE4B0
 * Demangled: sub_4EE4B0
 *
 * Callers: 1
 *   0x00000000004ED5F4  sub_4ED5F4
 *
 * Callees: 1
 *   0x00000000004EE364  sub_4EE364
 *
 * Referenced strings: 23
 *   insn=0x00000000004EE4B0 string=0x00000000004EE4B4 "\t"
 *   insn=0x00000000004EE4B4 string=0x00000000004EE4B8 ")"
 *   insn=0x00000000004EE4BC string=0x00000000004EE4C0 ")$@9?\t"
 *   insn=0x00000000004EE4C0 string=0x00000000004EE4C4 "?\t"
 *   insn=0x00000000004EE4C8 string=0x00000000004EE4CC "\n"
 *   insn=0x00000000004EE4CC string=0x00000000004EE4D0 "_"
 *   insn=0x00000000004EE4D0 string=0x00000000004EE4D4 "!"
 *   insn=0x00000000004EE4D4 string=0x00000000004EE4D8 "(@"
 *   insn=0x00000000004EE4D4 string=0x00000000004EE518 ""
 *   insn=0x00000000004EE4D8 string=0x00000000004EE4DC ")"
 *   insn=0x00000000004EE4DC string=0x00000000004EE4E0 ")$"
 *   insn=0x00000000004EE4E0 string=0x00000000004EE4E4 "\n\t@"
 *   insn=0x00000000004EE4E4 string=0x00000000004EE4E8 "_"
 *   insn=0x00000000004EE4EC string=0x00000000004EE4F0 ""
 *   insn=0x00000000004EE4F0 string=0x00000000004EE4F4 "\n%@9_"
 *   insn=0x00000000004EE4F4 string=0x00000000004EE4F8 "_"
 *   insn=0x00000000004EE4F8 string=0x00000000004EE4FC "`"
 *   insn=0x00000000004EE500 string=0x00000000004EE504 "\n"
 *   insn=0x00000000004EE504 string=0x00000000004EE508 "_"
 *   insn=0x00000000004EE50C string=0x00000000004EE52C ""
 *   insn=0x00000000004EE518 string=0x00000000004EE51C ")"
 *   insn=0x00000000004EE51C string=0x00000000004EE520 "\t"
 *   insn=0x00000000004EE520 string=0x00000000004EE524 ")$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EE4B0(__int64 result, __int64 a2)
{
  __int64 v2; // x8
  char v3; // w9
  __int64 v4; // x8
  __int64 v5; // x8
  char v6; // w8

  v2 = *(_QWORD *)(result + 32);
  *(_QWORD *)a2 = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 40) = a2;
  v3 = *(_BYTE *)(a2 + 9);
  if ( (v3 & 7) == 0 )
  {
    if ( *(_BYTE *)(v2 + 33) != 1 )
    {
      v6 = *(_BYTE *)(v2 + 32);
LABEL_8:
      *(_BYTE *)(a2 + 9) = v3 & 0xF8 | v6 & 3;
      return result;
    }
    v4 = *(_QWORD *)(a2 + 16);
    v3 |= 4u;
    *(_BYTE *)(a2 + 9) = v3;
    if ( *(int *)(v4 + 8) >= 4 )
    {
      v5 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v5 + 9) & 3) != 0 )
      {
        result = *(_QWORD *)(result + 32);
        if ( *(_BYTE *)(result + 33) == 1 )
          return sub_4EE364(result, v5);
        v6 = *(_BYTE *)(result + 32);
        goto LABEL_8;
      }
    }
  }
  return result;
}

