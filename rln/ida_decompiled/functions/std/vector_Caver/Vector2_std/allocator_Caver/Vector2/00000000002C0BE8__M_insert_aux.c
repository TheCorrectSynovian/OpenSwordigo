/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C0BE8
 * Mangled: _ZNSt6vectorIN5Caver7Vector2ESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F5280  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,Caver::Vector2 const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 66
 *   insn=0x00000000002C0C14 string=0x00000000002C0C18 "H"
 *   insn=0x00000000002C0C1C string=0x00000000002C0C20 "("
 *   insn=0x00000000002C0C28 string=0x00000000002C0C2C "K"
 *   insn=0x00000000002C0C30 string=0x00000000002C0C34 "K"
 *   insn=0x00000000002C0C34 string=0x00000000002C0CFC "h&"
 *   insn=0x00000000002C0C38 string=0x00000000002C0C3C "m"
 *   insn=0x00000000002C0C3C string=0x00000000002C0C40 """
 *   insn=0x00000000002C0C40 string=0x00000000002C0CA4 "k"
 *   insn=0x00000000002C0C48 string=0x00000000002C0C4C "$"
 *   insn=0x00000000002C0C4C string=0x00000000002C0CDC "k"
 *   insn=0x00000000002C0C54 string=0x00000000002C0C58 ""
 *   insn=0x00000000002C0C58 string=0x00000000002C0C5C "\t"
 *   insn=0x00000000002C0C5C string=0x00000000002C0C60 "("
 *   insn=0x00000000002C0C60 string=0x00000000002C0C64 "\n"
 *   insn=0x00000000002C0C68 string=0x00000000002C0C6C "_"
 *   insn=0x00000000002C0C70 string=0x00000000002C0C74 ")"
 *   insn=0x00000000002C0C74 string=0x00000000002C0C78 "?"
 *   insn=0x00000000002C0C7C string=0x00000000002C0C80 "7"
 *   insn=0x00000000002C0C88 string=0x00000000002C0C8C ""
 *   insn=0x00000000002C0C90 string=0x00000000002C0C94 "S"
 *   insn=0x00000000002C0C94 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C0C9C string=0x00000000002C0CA0 ""
 *   insn=0x00000000002C0CA8 string=0x00000000002C0CAC "m"
 *   insn=0x00000000002C0CB4 string=0x00000000002C0CB8 "J"
 *   insn=0x00000000002C0CD0 string=0x00000000002C0CD4 "a"
 *   insn=0x00000000002C0CD4 string=0x00000000002C0CD8 "+"
 *   insn=0x00000000002C0CE0 string=0x00000000002C0CE4 "J!"
 *   insn=0x00000000002C0CE4 string=0x00000000002C0CE8 "M"
 *   insn=0x00000000002C0CE8 string=0x00000000002C0CEC "k"
 *   insn=0x00000000002C0CFC string=0x00000000002C0D00 "1"
 *   insn=0x00000000002C0D0C string=0x00000000002C0D10 "j"
 *   insn=0x00000000002C0D10 string=0x00000000002C0D14 "J"
 *   insn=0x00000000002C0D24 string=0x00000000002C0D28 "i""
 *   insn=0x00000000002C0D28 string=0x00000000002C0D2C ")"
 *   insn=0x00000000002C0D2C string=0x00000000002C0D30 "*"
 *   insn=0x00000000002C0D30 string=0x00000000002C0D34 "J"
 *   insn=0x00000000002C0D34 string=0x00000000002C0D38 "_!"
 *   insn=0x00000000002C0D44 string=0x00000000002C0DD8 "+"
 *   insn=0x00000000002C0D4C string=0x00000000002C0D50 "j"
 *   insn=0x00000000002C0D54 string=0x00000000002C0D58 ")"
 *   insn=0x00000000002C0D5C string=0x00000000002C0D60 ",!"
 *   insn=0x00000000002C0D68 string=0x00000000002C0D6C "-"
 *   insn=0x00000000002C0D70 string=0x00000000002C0D74 "*!"
 *   insn=0x00000000002C0D70 string=0x00000000002C0DAC "h"
 *   insn=0x00000000002C0D74 string=0x00000000002C0D78 "J"
 *   insn=0x00000000002C0D78 string=0x00000000002C0D7C "K"
 *   insn=0x00000000002C0D7C string=0x00000000002C0D80 "k"
 *   insn=0x00000000002C0D8C string=0x00000000002C0D90 "k"
 *   insn=0x00000000002C0D90 string=0x00000000002C0D94 "?"
 *   insn=0x00000000002C0D9C string=0x00000000002C0DA0 "I"
 *   insn=0x00000000002C0DA4 string=0x00000000002C0DA8 "6!"
 *   insn=0x00000000002C0DB0 string=0x00000000002C0DB4 "?"
 *   insn=0x00000000002C0DB4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C0DE4 string=0x00000000002C0DE8 "k!"
 *   insn=0x00000000002C0E38 string=0x00000000002C0E3C "m"
 *   insn=0x00000000002C0E3C string=0x00000000002C0E40 "M"
 *   insn=0x00000000002C0E6C string=0x00000000002C0E70 "a"
 *   insn=0x00000000002C0E70 string=0x00000000002C0E74 "_"
 *   insn=0x00000000002C0E8C string=0x00000000002C0E90 "m"
 *   insn=0x00000000002C0E98 string=0x00000000002C0E9C "R"
 *   insn=0x00000000002C0EA4 string=0x00000000002C0EA8 "q"
 *   insn=0x00000000002C0EB0 string=0x00000000002C0EB4 "o"
 *   insn=0x00000000002C0EE0 string=0x00000000002C0EE4 "n"
 *   insn=0x00000000002C0EE8 string=0x00000000002C0EEC "o"
 *   insn=0x00000000002C0EF0 string=0x00000000002C0EF4 "s"
 *   insn=0x00000000002C0F10 string=0x00000000002C0F14 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::Vector2>::_M_insert_aux(unsigned __int64 *a1, char *a2, int *a3)
{
  _QWORD *v4; // x12
  char *v6; // x19
  _QWORD *v7; // x10
  int v8; // w8
  int v9; // w9
  unsigned __int64 v10; // x11
  unsigned __int64 v11; // x13
  __int64 v12; // x11
  _QWORD *v13; // x13
  char *v14; // x24
  __int64 v15; // x8
  __int64 v16; // x9
  bool v17; // cf
  unsigned __int64 v18; // x8
  int v19; // w9
  unsigned __int64 v20; // x23
  __int64 v21; // x0
  char *v22; // x8
  unsigned __int64 v23; // x21
  unsigned __int64 v24; // x14
  __int64 v25; // x15
  __int128 *v26; // x12
  __int128 v27; // q1
  __int64 v28; // x11
  _QWORD *v29; // x12
  __int64 *v30; // x10
  __int64 v31; // t1
  unsigned __int64 v32; // x12
  unsigned __int64 v33; // x9
  unsigned __int64 v34; // x10
  _QWORD *v35; // x11
  char *v36; // x12
  __int64 v37; // t1
  char *v38; // x9
  unsigned __int64 v39; // x22
  unsigned __int64 v40; // x10
  unsigned __int64 v41; // x11
  _QWORD *v42; // x13
  __int64 v43; // t1
  unsigned __int64 v44; // x11
  unsigned __int64 v45; // x11
  _BOOL4 v46; // w13
  _BOOL4 v47; // w14
  __int64 v48; // x12
  _OWORD *v49; // x14
  __int128 *v50; // x15
  __int64 v51; // x16
  __int128 v52; // q0
  __int128 v53; // q1
  __int128 v54; // q2
  __int128 v55; // q3
  unsigned __int64 v56; // x13
  unsigned __int64 v57; // x16
  bool v58; // w17
  bool v59; // w13
  bool v60; // w14
  __int64 v61; // x16
  __int128 *v62; // x15
  _OWORD *v63; // x12
  __int64 v64; // x16
  __int128 v65; // q0
  __int128 v66; // q1
  __int128 v67; // q2
  __int128 v68; // q3

  v4 = (_QWORD *)a1[1];
  v6 = a2;
  if ( v4 != (_QWORD *)a1[2] )
  {
    v7 = v4 - 1;
    *v4 = *(v4 - 1);
    a1[1] = (unsigned __int64)(v4 + 1);
    v8 = *a3;
    v9 = a3[1];
    v10 = (char *)(v4 - 1) - a2;
    if ( (__int64)v10 >= 1 )
    {
      v11 = v10 >> 3;
      if ( v10 >= 0x20 )
      {
        v12 = (v10 >> 3) & 3;
        v24 = v11 - v12;
        v25 = v12 - v11;
        v13 = &v4[v25];
        v7 = (_QWORD *)((char *)v7 + v25 * 8);
        v26 = (__int128 *)(v4 - 5);
        do
        {
          v27 = *v26;
          v24 -= 4LL;
          *(__int128 *)((char *)v26 + 24) = v26[1];
          *(__int128 *)((char *)v26 + 8) = v27;
          v26 -= 2;
        }
        while ( v24 );
        if ( !v12 )
          goto LABEL_22;
      }
      else
      {
        v12 = v10 >> 3;
        v13 = v4;
      }
      v28 = v12 + 1;
      v29 = v13 - 1;
      v30 = v7 - 1;
      do
      {
        v31 = *v30--;
        --v28;
        *v29-- = v31;
      }
      while ( v28 > 1 );
    }
LABEL_22:
    *(_DWORD *)a2 = v8;
    *((_DWORD *)a2 + 1) = v9;
    return;
  }
  v14 = (char *)*a1;
  v15 = (__int64)((__int64)v4 - *a1) >> 3;
  if ( v4 == (_QWORD *)*a1 )
    v16 = 1;
  else
    v16 = (__int64)((__int64)v4 - *a1) >> 3;
  v17 = __CFADD__(v16, v15);
  v18 = v16 + v15;
  v19 = v17;
  if ( v19 | (v18 >> 61 != 0) )
    v20 = 0x1FFFFFFFFFFFFFFFLL;
  else
    v20 = v18;
  if ( v20 )
  {
    if ( v20 >> 61 )
      sub_565294();
    v21 = operator new(8 * v20);
    v22 = (char *)*a1;
    v23 = v21;
  }
  else
  {
    v23 = 0;
    v22 = (char *)*a1;
  }
  v32 = v23;
  *(_QWORD *)(v23 + 8 * ((v6 - v14) >> 3)) = *(_QWORD *)a3;
  if ( v22 != v6 )
  {
    v33 = v6 - 8 - v22;
    v34 = (v33 >> 3) + 1;
    v35 = (_QWORD *)v23;
    v36 = v22;
    if ( v34 < 8 )
      goto LABEL_55;
    v44 = (v33 & 0xFFFFFFFFFFFFFFF8LL) + 8;
    v17 = v23 + 4 >= (unsigned __int64)&v22[v44];
    v45 = v23 + v44;
    v46 = !v17;
    v47 = (unsigned __int64)(v22 + 4) < v45;
    v35 = (_QWORD *)v23;
    v36 = v22;
    if ( v23 < (unsigned __int64)&v22[(v33 & 0xFFFFFFFFFFFFFFF8LL) + 4]
      && (unsigned __int64)v22 < v23 + (v33 & 0xFFFFFFFFFFFFFFF8LL) + 4 )
    {
      goto LABEL_55;
    }
    v35 = (_QWORD *)v23;
    v36 = v22;
    if ( v46 && v47 )
      goto LABEL_55;
    v48 = 8 * (v34 & 0x3FFFFFFFFFFFFFF8LL);
    v49 = (_OWORD *)(v23 + 32);
    v35 = (_QWORD *)(v23 + v48);
    v36 = &v22[v48];
    v50 = (__int128 *)(v22 + 32);
    v51 = v34 & 0x3FFFFFFFFFFFFFF8LL;
    do
    {
      v52 = *(v50 - 2);
      v53 = *(v50 - 1);
      v54 = *v50;
      v55 = v50[1];
      v50 += 4;
      v51 -= 8;
      *(v49 - 2) = v52;
      *(v49 - 1) = v53;
      *v49 = v54;
      v49[1] = v55;
      v49 += 4;
    }
    while ( v51 );
    if ( v34 != (v34 & 0x3FFFFFFFFFFFFFF8LL) )
    {
LABEL_55:
      do
      {
        v37 = *(_QWORD *)v36;
        v36 += 8;
        *v35++ = v37;
      }
      while ( v6 != v36 );
    }
    v32 = v23 + (v33 & 0xFFFFFFFFFFFFFFF8LL) + 8;
  }
  v38 = (char *)a1[1];
  v39 = v32 + 8;
  if ( v38 != v6 )
  {
    v40 = v38 - 8 - v6;
    v41 = (v40 >> 3) + 1;
    if ( v41 >= 8 )
    {
      v56 = (v38 - v6 - 8) & 0xFFFFFFFFFFFFFFF8LL;
      v57 = v32 + v56 + 16;
      v58 = v39 < (unsigned __int64)&v6[v56 + 4] && (unsigned __int64)v6 < v32 + v56 + 8 + 4;
      v59 = v32 + 12 < (unsigned __int64)&v6[v56 + 8];
      if ( v58 )
      {
        v42 = (_QWORD *)(v32 + 8);
      }
      else
      {
        v60 = v59 && (unsigned __int64)(v6 + 4) < v57;
        v42 = (_QWORD *)(v32 + 8);
        if ( !v60 )
        {
          v61 = 8 * (v41 & 0x3FFFFFFFFFFFFFF8LL);
          v62 = (__int128 *)(v6 + 32);
          v42 = (_QWORD *)(v39 + v61);
          v6 += v61;
          v63 = (_OWORD *)(v32 + 40);
          v64 = v41 & 0x3FFFFFFFFFFFFFF8LL;
          do
          {
            v65 = *(v62 - 2);
            v66 = *(v62 - 1);
            v67 = *v62;
            v68 = v62[1];
            v62 += 4;
            v64 -= 8;
            *(v63 - 2) = v65;
            *(v63 - 1) = v66;
            *v63 = v67;
            v63[1] = v68;
            v63 += 4;
          }
          while ( v64 );
          if ( v41 == (v41 & 0x3FFFFFFFFFFFFFF8LL) )
            goto LABEL_32;
        }
      }
    }
    else
    {
      v42 = (_QWORD *)(v32 + 8);
    }
    do
    {
      v43 = *(_QWORD *)v6;
      v6 += 8;
      *v42++ = v43;
    }
    while ( v38 != v6 );
LABEL_32:
    v39 += (v40 & 0xFFFFFFFFFFFFFFF8LL) + 8;
  }
  if ( v22 )
    operator delete(v22);
  *a1 = v23;
  a1[1] = v39;
  a1[2] = v23 + 8 * v20;
}

