/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F17E0
 * Mangled: sub_4F17E0
 * Demangled: sub_4F17E0
 *
 * Callers: 2
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F1154  sub_4F1154
 *
 * Callees: 17
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EE334  sub_4EE334
 *   0x00000000004EEC70  sub_4EEC70
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004EF720  sub_4EF720
 *   0x00000000004EF820  sub_4EF820
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F1098  sub_4F1098
 *   0x00000000004F21A8  sub_4F21A8
 *   0x00000000004FDB84  sub_4FDB84
 *   0x00000000004FDC7C  sub_4FDC7C
 *   0x00000000004FE088  sub_4FE088
 *   0x000000000050072C  sub_50072C
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500968  sub_500968
 *   0x0000000000500970  sub_500970
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 102
 *   insn=0x00000000004F17FC string=0x00000000004F1800 "H"
 *   insn=0x00000000004F1804 string=0x00000000004F1808 ""
 *   insn=0x00000000004F1848 string=0x00000000004F184C "A"
 *   insn=0x00000000004F184C string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004F1850 string=0x00000000004F1854 "!"
 *   insn=0x00000000004F1864 string=0x00000000004F1868 "@<"
 *   insn=0x00000000004F1874 string=0x00000000004F1878 "A"
 *   insn=0x00000000004F1878 string=0x000000000059A0B7 "self"
 *   insn=0x00000000004F1884 string=0x00000000004F1888 ":<"
 *   insn=0x00000000004F1894 string=0x00000000004F1898 "D"
 *   insn=0x00000000004F189C string=0x00000000004F18A0 "v"
 *   insn=0x00000000004F18AC string=0x00000000004F18B0 ""
 *   insn=0x00000000004F18BC string=0x00000000004F18C0 ")"
 *   insn=0x00000000004F18C0 string=0x00000000004F18C4 ""
 *   insn=0x00000000004F18C4 string=0x00000000004F18C8 "\n\t"
 *   insn=0x00000000004F18D0 string=0x00000000004F18D4 "v"
 *   insn=0x00000000004F18E8 string=0x00000000004F18F8 "X"
 *   insn=0x00000000004F18F0 string=0x00000000004F18F4 "4"
 *   insn=0x00000000004F18F4 string=0x00000000004F19C4 "k"
 *   insn=0x00000000004F18F8 string=0x000000000059A0D9 "<name> or '...' expected"
 *   insn=0x00000000004F1910 string=0x00000000004F1914 "X<"
 *   insn=0x00000000004F191C string=0x00000000004F1920 " "
 *   insn=0x00000000004F192C string=0x00000000004F1988 ";<"
 *   insn=0x00000000004F1930 string=0x00000000004F1934 "<"
 *   insn=0x00000000004F1940 string=0x00000000004F1980 ""
 *   insn=0x00000000004F1948 string=0x00000000004F194C "J<"
 *   insn=0x00000000004F1988 string=0x00000000004F198C "A"
 *   insn=0x00000000004F198C string=0x000000000059A0D5 "arg"
 *   insn=0x00000000004F19C4 string=0x00000000004F19C8 "i)A9"
 *   insn=0x00000000004F19CC string=0x00000000004F19D0 "l)"
 *   insn=0x00000000004F19D4 string=0x00000000004F19D8 "j"
 *   insn=0x00000000004F19D8 string=0x00000000004F19DC "i1@"
 *   insn=0x00000000004F19E4 string=0x00000000004F19E8 "J"
 *   insn=0x00000000004F19F8 string=0x00000000004F19FC "C"
 *   insn=0x00000000004F1A08 string=0x00000000004F1A0C "-"
 *   insn=0x00000000004F1A14 string=0x00000000004F1A18 ""
 *   insn=0x00000000004F1A18 string=0x00000000004F1A1C "p"
 *   insn=0x00000000004F1A28 string=0x00000000004F1A2C "Q"
 *   insn=0x00000000004F1A2C string=0x00000000004F1A30 "R"
 *   insn=0x00000000004F1A30 string=0x00000000004F1A34 ")\n"
 *   insn=0x00000000004F1A34 string=0x00000000004F1A38 "I\n"
 *   insn=0x00000000004F1A38 string=0x00000000004F1A3C "!"
 *   insn=0x00000000004F1A3C string=0x00000000004F1A40 "n"
 *   insn=0x00000000004F1A50 string=0x00000000004F1A54 "k"
 *   insn=0x00000000004F1A54 string=0x00000000004F1A58 "l%@x"
 *   insn=0x00000000004F1A5C string=0x00000000004F1A60 "L"
 *   insn=0x00000000004F1A70 string=0x00000000004F1A74 "("
 *   insn=0x00000000004F1A8C string=0x00000000004F1A90 "!"
 *   insn=0x00000000004F1A94 string=0x00000000004F1A98 "%;"
 *   insn=0x00000000004F1A98 string=0x00000000004F1A9C "A"
 *   insn=0x00000000004F1AA0 string=0x00000000004F1AA4 "!"
 *   insn=0x00000000004F1AA8 string=0x00000000004F1AAC "J"
 *   insn=0x00000000004F1AC4 string=0x00000000004F1AC8 "\t"
 *   insn=0x00000000004F1AC8 string=0x00000000004F1ACC ")"
 *   insn=0x00000000004F1ACC string=0x00000000004F1AD0 "*="
 *   insn=0x00000000004F1AD0 string=0x00000000004F1AD4 "_%"
 *   insn=0x00000000004F1AD4 string=0x00000000004F1AD8 "\t"
 *   insn=0x00000000004F1ADC string=0x00000000004F1AE0 "A"
 *   insn=0x00000000004F1AE0 string=0x000000000059A00A "chunk has too many syntax levels"
 *   insn=0x00000000004F1AEC string=0x00000000004F1AF0 ",;"
 *   insn=0x00000000004F1AF8 string=0x00000000004F1AFC "8"
 *   insn=0x00000000004F1B00 string=0x00000000004F1B04 ""
 *   insn=0x00000000004F1B2C string=0x00000000004F1B30 "a"
 *   insn=0x00000000004F1B30 string=0x00000000004F1B3C "h"
 *   insn=0x00000000004F1B3C string=0x00000000004F1B40 "\t)A9\t="
 *   insn=0x00000000004F1B40 string=0x00000000004F1B44 "\t="
 *   insn=0x00000000004F1B50 string=0x00000000004F1B54 ""!"
 *   insn=0x00000000004F1B58 string=0x00000000004F1B5C "\t"
 *   insn=0x00000000004F1B60 string=0x00000000004F1B64 ")"
 *   insn=0x00000000004F1B64 string=0x00000000004F1B68 "\t"
 *   insn=0x00000000004F1B70 string=0x00000000004F1B74 "(e"
 *   insn=0x00000000004F1B74 string=0x00000000004F1B78 "H"
 *   insn=0x00000000004F1B7C string=0x00000000004F1B80 "("
 *   insn=0x00000000004F1B8C string=0x00000000004F1B90 "X"
 *   insn=0x00000000004F1BAC string=0x00000000004F1BE4 "\t"
 *   insn=0x00000000004F1BBC string=0x00000000004F1BC0 "E"
 *   insn=0x00000000004F1BC0 string=0x000000000059A0F2 "constant table overflow"
 *   insn=0x00000000004F1BCC string=0x00000000004F1BD0 "("
 *   insn=0x00000000004F1BDC string=0x00000000004F1BE0 "*"
 *   insn=0x00000000004F1BE4 string=0x00000000004F1BE8 "}@"
 *   insn=0x00000000004F1BEC string=0x00000000004F1BF0 "+"
 *   insn=0x00000000004F1BF4 string=0x00000000004F1BF8 "_y)"
 *   insn=0x00000000004F1BFC string=0x00000000004F1C00 "a"
 *   insn=0x00000000004F1C0C string=0x00000000004F1C10 "("
 *   insn=0x00000000004F1C14 string=0x00000000004F1C18 "jy)"
 *   insn=0x00000000004F1C1C string=0x00000000004F1C20 "I$@9?"
 *   insn=0x00000000004F1C20 string=0x00000000004F1C24 "?"
 *   insn=0x00000000004F1C50 string=0x00000000004F1C54 "\n0"
 *   insn=0x00000000004F1C54 string=0x00000000004FDC7C ""
 *   insn=0x00000000004F1C58 string=0x00000000004F1C5C "h"
 *   insn=0x00000000004F1C5C string=0x00000000004F1C60 "`\n"
 *   insn=0x00000000004F1C60 string=0x00000000004F1C64 "h"
 *   insn=0x00000000004F1C64 string=0x00000000004F1C68 "`\n"
 *   insn=0x00000000004F1C6C string=0x00000000004F1C70 ""
 *   insn=0x00000000004F1C70 string=0x00000000004F1C74 "H"
 *   insn=0x00000000004F1CA4 string=0x00000000004FDB84 ""
 *   insn=0x00000000004F1CA8 string=0x00000000004F1CAC "s"
 *   insn=0x00000000004F1CAC string=0x00000000004F1CB0 ""
 *   insn=0x00000000004F1CBC string=0x00000000004F1CC0 ""
 *   insn=0x00000000004F1CC8 string=0x00000000004F1CCC "!"
 *   insn=0x00000000004F1CCC string=0x00000000004F1CF0 "x"
 *   insn=0x00000000004F1CF0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F17E0(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD *v8; // x23
  const char *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 *v12; // x22
  __int64 v13; // x27
  __int64 v14; // x28
  int v15; // w10
  unsigned __int8 v16; // w8
  int v17; // w8
  char v18; // w8
  unsigned int v19; // w23
  __int64 v20; // x25
  char v21; // w8
  __int64 v22; // x0
  _DWORD *v23; // x11
  unsigned __int8 v24; // w12
  int v25; // w9
  __int64 v26; // x10
  unsigned __int64 v27; // x15
  unsigned __int64 v28; // x13
  unsigned __int64 v29; // x15
  unsigned __int16 *v30; // x16
  __int64 v31; // x17
  unsigned int v32; // t1
  int v33; // w14
  unsigned __int16 *v34; // x11
  unsigned int v35; // t1
  __int64 v36; // x1
  _QWORD *v37; // x22
  const char *v38; // x0
  __int64 v39; // x0
  __int64 v40; // x8
  unsigned int v41; // w10
  unsigned int v42; // w8
  int v43; // w22
  _DWORD *v44; // x21
  __int64 v45; // x22
  int v46; // w24
  __int64 *v47; // x23
  __int64 v48; // x0
  int v49; // w8
  __int64 v50; // x9
  bool v51; // zf
  __int64 v52; // x9
  __int64 v53; // x10
  __int64 v54; // x11
  int v55; // w8
  __int64 result; // x0
  unsigned __int64 v57; // x19
  _BYTE *v58; // x20
  int v59; // w8
  __int64 v60; // x1
  __int64 v61[9]; // [xsp+10h] [xbp-2B0h] BYREF
  _BYTE v62[532]; // [xsp+5Ch] [xbp-264h] BYREF

  *(_QWORD *)&v62[524] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_4EF720((_QWORD *)a1, (__int64)v61);
  *(_DWORD *)(v61[0] + 96) = a4;
  if ( *(_DWORD *)(a1 + 16) != 40 )
  {
    v8 = *(_QWORD **)(a1 + 56);
    v9 = (const char *)sub_50072C(a1, 40);
    v10 = sub_4EF3D4(v8, "'%s' expected", v9);
    sub_500968(a1, v10);
  }
  sub_500A74(a1);
  if ( a3 )
  {
    v11 = sub_500970(a1, "self", 4);
    sub_4F21A8(a1, v11, 0);
    v13 = a1 + 48;
    v12 = *(__int64 **)(a1 + 48);
    v14 = *v12;
    v15 = *((_DWORD *)v12 + 12);
    v16 = *((_BYTE *)v12 + 74) + 1;
    *((_BYTE *)v12 + 74) = v16;
    *(_DWORD *)(*(_QWORD *)(v14 + 48) + 16LL * *((unsigned __int16 *)v12 + v16 + 97) + 8) = v15;
  }
  else
  {
    v13 = a1 + 48;
    v12 = *(__int64 **)(a1 + 48);
    v14 = *v12;
  }
  *(_BYTE *)(v14 + 114) = 0;
  v17 = *(_DWORD *)(a1 + 16);
  if ( v17 == 41 )
  {
    v18 = 0;
    v19 = 0;
  }
  else
  {
    v19 = 0;
    if ( v17 == 285 )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(a1 + 24);
        sub_500A74(a1);
        sub_4F21A8(a1, v20, v19++);
        v21 = *(_BYTE *)(v14 + 114);
        if ( v21 )
          break;
        if ( *(_DWORD *)(a1 + 16) != 44 )
        {
          v21 = 0;
          break;
        }
        sub_500A74(a1);
        v17 = *(_DWORD *)(a1 + 16);
        if ( v17 != 285 )
          goto LABEL_11;
      }
      v18 = v21 & 1;
    }
    else
    {
LABEL_11:
      if ( v17 != 279 )
        sub_500968(a1, "<name> or '...' expected");
      sub_500A74(a1);
      v22 = sub_500970(a1, "arg", 3);
      sub_4F21A8(a1, v22, v19);
      *(_BYTE *)(v14 + 114) = 7;
      v18 = 1;
      ++v19;
    }
  }
  v23 = *(_DWORD **)v13;
  v24 = v19 + *(_BYTE *)(*(_QWORD *)v13 + 74LL);
  *(_BYTE *)(*(_QWORD *)v13 + 74LL) = v24;
  if ( v19 )
  {
    v25 = v23[12];
    v26 = *(_QWORD *)(*(_QWORD *)v23 + 48LL);
    v27 = v19 - 1 + 1LL;
    v28 = (int)v19;
    if ( v27 < 2 )
      goto LABEL_23;
    v29 = v27 - ((((_BYTE)v19 - 1) & 1) == 0);
    v28 = (int)v19 - v29;
    v30 = (unsigned __int16 *)((char *)v23 + 2LL * v24 + 198 - 2LL * (int)v19);
    do
    {
      v31 = *(v30 - 1);
      v32 = *v30;
      v30 += 2;
      v29 -= 2LL;
      *(_DWORD *)(v26 + 16 * v31 + 8) = v25;
      *(_DWORD *)(v26 + 16LL * v32 + 8) = v25;
    }
    while ( v29 );
    if ( (((_BYTE)v19 - 1) & 1) == 0 )
    {
LABEL_23:
      v33 = -(int)v28;
      v34 = (unsigned __int16 *)((char *)v23 + 2LL * v24 + 196 - 2 * v28);
      do
      {
        v35 = *v34++;
        ++v33;
        *(_DWORD *)(v26 + 16LL * v35 + 8) = v25;
      }
      while ( v33 );
    }
  }
  v36 = *((unsigned __int8 *)v12 + 74);
  *(_BYTE *)(v14 + 113) = v36 - v18;
  sub_4FE088(v12, v36);
  if ( *(_DWORD *)(a1 + 16) != 41 )
  {
    v37 = *(_QWORD **)(a1 + 56);
    v38 = (const char *)sub_50072C(a1, 41);
    v39 = sub_4EF3D4(v37, "'%s' expected", v38);
    sub_500968(a1, v39);
  }
  sub_500A74(a1);
  v40 = *(_QWORD *)(a1 + 56);
  v41 = (unsigned __int16)++*(_WORD *)(v40 + 96);
  if ( v41 >= 0xC9 )
    sub_5007A0(a1, "chunk has too many syntax levels", 0);
  do
  {
    v42 = *(_DWORD *)(a1 + 16) - 260;
    if ( v42 <= 0x1B && ((1 << v42) & 0x8010007) != 0 )
      break;
    v43 = sub_4EFACC(a1);
    if ( *(_DWORD *)(a1 + 16) == 59 )
      sub_500A74(a1);
    *(_DWORD *)(*(_QWORD *)v13 + 60LL) = *(unsigned __int8 *)(*(_QWORD *)v13 + 74LL);
  }
  while ( !v43 );
  --*(_WORD *)(*(_QWORD *)(a1 + 56) + 96LL);
  *(_DWORD *)(v61[0] + 100) = *(_DWORD *)(a1 + 4);
  sub_4F1098(a1, 262, 265, a4);
  sub_4EF820(a1);
  v44 = *(_DWORD **)(a1 + 48);
  v45 = *(_QWORD *)v44;
  v46 = *(_DWORD *)(*(_QWORD *)v44 + 88LL);
  if ( v44[17] >= v46 )
  {
    v47 = (__int64 *)(v45 + 32);
    v48 = sub_4EEC70(
            *(_QWORD *)(a1 + 56),
            *(_QWORD *)(v45 + 32),
            (int *)(*(_QWORD *)v44 + 88LL),
            8u,
            0x3FFFF,
            "constant table overflow");
    v49 = *(_DWORD *)(v45 + 88);
    *(_QWORD *)(v45 + 32) = v48;
    if ( v46 < v49 )
    {
      v50 = v46;
      do
      {
        v51 = v49 == v50 + 1;
        *(_QWORD *)(*v47 + 8 * v50++) = 0;
      }
      while ( !v51 );
    }
  }
  else
  {
    v47 = (__int64 *)(v45 + 32);
  }
  v52 = (int)v44[17];
  v53 = v61[0];
  v54 = *v47;
  v55 = v52 + 1;
  v44[17] = v52 + 1;
  *(_QWORD *)(v54 + 8 * v52) = v53;
  if ( (*(_BYTE *)(v61[0] + 9) & 3) != 0 && (*(_BYTE *)(v45 + 9) & 4) != 0 )
  {
    sub_4EE334(*(_QWORD *)(a1 + 56), v45);
    v55 = v44[17];
  }
  result = sub_4FDC7C(v44, 36, 0, (unsigned int)(v55 - 1));
  *(_QWORD *)(a2 + 16) = -1;
  *(_DWORD *)a2 = 11;
  *(_DWORD *)(a2 + 8) = result;
  if ( *(_BYTE *)(v61[0] + 112) )
  {
    v57 = 0;
    v58 = v62;
    do
    {
      v59 = (unsigned __int8)*(v58 - 1);
      v58 += 2;
      if ( v59 == 6 )
        v60 = 0;
      else
        v60 = 4;
      result = sub_4FDB84(v44, v60);
      ++v57;
    }
    while ( v57 < *(unsigned __int8 *)(v61[0] + 112) );
  }
  return result;
}

