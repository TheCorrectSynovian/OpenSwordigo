/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551BB0
 * Mangled: sub_551BB0
 * Demangled: sub_551BB0
 *
 * Callers: 8
 *   0x0000000000551F08  sub_551F08
 *   0x0000000000551FC4  sub_551FC4
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x0000000000553A38  sub_553A38
 *   0x0000000000553F40  sub_553F40
 *   0x00000000005542C8  sub_5542C8
 *   0x0000000000554584  sub_554584
 *
 * Callees: 0
 *
 * Referenced strings: 77
 *   insn=0x0000000000551BB0 string=0x0000000000551BB4 ""
 *   insn=0x0000000000551BB4 string=0x0000000000551BB8 ""
 *   insn=0x0000000000551BB8 string=0x0000000000551BBC "c"
 *   insn=0x0000000000551BBC string=0x0000000000551BC0 "\n"
 *   insn=0x0000000000551BC4 string=0x0000000000551BC8 "\t"
 *   insn=0x0000000000551BC8 string=0x0000000000551BCC "_\t"
 *   insn=0x0000000000551BD0 string=0x0000000000551BD4 "?"
 *   insn=0x0000000000551BD4 string=0x0000000000551BD8 "m"
 *   insn=0x0000000000551BE0 string=0x0000000000551BE4 "b"
 *   insn=0x0000000000551BE4 string=0x0000000000551BE8 "k"
 *   insn=0x0000000000551BEC string=0x0000000000551BF0 "Hhk8\n"
 *   insn=0x0000000000551BF0 string=0x0000000000551BF4 "\n"
 *   insn=0x0000000000551BF4 string=0x0000000000551BF8 "\t"
 *   insn=0x0000000000551BF8 string=0x0000000000551BFC "_\t"
 *   insn=0x0000000000551C08 string=0x0000000000551C0C "@"
 *   insn=0x0000000000551C14 string=0x0000000000551C18 ""
 *   insn=0x0000000000551C18 string=0x0000000000551C1C "\t"
 *   insn=0x0000000000551C1C string=0x0000000000551C20 "?!"
 *   insn=0x0000000000551C20 string=0x0000000000551C24 ")"
 *   insn=0x0000000000551C28 string=0x0000000000551C2C "\n@"
 *   insn=0x0000000000551C40 string=0x0000000000551C44 "*"
 *   insn=0x0000000000551C44 string=0x0000000000551C48 ""
 *   insn=0x0000000000551C54 string=0x0000000000551C58 "c"
 *   insn=0x0000000000551C58 string=0x0000000000551C5C ""
 *   insn=0x0000000000551C5C string=0x0000000000551C60 "j"
 *   insn=0x0000000000551C64 string=0x0000000000551C68 ""
 *   insn=0x0000000000551C74 string=0x0000000000551C78 "?"
 *   insn=0x0000000000551C78 string=0x0000000000551C7C "C"
 *   insn=0x0000000000551C7C string=0x0000000000551C80 ""
 *   insn=0x0000000000551C8C string=0x0000000000551C90 "d"
 *   insn=0x0000000000551C9C string=0x0000000000551CA0 "j"
 *   insn=0x0000000000551CA0 string=0x0000000000551CA4 "d "
 *   insn=0x0000000000551CA4 string=0x0000000000551CA8 "\n"
 *   insn=0x0000000000551CAC string=0x0000000000551CB0 "`"
 *   insn=0x0000000000551CB0 string=0x0000000000551CB4 "c@"
 *   insn=0x0000000000551CD0 string=0x0000000000551CD4 "Chk8"
 *   insn=0x0000000000551D00 string=0x0000000000551D04 "`"
 *   insn=0x0000000000551D14 string=0x0000000000551D18 ""
 *   insn=0x0000000000551D18 string=0x0000000000551D1C "\t"
 *   insn=0x0000000000551D20 string=0x0000000000551D24 ""
 *   insn=0x0000000000551D28 string=0x0000000000551D2C "@"
 *   insn=0x0000000000551D34 string=0x0000000000551D38 "h"
 *   insn=0x0000000000551D44 string=0x0000000000551D48 ""
 *   insn=0x0000000000551D4C string=0x0000000000551D50 "`"
 *   insn=0x0000000000551D50 string=0x0000000000551D7C "c"
 *   insn=0x0000000000551D60 string=0x0000000000551D64 "\t"
 *   insn=0x0000000000551D68 string=0x0000000000551D6C "I"
 *   insn=0x0000000000551D6C string=0x0000000000551D70 "`"
 *   insn=0x0000000000551D74 string=0x0000000000551D78 "@\t"
 *   insn=0x0000000000551D7C string=0x0000000000551D80 "c"
 *   insn=0x0000000000551D80 string=0x0000000000551D84 "c"
 *   insn=0x0000000000551D84 string=0x0000000000551D88 "c"
 *   insn=0x0000000000551D98 string=0x0000000000551D9C " "
 *   insn=0x0000000000551DA4 string=0x0000000000551DA8 "Chk8"
 *   insn=0x0000000000551DBC string=0x0000000000551DC0 "Chf8"
 *   insn=0x0000000000551DEC string=0x0000000000551DF0 "`"
 *   insn=0x0000000000551E00 string=0x0000000000551E04 ""
 *   insn=0x0000000000551E04 string=0x0000000000551E08 ""
 *   insn=0x0000000000551E08 string=0x0000000000551E0C "@"
 *   insn=0x0000000000551E14 string=0x0000000000551E18 " "
 *   insn=0x0000000000551E20 string=0x0000000000551E24 "g"
 *   insn=0x0000000000551E38 string=0x0000000000551E3C "`"
 *   insn=0x0000000000551E3C string=0x0000000000551E68 "c"
 *   insn=0x0000000000551E4C string=0x0000000000551E50 ""
 *   insn=0x0000000000551E54 string=0x0000000000551E58 "("
 *   insn=0x0000000000551E58 string=0x0000000000551E5C "`"
 *   insn=0x0000000000551E60 string=0x0000000000551E64 " \t"
 *   insn=0x0000000000551E68 string=0x0000000000551E6C "c"
 *   insn=0x0000000000551E6C string=0x0000000000551E70 "c"
 *   insn=0x0000000000551E70 string=0x0000000000551E74 "c"
 *   insn=0x0000000000551E90 string=0x0000000000551E94 "L"
 *   insn=0x0000000000551EA4 string=0x0000000000551EA8 "*E@"
 *   insn=0x0000000000551EA8 string=0x0000000000551EAC "\nE"
 *   insn=0x0000000000551EC8 string=0x0000000000551ECC "\tE@"
 *   insn=0x0000000000551EE8 string=0x0000000000551EEC "h"
 *   insn=0x0000000000551EF4 string=0x0000000000551EF8 "c"
 *   insn=0x0000000000551F00 string=0x0000000000551F04 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_551BB0(
        _DWORD *result,
        int a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned __int8 v6; // w8
  __int64 v7; // x7
  unsigned __int64 v8; // x11
  unsigned __int64 v9; // x3
  __int64 v10; // x10
  int v11; // w9
  unsigned __int64 v12; // x6
  unsigned __int64 v13; // x3
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  __int128 *v16; // x13
  _OWORD *v17; // x12
  unsigned __int64 v18; // x3
  unsigned __int64 v19; // x8
  __int64 v20; // x10
  __int128 v21; // t1
  _DWORD *v22; // x8
  unsigned __int64 v23; // x3
  unsigned __int64 v24; // x4
  unsigned int v25; // w3
  __int128 *v26; // x12
  _OWORD *v27; // x10
  unsigned int v28; // w0
  int v29; // w8
  unsigned int v30; // w9
  __int128 v31; // t1
  __int64 v32; // x0
  unsigned __int64 v33; // x10
  int v34; // w8
  unsigned __int64 v35; // x0
  __int64 v36; // x3
  unsigned __int64 v37; // x4
  unsigned int v38; // w3
  __int128 *v39; // x10
  _OWORD *v40; // x9
  unsigned int v41; // w0
  int v42; // w7
  unsigned int v43; // w8
  __int128 v44; // t1
  __int64 v45; // x0
  unsigned __int64 v46; // x9
  int v47; // w7
  unsigned __int64 v48; // x0
  __int64 v49; // x3
  int v50; // w0
  int *v51; // x9
  _DWORD *v52; // x8
  int v53; // t1
  int v54; // w0
  int *v55; // x8
  _DWORD *v56; // x7
  int v57; // t1
  _DWORD *v58; // x4
  bool v59; // zf

  v6 = *a3;
  v7 = 0;
  v8 = 0;
  v9 = a4 - 1;
  v10 = *a3;
LABEL_2:
  v11 = (char)v6;
  if ( v10 < (__int64)(a6 - a5) >> 2 )
  {
    while ( v11 > 0 )
    {
      a6 -= 4LL * v6;
      if ( v8 >= v9 )
      {
        ++v7;
        goto LABEL_2;
      }
      v6 = a3[++v8];
      v10 = v6;
      v11 = (char)v6;
      if ( v6 >= (__int64)(a6 - a5) >> 2 )
        break;
    }
  }
  v12 = v8;
  if ( a5 == a6 )
    goto LABEL_27;
  v13 = a5 + 4;
  v14 = (a6 - (a5 + 4)) >> 2;
  v15 = v14 + 1;
  if ( v14 + 1 > 8 && ((unsigned __int64)result >= a5 + 16 || a5 >= (unsigned __int64)(result + 4)) )
  {
    v16 = (__int128 *)a5;
    v17 = result;
    v18 = ((v14 - 3) >> 2) + 1;
    v19 = 0;
    v20 = 4 * v18;
    do
    {
      v21 = *v16++;
      ++v19;
      *v17++ = v21;
    }
    while ( v19 < v18 );
    v22 = &result[4 * v18];
    v23 = a5 + 16 * v18;
    if ( v15 != v20 )
    {
      result[v20] = *(_DWORD *)(a5 + 4 * v20);
      if ( a6 != v23 + 4 )
      {
        v22[1] = *(_DWORD *)(v23 + 4);
        if ( a6 != v23 + 8 )
          v22[2] = *(_DWORD *)(v23 + 8);
      }
    }
    result += v15;
  }
  else
  {
    v58 = result;
    do
    {
      v59 = v13 == a6;
      *v58++ = *(_DWORD *)(v13 - 4);
      v13 += 4LL;
    }
    while ( !v59 );
    result += v15;
  }
  if ( --v7 != -1 )
  {
    *result = a2;
    v24 = (unsigned __int64)(result + 1);
    v25 = a3[v8];
    if ( !a3[v8] )
      goto LABEL_29;
LABEL_18:
    if ( (v24 >= a6 + 16 || a6 >= (unsigned __int64)(result + 5)) && v25 > 8 )
    {
      v26 = (__int128 *)a6;
      v27 = (_OWORD *)v24;
      v28 = ((unsigned __int8)(v25 - 4) >> 2) + 1;
      v29 = 0;
      v30 = 4 * (v28 & 0x3F);
      do
      {
        v31 = *v26++;
        ++v29;
        *v27++ = v31;
      }
      while ( v28 > (unsigned __int8)v29 );
      v32 = 4LL * v30;
      v33 = v24 + v32;
      v34 = (unsigned __int8)(v25 - v30);
      v35 = a6 + v32;
      if ( v25 != v30 )
      {
        *(_DWORD *)(v24 + 4LL * v30) = *(_DWORD *)(a6 + 4LL * v30);
        if ( v34 != 1 )
        {
          *(_DWORD *)(v33 + 4) = *(_DWORD *)(v35 + 4);
          if ( v34 != 2 )
            *(_DWORD *)(v33 + 8) = *(_DWORD *)(v35 + 8);
        }
      }
    }
    else
    {
      LOBYTE(v50) = v25;
      v51 = (int *)a6;
      v52 = (_DWORD *)v24;
      do
      {
        v53 = *v51++;
        *v52++ = v53;
        v50 = (unsigned __int8)(v50 - 1);
      }
      while ( v50 );
    }
    v36 = 4 * ((unsigned __int8)(v25 - 1) + 1LL);
    result = (_DWORD *)(v24 + v36);
    a6 += v36;
LABEL_27:
    while ( --v7 != -1 )
    {
      *result = a2;
      v24 = (unsigned __int64)(result + 1);
      v25 = a3[v8];
      if ( a3[v8] )
        goto LABEL_18;
LABEL_29:
      result = (_DWORD *)v24;
    }
  }
  while ( --v12 != -1 )
  {
    *result = a2;
    v37 = (unsigned __int64)(result + 1);
    v38 = a3[v12];
    if ( a3[v12] )
    {
      if ( (v37 >= a6 + 16 || a6 >= (unsigned __int64)(result + 5)) && v38 > 8 )
      {
        v39 = (__int128 *)a6;
        v40 = result + 1;
        v41 = ((unsigned __int8)(v38 - 4) >> 2) + 1;
        v42 = 0;
        v43 = 4 * (v41 & 0x3F);
        do
        {
          v44 = *v39++;
          ++v42;
          *v40++ = v44;
        }
        while ( v41 > (unsigned __int8)v42 );
        v45 = 4LL * v43;
        v46 = v37 + v45;
        v47 = (unsigned __int8)(v38 - v43);
        v48 = a6 + v45;
        if ( v38 != v43 )
        {
          *(_DWORD *)(v37 + 4LL * v43) = *(_DWORD *)(a6 + 4LL * v43);
          if ( v47 != 1 )
          {
            *(_DWORD *)(v46 + 4) = *(_DWORD *)(v48 + 4);
            if ( v47 != 2 )
              *(_DWORD *)(v46 + 8) = *(_DWORD *)(v48 + 8);
          }
        }
      }
      else
      {
        LOBYTE(v54) = a3[v12];
        v55 = (int *)a6;
        v56 = (_DWORD *)v37;
        do
        {
          v57 = *v55++;
          *v56++ = v57;
          v54 = (unsigned __int8)(v54 - 1);
        }
        while ( v54 );
      }
      v49 = 4 * ((unsigned __int8)(v38 - 1) + 1LL);
      result = (_DWORD *)(v37 + v49);
      a6 += v49;
    }
    else
    {
      ++result;
    }
  }
  return result;
}

