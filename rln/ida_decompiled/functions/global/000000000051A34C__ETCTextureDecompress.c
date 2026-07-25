/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051A34C
 * Mangled: _Z20ETCTextureDecompressPKvRKiS2_S0_S2_
 * Demangled: ETCTextureDecompress(void const*,int const&,int const&,void const*,int const&)
 *
 * Callers: 1
 *   0x00000000001FC7F0  ETCTextureDecompress(void const*,int const&,int const&,void const*,int const&)
 *
 * Callees: 0
 *
 * Referenced strings: 173
 *   insn=0x000000000051A364 string=0x000000000051A368 "H"
 *   insn=0x000000000051A370 string=0x000000000051A374 "M+"
 *   insn=0x000000000051A374 string=0x000000000051A378 "h"
 *   insn=0x000000000051A374 string=0x000000000051A8DC "+"
 *   insn=0x000000000051A378 string=0x000000000051A37C "+"
 *   insn=0x000000000051A37C string=0x000000000051A380 "-C"
 *   insn=0x000000000051A380 string=0x000000000051A384 "I"
 *   insn=0x000000000051A384 string=0x000000000051A388 ")YB"
 *   insn=0x000000000051A38C string=0x000000000051A390 ""
 *   insn=0x000000000051A394 string=0x000000000051A398 "m@"
 *   insn=0x000000000051A3A0 string=0x000000000051A3A4 "("
 *   insn=0x000000000051A3A4 string=0x000000000051A3A8 ""
 *   insn=0x000000000051A3B4 string=0x000000000051A3B8 "h}@"
 *   insn=0x000000000051A3BC string=0x000000000051A3C0 "hu"
 *   insn=0x000000000051A3C4 string=0x000000000051A3C8 "h"
 *   insn=0x000000000051A3CC string=0x000000000051A3D0 "h"
 *   insn=0x000000000051A3D0 string=0x000000000051A3D4 ""
 *   insn=0x000000000051A3D4 string=0x000000000051A3D8 "}"
 *   insn=0x000000000051A3D8 string=0x000000000051A3DC "u"
 *   insn=0x000000000051A3E8 string=0x000000000051A3EC "b}}"
 *   insn=0x000000000051A3EC string=0x000000000051A3F0 "\t"
 *   insn=0x000000000051A410 string=0x000000000051A414 "t"
 *   insn=0x000000000051A414 string=0x000000000051A418 "%"
 *   insn=0x000000000051A428 string=0x000000000051A42C "5"
 *   insn=0x000000000051A434 string=0x000000000051A438 "("
 *   insn=0x000000000051A438 string=0x000000000051A43C "?"
 *   insn=0x000000000051A43C string=0x000000000051A440 "*"
 *   insn=0x000000000051A444 string=0x000000000051A448 "+}H"
 *   insn=0x000000000051A444 string=0x000000000051A4A4 "X"
 *   insn=0x000000000051A448 string=0x000000000051A44C "L"
 *   insn=0x000000000051A44C string=0x000000000051A450 "0I"
 *   insn=0x000000000051A450 string=0x000000000051A454 "!"
 *   insn=0x000000000051A454 string=0x000000000051A458 "#\t"
 *   insn=0x000000000051A458 string=0x000000000051A45C "X"
 *   insn=0x000000000051A45C string=0x000000000051A460 " )S"
 *   insn=0x000000000051A464 string=0x000000000051A468 "z"
 *   insn=0x000000000051A468 string=0x000000000051A46C ",t"
 *   insn=0x000000000051A46C string=0x000000000051A470 "a"
 *   insn=0x000000000051A470 string=0x000000000051A474 "X"
 *   insn=0x000000000051A474 string=0x000000000051A478 "*t"
 *   insn=0x000000000051A478 string=0x000000000051A47C "z"
 *   insn=0x000000000051A480 string=0x000000000051A484 "9"
 *   insn=0x000000000051A488 string=0x000000000051A48C "k,L"
 *   insn=0x000000000051A48C string=0x000000000051A490 "L"
 *   insn=0x000000000051A490 string=0x000000000051A494 "9"
 *   insn=0x000000000051A498 string=0x000000000051A49C "\n"
 *   insn=0x000000000051A4A4 string=0x000000000051A4A8 "0}H"
 *   insn=0x000000000051A4A8 string=0x000000000051A4AC " }L"
 *   insn=0x000000000051A4AC string=0x000000000051A4B0 "!}D"
 *   insn=0x000000000051A4B0 string=0x000000000051A4B4 "9"
 *   insn=0x000000000051A4B8 string=0x000000000051A4BC "X"
 *   insn=0x000000000051A4C0 string=0x000000000051A4C4 "\n"
 *   insn=0x000000000051A4C4 string=0x000000000051A4C8 ","
 *   insn=0x000000000051A4C8 string=0x000000000051A4CC "9"
 *   insn=0x000000000051A4D0 string=0x000000000051A4D4 "\n"
 *   insn=0x000000000051A4D4 string=0x000000000051A4D8 ","
 *   insn=0x000000000051A4D8 string=0x000000000051A4DC "km"
 *   insn=0x000000000051A4E0 string=0x000000000051A4E4 ";}]"
 *   insn=0x000000000051A4E4 string=0x000000000051A4E8 "<qZ"
 *   insn=0x000000000051A4EC string=0x000000000051A4F0 "~"
 *   insn=0x000000000051A4F4 string=0x000000000051A4F8 "D"
 *   insn=0x000000000051A4F8 string=0x000000000051A4FC ""
 *   insn=0x000000000051A514 string=0x000000000051A518 "+"
 *   insn=0x000000000051A524 string=0x000000000051A528 "0"
 *   insn=0x000000000051A528 string=0x000000000051A52C "+"
 *   insn=0x000000000051A530 string=0x000000000051A534 "k"
 *   insn=0x000000000051A540 string=0x000000000051A544 "p"
 *   insn=0x000000000051A548 string=0x000000000051A54C "pyp"
 *   insn=0x000000000051A54C string=0x000000000051A550 ""
 *   insn=0x000000000051A558 string=0x000000000051A55C "`="
 *   insn=0x000000000051A568 string=0x000000000051A570 ""
 *   insn=0x000000000051A578 string=0x000000000051A57C "q]"
 *   insn=0x000000000051A590 string=0x000000000051A594 "1"
 *   insn=0x000000000051A59C string=0x000000000051A5A0 "0\n"
 *   insn=0x000000000051A5A0 string=0x000000000051A5A4 "Q"
 *   insn=0x000000000051A5B0 string=0x000000000051A5B4 "2"
 *   insn=0x000000000051A5B4 string=0x000000000051A5B8 "0"
 *   insn=0x000000000051A5B8 string=0x000000000051A5BC "R"
 *   insn=0x000000000051A5C0 string=0x000000000051A5C4 "R\n"
 *   insn=0x000000000051A5D0 string=0x000000000051A5D4 "R"
 *   insn=0x000000000051A5E4 string=0x000000000051A5E8 "+"
 *   insn=0x000000000051A5E8 string=0x000000000051A5EC "q"
 *   insn=0x000000000051A5EC string=0x000000000051A5F0 ""
 *   insn=0x000000000051A5F4 string=0x000000000051A5F8 "q"
 *   insn=0x000000000051A5FC string=0x000000000051A600 "q="
 *   insn=0x000000000051A60C string=0x000000000051A614 ""
 *   insn=0x000000000051A61C string=0x000000000051A620 "q]"
 *   insn=0x000000000051A63C string=0x000000000051A640 "0"
 *   insn=0x000000000051A644 string=0x000000000051A648 ""
 *   insn=0x000000000051A648 string=0x000000000051A64C ""
 *   insn=0x000000000051A64C string=0x000000000051A650 "k"
 *   insn=0x000000000051A654 string=0x000000000051A658 "k"
 *   insn=0x000000000051A658 string=0x000000000051A65C "c "
 *   insn=0x000000000051A660 string=0x000000000051A664 "!"
 *   insn=0x000000000051A664 string=0x000000000051A668 "J"
 *   insn=0x000000000051A668 string=0x000000000051A66C "?"
 *   insn=0x000000000051A66C string=0x000000000051A670 ")"
 *   insn=0x000000000051A680 string=0x000000000051A684 "("
 *   insn=0x000000000051A684 string=0x000000000051A688 ")0"
 *   insn=0x000000000051A690 string=0x000000000051A694 ""
 *   insn=0x000000000051A694 string=0x000000000051A698 "("
 *   insn=0x000000000051A69C string=0x000000000051A6A0 ")yh"
 *   insn=0x000000000051A6A0 string=0x000000000051A6A4 "("
 *   insn=0x000000000051A6AC string=0x000000000051A6B0 "\n="
 *   insn=0x000000000051A6BC string=0x000000000051A6C4 "+"
 *   insn=0x000000000051A6C8 string=0x000000000051A6CC "*0"
 *   insn=0x000000000051A6D0 string=0x000000000051A6D4 "p]"
 *   insn=0x000000000051A6E0 string=0x000000000051A6E8 ")"
 *   insn=0x000000000051A6E8 string=0x000000000051A6EC "0"
 *   insn=0x000000000051A6F0 string=0x000000000051A6F4 "?"
 *   insn=0x000000000051A6F4 string=0x000000000051A6F8 ")}"
 *   insn=0x000000000051A6FC string=0x000000000051A700 "J"
 *   insn=0x000000000051A700 string=0x000000000051A704 " "
 *   insn=0x000000000051A704 string=0x000000000051A708 "\n"
 *   insn=0x000000000051A70C string=0x000000000051A710 ")yj"
 *   insn=0x000000000051A710 string=0x000000000051A714 ""
 *   insn=0x000000000051A714 string=0x000000000051A718 ""
 *   insn=0x000000000051A718 string=0x000000000051A71C "\n"
 *   insn=0x000000000051A71C string=0x000000000051A720 "("
 *   insn=0x000000000051A724 string=0x000000000051A728 "j"
 *   insn=0x000000000051A72C string=0x000000000051A730 "\n="
 *   insn=0x000000000051A73C string=0x000000000051A744 "("
 *   insn=0x000000000051A74C string=0x000000000051A750 "]"
 *   insn=0x000000000051A75C string=0x000000000051A764 "(@"
 *   insn=0x000000000051A778 string=0x000000000051A77C ")"
 *   insn=0x000000000051A77C string=0x000000000051A780 "yp"
 *   insn=0x000000000051A780 string=0x000000000051A784 "?"
 *   insn=0x000000000051A784 string=0x000000000051A788 ")}"
 *   insn=0x000000000051A788 string=0x000000000051A78C ")"
 *   insn=0x000000000051A78C string=0x000000000051A790 "I"
 *   insn=0x000000000051A790 string=0x000000000051A794 ")"
 *   insn=0x000000000051A794 string=0x000000000051A798 "*"
 *   insn=0x000000000051A798 string=0x000000000051A79C "\t"
 *   insn=0x000000000051A79C string=0x000000000051A7A0 "?"
 *   insn=0x000000000051A7A0 string=0x000000000051A7A4 "j"
 *   insn=0x000000000051A7A8 string=0x000000000051A7AC "*="
 *   insn=0x000000000051A7AC string=0x000000000051A7B0 "?"
 *   insn=0x000000000051A7B8 string=0x000000000051A7C0 "\n"
 *   insn=0x000000000051A7C0 string=0x000000000051A7C4 "_"
 *   insn=0x000000000051A7C8 string=0x000000000051A7CC "K]"
 *   insn=0x000000000051A7CC string=0x000000000051A7D0 "_"
 *   insn=0x000000000051A7D8 string=0x000000000051A7E0 "0 "
 *   insn=0x000000000051A7E0 string=0x000000000051A7E4 "* "
 *   insn=0x000000000051A7F0 string=0x000000000051A7F4 "P"
 *   insn=0x000000000051A7F8 string=0x000000000051A7FC ""
 *   insn=0x000000000051A7FC string=0x000000000051A800 "Jyp"
 *   insn=0x000000000051A804 string=0x000000000051A808 "}"
 *   insn=0x000000000051A808 string=0x000000000051A80C ""
 *   insn=0x000000000051A80C string=0x000000000051A810 "("
 *   insn=0x000000000051A810 string=0x000000000051A814 ""
 *   insn=0x000000000051A814 string=0x000000000051A818 "\t"
 *   insn=0x000000000051A818 string=0x000000000051A81C "H"
 *   insn=0x000000000051A820 string=0x000000000051A824 "i"
 *   insn=0x000000000051A828 string=0x000000000051A82C "\t="
 *   insn=0x000000000051A838 string=0x000000000051A840 "I"
 *   insn=0x000000000051A840 string=0x000000000051A844 "?"
 *   insn=0x000000000051A848 string=0x000000000051A84C "+]"
 *   insn=0x000000000051A84C string=0x000000000051A850 "?"
 *   insn=0x000000000051A858 string=0x000000000051A860 "J"
 *   insn=0x000000000051A860 string=0x000000000051A864 "K}"
 *   insn=0x000000000051A864 string=0x000000000051A868 "_"
 *   insn=0x000000000051A868 string=0x000000000051A86C "j"
 *   insn=0x000000000051A86C string=0x000000000051A870 ""
 *   insn=0x000000000051A870 string=0x000000000051A874 ""
 *   insn=0x000000000051A874 string=0x000000000051A878 "!"
 *   insn=0x000000000051A878 string=0x000000000051A87C ""
 *   insn=0x000000000051A87C string=0x000000000051A880 "?@"
 *   insn=0x000000000051A880 string=0x000000000051A884 "h"
 *   insn=0x000000000051A884 string=0x000000000051A888 "s"
 *   insn=0x000000000051A8A4 string=0x000000000051A8A8 "K"
 *   insn=0x000000000051A8D0 string=0x000000000051A8D4 "k"
 *   insn=0x000000000051A8EC string=0x000000000051A8F0 "h}"
 *   insn=0x000000000051A900 string=0x000000000051A904 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall ETCTextureDecompress(char *a1, int *a2, int *a3, char *a4, const int *a5)
{
  int v5; // w11
  int v6; // w12
  int v7; // w16
  int v8; // w8
  __int64 v9; // x2
  __int64 v10; // x8
  __int64 v11; // x7
  char *v12; // x20
  char *v13; // x5
  char *v14; // x22
  char *v15; // x21
  unsigned __int64 v16; // x9
  unsigned __int64 v17; // x23
  __int64 v18; // x8
  int v19; // w24
  unsigned int v20; // w26
  unsigned __int8 v21; // w11
  int v22; // w25
  unsigned int v23; // w12
  unsigned int v24; // w10
  __int64 v25; // x27
  __int64 v26; // x28
  unsigned __int64 v27; // x29
  int v28; // w30
  int v29; // w4
  __int64 v30; // x1
  _QWORD *v31; // x9
  _QWORD *v32; // x10
  __int64 v33; // x8
  _QWORD *v34; // x19
  _QWORD *v35; // x3
  char v36; // w16
  char v37; // w11
  int v38; // w16
  int v39; // w11
  int v40; // w0
  int v41; // w11
  int v42; // w11
  int v43; // w16
  int v44; // w18
  bool v45; // cc
  unsigned __int64 v46; // x16
  int v47; // w17
  char v48; // w18
  char v49; // w16
  int v50; // w16
  __int64 v51; // x17
  int v52; // w11
  int v53; // w0
  int v54; // w11
  int v55; // w11
  int v56; // w16
  int v57; // w16
  _QWORD *v58; // x19
  __int64 i; // x1
  int v60; // w9
  int v61; // w8
  int v62; // w8
  int v63; // w11
  int v64; // w11
  int v65; // w9
  int v66; // w9
  int v67; // w0
  int v68; // w9
  __int64 v69; // x10
  int v70; // w8
  int v71; // w10
  int v72; // w8
  int v73; // w11
  int v74; // w9
  int v75; // w8
  int v76; // w9
  __int64 v77; // x10
  int v78; // w9
  int v79; // w9
  int v80; // w10
  int v81; // w11
  int v82; // w8
  int v83; // w10
  int v84; // w8
  __int64 v85; // x9
  int v86; // w8
  int v87; // w8
  int v88; // w9
  int v89; // w9
  int v90; // w10
  int v91; // w10
  __int64 v93; // [xsp+0h] [xbp-C0h]
  char *v94; // [xsp+8h] [xbp-B8h]
  char *v95; // [xsp+10h] [xbp-B0h]
  int v96; // [xsp+18h] [xbp-A8h]
  char *v97; // [xsp+20h] [xbp-A0h]
  int v98; // [xsp+2Ch] [xbp-94h]
  int v99; // [xsp+30h] [xbp-90h]
  int v100; // [xsp+34h] [xbp-8Ch]
  int v101; // [xsp+38h] [xbp-88h]
  char *v102; // [xsp+40h] [xbp-80h]
  __int64 v103; // [xsp+48h] [xbp-78h]
  __int64 v104; // [xsp+50h] [xbp-70h]
  __int64 v105; // [xsp+58h] [xbp-68h]

  v99 = *a3;
  if ( *a3 <= 0 )
  {
    v5 = *a2;
  }
  else
  {
    v5 = *a2;
    v95 = a4 + 16;
    v105 = (unsigned int)ETC_FLIP;
    v6 = 0;
    v7 = 0;
    v104 = (unsigned int)ETC_DIFF;
    v103 = *a2;
    v98 = 4 * *a2;
    v94 = &a4[16 * v103];
    if ( *a2 <= 4 )
      v8 = 4;
    else
      v8 = *a2;
    v9 = 8LL * v5;
    v93 = (((unsigned int)(v8 - 1) >> 1) & 0x7FFFFFFE) + 2;
    v96 = *a2;
    v97 = a4;
    do
    {
      if ( v5 >= 1 )
      {
        v10 = 8LL * v6;
        v11 = 0;
        v12 = &a4[v10];
        v13 = &v95[v10];
        v14 = a1;
        v100 = v7;
        v101 = v6;
        v102 = a1;
        v15 = &v94[v10];
        do
        {
          v16 = *(_QWORD *)v14;
          v17 = *((_QWORD *)v14 + 1);
          v18 = *(_QWORD *)v14 & v105;
          if ( (*(_QWORD *)v14 & v104) != 0 )
          {
            v19 = (*(_QWORD *)v14 >> 16) & 0xF8 | ((unsigned __int8)BYTE2(*(_QWORD *)v14) >> 5);
            v20 = ((unsigned int)v16 >> 8) & 0xF8 | (BYTE1(v16) >> 5);
            v21 = ((unsigned __int8)(((unsigned __int8)v16 >> 3) + ((int)((_DWORD)v16 << 29) >> 29)) >> 2)
                + 8 * (((unsigned __int8)v16 >> 3) + ((int)((_DWORD)v16 << 29) >> 29));
            v22 = v16 & 0xF8 | ((unsigned __int8)v16 >> 5);
            LOBYTE(v23) = ((unsigned __int8)((BYTE1(v16) >> 3) + ((int)((_DWORD)v16 << 21) >> 29)) >> 2)
                        + 8 * ((BYTE1(v16) >> 3) + ((int)((_DWORD)v16 << 21) >> 29));
            LOBYTE(v24) = ((unsigned __int8)(((unsigned __int8)BYTE2(*(_QWORD *)v14) >> 3)
                                           + ((int)((_DWORD)v16 << 13) >> 29)) >> 2)
                        + 8 * (((unsigned __int8)BYTE2(*(_QWORD *)v14) >> 3) + ((int)((_DWORD)v16 << 13) >> 29));
          }
          else
          {
            v19 = (*(_QWORD *)v14 >> 16) & 0xF0 | ((unsigned __int8)BYTE2(*(_QWORD *)v14) >> 4);
            v22 = v16 & 0xF0 | ((unsigned __int8)v16 >> 4);
            v20 = ((unsigned int)v16 >> 8) & 0xF0 | (BYTE1(v16) >> 4);
            v24 = ((unsigned int)v16 >> 12) & 0xF0 | ((unsigned __int8)((unsigned int)v16 >> 12) >> 4);
            v23 = ((unsigned int)v16 >> 4) & 0xF0 | ((unsigned __int8)((unsigned int)v16 >> 4) >> 4);
            v21 = v16 & 0xF | (16 * v16);
          }
          v14 += 16;
          v25 = (unsigned int)v16 >> 29;
          v26 = (v16 >> 26) & 7;
          v27 = 2 * v17;
          v28 = v21;
          v29 = (unsigned __int8)v24;
          if ( v18 )
          {
            v30 = 0;
            v31 = v15;
            v32 = v12;
            do
            {
              v33 = 0;
              v34 = v31;
              v35 = v32;
              do
              {
                if ( (unsigned __int64)(v30 + v33) < 8 )
                  v36 = 8;
                else
                  v36 = -8;
                if ( (unsigned __int64)(v30 + v33) >= 8 )
                  v37 = 8;
                else
                  v37 = 24;
                v38 = dword_59C0F0[4 * v25
                                 + ((v27 >> ((unsigned __int8)v30 + v36 + (unsigned __int8)v33)) & 2
                                  | (v17 >> ((unsigned __int8)v30 + v37 + (unsigned __int8)v33)) & 1)];
                v39 = v38 + v22;
                if ( v38 + v22 > 254 )
                {
                  v40 = 16711680;
                }
                else
                {
                  v40 = v39 << 16;
                  if ( v39 < 0 )
                    v40 = 0;
                }
                v41 = v38 + v20;
                if ( (int)(v38 + v20) > 254 )
                {
                  v42 = 65280;
                }
                else if ( v41 >= 0 )
                {
                  v42 = v41 << 8;
                }
                else
                {
                  v42 = 0;
                }
                v43 = v38 + v19;
                v44 = v43 & ~(v43 >> 31);
                v45 = v43 < 255;
                v46 = v30 + v33 + 2;
                if ( v45 )
                  v47 = v44;
                else
                  v47 = 255;
                if ( v46 < 8 )
                  v48 = 8;
                else
                  v48 = -8;
                if ( v46 >= 8 )
                  v49 = 8;
                else
                  v49 = 24;
                v50 = dword_59C0F0[4 * v26
                                 + ((v27 >> ((unsigned __int8)v30 + v48 + (unsigned __int8)v33 + 2)) & 2
                                  | (v17 >> ((unsigned __int8)v30 + v49 + (unsigned __int8)v33 + 2)) & 1)];
                v51 = (v40 + v47 + v42) | 0xFF000000;
                v52 = v50 + v28;
                *v35 = v51;
                if ( v50 + v28 > 254 )
                {
                  v53 = 16711680;
                }
                else if ( v52 >= 0 )
                {
                  v53 = v52 << 16;
                }
                else
                {
                  v53 = 0;
                }
                v54 = v50 + (unsigned __int8)v23;
                if ( v54 > 254 )
                {
                  v55 = 65280;
                }
                else if ( v54 >= 0 )
                {
                  v55 = v54 << 8;
                }
                else
                {
                  v55 = 0;
                }
                v56 = v50 + v29;
                if ( v56 >= 255 )
                  v57 = 255;
                else
                  v57 = v56 & ~(v56 >> 31);
                v33 += 4;
                *v34++ = (v53 + v57 + v55) | 0xFF000000;
                ++v35;
              }
              while ( v33 != 16 );
              ++v30;
              v32 = (_QWORD *)((char *)v32 + v9);
              v31 = (_QWORD *)((char *)v31 + v9);
            }
            while ( v30 != 2 );
          }
          else
          {
            v58 = v13;
            for ( i = 12; i != 16; ++i )
            {
              v60 = dword_59C0F0[4 * v25
                               + ((v27 >> ((unsigned __int8)i - 4)) & 2 | (v17 >> ((unsigned __int8)i + 12)) & 1)];
              v61 = v60 + v22;
              if ( v60 + v22 > 254 )
              {
                v62 = 16711680;
              }
              else if ( v61 >= 0 )
              {
                v62 = v61 << 16;
              }
              else
              {
                v62 = 0;
              }
              v63 = v60 + v20;
              if ( (int)(v60 + v20) > 254 )
              {
                v64 = 65280;
              }
              else if ( v63 >= 0 )
              {
                v64 = v63 << 8;
              }
              else
              {
                v64 = 0;
              }
              v65 = v60 + v19;
              v45 = v65 < 255;
              v66 = v65 & ~(v65 >> 31);
              if ( v45 )
                v67 = v66;
              else
                v67 = 255;
              v68 = dword_59C0F0[4 * v26
                               + ((v27 >> ((unsigned __int8)i - 12)) & 2 | (v17 >> ((unsigned __int8)i + 4)) & 1)];
              v69 = (v62 + v67 + v64) | 0xFF000000;
              v70 = v68 + v28;
              *(v58 - 2) = v69;
              if ( v68 + v28 > 254 )
              {
                v71 = 16711680;
              }
              else
              {
                v71 = v70 << 16;
                if ( v70 < 0 )
                  v71 = 0;
              }
              v72 = v68 + (unsigned __int8)v23;
              if ( v72 > 254 )
              {
                v73 = 65280;
              }
              else
              {
                v73 = v72 << 8;
                if ( v72 < 0 )
                  v73 = 0;
              }
              v74 = v68 + v29;
              v75 = dword_59C0F0[4 * v25 + ((v27 >> i) & 2 | (v17 >> ((unsigned __int8)i + 16)) & 1)];
              v45 = v74 < 255;
              v76 = v74 & ~(v74 >> 31);
              if ( !v45 )
                v76 = 255;
              v77 = (v71 + v76 + v73) | 0xFF000000;
              v78 = v75 + v22;
              *v58 = v77;
              if ( v75 + v22 >= 255 )
              {
                v79 = 16711680;
              }
              else if ( v78 >= 0 )
              {
                v79 = v78 << 16;
              }
              else
              {
                v79 = 0;
              }
              v80 = v75 + v20;
              if ( (int)(v75 + v20) > 254 )
              {
                v81 = 65280;
              }
              else
              {
                v81 = v80 << 8;
                if ( v80 < 0 )
                  v81 = 0;
              }
              v82 = v75 + v19;
              v83 = dword_59C0F0[4 * v26
                               + ((v27 >> ((unsigned __int8)i - 8)) & 2 | (v17 >> ((unsigned __int8)i + 8)) & 1)];
              v45 = v82 < 255;
              v84 = v82 & ~(v82 >> 31);
              if ( !v45 )
                v84 = 255;
              v85 = (v79 + v84 + v81) | 0xFF000000;
              v86 = v83 + v28;
              *(v58 - 1) = v85;
              if ( v83 + v28 > 254 )
              {
                v87 = 16711680;
              }
              else if ( v86 >= 0 )
              {
                v87 = v86 << 16;
              }
              else
              {
                v87 = 0;
              }
              v88 = v83 + (unsigned __int8)v23;
              if ( v88 > 254 )
              {
                v89 = 65280;
              }
              else if ( v88 >= 0 )
              {
                v89 = v88 << 8;
              }
              else
              {
                v89 = 0;
              }
              v90 = v83 + v29;
              if ( v90 >= 255 )
                v91 = 255;
              else
                v91 = v90 & ~(v90 >> 31);
              v58[1] = (v87 + v91 + v89) | 0xFF000000;
              v58 = (_QWORD *)((char *)v58 + v9);
            }
          }
          v11 += 4;
          v12 += 32;
          v15 += 32;
          v13 += 32;
        }
        while ( v11 < v103 );
        v6 = v101;
        v5 = v96;
        a4 = v97;
        v7 = v100;
        a1 = &v102[8 * v93];
      }
      v7 += 4;
      v6 += v98;
    }
    while ( v7 < v99 );
  }
  return (unsigned int)(v5 * v99 / 2);
}

