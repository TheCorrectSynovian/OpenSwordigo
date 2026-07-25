/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F43C0
 * Mangled: sub_4F43C0
 * Demangled: sub_4F43C0
 *
 * Callers: 5
 *   0x00000000004F3A60  sub_4F3A60
 *   0x00000000004F4320  sub_4F4320
 *   0x00000000004F43C0  sub_4F43C0
 *   0x00000000004F49E8  sub_4F49E8
 *   0x00000000004F4ADC  sub_4F4ADC
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBC40  .memset
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EE46C  sub_4EE46C
 *   0x00000000004EEE4C  sub_4EEE4C
 *   0x00000000004F3A60  sub_4F3A60
 *   0x00000000004F4118  sub_4F4118
 *
 * Referenced strings: 171
 *   insn=0x00000000004F43DC string=0x00000000004F43E0 "W"
 *   insn=0x00000000004F43F8 string=0x00000000004F43FC ""
 *   insn=0x00000000004F4404 string=0x00000000004F4408 ")"
 *   insn=0x00000000004F4404 string=0x00000000004F443C "h.@9"
 *   insn=0x00000000004F4408 string=0x00000000004F4410 "(y"
 *   insn=0x00000000004F4410 string=0x00000000004F4414 ""
 *   insn=0x00000000004F4418 string=0x00000000004F441C "h.@9"
 *   insn=0x00000000004F4420 string=0x00000000004F4424 "x"
 *   insn=0x00000000004F4428 string=0x00000000004F442C "H!"
 *   insn=0x00000000004F442C string=0x00000000004F4430 ""
 *   insn=0x00000000004F4430 string=0x00000000004F4434 ""
 *   insn=0x00000000004F4434 string=0x00000000004F4438 ""
 *   insn=0x00000000004F4438 string=0x00000000004F44A4 "\t"
 *   insn=0x00000000004F4444 string=0x00000000004F4448 "x"
 *   insn=0x00000000004F4448 string=0x00000000004F444C "H!"
 *   insn=0x00000000004F444C string=0x00000000004F4450 ""
 *   insn=0x00000000004F4450 string=0x00000000004F4454 ""
 *   insn=0x00000000004F4454 string=0x00000000004F4458 "*\t"
 *   insn=0x00000000004F4458 string=0x00000000004F445C "H"
 *   insn=0x00000000004F445C string=0x00000000004F4460 "\t"
 *   insn=0x00000000004F4468 string=0x00000000004F44AC "("
 *   insn=0x00000000004F446C string=0x00000000004F4470 " `"
 *   insn=0x00000000004F4474 string=0x00000000004F4478 "x"
 *   insn=0x00000000004F4474 string=0x00000000004F4894 "j.@9"
 *   insn=0x00000000004F447C string=0x00000000004F4480 ""
 *   insn=0x00000000004F4484 string=0x00000000004F4488 "i.@9x"
 *   insn=0x00000000004F4488 string=0x00000000004F448C "x"
 *   insn=0x00000000004F4490 string=0x00000000004F4494 "@"
 *   insn=0x00000000004F4494 string=0x00000000004F4498 "I!"
 *   insn=0x00000000004F4498 string=0x00000000004F449C ")"
 *   insn=0x00000000004F449C string=0x00000000004F44A0 "("
 *   insn=0x00000000004F44B8 string=0x00000000004F4508 "i"
 *   insn=0x00000000004F44BC string=0x00000000004F44C0 "H"
 *   insn=0x00000000004F44D8 string=0x00000000004F44DC "K"
 *   insn=0x00000000004F44E0 string=0x00000000004F44E4 "%@9"
 *   insn=0x00000000004F44EC string=0x00000000004F44F0 "h&@9"
 *   insn=0x00000000004F4500 string=0x00000000004EE46C "($@9\t"
 *   insn=0x00000000004F4508 string=0x00000000004F450C "("
 *   insn=0x00000000004F450C string=0x00000000004F4510 "?"
 *   insn=0x00000000004F4510 string=0x00000000004F4514 "h"
 *   insn=0x00000000004F4518 string=0x00000000004F451C "\t"
 *   insn=0x00000000004F4524 string=0x00000000004F4528 ""
 *   insn=0x00000000004F4528 string=0x00000000004F452C "h"
 *   insn=0x00000000004F452C string=0x00000000004F4530 "h"
 *   insn=0x00000000004F4544 string=0x00000000004F4548 "h:@"
 *   insn=0x00000000004F4544 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000004F4570 string=0x00000000004F4574 ","
 *   insn=0x00000000004F4574 string=0x00000000004F4658 "h.@9"
 *   insn=0x00000000004F4578 string=0x00000000004F457C "m"
 *   insn=0x00000000004F4580 string=0x00000000004F4584 ","
 *   insn=0x00000000004F4584 string=0x00000000004F4634 "-"
 *   insn=0x00000000004F4590 string=0x00000000004F4594 "n"
 *   insn=0x00000000004F45A4 string=0x00000000004F45A8 "b"
 *   insn=0x00000000004F45B8 string=0x00000000004F45BC "R"
 *   insn=0x00000000004F45C8 string=0x00000000004F45CC "/"
 *   insn=0x00000000004F45DC string=0x00000000004F45E0 "0\n@L"
 *   insn=0x00000000004F45E8 string=0x00000000004F45EC "B"
 *   insn=0x00000000004F45F0 string=0x00000000004F45F4 "BX ncX n!"
 *   insn=0x00000000004F45F4 string=0x00000000004F45F8 "cX n!"
 *   insn=0x00000000004F45F8 string=0x00000000004F45FC "!"
 *   insn=0x00000000004F4604 string=0x00000000004F4608 " "
 *   insn=0x00000000004F462C string=0x00000000004F4630 "k"
 *   insn=0x00000000004F4634 string=0x00000000004F4638 ".km"
 *   insn=0x00000000004F463C string=0x00000000004F4640 "?i"
 *   insn=0x00000000004F4640 string=0x00000000004F4644 ")"
 *   insn=0x00000000004F4648 string=0x00000000004F464C "ky"
 *   insn=0x00000000004F464C string=0x00000000004F4650 ".k-"
 *   insn=0x00000000004F4650 string=0x00000000004F4654 "c"
 *   insn=0x00000000004F465C string=0x00000000004F4660 "\n"
 *   insn=0x00000000004F4664 string=0x00000000004F4668 "(!"
 *   insn=0x00000000004F4674 string=0x00000000004F4678 "}*"
 *   insn=0x00000000004F4678 string=0x00000000004F467C "<"
 *   insn=0x00000000004F4684 string=0x00000000004F4694 ""
 *   insn=0x00000000004F4688 string=0x00000000004F468C "{"
 *   insn=0x00000000004F4694 string=0x00000000004F4698 "\t"
 *   insn=0x00000000004F469C string=0x00000000004F46A0 ""
 *   insn=0x00000000004F46A4 string=0x00000000004F46A8 "!"
 *   insn=0x00000000004F46A8 string=0x00000000004F46AC ""
 *   insn=0x00000000004F46B0 string=0x00000000004F46B4 ""
 *   insn=0x00000000004F46BC string=0x00000000004F46C0 "a"
 *   insn=0x00000000004F46C4 string=0x00000000004F46C8 "|"
 *   insn=0x00000000004F46C8 string=0x00000000004F46CC ""
 *   insn=0x00000000004F46D0 string=0x00000000004EEE4C ""
 *   insn=0x00000000004F46D4 string=0x00000000004F46D8 "\t"
 *   insn=0x00000000004F46D8 string=0x00000000004F46DC ")"
 *   insn=0x00000000004F46DC string=0x00000000004F46E0 "\t"
 *   insn=0x00000000004F46F0 string=0x00000000004F46F4 "9"
 *   insn=0x00000000004F46F8 string=0x00000000004F4688 "x"
 *   insn=0x00000000004F46FC string=0x00000000004F4700 "T"
 *   insn=0x00000000004F4704 string=0x00000000004F4708 "!"
 *   insn=0x00000000004F470C string=0x00000000004F4710 ""
 *   insn=0x00000000004F4720 string=0x00000000004F4724 "|"
 *   insn=0x00000000004F4724 string=0x00000000004F4728 "("
 *   insn=0x00000000004F4730 string=0x00000000004F4734 ""
 *   insn=0x00000000004F4734 string=0x00000000004F4738 "\t"
 *   insn=0x00000000004F4738 string=0x00000000004F473C ")"
 *   insn=0x00000000004F473C string=0x00000000004F4740 "\t"
 *   insn=0x00000000004F4750 string=0x00000000004F4754 "?"
 *   insn=0x00000000004F4754 string=0x00000000004F4758 ""
 *   insn=0x00000000004F4778 string=0x00000000004F477C "n"
 *   insn=0x00000000004F4784 string=0x00000000004F4798 "_"
 *   insn=0x00000000004F4788 string=0x00000000004F478C "_"
 *   insn=0x00000000004F478C string=0x00000000004F4790 "H"
 *   insn=0x00000000004F4798 string=0x00000000004F479C "`"
 *   insn=0x00000000004F47A8 string=0x00000000004F47AC "k"
 *   insn=0x00000000004F47AC string=0x00000000004F47B0 "k"
 *   insn=0x00000000004F47C8 string=0x00000000004F47CC ")"
 *   insn=0x00000000004F47CC string=0x00000000004F47D0 "#"
 *   insn=0x00000000004F47E4 string=0x00000000004F47E8 "L"
 *   insn=0x00000000004F47E8 string=0x00000000004F47EC "("
 *   insn=0x00000000004F47F0 string=0x00000000004F47F4 "!/"
 *   insn=0x00000000004F480C string=0x00000000004F4810 "!\t"
 *   insn=0x00000000004F4810 string=0x00000000004F4934 "g"
 *   insn=0x00000000004F4844 string=0x00000000004F4848 "!"
 *   insn=0x00000000004F4848 string=0x00000000004F4850 "/"
 *   insn=0x00000000004F4848 string=0x000000000059A2C8 "table index is nil"
 *   insn=0x00000000004F4854 string=0x00000000004F4858 ")"
 *   insn=0x00000000004F4858 string=0x00000000004F485C "?"
 *   insn=0x00000000004F485C string=0x00000000004F4860 "("
 *   insn=0x00000000004F4860 string=0x00000000004F4864 "*"
 *   insn=0x00000000004F4860 string=0x00000000004F48C4 "i.@9"
 *   insn=0x00000000004F4864 string=0x00000000004F486C "Iy"
 *   insn=0x00000000004F486C string=0x00000000004F4870 ")"
 *   insn=0x00000000004F4870 string=0x00000000004F4874 " "
 *   insn=0x00000000004F4874 string=0x00000000004F4878 "i.@9"
 *   insn=0x00000000004F4880 string=0x00000000004F4884 "i!"
 *   insn=0x00000000004F4884 string=0x00000000004F4888 ")"
 *   insn=0x00000000004F4888 string=0x00000000004F488C ")"
 *   insn=0x00000000004F488C string=0x00000000004F4890 "?"
 *   insn=0x00000000004F4890 string=0x00000000004F498C "\n"
 *   insn=0x00000000004F4894 string=0x00000000004F4898 ""
 *   insn=0x00000000004F4898 string=0x00000000004F489C "\t"
 *   insn=0x00000000004F48A0 string=0x00000000004F48A4 "("
 *   insn=0x00000000004F48A4 string=0x00000000004F48A8 "i!"
 *   insn=0x00000000004F48A8 string=0x00000000004F48AC "x"
 *   insn=0x00000000004F48AC string=0x00000000004F48B0 ")"
 *   insn=0x00000000004F48B0 string=0x00000000004F48B4 ")"
 *   insn=0x00000000004F48B4 string=0x00000000004F48B8 "\n\t"
 *   insn=0x00000000004F48B8 string=0x00000000004F48BC "H"
 *   insn=0x00000000004F48CC string=0x00000000004F48D0 "i!"
 *   insn=0x00000000004F48D0 string=0x00000000004F48D4 ")"
 *   insn=0x00000000004F48D4 string=0x00000000004F48D8 ")"
 *   insn=0x00000000004F48D8 string=0x00000000004F48DC "K\t"
 *   insn=0x00000000004F48DC string=0x00000000004F48E0 "i"
 *   insn=0x00000000004F48E0 string=0x00000000004F48E4 "\n"
 *   insn=0x00000000004F48E4 string=0x00000000004F48E8 "8a"
 *   insn=0x00000000004F48EC string=0x00000000004F48F0 "a"
 *   insn=0x00000000004F48F0 string=0x00000000004F48F4 "8"
 *   insn=0x00000000004F4900 string=0x00000000004F4904 "!"
 *   insn=0x00000000004F4904 string=0x000000000059A2DB "table index is NaN"
 *   insn=0x00000000004F492C string=0x00000000004F4930 "@"
 *   insn=0x00000000004F4934 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004F4938 string=0x00000000004F493C " `"
 *   insn=0x00000000004F4940 string=0x00000000004F4944 "j.@9"
 *   insn=0x00000000004F4948 string=0x00000000004F494C "\t"
 *   insn=0x00000000004F494C string=0x00000000004F4950 "+"
 *   insn=0x00000000004F4954 string=0x00000000004F4958 "J"
 *   insn=0x00000000004F4958 string=0x00000000004F495C "i"
 *   insn=0x00000000004F495C string=0x00000000004F4960 "J"
 *   insn=0x00000000004F4960 string=0x00000000004F4964 "+\t"
 *   insn=0x00000000004F4964 string=0x00000000004F4968 "i"
 *   insn=0x00000000004F4970 string=0x00000000004F4974 "j.@9"
 *   insn=0x00000000004F4978 string=0x00000000004F497C ")@"
 *   insn=0x00000000004F497C string=0x00000000004F4980 "j!"
 *   insn=0x00000000004F4980 string=0x00000000004F4984 "J"
 *   insn=0x00000000004F4984 string=0x00000000004F4988 "I"
 *   insn=0x00000000004F498C string=0x00000000004F4990 "8a*"
 *   insn=0x00000000004F499C string=0x00000000004F49A0 "8"
 *   insn=0x00000000004F49A8 string=0x00000000004F49AC "("
 *   insn=0x00000000004F49B0 string=0x00000000004F49B4 "\t"
 *   insn=0x00000000004F49D4 string=0x00000000004F49D8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F43C0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 *v6; // x24
  int v7; // w8
  unsigned int v8; // w8
  __int64 *v9; // x22
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x8
  bool v12; // cc
  int v13; // w8
  unsigned __int64 v14; // x9
  int v15; // w22
  signed __int64 v16; // x12
  int v17; // w11
  int v18; // w13
  int v19; // w15
  __int64 v20; // x14
  __int64 v21; // x15
  unsigned __int64 v22; // x16
  unsigned __int64 v23; // x18
  unsigned __int64 v24; // x16
  int32x4_t v25; // q0
  const float *v26; // x15
  int32x4_t v27; // q1
  const float *v28; // x17
  unsigned __int128 v29; // q2
  unsigned __int128 v30; // q16
  int *v31; // x14
  int v32; // t1
  __int64 v33; // x13
  int v34; // w14
  bool v35; // cf
  int v36; // w8
  __int64 v37; // x23
  int v38; // w25
  int v39; // w26
  __int64 v40; // x27
  int i; // w28
  double v42; // d0
  int v43; // w8
  int v44; // w0
  int v45; // w8
  int v46; // w20
  int v47; // w8
  int v48; // w0
  int v49; // w8
  int v50; // w9
  __int64 v51; // x20
  int v52; // w13
  int v53; // w2
  int v54; // w8
  int v55; // w10
  int v56; // w12
  int *v57; // x11
  int v59; // w9
  unsigned int v60; // w9
  double v61; // d0
  __int64 *v62; // x9
  _DWORD v63[27]; // [xsp+Ch] [xbp-C4h] BYREF
  __int64 v64; // [xsp+78h] [xbp-58h]

  v64 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a3[2] )
  {
    case 1:
      v6 = *(__int64 **)(a2 + 32);
      v7 = ((1 << *(_BYTE *)(a2 + 11)) - 1) & *a3;
      goto LABEL_8;
    case 3:
      if ( *(double *)a3 == 0.0 )
      {
        v6 = *(__int64 **)(a2 + 32);
        v9 = v6;
      }
      else
      {
        v6 = *(__int64 **)(a2 + 32);
        v8 = (unsigned int)(HIDWORD(*(_QWORD *)a3) + *(_QWORD *)a3) % (((1 << *(_BYTE *)(a2 + 11)) - 1) | 1u);
LABEL_4:
        v9 = &v6[5 * v8];
      }
LABEL_9:
      if ( v9 != (__int64 *)&unk_59A2A0 && !*((_DWORD *)v9 + 2) )
        goto LABEL_11;
      v10 = *(_QWORD *)(a2 + 40);
      v11 = v10 - 40;
      *(_QWORD *)(a2 + 40) = v10 - 40;
      if ( v10 <= (unsigned __int64)v6 )
        goto LABEL_18;
      break;
    case 4:
      v6 = *(__int64 **)(a2 + 32);
      v7 = ((1 << *(_BYTE *)(a2 + 11)) - 1) & *(_DWORD *)(*(_QWORD *)a3 + 12LL);
LABEL_8:
      v9 = &v6[5 * v7];
      goto LABEL_9;
    default:
      v6 = *(__int64 **)(a2 + 32);
      v8 = *a3 % (((1 << *(_BYTE *)(a2 + 11)) - 1) | 1u);
      goto LABEL_4;
  }
  do
  {
    if ( !*(_DWORD *)(v11 + 24) )
    {
      switch ( *((_DWORD *)v9 + 6) )
      {
        case 1:
          v59 = ((1 << *(_BYTE *)(a2 + 11)) - 1) & v9[2];
          goto LABEL_78;
        case 3:
          v61 = *((double *)v9 + 2);
          if ( v61 == 0.0 )
            goto LABEL_79;
          v60 = (HIDWORD(v61) + LODWORD(v61)) % (((1 << *(_BYTE *)(a2 + 11)) - 1) | 1u);
          goto LABEL_72;
        case 4:
          v59 = ((1 << *(_BYTE *)(a2 + 11)) - 1) & *(_DWORD *)(v9[2] + 12);
LABEL_78:
          v6 += 5 * v59;
LABEL_79:
          if ( v6 != v9 )
            goto LABEL_80;
          goto LABEL_82;
        default:
          v60 = *((_DWORD *)v9 + 4) % (((1 << *(_BYTE *)(a2 + 11)) - 1) | 1u);
LABEL_72:
          v6 += 5 * v60;
          if ( v6 == v9 )
          {
LABEL_82:
            *(_QWORD *)(v11 + 32) = v9[4];
            v9[4] = v11;
            v9 = (__int64 *)v11;
          }
          else
          {
            do
            {
LABEL_80:
              v62 = v6;
              v6 = (__int64 *)v6[4];
            }
            while ( v6 != v9 );
            v62[4] = v11;
            *(_QWORD *)(v11 + 32) = v9[4];
            *(_OWORD *)(v11 + 16) = *((_OWORD *)v9 + 1);
            *(_OWORD *)v11 = *(_OWORD *)v9;
            v9[4] = 0;
            *((_DWORD *)v9 + 2) = 0;
          }
          break;
      }
LABEL_11:
      v9[2] = *(_QWORD *)a3;
      *((_DWORD *)v9 + 6) = a3[2];
      if ( (int)a3[2] >= 4 && (*(_BYTE *)(*(_QWORD *)a3 + 9LL) & 3) != 0 && (*(_BYTE *)(a2 + 9) & 4) != 0 )
        sub_4EE46C(a1, a2);
      return (__int64)v9;
    }
    v12 = v11 > (unsigned __int64)v6;
    v11 -= 40LL;
    *(_QWORD *)(a2 + 40) = v11;
  }
  while ( v12 );
LABEL_18:
  memset(v63, 0, sizeof(v63));
  v13 = *(_DWORD *)(a2 + 56);
  v14 = 0;
  v15 = 0;
  LODWORD(v16) = 1;
  v17 = 1;
  do
  {
    v18 = v17;
    if ( v17 > v13 )
    {
      v18 = v13;
      if ( (int)v16 > v13 )
        break;
    }
    if ( (int)v16 <= v18 )
    {
      v16 = (int)v16;
      v20 = *(_QWORD *)(a2 + 24);
      v21 = (int)v16 <= (__int64)v18 ? v18 : (int)v16;
      v22 = v21 + 1 - (int)v16;
      if ( v22 >= 9 )
      {
        v23 = (v22 & 7) != 0 ? v22 & 7 : 8LL;
        v24 = v22 - v23;
        v25 = 0u;
        v26 = (const float *)(v20 + 16LL * (int)v16 + 56);
        v16 = v24 + (int)v16;
        v27 = 0u;
        do
        {
          v28 = v26 - 16;
          v29 = (unsigned __int128)vld4q_f32(v26);
          v30 = (unsigned __int128)vld4q_f32(v28);
          v24 -= 8LL;
          v26 += 32;
          v27 = vsubq_s32(v27, vmvnq_s8(vceqzq_s32((int32x4_t)v29)));
          v25 = vsubq_s32(v25, vmvnq_s8(vceqzq_s32((int32x4_t)v30)));
        }
        while ( v24 );
        v19 = vaddvq_s32(vaddq_s32(v27, v25));
      }
      else
      {
        v19 = 0;
      }
      v31 = (int *)(v20 + 16 * v16 - 8);
      do
      {
        v32 = *v31;
        v31 += 4;
        if ( v32 )
          ++v19;
        v12 = v16++ < v18;
      }
      while ( v12 );
    }
    else
    {
      v19 = 0;
    }
    v33 = v14;
    v34 = v63[v14];
    v15 += v19;
    v35 = v14++ >= 0x1A;
    v17 *= 2;
    v63[v33] = v34 + v19;
  }
  while ( !v35 );
  v36 = 1 << *(_BYTE *)(a2 + 11);
  v37 = a1;
  v38 = 0;
  v39 = 0;
  v40 = 5LL * v36;
  for ( i = 1 - v36; ; ++i )
  {
    if ( LODWORD(v6[v40 - 4]) )
    {
      if ( LODWORD(v6[v40 - 2]) == 3
        && (v42 = *(double *)&v6[v40 - 3], v43 = (int)v42, v42 == (double)(int)v42)
        && !((unsigned int)(v43 - 1) >> 26) )
      {
        v44 = sub_4EEE4C(v43 - 1);
        ++v63[v44 + 1];
        v45 = 1;
      }
      else
      {
        v45 = 0;
      }
      v39 += v45;
      ++v38;
    }
    if ( !i )
      break;
    v6 = *(__int64 **)(a2 + 32);
    v40 -= 5;
  }
  v46 = v39 + v15;
  if ( a3[2] == 3 && (v47 = (int)*(double *)a3, *(double *)a3 == (double)v47) && !((unsigned int)(v47 - 1) >> 26) )
  {
    v48 = sub_4EEE4C(v47 - 1);
    ++v63[v48 + 1];
    v49 = 1;
  }
  else
  {
    v49 = 0;
  }
  v50 = v46 + v49;
  if ( v46 + v49 < 1 )
  {
    v51 = v37;
    v54 = 0;
    v53 = 0;
  }
  else
  {
    v51 = v37;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 1;
    v57 = v63;
    do
    {
      if ( *v57 >= 1 )
      {
        v55 += *v57;
        if ( v55 > v52 )
        {
          v54 = v55;
          v53 = v56;
        }
      }
      if ( v55 == v50 )
        break;
      v12 = v56 < v50;
      v52 = v56;
      v56 *= 2;
      ++v57;
    }
    while ( v12 );
  }
  sub_4F3A60(v51, a2, v53, v15 + v38 + 1 - v54);
  v9 = sub_4F4118(a2, a3);
  *(_BYTE *)(a2 + 10) = 0;
  if ( v9 != &qword_599BC8 )
    return (__int64)v9;
  if ( !a3[2] )
    sub_4EB320(v51, "table index is nil");
  return sub_4F43C0(v51, a2, a3);
}

