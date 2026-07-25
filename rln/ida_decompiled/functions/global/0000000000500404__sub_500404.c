/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000500404
 * Mangled: sub_500404
 * Demangled: sub_500404
 *
 * Callers: 3
 *   0x00000000004FE674  sub_4FE674
 *   0x00000000004FF268  sub_4FF268
 *   0x00000000004FF3C4  sub_4FF3C4
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004FE158  sub_4FE158
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000005001E8  sub_5001E8
 *
 * Referenced strings: 46
 *   insn=0x0000000000500414 string=0x0000000000500418 "V"
 *   insn=0x0000000000500430 string=0x0000000000500434 "h"
 *   insn=0x0000000000500434 string=0x0000000000500438 "\t"
 *   insn=0x0000000000500438 string=0x000000000050043C "?-"
 *   insn=0x000000000050043C string=0x0000000000500440 ""
 *   insn=0x0000000000500444 string=0x000000000050044C "Iy"
 *   insn=0x0000000000500444 string=0x000000000059B028 "pT"
 *   insn=0x000000000050044C string=0x0000000000500450 ")"
 *   insn=0x0000000000500450 string=0x0000000000500454 " "
 *   insn=0x0000000000500454 string=0x00000000005004F8 "h\n@"
 *   insn=0x0000000000500454 string=0x0000000000500534 "h"
 *   insn=0x0000000000500460 string=0x0000000000500464 ""\t@"
 *   insn=0x0000000000500468 string=0x000000000050046C "(]*"
 *   insn=0x0000000000500470 string=0x0000000000500474 "F"
 *   insn=0x0000000000500478 string=0x000000000050047C "i\n"
 *   insn=0x000000000050047C string=0x0000000000500480 "@"
 *   insn=0x0000000000500480 string=0x0000000000500484 ")"
 *   insn=0x0000000000500484 string=0x0000000000500488 "\nii"
 *   insn=0x000000000050048C string=0x0000000000500490 "\ni)"
 *   insn=0x0000000000500490 string=0x0000000000500494 "@"
 *   insn=0x0000000000500498 string=0x000000000050049C ")}@"
 *   insn=0x000000000050049C string=0x00000000005004A0 "?"
 *   insn=0x00000000005004A4 string=0x00000000005004A8 ")"
 *   insn=0x00000000005004AC string=0x00000000005004B0 ")"
 *   insn=0x00000000005004B0 string=0x00000000005004B4 "@"
 *   insn=0x00000000005004B4 string=0x00000000005004B8 "\nyi"
 *   insn=0x00000000005004B8 string=0x00000000005004BC "K"
 *   insn=0x00000000005004C4 string=0x00000000005004C8 "K5"
 *   insn=0x00000000005004CC string=0x00000000005004D0 "L"
 *   insn=0x00000000005004D0 string=0x00000000005004D4 "K}"
 *   insn=0x00000000005004D4 string=0x00000000005004D8 "l"
 *   insn=0x00000000005004E4 string=0x00000000005004E8 "j"
 *   insn=0x00000000005004EC string=0x00000000005004F0 "\ny)"
 *   insn=0x00000000005004F0 string=0x00000000005004F4 "("
 *   insn=0x0000000000500504 string=0x0000000000500508 "!\tS"
 *   insn=0x000000000050050C string=0x0000000000500510 ""\t@"
 *   insn=0x0000000000500518 string=0x000000000050051C "i\n@"
 *   insn=0x0000000000500524 string=0x0000000000500528 "9\t*"
 *   insn=0x000000000050055C string=0x0000000000500560 "9"
 *   insn=0x0000000000500564 string=0x0000000000500568 "\t"
 *   insn=0x0000000000500570 string=0x0000000000500574 ""
 *   insn=0x0000000000500580 string=0x0000000000500584 ""
 *   insn=0x0000000000500594 string=0x0000000000500598 "t\n"
 *   insn=0x0000000000500598 string=0x000000000050059C "h"
 *   insn=0x00000000005005AC string=0x00000000005005C4 "C"
 *   insn=0x00000000005005C4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_500404(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // x0
  int v7; // w2
  int v8; // w1
  __int64 v9; // x9
  __int64 v10; // x9
  __int64 v11; // x8
  unsigned int v12; // w10
  int v13; // w8
  int v14; // w0
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF
  int v16; // [xsp+10h] [xbp-30h]
  __int64 v17; // [xsp+18h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_4FE488(a1, a2);
  switch ( *a2 )
  {
    case 1:
      v9 = *(int *)(a1 + 48);
      if ( (int)v9 <= *(_DWORD *)(a1 + 52) )
        goto LABEL_16;
      if ( !(_DWORD)v9 )
      {
        if ( *(unsigned __int8 *)(a1 + 74) <= a3 )
          goto LABEL_18;
        goto LABEL_16;
      }
      v10 = v9 - 1;
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      v12 = *(_DWORD *)(v11 + 4 * v10);
      if ( (v12 & 0x3F) != 3 || (unsigned __int8)(v12 >> 6) > a3 || (int)((v12 >> 23) + 1) < a3 )
      {
LABEL_16:
        v7 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
        v8 = (a3 << 23) | (a3 << 6) | 3;
        goto LABEL_17;
      }
      if ( (int)(v12 >> 23) < a3 )
        *(_DWORD *)(v11 + 4 * v10) = v12 & 0x7FFFFF | ((unsigned __int16)a3 << 23);
LABEL_18:
      a2[2] = a3;
      *a2 = 12;
      return result;
    case 2:
    case 3:
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
      v8 = (a3 << 6) | ((*a2 == 2) << 23) | 2;
      goto LABEL_17;
    case 4:
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
      v8 = (a3 << 6) | (a2[2] << 14) | 1;
      goto LABEL_17;
    case 5:
      v15 = *((_QWORD *)a2 + 1);
      v16 = 3;
      v14 = sub_4FE158(a1, &v15, &v15);
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
      v8 = (a3 << 6) | (v14 << 14) | 1;
      goto LABEL_17;
    case 0xB:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 4LL * (int)a2[2]) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL)
                                                                                    + 4LL * (int)a2[2])
                                                                        & 0xFFFFC03F
                                                                        | ((unsigned __int8)a3 << 6);
      goto LABEL_18;
    case 0xC:
      v13 = a2[2];
      if ( v13 == a3 )
        goto LABEL_18;
      v8 = (v13 << 23) | (a3 << 6);
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
LABEL_17:
      result = sub_5001E8(a1, v8, v7);
      goto LABEL_18;
    default:
      return result;
  }
}

