/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FED28
 * Mangled: sub_4FED28
 * Demangled: sub_4FED28
 *
 * Callers: 2
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F2CCC  sub_4F2CCC
 *
 * Callees: 5
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FE674  sub_4FE674
 *   0x00000000004FEB5C  sub_4FEB5C
 *   0x00000000005001E8  sub_5001E8
 *
 * Referenced strings: 42
 *   insn=0x00000000004FED44 string=0x00000000004FED48 ""
 *   insn=0x00000000004FED4C string=0x00000000004FED50 "h"
 *   insn=0x00000000004FED54 string=0x00000000004FED5C "(y"
 *   insn=0x00000000004FED5C string=0x00000000004FED60 ""
 *   insn=0x00000000004FED6C string=0x00000000004FED70 "!"
 *   insn=0x00000000004FED78 string=0x00000000004FED7C "i*A9"
 *   insn=0x00000000004FED84 string=0x00000000004FED88 "h>@"
 *   insn=0x00000000004FED88 string=0x00000000004FED8C ""
 *   insn=0x00000000004FED8C string=0x00000000004FED90 "h>"
 *   insn=0x00000000004FEDA8 string=0x00000000004FEDAC "2"
 *   insn=0x00000000004FEDD8 string=0x00000000004FEDDC "h*A9_"
 *   insn=0x00000000004FEDD8 string=0x00000000004FEE88 "h"
 *   insn=0x00000000004FEDDC string=0x00000000004FEDE0 "_"
 *   insn=0x00000000004FEDEC string=0x00000000004FEDF0 "!"
 *   insn=0x00000000004FEDF0 string=0x00000000004FEDF4 "$"
 *   insn=0x00000000004FEDFC string=0x00000000004FEE00 "W"
 *   insn=0x00000000004FEE00 string=0x00000000004FEE04 "i"
 *   insn=0x00000000004FEE08 string=0x00000000004FEE0C "D"
 *   insn=0x00000000004FEE10 string=0x00000000004FEE14 ""\t@"
 *   insn=0x00000000004FEE14 string=0x00000000004FEE18 "h"
 *   insn=0x00000000004FEE18 string=0x00000000004FEE1C "]\n*)"
 *   insn=0x00000000004FEE1C string=0x00000000004FEE20 ")"
 *   insn=0x00000000004FEE24 string=0x00000000004FEE28 ","
 *   insn=0x00000000004FEE3C string=0x00000000004FEE40 "!"
 *   insn=0x00000000004FEE50 string=0x00000000004FEE54 " "
 *   insn=0x00000000004FEE54 string=0x00000000004FEE58 "h*A9_"
 *   insn=0x00000000004FEE54 string=0x00000000004FEEB8 "h"
 *   insn=0x00000000004FEE58 string=0x00000000004FEE5C "_"
 *   insn=0x00000000004FEE5C string=0x00000000004FEE60 "K"
 *   insn=0x00000000004FEE8C string=0x00000000004FEE90 "Jd"
 *   insn=0x00000000004FEE90 string=0x00000000004FEE94 "\t@"
 *   insn=0x00000000004FEE94 string=0x00000000004FEE98 "I9\t*!\t"
 *   insn=0x00000000004FEE98 string=0x00000000004FEE9C "!\t"
 *   insn=0x00000000004FEEBC string=0x00000000004FEEC0 "Jd"
 *   insn=0x00000000004FEEC0 string=0x00000000004FEEC4 "\t@"
 *   insn=0x00000000004FEEC4 string=0x00000000004FEEC8 "I]\t*!"
 *   insn=0x00000000004FEEC8 string=0x00000000004FEECC "!"
 *   insn=0x00000000004FEEE0 string=0x00000000004FEEE4 "!"
 *   insn=0x00000000004FEEEC string=0x00000000004FEEF0 "i*A9"
 *   insn=0x00000000004FEEF8 string=0x00000000004FEEFC "h>@"
 *   insn=0x00000000004FEEFC string=0x00000000004FEF00 ""
 *   insn=0x00000000004FEF00 string=0x00000000004FEF04 "h>"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_4FED28(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // w8
  signed int v7; // w2
  signed int *v8; // x22
  unsigned int v9; // w11
  __int64 v10; // x0
  __int64 v11; // x2
  __int64 v12; // x1
  signed int v13; // w2
  signed int *v14; // x22
  unsigned int v15; // w8
  int v16; // w8

  switch ( *a2 )
  {
    case 6:
      if ( *a3 == 12 )
      {
        v6 = a3[2];
        if ( (v6 & 0x100) == 0 && v6 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      sub_4FE674(a1, a3, a2[2]);
      return;
    case 7:
      sub_4FE488(a1, a3);
      if ( *a3 == 12 )
      {
        v14 = a3 + 2;
        v13 = a3[2];
        if ( a3[4] == a3[5] )
        {
LABEL_23:
          v15 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
          v12 = (v13 << 6) | (a2[2] << 23) | 8u;
          goto LABEL_24;
        }
        if ( v13 >= *(unsigned __int8 *)(a1 + 74) )
        {
          sub_4FE674(a1, a3, v13);
LABEL_22:
          v13 = *v14;
          goto LABEL_23;
        }
      }
      else
      {
        v14 = a3 + 2;
      }
      sub_4FE5C0(a1, a3);
      goto LABEL_22;
    case 8:
      sub_4FE488(a1, a3);
      if ( *a3 == 12 )
      {
        v8 = a3 + 2;
        v7 = a3[2];
        if ( a3[4] == a3[5] )
          goto LABEL_19;
        if ( v7 >= *(unsigned __int8 *)(a1 + 74) )
        {
          sub_4FE674(a1, a3, v7);
          goto LABEL_18;
        }
      }
      else
      {
        v8 = a3 + 2;
      }
      sub_4FE5C0(a1, a3);
LABEL_18:
      v7 = *v8;
LABEL_19:
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
      v12 = (v7 << 6) | (a2[2] << 14) | 7u;
LABEL_24:
      v10 = a1;
      v11 = v15;
LABEL_25:
      sub_5001E8(v10, v12, v11);
LABEL_26:
      if ( *a3 == 12 )
      {
        v16 = a3[2];
        if ( (v16 & 0x100) == 0 && v16 >= *(unsigned __int8 *)(a1 + 74) )
          --*(_DWORD *)(a1 + 60);
      }
      return;
    case 9:
      v9 = (unsigned int)sub_4FEB5C(a1, a3) << 14;
      v10 = a1;
      v11 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL);
      v12 = v9 | (a2[2] << 6) | (a2[3] << 23) | 9;
      goto LABEL_25;
    default:
      goto LABEL_26;
  }
}

