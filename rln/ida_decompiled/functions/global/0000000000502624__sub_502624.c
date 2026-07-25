/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000502624
 * Mangled: sub_502624
 * Demangled: sub_502624
 *
 * Callers: 1
 *   0x0000000000500AC8  sub_500AC8
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC7A0  .isalnum
 *   0x0000000000203020  .memchr
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004EEEFC  sub_4EEEFC
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004EF46C  sub_4EF46C
 *   0x00000000004F8650  sub_4F8650
 *
 * Referenced strings: 187
 *   insn=0x0000000000502644 string=0x0000000000502648 "Y"
 *   insn=0x0000000000502648 string=0x000000000050264C "("
 *   insn=0x0000000000502650 string=0x0000000000502654 "Z"
 *   insn=0x0000000000502658 string=0x0000000000599A32 "%s:%d: %s"
 *   insn=0x0000000000502664 string=0x000000000059B30B "lexical element too long"
 *   insn=0x0000000000502674 string=0x0000000000502678 "h"
 *   insn=0x0000000000502678 string=0x000000000050267C "\t"
 *   insn=0x000000000050267C string=0x0000000000502680 "?"
 *   insn=0x0000000000502680 string=0x0000000000502684 "\t"
 *   insn=0x0000000000502684 string=0x0000000000502688 "_"
 *   insn=0x0000000000502684 string=0x00000000005026E4 "`"
 *   insn=0x0000000000502688 string=0x000000000050268C "\t"
 *   insn=0x000000000050269C string=0x00000000005026A0 "s"
 *   insn=0x00000000005026B4 string=0x00000000005026B8 "G"
 *   insn=0x00000000005026C0 string=0x00000000005026C4 "T"
 *   insn=0x00000000005026CC string=0x00000000005026D0 "X"
 *   insn=0x00000000005026D8 string=0x00000000005026EC "a"
 *   insn=0x00000000005026E0 string=0x00000000005026F8 "h"
 *   insn=0x00000000005026E4 string=0x00000000005026E8 ""
 *   insn=0x00000000005026E8 string=0x0000000000502708 "i"
 *   insn=0x00000000005026F8 string=0x00000000005026FC "`"
 *   insn=0x00000000005026FC string=0x0000000000502700 "x\n"
 *   insn=0x0000000000502700 string=0x0000000000502704 "\t"
 *   insn=0x0000000000502710 string=0x0000000000502714 ""
 *   insn=0x0000000000502714 string=0x0000000000502718 "\t"
 *   insn=0x0000000000502718 string=0x000000000050271C "\t"
 *   insn=0x0000000000502720 string=0x0000000000502724 ""
 *   insn=0x0000000000502724 string=0x0000000000502728 "\t"
 *   insn=0x0000000000502728 string=0x000000000050272C "\t"
 *   insn=0x0000000000502748 string=0x000000000050274C "C"
 *   insn=0x0000000000502758 string=0x000000000059B3D7 "Ee"
 *   insn=0x0000000000502764 string=0x0000000000502768 "."
 *   insn=0x0000000000502770 string=0x0000000000502774 "h"
 *   insn=0x0000000000502774 string=0x0000000000502778 "\t"
 *   insn=0x0000000000502778 string=0x000000000050277C "?"
 *   insn=0x000000000050277C string=0x0000000000502780 "I"
 *   insn=0x0000000000502780 string=0x0000000000502784 "_"
 *   insn=0x0000000000502780 string=0x00000000005027E8 "`"
 *   insn=0x0000000000502784 string=0x0000000000502788 "I"
 *   insn=0x0000000000502798 string=0x000000000050279C "4"
 *   insn=0x00000000005027AC string=0x00000000005027B0 "!"
 *   insn=0x00000000005027D0 string=0x00000000005027D4 "V"
 *   insn=0x00000000005027DC string=0x00000000005027F0 "a"
 *   insn=0x00000000005027E4 string=0x00000000005027FC "h"
 *   insn=0x00000000005027E8 string=0x00000000005027EC ""
 *   insn=0x00000000005027EC string=0x000000000050280C "i"
 *   insn=0x00000000005027F4 string=0x00000000005027F8 "_"
 *   insn=0x00000000005027FC string=0x0000000000502800 "`"
 *   insn=0x0000000000502800 string=0x0000000000502804 "v\n"
 *   insn=0x0000000000502804 string=0x0000000000502808 "\t"
 *   insn=0x0000000000502814 string=0x0000000000502818 ""
 *   insn=0x0000000000502818 string=0x000000000050281C "\t"
 *   insn=0x000000000050281C string=0x0000000000502820 "\t"
 *   insn=0x0000000000502824 string=0x0000000000502828 ""
 *   insn=0x0000000000502828 string=0x000000000050282C "\t"
 *   insn=0x000000000050282C string=0x0000000000502830 "\t"
 *   insn=0x0000000000502854 string=0x0000000000502858 "(!"
 *   insn=0x000000000050285C string=0x0000000000502864 ""
 *   insn=0x000000000050286C string=0x0000000000502870 "h"
 *   insn=0x0000000000502870 string=0x0000000000502874 "\t"
 *   insn=0x0000000000502874 string=0x0000000000502878 "?"
 *   insn=0x0000000000502878 string=0x000000000050287C "I"
 *   insn=0x000000000050287C string=0x0000000000502880 "_"
 *   insn=0x000000000050287C string=0x00000000005028E4 "`"
 *   insn=0x0000000000502880 string=0x0000000000502884 "I"
 *   insn=0x00000000005028A8 string=0x00000000005028AC "!"
 *   insn=0x00000000005028CC string=0x00000000005028D0 "V"
 *   insn=0x00000000005028D8 string=0x00000000005028DC "A"
 *   insn=0x00000000005028D8 string=0x00000000005028EC "a"
 *   insn=0x00000000005028E0 string=0x00000000005028F8 "h"
 *   insn=0x00000000005028E4 string=0x00000000005028E8 ""
 *   insn=0x00000000005028E8 string=0x0000000000502908 "i"
 *   insn=0x00000000005028F0 string=0x00000000005028F4 " "
 *   insn=0x00000000005028F8 string=0x00000000005028FC "`"
 *   insn=0x00000000005028FC string=0x0000000000502900 "v\n"
 *   insn=0x0000000000502900 string=0x0000000000502904 "\t"
 *   insn=0x0000000000502910 string=0x0000000000502914 ""
 *   insn=0x0000000000502914 string=0x0000000000502918 "\t"
 *   insn=0x0000000000502918 string=0x000000000050291C "\t"
 *   insn=0x0000000000502920 string=0x0000000000502924 ""
 *   insn=0x0000000000502920 string=0x0000000000502938 "F"
 *   insn=0x0000000000502924 string=0x0000000000502928 "\t"
 *   insn=0x0000000000502928 string=0x000000000050292C "\t"
 *   insn=0x0000000000502948 string=0x00000000001FC7A0 "0'"
 *   insn=0x0000000000502954 string=0x0000000000502958 "h"
 *   insn=0x0000000000502958 string=0x000000000050295C "b"
 *   insn=0x000000000050295C string=0x0000000000502960 "\t"
 *   insn=0x0000000000502960 string=0x0000000000502964 "?"
 *   insn=0x000000000050296C string=0x0000000000502970 "@"
 *   insn=0x0000000000502970 string=0x0000000000502974 "@"
 *   insn=0x0000000000502974 string=0x0000000000502A7C "J"
 *   insn=0x0000000000502984 string=0x0000000000502988 "\n"
 *   insn=0x0000000000502988 string=0x000000000050298C "_"
 *   insn=0x000000000050298C string=0x0000000000502990 "\t"
 *   insn=0x00000000005029D0 string=0x00000000005029D4 "X"
 *   insn=0x00000000005029E8 string=0x00000000005029EC ""
 *   insn=0x00000000005029EC string=0x0000000000502A0C "i"
 *   insn=0x00000000005029FC string=0x0000000000502A00 "x"
 *   insn=0x0000000000502A00 string=0x0000000000502A04 "h"
 *   insn=0x0000000000502A04 string=0x0000000000502A08 "\t"
 *   insn=0x0000000000502A14 string=0x0000000000502A18 ""
 *   insn=0x0000000000502A18 string=0x0000000000502A1C "\t"
 *   insn=0x0000000000502A1C string=0x0000000000502A20 "\t"
 *   insn=0x0000000000502A24 string=0x0000000000502A28 ""
 *   insn=0x0000000000502A28 string=0x0000000000502A2C "\t"
 *   insn=0x0000000000502A2C string=0x0000000000502A30 "\t"
 *   insn=0x0000000000502A48 string=0x0000000000502A4C "U"
 *   insn=0x0000000000502A58 string=0x0000000000502A5C "h"
 *   insn=0x0000000000502A5C string=0x0000000000502A60 "b"
 *   insn=0x0000000000502A60 string=0x0000000000502A64 "\t"
 *   insn=0x0000000000502A64 string=0x0000000000502A68 "?"
 *   insn=0x0000000000502A7C string=0x0000000000502A80 "_"
 *   insn=0x0000000000502A80 string=0x0000000000502A84 "I"
 *   insn=0x0000000000502A94 string=0x0000000000502A98 "u"
 *   insn=0x0000000000502AA8 string=0x0000000000502AAC "!"
 *   insn=0x0000000000502AB4 string=0x0000000000502AB8 "G"
 *   insn=0x0000000000502AC0 string=0x0000000000502AC4 "T"
 *   insn=0x0000000000502ACC string=0x0000000000502AD0 "U"
 *   insn=0x0000000000502AE4 string=0x0000000000502AE8 ""
 *   insn=0x0000000000502AE8 string=0x0000000000502B08 "i"
 *   insn=0x0000000000502AF8 string=0x0000000000502AFC "u"
 *   insn=0x0000000000502AFC string=0x0000000000502B00 "h"
 *   insn=0x0000000000502B00 string=0x0000000000502B04 "\t"
 *   insn=0x0000000000502B1C string=0x0000000000502B20 "_A"
 *   insn=0x0000000000502B24 string=0x0000000000502B28 "#"
 *   insn=0x0000000000502B28 string=0x0000000000502CAC "\n"
 *   insn=0x0000000000502B30 string=0x0000000000502B34 "K"
 *   insn=0x0000000000502B38 string=0x0000000000502B3C "I"
 *   insn=0x0000000000502B48 string=0x0000000000502B4C "/"
 *   insn=0x0000000000502B50 string=0x0000000000502B54 "N<"
 *   insn=0x0000000000502B54 string=0x0000000000502B58 "n"
 *   insn=0x0000000000502B58 string=0x0000000000502C24 "N<"
 *   insn=0x0000000000502B5C string=0x0000000000502B60 "N<"
 *   insn=0x0000000000502B60 string=0x0000000000502B64 "N"
 *   insn=0x0000000000502B64 string=0x0000000000502C2C "N<"
 *   insn=0x0000000000502B68 string=0x0000000000502B6C "N<"
 *   insn=0x0000000000502B6C string=0x0000000000502B70 "."
 *   insn=0x0000000000502B70 string=0x0000000000502C34 "N<\t"
 *   insn=0x0000000000502B74 string=0x0000000000502B78 "N<\t"
 *   insn=0x0000000000502B7C string=0x0000000000502C3C "N<"
 *   insn=0x0000000000502B80 string=0x0000000000502B84 "N<"
 *   insn=0x0000000000502B88 string=0x0000000000502C44 "N<"
 *   insn=0x0000000000502B8C string=0x0000000000502B90 "N<"
 *   insn=0x0000000000502B94 string=0x0000000000502C4C "N<"
 *   insn=0x0000000000502B98 string=0x0000000000502B9C "N<"
 *   insn=0x0000000000502BA0 string=0x0000000000502C54 "N<"
 *   insn=0x0000000000502BA4 string=0x0000000000502BA8 "N<"
 *   insn=0x0000000000502BAC string=0x0000000000502C5C "N<"
 *   insn=0x0000000000502BB0 string=0x0000000000502BB4 "N<"
 *   insn=0x0000000000502BB4 string=0x0000000000502BB8 "n"
 *   insn=0x0000000000502BB8 string=0x0000000000502C64 "N<"
 *   insn=0x0000000000502BBC string=0x0000000000502BC0 "N<"
 *   insn=0x0000000000502BC0 string=0x0000000000502BC4 "N"
 *   insn=0x0000000000502BC4 string=0x0000000000502C6C "N<"
 *   insn=0x0000000000502BC8 string=0x0000000000502BCC "N<"
 *   insn=0x0000000000502BCC string=0x0000000000502BD0 "."
 *   insn=0x0000000000502BD0 string=0x0000000000502C74 "N<"
 *   insn=0x0000000000502BD4 string=0x0000000000502BD8 "N<"
 *   insn=0x0000000000502BDC string=0x0000000000502C7C "N<"
 *   insn=0x0000000000502BE0 string=0x0000000000502BE4 "N<"
 *   insn=0x0000000000502BE8 string=0x0000000000502C84 "N<"
 *   insn=0x0000000000502BEC string=0x0000000000502BF0 "N<"
 *   insn=0x0000000000502BF4 string=0x0000000000502C8C "N<"
 *   insn=0x0000000000502BF8 string=0x0000000000502BFC "N<"
 *   insn=0x0000000000502C00 string=0x0000000000502C04 "%"
 *   insn=0x0000000000502C08 string=0x0000000000502C0C "B"
 *   insn=0x0000000000502C0C string=0x0000000000502C10 "B"
 *   insn=0x0000000000502C10 string=0x0000000000502C14 "N<"
 *   insn=0x0000000000502C18 string=0x0000000000502C1C "N<"
 *   insn=0x0000000000502C2C string=0x0000000000502C30 "."
 *   insn=0x0000000000502C34 string=0x0000000000502C38 "N"
 *   insn=0x0000000000502C3C string=0x0000000000502C40 "n"
 *   insn=0x0000000000502C6C string=0x0000000000502C70 "."
 *   insn=0x0000000000502C74 string=0x0000000000502C78 "N"
 *   insn=0x0000000000502C7C string=0x0000000000502C80 "n"
 *   insn=0x0000000000502C8C string=0x0000000000502C90 "N"
 *   insn=0x0000000000502C9C string=0x0000000000502CA0 "M"
 *   insn=0x0000000000502CA0 string=0x0000000000502CA4 "_"
 *   insn=0x0000000000502CAC string=0x0000000000502CB0 "K"
 *   insn=0x0000000000502CB0 string=0x0000000000502CB4 ")"
 *   insn=0x0000000000502CB8 string=0x0000000000502CBC "A"
 *   insn=0x0000000000502CBC string=0x0000000000502CC0 "H"
 *   insn=0x0000000000502CBC string=0x0000000000502CC4 "I"
 *   insn=0x0000000000502CD4 string=0x0000000000502CD8 "("
 *   insn=0x0000000000502CE0 string=0x0000000000502CE4 "!"
 *   insn=0x0000000000502CE4 string=0x0000000000502D08 "r"
 *   insn=0x0000000000502D08 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_502624(__int64 a1, double *a2)
{
  unsigned int v3; // w21
  __int64 *v4; // x19
  unsigned __int64 v5; // x2
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x0
  __int64 v9; // x24
  __int64 v10; // x0
  _QWORD *v11; // x0
  unsigned __int8 *v13; // x8
  __int64 *v14; // x19
  unsigned __int64 v15; // x2
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x0
  __int64 v19; // x22
  __int64 v20; // x0
  _QWORD *v21; // x0
  unsigned __int8 *v23; // x8
  __int64 *v24; // x19
  unsigned __int64 v25; // x2
  __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x0
  __int64 v29; // x22
  __int64 v30; // x0
  _QWORD *v31; // x0
  unsigned __int8 *v33; // x8
  int v34; // w0
  __int64 *v35; // x28
  __int64 v36; // x8
  __int64 *v37; // x27
  unsigned __int64 v38; // x2
  __int64 *v39; // x19
  __int64 v40; // x9
  bool v41; // w10
  __int64 v42; // x0
  __int64 v43; // x24
  __int64 v44; // x0
  _QWORD *v45; // x0
  unsigned __int8 *v47; // x8
  int v48; // w0
  __int64 v49; // x0
  __int64 v50; // x21
  __int64 v51; // x0
  __int64 v52; // x8
  const char *v53; // x0
  unsigned __int64 v54; // x10
  char v55; // w8
  unsigned __int64 v56; // x9
  char *v57; // x12
  int8x16_t v58; // q1
  unsigned __int64 v59; // x13
  int8x16_t v60; // q2
  const char *v61; // x10
  int v62; // w11
  char v65[80]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v66; // [xsp+58h] [xbp-58h]

  v66 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_DWORD *)a1;
  do
  {
    v4 = *(__int64 **)(a1 + 72);
    v6 = v4[1];
    v5 = v4[2];
    v7 = v6 + 1;
    if ( v6 + 1 <= v5 )
    {
      v10 = *v4;
    }
    else
    {
      if ( v5 > 0x7FFFFFFFFFFFFFFDLL )
      {
        sub_4EF46C(v65, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
        sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v65, *(_DWORD *)(a1 + 4), "lexical element too long");
        sub_4EB814(*(_QWORD *)(a1 + 56), 3);
      }
      v8 = *(_QWORD *)(a1 + 56);
      v9 = 2 * v5;
      if ( 2 * v5 == -2 )
        sub_4EEDE0(v8);
      v10 = sub_4EED74(v8, *v4, v5, 2 * v5);
      v6 = v4[1];
      *v4 = v10;
      v4[2] = v9;
      v7 = v6 + 1;
    }
    v4[1] = v7;
    *(_BYTE *)(v10 + v6) = v3;
    v11 = *(_QWORD **)(a1 + 64);
    if ( (*v11)-- )
    {
      v13 = (unsigned __int8 *)v11[1];
      v11[1] = v13 + 1;
      v3 = *v13;
    }
    else
    {
      v3 = sub_4F8650((__int64)v11);
    }
    *(_DWORD *)a1 = v3;
  }
  while ( v3 - 48 < 0xA || v3 == 46 );
  if ( memchr("Ee", v3, 3u) )
  {
    v14 = *(__int64 **)(a1 + 72);
    v16 = v14[1];
    v15 = v14[2];
    v17 = v16 + 1;
    if ( v16 + 1 <= v15 )
    {
      v20 = *v14;
    }
    else
    {
      if ( v15 > 0x7FFFFFFFFFFFFFFDLL )
      {
        sub_4EF46C(v65, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
        sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v65, *(_DWORD *)(a1 + 4), "lexical element too long");
        sub_4EB814(*(_QWORD *)(a1 + 56), 3);
      }
      v18 = *(_QWORD *)(a1 + 56);
      v19 = 2 * v15;
      if ( 2 * v15 == -2 )
        sub_4EEDE0(v18);
      v20 = sub_4EED74(v18, *v14, v15, 2 * v15);
      v16 = v14[1];
      *v14 = v20;
      v14[2] = v19;
      v17 = v16 + 1;
    }
    v14[1] = v17;
    *(_BYTE *)(v20 + v16) = v3;
    v21 = *(_QWORD **)(a1 + 64);
    if ( (*v21)-- )
    {
      v23 = (unsigned __int8 *)v21[1];
      v21[1] = v23 + 1;
      v3 = *v23;
    }
    else
    {
      v3 = sub_4F8650((__int64)v21);
    }
    *(_DWORD *)a1 = v3;
    if ( v3 <= 0x3F && ((1LL << v3) & 0x280000000001LL) != 0 )
    {
      v24 = *(__int64 **)(a1 + 72);
      v26 = v24[1];
      v25 = v24[2];
      v27 = v26 + 1;
      if ( v26 + 1 <= v25 )
      {
        v30 = *v24;
      }
      else
      {
        if ( v25 > 0x7FFFFFFFFFFFFFFDLL )
        {
          sub_4EF46C(v65, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
          sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v65, *(_DWORD *)(a1 + 4), "lexical element too long");
          sub_4EB814(*(_QWORD *)(a1 + 56), 3);
        }
        v28 = *(_QWORD *)(a1 + 56);
        v29 = 2 * v25;
        if ( 2 * v25 == -2 )
          sub_4EEDE0(v28);
        v30 = sub_4EED74(v28, *v24, v25, 2 * v25);
        v26 = v24[1];
        *v24 = v30;
        v24[2] = v29;
        v27 = v26 + 1;
      }
      v24[1] = v27;
      *(_BYTE *)(v30 + v26) = v3;
      v31 = *(_QWORD **)(a1 + 64);
      if ( (*v31)-- )
      {
        v33 = (unsigned __int8 *)v31[1];
        v31[1] = v33 + 1;
        v3 = *v33;
      }
      else
      {
        v3 = sub_4F8650((__int64)v31);
      }
      *(_DWORD *)a1 = v3;
    }
  }
  v34 = isalnum(v3);
  v35 = *(__int64 **)(a1 + 72);
  v37 = v35 + 1;
  v36 = v35[1];
  v39 = v35 + 2;
  v38 = v35[2];
  v40 = v36 + 1;
  v41 = v36 + 1 > v38;
  if ( v3 == 95 || v34 )
  {
    do
    {
      if ( v41 )
      {
        if ( v38 > 0x7FFFFFFFFFFFFFFDLL )
        {
          sub_4EF46C(v65, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
          sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v65, *(_DWORD *)(a1 + 4), "lexical element too long");
          sub_4EB814(*(_QWORD *)(a1 + 56), 3);
        }
        v42 = *(_QWORD *)(a1 + 56);
        v43 = 2 * v38;
        if ( 2 * v38 == -2 )
          sub_4EEDE0(v42);
        v44 = sub_4EED74(v42, *v35, v38, 2 * v38);
        *v35 = v44;
        *v39 = v43;
        v36 = *v37;
        v40 = *v37 + 1;
      }
      else
      {
        v44 = *v35;
      }
      *v37 = v40;
      *(_BYTE *)(v44 + v36) = v3;
      v45 = *(_QWORD **)(a1 + 64);
      if ( (*v45)-- )
      {
        v47 = (unsigned __int8 *)v45[1];
        v45[1] = v47 + 1;
        v3 = *v47;
      }
      else
      {
        v3 = sub_4F8650((__int64)v45);
      }
      *(_DWORD *)a1 = v3;
      v48 = isalnum(v3);
      v35 = *(__int64 **)(a1 + 72);
      v37 = v35 + 1;
      v36 = v35[1];
      v39 = v35 + 2;
      v38 = v35[2];
      v40 = v36 + 1;
      v41 = v36 + 1 > v38;
    }
    while ( v3 == 95 || v48 );
  }
  if ( v41 )
  {
    if ( v38 > 0x7FFFFFFFFFFFFFFDLL )
    {
      sub_4EF46C(v65, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
      sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v65, *(_DWORD *)(a1 + 4), "lexical element too long");
      sub_4EB814(*(_QWORD *)(a1 + 56), 3);
    }
    v49 = *(_QWORD *)(a1 + 56);
    v50 = 2 * v38;
    if ( 2 * v38 == -2 )
      sub_4EEDE0(v49);
    v51 = sub_4EED74(v49, *v35, v38, 2 * v38);
    *v35 = v51;
    *v39 = v50;
    v36 = *v37;
    v40 = *v37 + 1;
  }
  else
  {
    v51 = *v35;
  }
  *v37 = v40;
  *(_BYTE *)(v51 + v36) = 0;
  v52 = *(_QWORD *)(a1 + 72);
  v53 = *(const char **)v52;
  v54 = *(_QWORD *)(v52 + 8);
  if ( !v54 )
    return sub_4EEEFC(v53, a2);
  v55 = *(_BYTE *)(a1 + 88);
  v56 = v54;
  if ( v54 < 0x10 )
  {
    do
    {
LABEL_97:
      v61 = &v53[v56];
      v62 = (unsigned __int8)v53[--v56];
      if ( v62 == 46 )
        *((_BYTE *)v61 - 1) = v55;
    }
    while ( v56 );
    goto LABEL_100;
  }
  v56 = v54 - (v54 & 0xFFFFFFFFFFFFFFF0LL);
  v57 = (char *)&v53[v54 - 8];
  v58.n128_u64[0] = 0x2E2E2E2E2E2E2E2ELL;
  v58.n128_u64[1] = 0x2E2E2E2E2E2E2E2ELL;
  v59 = v54 & 0xFFFFFFFFFFFFFFF0LL;
  do
  {
    v60 = vceqq_s8(vqtbl1q_s8(*(int8x16_t *)(v57 - 8), (int8x16_t)xmmword_59B280), v58);
    if ( (v60.n128_u8[0] & 1) != 0 )
    {
      v57[7] = v55;
      if ( (v60.n128_u8[1] & 1) != 0 )
        goto LABEL_63;
    }
    else if ( (v60.n128_u8[1] & 1) != 0 )
    {
LABEL_63:
      v57[6] = v55;
      if ( (v60.n128_u8[2] & 1) != 0 )
        goto LABEL_64;
      goto LABEL_81;
    }
    if ( (v60.n128_u8[2] & 1) != 0 )
    {
LABEL_64:
      v57[5] = v55;
      if ( (v60.n128_u8[3] & 1) != 0 )
        goto LABEL_65;
      goto LABEL_82;
    }
LABEL_81:
    if ( (v60.n128_u8[3] & 1) != 0 )
    {
LABEL_65:
      v57[4] = v55;
      if ( (v60.n128_u8[4] & 1) != 0 )
        goto LABEL_66;
      goto LABEL_83;
    }
LABEL_82:
    if ( (v60.n128_u8[4] & 1) != 0 )
    {
LABEL_66:
      v57[3] = v55;
      if ( (v60.n128_u8[5] & 1) != 0 )
        goto LABEL_67;
      goto LABEL_84;
    }
LABEL_83:
    if ( (v60.n128_u8[5] & 1) != 0 )
    {
LABEL_67:
      v57[2] = v55;
      if ( (v60.n128_u8[6] & 1) != 0 )
        goto LABEL_68;
      goto LABEL_85;
    }
LABEL_84:
    if ( (v60.n128_u8[6] & 1) != 0 )
    {
LABEL_68:
      v57[1] = v55;
      if ( (v60.n128_u8[7] & 1) != 0 )
        goto LABEL_69;
      goto LABEL_86;
    }
LABEL_85:
    if ( (v60.n128_u8[7] & 1) != 0 )
    {
LABEL_69:
      *v57 = v55;
      if ( (v60.n128_u8[8] & 1) != 0 )
        goto LABEL_70;
      goto LABEL_87;
    }
LABEL_86:
    if ( (v60.n128_u8[8] & 1) != 0 )
    {
LABEL_70:
      *(v57 - 1) = v55;
      if ( (v60.n128_u8[9] & 1) != 0 )
        goto LABEL_71;
      goto LABEL_88;
    }
LABEL_87:
    if ( (v60.n128_u8[9] & 1) != 0 )
    {
LABEL_71:
      *(v57 - 2) = v55;
      if ( (v60.n128_u8[10] & 1) != 0 )
        goto LABEL_72;
      goto LABEL_89;
    }
LABEL_88:
    if ( (v60.n128_u8[10] & 1) != 0 )
    {
LABEL_72:
      *(v57 - 3) = v55;
      if ( (v60.n128_u8[11] & 1) != 0 )
        goto LABEL_73;
      goto LABEL_90;
    }
LABEL_89:
    if ( (v60.n128_u8[11] & 1) != 0 )
    {
LABEL_73:
      *(v57 - 4) = v55;
      if ( (v60.n128_u8[12] & 1) != 0 )
        goto LABEL_74;
      goto LABEL_91;
    }
LABEL_90:
    if ( (v60.n128_u8[12] & 1) != 0 )
    {
LABEL_74:
      *(v57 - 5) = v55;
      if ( (v60.n128_u8[13] & 1) != 0 )
        goto LABEL_75;
      goto LABEL_92;
    }
LABEL_91:
    if ( (v60.n128_u8[13] & 1) != 0 )
    {
LABEL_75:
      *(v57 - 6) = v55;
      if ( (v60.n128_u8[14] & 1) == 0 )
        goto LABEL_93;
      goto LABEL_76;
    }
LABEL_92:
    if ( (v60.n128_u8[14] & 1) == 0 )
    {
LABEL_93:
      if ( (v60.n128_u8[15] & 1) == 0 )
        goto LABEL_95;
LABEL_94:
      *(v57 - 8) = v55;
      goto LABEL_95;
    }
LABEL_76:
    *(v57 - 7) = v55;
    if ( (v60.n128_u8[15] & 1) != 0 )
      goto LABEL_94;
LABEL_95:
    v59 -= 16LL;
    v57 -= 16;
  }
  while ( v59 );
  if ( v54 != (v54 & 0xFFFFFFFFFFFFFFF0LL) )
    goto LABEL_97;
LABEL_100:
  v53 = **(const char ***)(a1 + 72);
  return sub_4EEEFC(v53, a2);
}

