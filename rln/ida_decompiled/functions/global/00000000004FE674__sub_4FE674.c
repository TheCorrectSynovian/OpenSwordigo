/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FE674
 * Mangled: sub_4FE674
 * Demangled: sub_4FE674
 *
 * Callers: 8
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FEA48  sub_4FEA48
 *   0x00000000004FEACC  sub_4FEACC
 *   0x00000000004FEB5C  sub_4FEB5C
 *   0x00000000004FED28  sub_4FED28
 *   0x00000000004FEF18  sub_4FEF18
 *   0x00000000004FF3C4  sub_4FF3C4
 *   0x00000000004FFC04  sub_4FFC04
 *
 * Callees: 4
 *   0x00000000004FDEDC  sub_4FDEDC
 *   0x00000000005001E8  sub_5001E8
 *   0x0000000000500404  sub_500404
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 92
 *   insn=0x00000000004FE698 string=0x00000000004FE69C "Z"
 *   insn=0x00000000004FE69C string=0x00000000004FE6A0 "h"
 *   insn=0x00000000004FE6A4 string=0x00000000004FE6A8 "A"
 *   insn=0x00000000004FE6A8 string=0x00000000004FE6AC "i\n@"
 *   insn=0x00000000004FE6A8 string=0x00000000004FE730 "i"
 *   insn=0x00000000004FE6AC string=0x00000000004FE6B0 "?"
 *   insn=0x00000000004FE6B4 string=0x00000000004FE6B8 "j"
 *   insn=0x00000000004FE6B8 string=0x00000000004FE6BC "_"
 *   insn=0x00000000004FE6C0 string=0x00000000004FE8F4 "i"
 *   insn=0x00000000004FE6D8 string=0x00000000004FE6DC "j9H"
 *   insn=0x00000000004FE6E0 string=0x00000000004FE6E4 "_"
 *   insn=0x00000000004FE6E8 string=0x00000000004FE6EC "_"
 *   insn=0x00000000004FE6EC string=0x00000000004FE6F0 "!"
 *   insn=0x00000000004FE6F8 string=0x00000000004FE6FC "8"
 *   insn=0x00000000004FE6FC string=0x00000000004FE700 "\tW"
 *   insn=0x00000000004FE700 string=0x00000000004FE704 "?"
 *   insn=0x00000000004FE710 string=0x000000000059B07B "control structure too long"
 *   insn=0x00000000004FE720 string=0x00000000004FE724 ")9"
 *   insn=0x00000000004FE724 string=0x00000000004FE728 "\t5"
 *   insn=0x00000000004FE730 string=0x00000000004FE734 "h"
 *   insn=0x00000000004FE734 string=0x00000000004FE738 "?"
 *   insn=0x00000000004FE73C string=0x00000000004FE740 "?"
 *   insn=0x00000000004FE740 string=0x00000000004FE744 " "
 *   insn=0x00000000004FE74C string=0x0000000000599DD1 "`qT`Pql1"
 *   insn=0x00000000004FE754 string=0x00000000004FE758 "J@"
 *   insn=0x00000000004FE758 string=0x00000000004FE75C ""
 *   insn=0x00000000004FE75C string=0x00000000004FE760 "?"
 *   insn=0x00000000004FE760 string=0x00000000004FE764 "N"
 *   insn=0x00000000004FE770 string=0x00000000004FE774 "pi"
 *   insn=0x00000000004FE774 string=0x00000000004FE778 "P"
 *   insn=0x00000000004FE788 string=0x00000000004FE818 "h"
 *   insn=0x00000000004FE790 string=0x00000000004FE794 ")"
 *   insn=0x00000000004FE79C string=0x00000000004FE7A0 "?"
 *   insn=0x00000000004FE7BC string=0x00000000004FE7C0 ")@"
 *   insn=0x00000000004FE7C8 string=0x00000000004FE7CC ","
 *   insn=0x00000000004FE7D8 string=0x00000000004FE7DC "Ni"
 *   insn=0x00000000004FE7DC string=0x00000000004FE7E0 "N"
 *   insn=0x00000000004FE7EC string=0x00000000004FE7F0 "A"
 *   insn=0x00000000004FE7F4 string=0x00000000004FE7F8 "l9L"
 *   insn=0x00000000004FE7F8 string=0x00000000004FE7FC ""
 *   insn=0x00000000004FE810 string=0x00000000004FE814 "s"
 *   insn=0x00000000004FE82C string=0x00000000004FE830 "4"
 *   insn=0x00000000004FE834 string=0x00000000004FE838 "W"
 *   insn=0x00000000004FE838 string=0x00000000004FE83C ""
 *   insn=0x00000000004FE844 string=0x00000000004FE848 "H"
 *   insn=0x00000000004FE848 string=0x00000000004FE84C "("
 *   insn=0x00000000004FE858 string=0x00000000004FE85C "c"
 *   insn=0x00000000004FE86C string=0x00000000004FE870 "`"
 *   insn=0x00000000004FE878 string=0x00000000004FE87C "\n"
 *   insn=0x00000000004FE888 string=0x00000000004FE88C ""
 *   insn=0x00000000004FE88C string=0x00000000004FE890 ",9Hm"
 *   insn=0x00000000004FE890 string=0x00000000004FE894 "m"
 *   insn=0x00000000004FE898 string=0x00000000004FE89C "L"
 *   insn=0x00000000004FE8A0 string=0x00000000004FE8A4 "!"
 *   insn=0x00000000004FE8A4 string=0x00000000004FE8A8 "{}@"
 *   insn=0x00000000004FE8B4 string=0x00000000004FE8B8 "?"
 *   insn=0x00000000004FE8BC string=0x00000000004FE8C0 " "
 *   insn=0x00000000004FE8C4 string=0x00000000004FE8CC "'"
 *   insn=0x00000000004FE8D4 string=0x00000000004FE8D8 ")9"
 *   insn=0x00000000004FE8D8 string=0x00000000004FE8DC "\t5"
 *   insn=0x00000000004FE8DC string=0x00000000004FE8E0 "\t{;"
 *   insn=0x00000000004FE8E0 string=0x00000000004FE8E4 ""
 *   insn=0x00000000004FE8EC string=0x00000000004FE8F0 "<"
 *   insn=0x00000000004FE910 string=0x00000000004FE914 ""\t@"
 *   insn=0x00000000004FE914 string=0x00000000004FE918 "H"
 *   insn=0x00000000004FE91C string=0x00000000004FE920 "2"
 *   insn=0x00000000004FE934 string=0x00000000004FE938 ""\t@"
 *   insn=0x00000000004FE938 string=0x00000000004FE93C "H"
 *   insn=0x00000000004FE944 string=0x00000000004FE948 "("
 *   insn=0x00000000004FE958 string=0x00000000004FE95C " "
 *   insn=0x00000000004FE95C string=0x00000000004FE960 "I"
 *   insn=0x00000000004FE960 string=0x00000000004FE964 "?"
 *   insn=0x00000000004FE968 string=0x00000000004FE9DC "V"
 *   insn=0x00000000004FE970 string=0x00000000004FE974 ""
 *   insn=0x00000000004FE97C string=0x00000000004FE980 "H"
 *   insn=0x00000000004FE980 string=0x00000000004FE984 "I9H"
 *   insn=0x00000000004FE988 string=0x00000000004FE98C "?"
 *   insn=0x00000000004FE98C string=0x00000000004FE990 "i"
 *   insn=0x00000000004FE990 string=0x00000000004FE994 "?"
 *   insn=0x00000000004FE994 string=0x00000000004FE998 "!"
 *   insn=0x00000000004FE9A8 string=0x00000000004FE9AC "?"
 *   insn=0x00000000004FE9B0 string=0x00000000004FE9B4 " "
 *   insn=0x00000000004FE9C8 string=0x00000000004FE9CC ")9"
 *   insn=0x00000000004FE9CC string=0x00000000004FE9D0 "\t5"
 *   insn=0x00000000004FE9D0 string=0x00000000004FE9D4 "I{;"
 *   insn=0x00000000004FE9F0 string=0x00000000004FE9F4 "a"
 *   insn=0x00000000004FE9F8 string=0x00000000004FE9FC "8"
 *   insn=0x00000000004FE9FC string=0x00000000004FEA00 "a"
 *   insn=0x00000000004FEA10 string=0x00000000004FEA14 "2"
 *   insn=0x00000000004FEA1C string=0x00000000004FEA20 "t\n"
 *   insn=0x00000000004FEA20 string=0x00000000004FEA24 "`\n"
 *   insn=0x00000000004FEA24 string=0x00000000004FEA28 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall sub_4FE674(__int64 a1, _DWORD *a2, unsigned int a3)
{
  int v6; // w9
  int v7; // w10
  __int64 v8; // x22
  int v9; // w13
  unsigned int v10; // w8
  int v11; // w24
  int v12; // w9
  int v13; // w8
  int *v14; // x14
  int v15; // w15
  int v16; // w14
  int v17; // w9
  int v18; // w23
  int *v19; // x12
  int v20; // w13
  int v21; // w12
  int v22; // w8
  int v23; // w24
  _QWORD *v24; // x25
  int *v25; // x26
  int v26; // w22
  int v27; // w23
  int v28; // w12
  __int64 v29; // x24
  int v30; // w11
  unsigned int v31; // w8
  int v32; // w23
  int v33; // w9
  __int64 v34; // x9
  int v35; // w0
  __int64 v36; // x9
  int v37; // w9
  __int64 v38; // x26
  int v39; // w12
  unsigned int v40; // w8
  int v41; // w22
  int v42; // w9
  unsigned int v43; // w22
  double result; // d0

  sub_500404();
  if ( *a2 != 10 || (v6 = a2[2], v6 == -1) )
  {
LABEL_15:
    v6 = a2[4];
    goto LABEL_16;
  }
  v7 = a2[4];
  if ( v7 != -1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    do
    {
      v9 = v7;
      v10 = *(_DWORD *)(v8 + 4LL * v7);
      if ( v10 >> 14 == 131070 )
        v7 = -1;
      else
        v7 += (v10 >> 14) - 0x1FFFF + 1;
    }
    while ( v7 != -1 );
    v11 = v6 + ~v9;
    if ( v11 >= 0 )
      v12 = v6 + ~v9;
    else
      v12 = -v11;
    if ( v12 >= 0x20000 )
      sub_500968(*(_QWORD *)(a1 + 24), "control structure too long");
    *(_DWORD *)(v8 + 4LL * v9) = ((v11 << 14) + 2147467264) & 0xFFFFC000 | v10 & 0x3FFF;
    goto LABEL_15;
  }
  a2[4] = v6;
LABEL_16:
  v13 = a2[5];
  if ( v6 != v13 )
  {
    if ( v6 == -1 )
    {
LABEL_26:
      if ( v13 == -1 )
      {
        v18 = -1;
        v23 = -1;
LABEL_69:
        v43 = *(_DWORD *)(a1 + 48);
        *(_DWORD *)(a1 + 52) = v43;
        sub_4FDEDC(a1, a2[5], v43, a3, v23);
        sub_4FDEDC(a1, a2[4], v43, a3, v18);
        goto LABEL_70;
      }
      v18 = -1;
      while ( 1 )
      {
        v19 = (int *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 4LL * v13);
        if ( v13 < 1 || (v20 = *(v19 - 1), ((char)byte_599DD1[v20 & 0x3F] & 0x80000000) == 0) )
          v20 = *v19;
        if ( (v20 & 0x3F) != 0x1B )
          break;
        v21 = ((unsigned int)*v19 >> 14) - 0x1FFFF;
        v22 = v13 + v21;
        if ( v21 == -1 )
          v13 = -1;
        else
          v13 = v22 + 1;
        if ( v13 == -1 )
        {
          v23 = -1;
          goto LABEL_69;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = (int *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 4LL * v6);
        if ( v6 < 1 || (v15 = *(v14 - 1), ((char)byte_599DD1[v15 & 0x3F] & 0x80000000) == 0) )
          v15 = *v14;
        if ( (v15 & 0x3F) != 0x1B )
          break;
        v16 = ((unsigned int)*v14 >> 14) - 0x1FFFF;
        v17 = v6 + v16;
        if ( v16 == -1 )
          v6 = -1;
        else
          v6 = v17 + 1;
        if ( v6 == -1 )
          goto LABEL_26;
      }
    }
    if ( *a2 == 10 )
    {
      v24 = (_QWORD *)(a1 + 24);
      v25 = (int *)(a1 + 56);
      v26 = -1;
    }
    else
    {
      v25 = (int *)(a1 + 56);
      v27 = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 56) = -1;
      v24 = (_QWORD *)(a1 + 24);
      v26 = sub_5001E8(a1, 2147450902, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
      if ( v27 != -1 )
      {
        if ( v26 == -1 )
        {
          v26 = v27;
        }
        else
        {
          v28 = v26;
          v29 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
          do
          {
            v30 = v28;
            v31 = *(_DWORD *)(v29 + 4LL * v28);
            if ( v31 >> 14 == 131070 )
              v28 = -1;
            else
              v28 += (v31 >> 14) - 0x1FFFF + 1;
          }
          while ( v28 != -1 );
          v32 = v27 + ~v30;
          if ( v32 >= 0 )
            v33 = v32;
          else
            v33 = -v32;
          if ( v33 >= 0x20000 )
            sub_500968(*v24, "control structure too long");
          *(_DWORD *)(v29 + 4LL * v30) = ((v32 << 14) + 2147467264) & 0xFFFFC000 | v31 & 0x3FFF;
        }
      }
    }
    v34 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 48);
    v35 = sub_5001E8(a1, (a3 << 6) | 0x4002, *(unsigned int *)(v34 + 8));
    v36 = *(_QWORD *)(a1 + 24);
    v23 = v35;
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 48);
    v18 = sub_5001E8(a1, (a3 << 6) | 0x800002, *(unsigned int *)(v36 + 8));
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 48);
    if ( v26 != -1 )
    {
      v37 = *v25;
      if ( *v25 == -1 )
      {
        *v25 = v26;
      }
      else
      {
        v38 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
        do
        {
          v39 = v37;
          v40 = *(_DWORD *)(v38 + 4LL * v37);
          if ( v40 >> 14 == 131070 )
            v37 = -1;
          else
            v37 += (v40 >> 14) - 0x1FFFF + 1;
        }
        while ( v37 != -1 );
        v41 = v26 + ~v39;
        if ( v41 >= 0 )
          v42 = v41;
        else
          v42 = -v41;
        if ( v42 >= 0x20000 )
          sub_500968(*v24, "control structure too long");
        *(_DWORD *)(v38 + 4LL * v39) = ((v41 << 14) + 2147467264) & 0xFFFFC000 | v40 & 0x3FFF;
      }
    }
    goto LABEL_69;
  }
LABEL_70:
  result = NAN;
  a2[2] = a3;
  *((_QWORD *)a2 + 2) = -1;
  *a2 = 12;
  return result;
}

