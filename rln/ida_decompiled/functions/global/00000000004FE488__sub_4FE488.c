/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FE488
 * Mangled: sub_4FE488
 * Demangled: sub_4FE488
 *
 * Callers: 12
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FEA48  sub_4FEA48
 *   0x00000000004FEACC  sub_4FEACC
 *   0x00000000004FEB5C  sub_4FEB5C
 *   0x00000000004FED28  sub_4FED28
 *   0x00000000004FEF18  sub_4FEF18
 *   0x00000000004FF07C  sub_4FF07C
 *   0x00000000004FF3C4  sub_4FF3C4
 *   0x00000000004FF9D0  sub_4FF9D0
 *   0x00000000004FFC04  sub_4FFC04
 *   0x0000000000500404  sub_500404
 *
 * Callees: 1
 *   0x00000000005001E8  sub_5001E8
 *
 * Referenced strings: 50
 *   insn=0x00000000004FE494 string=0x00000000004FE498 "h"
 *   insn=0x00000000004FE498 string=0x00000000004FE49C ""
 *   insn=0x00000000004FE4A8 string=0x00000000004FE4B0 "(y"
 *   insn=0x00000000004FE4B0 string=0x00000000004FE4B4 ""
 *   insn=0x00000000004FE4B8 string=0x00000000004FE4C8 ""
 *   insn=0x00000000004FE4B8 string=0x00000000004FE4E0 ""
 *   insn=0x00000000004FE4B8 string=0x00000000004FE4F8 "h"
 *   insn=0x00000000004FE4B8 string=0x00000000004FE568 ""
 *   insn=0x00000000004FE4BC string=0x00000000004FE4C0 "h"
 *   insn=0x00000000004FE4C0 string=0x00000000004FE4C4 "<"
 *   insn=0x00000000004FE4C8 string=0x00000000004FE4CC "i\n@"
 *   insn=0x00000000004FE4D4 string=0x00000000004FE4D8 "!!\t3"
 *   insn=0x00000000004FE4DC string=0x00000000004FE554 "%"
 *   insn=0x00000000004FE4E0 string=0x00000000004FE4E4 "i\n@"
 *   insn=0x00000000004FE4EC string=0x00000000004FE4F0 "!E"
 *   insn=0x00000000004FE4FC string=0x00000000004FE500 "\t(A9"
 *   insn=0x00000000004FE4FC string=0x00000000004FE518 "h\n@"
 *   insn=0x00000000004FE508 string=0x00000000004FE50C "<@"
 *   insn=0x00000000004FE50C string=0x00000000004FE510 ""
 *   insn=0x00000000004FE510 string=0x00000000004FE514 "<"
 *   insn=0x00000000004FE518 string=0x00000000004FE51C ""
 *   insn=0x00000000004FE51C string=0x00000000004FE520 "\t(A9"
 *   insn=0x00000000004FE51C string=0x00000000004FE53C "\t"
 *   insn=0x00000000004FE528 string=0x00000000004FE52C "<@"
 *   insn=0x00000000004FE52C string=0x00000000004FE530 ""
 *   insn=0x00000000004FE530 string=0x00000000004FE534 "<"
 *   insn=0x00000000004FE534 string=0x00000000004FE538 "h\n@"
 *   insn=0x00000000004FE53C string=0x00000000004FE540 "j"
 *   insn=0x00000000004FE540 string=0x00000000004FE544 "!\tS"\t@"
 *   insn=0x00000000004FE544 string=0x00000000004FE548 ""\t@"
 *   insn=0x00000000004FE548 string=0x00000000004FE54C "9\n*"
 *   insn=0x00000000004FE554 string=0x00000000004FE558 "h"
 *   insn=0x00000000004FE558 string=0x00000000004FE55C "`\n"
 *   insn=0x00000000004FE55C string=0x00000000004FE560 "h"
 *   insn=0x00000000004FE568 string=0x00000000004FE56C "i\n"
 *   insn=0x00000000004FE570 string=0x00000000004FE574 "l"
 *   insn=0x00000000004FE574 string=0x00000000004FE578 "@"
 *   insn=0x00000000004FE578 string=0x00000000004FE57C ")"
 *   insn=0x00000000004FE57C string=0x00000000004FE580 "\nii"
 *   insn=0x00000000004FE580 string=0x00000000004FE584 "KY"
 *   insn=0x00000000004FE584 string=0x00000000004FE588 "i)"
 *   insn=0x00000000004FE588 string=0x00000000004FE58C "l"
 *   insn=0x00000000004FE58C string=0x00000000004FE590 "\t"
 *   insn=0x00000000004FE594 string=0x00000000004FE598 "h"
 *   insn=0x00000000004FE598 string=0x00000000004FE59C ""
 *   insn=0x00000000004FE59C string=0x00000000004FE5A0 "i\n"
 *   insn=0x00000000004FE5A0 string=0x00000000004FE5A4 "@"
 *   insn=0x00000000004FE5A4 string=0x00000000004FE5A8 "yi"
 *   insn=0x00000000004FE5A8 string=0x00000000004FE5AC "5"
 *   insn=0x00000000004FE5AC string=0x00000000004FE5B0 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FE488(__int64 result, _DWORD *a2)
{
  __int64 v3; // x2
  __int64 v4; // x1
  int v5; // w8
  int v6; // w8

  switch ( *a2 )
  {
    case 6:
      *a2 = 12;
      return result;
    case 7:
      v3 = *(unsigned int *)(*(_QWORD *)(result + 24) + 8LL);
      v4 = ((unsigned __int16)a2[2] << 23) | 4u;
      goto LABEL_12;
    case 8:
      v3 = *(unsigned int *)(*(_QWORD *)(result + 24) + 8LL);
      v4 = (a2[2] << 14) | 5u;
      goto LABEL_12;
    case 9:
      v5 = a2[3];
      if ( (v5 & 0x100) == 0 && v5 >= *(unsigned __int8 *)(result + 74) )
        --*(_DWORD *)(result + 60);
      v6 = a2[2];
      if ( (v6 & 0x100) == 0 && v6 >= *(unsigned __int8 *)(result + 74) )
      {
        --*(_DWORD *)(result + 60);
        v6 = a2[2];
      }
      v3 = *(unsigned int *)(*(_QWORD *)(result + 24) + 8LL);
      v4 = (v6 << 23) | (a2[3] << 14) | 6u;
LABEL_12:
      result = sub_5001E8(result, v4, v3);
      a2[2] = result;
      *a2 = 11;
      break;
    case 0xD:
      *a2 = 12;
      a2[2] = (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)result + 24LL) + 4LL * (int)a2[2]) >> 6);
      break;
    case 0xE:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)result + 24LL) + 4LL * (int)a2[2]) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)result + 24LL)
                                                                                        + 4LL * (int)a2[2])
                                                                            & 0x7FFFFF
                                                                            | 0x1000000;
      *a2 = 11;
      break;
    default:
      return result;
  }
  return result;
}

