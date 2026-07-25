/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046E980
 * Mangled: _ZNSt6vectorIN5Caver7Vector3ESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector3*,std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>>,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x0000000000202BB0  std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector3*,std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>>,Caver::Vector3 const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 89
 *   insn=0x000000000046E9A4 string=0x000000000046E9A8 "?"
 *   insn=0x000000000046E9B0 string=0x000000000046E9B4 "\nM_"
 *   insn=0x000000000046E9B4 string=0x000000000046E9B8 "+"
 *   insn=0x000000000046E9B8 string=0x000000000046E9BC ",1"
 *   insn=0x000000000046E9BC string=0x000000000046E9C0 "*"
 *   insn=0x000000000046E9C0 string=0x000000000046E9C4 "+\t"
 *   insn=0x000000000046E9D0 string=0x000000000046E9D4 ""
 *   insn=0x000000000046E9DC string=0x000000000046EA18 "i"
 *   insn=0x000000000046E9E0 string=0x000000000046E9E8 "k}"
 *   insn=0x000000000046E9E8 string=0x000000000046E9EC "k"
 *   insn=0x000000000046E9EC string=0x000000000046E9F0 "k"
 *   insn=0x000000000046E9FC string=0x000000000046EA00 "k"
 *   insn=0x000000000046EA04 string=0x000000000046EA08 ""
 *   insn=0x000000000046EA10 string=0x000000000046EA14 ","
 *   insn=0x000000000046EA18 string=0x000000000046EA1C "jB"
 *   insn=0x000000000046EA1C string=0x000000000046EA20 "V"
 *   insn=0x000000000046EA30 string=0x000000000046EA34 ")"
 *   insn=0x000000000046EA34 string=0x000000000046EA38 ")"
 *   insn=0x000000000046EA38 string=0x000000000046EA3C ")}"
 *   insn=0x000000000046EA3C string=0x000000000046EA40 "*"
 *   insn=0x000000000046EA44 string=0x000000000046EA48 "I"
 *   insn=0x000000000046EA4C string=0x000000000046EA50 "?"
 *   insn=0x000000000046EA54 string=0x000000000046EA58 "J"
 *   insn=0x000000000046EA58 string=0x000000000046EA5C "_"
 *   insn=0x000000000046EA60 string=0x000000000046EA64 "7"
 *   insn=0x000000000046EA6C string=0x000000000046ED5C "N"
 *   insn=0x000000000046EA78 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000046EA84 string=0x000000000046EA90 "i"
 *   insn=0x000000000046EA94 string=0x000000000046EA98 ")"
 *   insn=0x000000000046EA98 string=0x000000000046EA9C ")}"
 *   insn=0x000000000046EAA0 string=0x000000000046EAA4 ")U"
 *   insn=0x000000000046EAA4 string=0x000000000046EAA8 "*"
 *   insn=0x000000000046EAB0 string=0x000000000046EAB4 "*\t"
 *   insn=0x000000000046EABC string=0x000000000046EAC0 "i2"
 *   insn=0x000000000046EAC4 string=0x000000000046EAC8 ")"
 *   insn=0x000000000046EAC8 string=0x000000000046EACC "jU"
 *   insn=0x000000000046EACC string=0x000000000046EAD0 ")}"
 *   insn=0x000000000046EAD0 string=0x000000000046EAD4 ","
 *   insn=0x000000000046EAD8 string=0x000000000046EADC "_!"
 *   insn=0x000000000046EAE4 string=0x000000000046EAE8 "B"
 *   insn=0x000000000046EAE8 string=0x000000000046EAEC "j"
 *   insn=0x000000000046EAEC string=0x000000000046EAF0 "*"
 *   insn=0x000000000046EAF0 string=0x000000000046EAF4 "j\t@"
 *   insn=0x000000000046EAF4 string=0x000000000046EAF8 "k1"
 *   insn=0x000000000046EAFC string=0x000000000046EB00 "*\t"
 *   insn=0x000000000046EB00 string=0x000000000046EB04 ")1"
 *   insn=0x000000000046EB04 string=0x000000000046EB08 "!"
 *   insn=0x000000000046EB0C string=0x000000000046EB10 "61"
 *   insn=0x000000000046EB10 string=0x000000000046EB14 "K"
 *   insn=0x000000000046EB14 string=0x000000000046EB18 " "
 *   insn=0x000000000046EB18 string=0x000000000046EB5C "h"
 *   insn=0x000000000046EB1C string=0x000000000046EB20 "k1"
 *   insn=0x000000000046EB20 string=0x000000000046EB24 "lU"
 *   insn=0x000000000046EB24 string=0x000000000046EB28 "k}"
 *   insn=0x000000000046EB28 string=0x000000000046EB2C "l"
 *   insn=0x000000000046EB34 string=0x000000000046EB38 "B\n"
 *   insn=0x000000000046EB38 string=0x000000000046EB3C "i"
 *   insn=0x000000000046EB40 string=0x000000000046EB44 "i\n@"
 *   insn=0x000000000046EB44 string=0x000000000046EB48 "s2"
 *   insn=0x000000000046EB54 string=0x000000000046EB58 "!"
 *   insn=0x000000000046EB64 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046EB90 string=0x000000000046EB94 ")"
 *   insn=0x000000000046EBC0 string=0x000000000046EBC4 ")1"
 *   insn=0x000000000046EBD0 string=0x000000000046EBD4 ""
 *   insn=0x000000000046EC04 string=0x000000000046EC08 "1"
 *   insn=0x000000000046EC24 string=0x000000000046EC28 ","
 *   insn=0x000000000046EC28 string=0x000000000046EC2C "L"
 *   insn=0x000000000046EC30 string=0x000000000046EC34 "+"
 *   insn=0x000000000046EC38 string=0x000000000046EC3C ""
 *   insn=0x000000000046EC70 string=0x000000000046EC74 "_"
 *   insn=0x000000000046EC84 string=0x000000000046EC88 "1"
 *   insn=0x000000000046EC8C string=0x000000000046EC90 "l"
 *   insn=0x000000000046EC90 string=0x000000000046EC94 " "
 *   insn=0x000000000046ECA0 string=0x000000000046ECA4 "-A"
 *   insn=0x000000000046ECB0 string=0x000000000046ECB4 "n"
 *   insn=0x000000000046ECC0 string=0x000000000046ECC4 "/Q"
 *   insn=0x000000000046ECC4 string=0x000000000046ECC8 "r"
 *   insn=0x000000000046ECD0 string=0x000000000046ECD4 "p""
 *   insn=0x000000000046ECD4 string=0x000000000046ECD8 "1b"
 *   insn=0x000000000046ECE8 string=0x000000000046ECEC "!"
 *   insn=0x000000000046ECF0 string=0x000000000046ECF4 "A"
 *   insn=0x000000000046ED04 string=0x000000000046ED08 "l"
 *   insn=0x000000000046ED18 string=0x000000000046ED1C "s"
 *   insn=0x000000000046ED1C string=0x000000000046ED20 ")"
 *   insn=0x000000000046ED38 string=0x000000000046ED3C "!\t?"
 *   insn=0x000000000046ED3C string=0x000000000046ED40 " "
 *   insn=0x000000000046ED40 string=0x000000000046ED44 "$"
 *   insn=0x000000000046ED44 string=0x000000000046ED48 "#"
 *   insn=0x000000000046ED50 string=0x000000000046ED54 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::Vector3>::_M_insert_aux(unsigned __int64 *a1, unsigned __int64 a2, int *a3)
{
  unsigned __int64 v4; // x9
  unsigned __int64 v6; // x19
  unsigned __int64 v7; // x8
  int v8; // w11
  int v9; // w9
  __int64 v10; // x10
  signed __int64 v11; // x11
  unsigned __int64 v12; // x12
  __int64 v13; // t1
  int v14; // w14
  _OWORD *v15; // x25
  bool v16; // zf
  __int64 v17; // x9
  unsigned __int64 v18; // x9
  __int64 v19; // x10
  bool v20; // cf
  unsigned __int64 v21; // x9
  int v22; // w10
  unsigned __int64 v23; // x23
  __int64 v24; // x0
  char *v25; // x8
  unsigned __int64 v26; // x21
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x9
  unsigned __int64 v29; // x12
  unsigned __int64 v30; // x10
  char *v31; // x11
  int v32; // w10
  unsigned __int64 v33; // x10
  unsigned __int64 v34; // x22
  unsigned __int64 v35; // x12
  unsigned __int64 v36; // x11
  int v37; // w9
  char *v38; // x15
  unsigned __int64 v39; // x14
  __int64 v40; // x9
  _BOOL4 v41; // w12
  _BOOL4 v42; // w13
  __int64 v43; // x11
  __int64 v44; // x13
  char *v45; // x14
  _OWORD *v46; // x15
  __int128 v47; // q1
  __int128 v48; // q2
  __int128 v49; // q3
  __int128 v50; // q4
  __int128 v51; // q5
  __int64 v52; // x12
  unsigned __int64 v53; // x17
  __int64 v54; // x18
  unsigned __int64 v55; // x12
  unsigned __int64 v56; // x12
  bool v57; // w1
  bool v58; // w12
  __int64 v59; // x14
  __int128 *v60; // x13
  _OWORD *v61; // x9
  __int64 v62; // x14
  __int128 v63; // q0
  __int128 v64; // q1
  __int128 v65; // q2
  __int128 v66; // q3
  __int128 v67; // q4
  __int128 v68; // q5

  v4 = a1[1];
  v6 = a2;
  if ( v4 == a1[2] )
  {
    v15 = (_OWORD *)*a1;
    v17 = v4 - *a1;
    v16 = v17 == 0;
    v18 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 2);
    if ( v16 )
      v19 = 1;
    else
      v19 = v18;
    v20 = __CFADD__(v19, v18);
    v21 = v19 + v18;
    v22 = v20;
    if ( v22 | (v21 > 0x1555555555555555LL) )
      v23 = 0x1555555555555555LL;
    else
      v23 = v21;
    if ( v23 )
    {
      if ( v23 > 0x1555555555555555LL )
        sub_565294(a1, a2, a3);
      v24 = operator new(12 * v23);
      v25 = (char *)*a1;
      v26 = v24;
    }
    else
    {
      v26 = 0;
      v25 = (char *)*a1;
    }
    v27 = v26 + 4 * ((__int64)(v6 - (_QWORD)v15) >> 2);
    *(_QWORD *)v27 = *(_QWORD *)a3;
    *(_DWORD *)(v27 + 8) = a3[2];
    v28 = v26;
    if ( v25 != (char *)v6 )
    {
      v29 = (v6 - 12 - (unsigned __int64)v25) / 0xC;
      v30 = v29 + 1;
      v28 = v26;
      v31 = v25;
      if ( v29 + 1 < 8 )
        goto LABEL_48;
      v38 = &v25[12 * v29];
      v39 = v26 + 12 * v29;
      v40 = 12 * v29 + 12;
      v41 = v26 + 8 < (unsigned __int64)&v25[v40];
      v42 = (unsigned __int64)(v25 + 8) < v26 + v40;
      v28 = v26;
      v31 = v25;
      if ( v26 < (unsigned __int64)(v38 + 4) && (unsigned __int64)v25 < v39 + 4 )
        goto LABEL_48;
      v28 = v26;
      v31 = v25;
      if ( v26 + 4 < (unsigned __int64)(v38 + 8) && (unsigned __int64)(v25 + 4) < v39 + 8 )
        goto LABEL_48;
      v28 = v26;
      v31 = v25;
      if ( v41 && v42 )
        goto LABEL_48;
      v43 = 12 * (v30 & 0x3FFFFFFFFFFFFFF8LL);
      v28 = v26 + v43;
      v31 = &v25[v43];
      v44 = v30 & 0x3FFFFFFFFFFFFFF8LL;
      v45 = v25;
      v46 = (_OWORD *)v26;
      do
      {
        v47 = *((_OWORD *)v45 + 1);
        v48 = *((_OWORD *)v45 + 2);
        v49 = *((_OWORD *)v45 + 3);
        v50 = *((_OWORD *)v45 + 4);
        v51 = *((_OWORD *)v45 + 5);
        v44 -= 8;
        *v46 = *(_OWORD *)v45;
        v46[1] = v47;
        v46[2] = v48;
        v46[3] = v49;
        v46[4] = v50;
        v46[5] = v51;
        v46 += 6;
        v45 += 96;
      }
      while ( v44 );
      if ( v30 != (v30 & 0x3FFFFFFFFFFFFFF8LL) )
      {
LABEL_48:
        do
        {
          *(_QWORD *)v28 = *(_QWORD *)v31;
          v32 = *((_DWORD *)v31 + 2);
          v31 += 12;
          *(_DWORD *)(v28 + 8) = v32;
          v28 += 12LL;
        }
        while ( v31 != (char *)v6 );
      }
    }
    v33 = a1[1];
    v34 = v28 + 12;
    if ( v33 != v6 )
    {
      v35 = (v33 - v6 - 12) / 0xC;
      v36 = v35 + 1;
      if ( v35 + 1 < 8 )
        goto LABEL_49;
      v52 = 12 * v35;
      v53 = v28 + v52;
      v54 = v52 + 12;
      v55 = v6 + v52;
      v20 = v34 >= v55 + 4;
      v56 = v55 + 8;
      v57 = !v20;
      v58 = v28 + 16 < v56;
      if ( v57 && v6 < v28 + v54 + 4 )
        goto LABEL_49;
      if ( v58 && v6 + 4 < v28 + v54 + 8 )
        goto LABEL_49;
      if ( v28 + 20 < v6 + v54 && v6 + 8 < v53 + 24 )
        goto LABEL_49;
      v59 = 12 * (v36 & 0x3FFFFFFFFFFFFFF8LL);
      v60 = (__int128 *)v6;
      v34 += v59;
      v6 += v59;
      v61 = (_OWORD *)(v28 + 60);
      v62 = v36 & 0x3FFFFFFFFFFFFFF8LL;
      do
      {
        v63 = *v60;
        v64 = v60[1];
        v65 = v60[2];
        v66 = v60[3];
        v67 = v60[4];
        v68 = v60[5];
        v60 += 6;
        v62 -= 8;
        *(v61 - 2) = v64;
        *(v61 - 1) = v65;
        *(v61 - 3) = v63;
        v61[1] = v67;
        v61[2] = v68;
        *v61 = v66;
        v61 += 6;
      }
      while ( v62 );
      if ( v36 != (v36 & 0x3FFFFFFFFFFFFFF8LL) )
      {
LABEL_49:
        do
        {
          *(_QWORD *)v34 = *(_QWORD *)v6;
          v37 = *(_DWORD *)(v6 + 8);
          v6 += 12LL;
          *(_DWORD *)(v34 + 8) = v37;
          v34 += 12LL;
        }
        while ( v6 != v33 );
      }
    }
    if ( v25 )
      operator delete(v25);
    *a1 = v26;
    a1[1] = v34;
    a1[2] = v26 + 12 * v23;
  }
  else
  {
    v7 = v4 - 12;
    v8 = *(_DWORD *)(v4 - 4);
    *(_QWORD *)v4 = *(_QWORD *)(v4 - 12);
    *(_DWORD *)(v4 + 8) = v8;
    a1[1] = v4 + 12;
    v9 = *a3;
    v10 = *(_QWORD *)(a3 + 1);
    if ( (__int64)(v7 - a2) >= 1 )
    {
      v11 = (v7 - a2) / 0xC + 1;
      v12 = v7;
      do
      {
        v13 = *(_QWORD *)(v12 - 12);
        v12 -= 12LL;
        v14 = *(_DWORD *)(v7 - 4);
        --v11;
        *(_QWORD *)v7 = v13;
        *(_DWORD *)(v7 + 8) = v14;
        v7 = v12;
      }
      while ( v11 > 1 );
    }
    *(_DWORD *)a2 = v9;
    *(_QWORD *)(a2 + 4) = v10;
  }
}

