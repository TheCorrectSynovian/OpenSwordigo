/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C6BCC
 * Mangled: _ZNSt6vectorIN5Caver8FontText13CharacterInfoESaIS2_EE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPS2_S4_EEEEvS9_T_SA_St20forward_iterator_tag
 * Demangled: std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>>(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,std::forward_iterator_tag)
 *
 * Callers: 1
 *   0x00000000001F7B80  std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>>(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,std::forward_iterator_tag)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000565294  sub_565294
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 119
 *   insn=0x00000000004C6BF8 string=0x00000000004C6BFC ","
 *   insn=0x00000000004C6C08 string=0x00000000004C6C0C "J"
 *   insn=0x00000000004C6C0C string=0x00000000004C6C10 "+"
 *   insn=0x00000000004C6C14 string=0x00000000004C6C18 "J"
 *   insn=0x00000000004C6C18 string=0x00000000004C6C1C "k}"
 *   insn=0x00000000004C6C1C string=0x00000000004C6C20 "J}"
 *   insn=0x00000000004C6C20 string=0x00000000004C6C24 "_"
 *   insn=0x00000000004C6C28 string=0x00000000004C6CA0 "\n"
 *   insn=0x00000000004C6C30 string=0x00000000004C6C3C ""
 *   insn=0x00000000004C6C3C string=0x00000000004C6C40 ""
 *   insn=0x00000000004C6C44 string=0x00000000004C6C48 "}"
 *   insn=0x00000000004C6C48 string=0x00000000004C6C4C "L"
 *   insn=0x00000000004C6C58 string=0x00000000004C6C5C "k1"
 *   insn=0x00000000004C6C5C string=0x00000000004C6C60 "h"
 *   insn=0x00000000004C6C6C string=0x00000000004C6C70 "k"
 *   insn=0x00000000004C6C74 string=0x00000000004C6C78 "X"
 *   insn=0x00000000004C6C78 string=0x00000000004C6C7C "x"
 *   insn=0x00000000004C6C84 string=0x00000000004C6C88 ""
 *   insn=0x00000000004C6C8C string=0x00000000004C6C90 "T"
 *   insn=0x00000000004C6C90 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C6C98 string=0x00000000004C6C9C "d"
 *   insn=0x00000000004C6C9C string=0x00000000004C6E2C "?"
 *   insn=0x00000000004C6CA0 string=0x00000000004C6CA4 "J"
 *   insn=0x00000000004C6CA4 string=0x00000000004C6CA8 "J}"
 *   insn=0x00000000004C6CA8 string=0x00000000004C6CAC "l"
 *   insn=0x00000000004C6CAC string=0x00000000004C6CB0 """
 *   insn=0x00000000004C6CB4 string=0x00000000004C6CB8 "j"
 *   insn=0x00000000004C6CB8 string=0x00000000004C6CBC "\n"
 *   insn=0x00000000004C6CBC string=0x00000000004C6CC0 ")"
 *   insn=0x00000000004C6CC0 string=0x00000000004C6CC4 "m"
 *   insn=0x00000000004C6CCC string=0x00000000004C6CD0 "N"
 *   insn=0x00000000004C6D04 string=0x00000000004C6D08 "A"
 *   insn=0x00000000004C6D14 string=0x00000000004C6D18 "IQ\t"
 *   insn=0x00000000004C6D1C string=0x00000000004C6D20 "?"
 *   insn=0x00000000004C6D20 string=0x00000000004C6D24 " "
 *   insn=0x00000000004C6D2C string=0x00000000004C6D30 "n"
 *   insn=0x00000000004C6D34 string=0x00000000004C6D38 "`A"
 *   insn=0x00000000004C6D3C string=0x00000000004C6D40 "n"
 *   insn=0x00000000004C6D44 string=0x00000000004C6D48 "n"
 *   insn=0x00000000004C6D54 string=0x00000000004C6D58 "n"
 *   insn=0x00000000004C6D58 string=0x00000000004C6D5C "k"
 *   insn=0x00000000004C6D5C string=0x00000000004C6D60 "a"
 *   insn=0x00000000004C6D74 string=0x00000000004C6D78 " "
 *   insn=0x00000000004C6D80 string=0x00000000004C6D84 "m"
 *   insn=0x00000000004C6D88 string=0x00000000004C6D8C "`A"
 *   insn=0x00000000004C6D90 string=0x00000000004C6D94 "m"
 *   insn=0x00000000004C6D98 string=0x00000000004C6D9C "m"
 *   insn=0x00000000004C6DA8 string=0x00000000004C6DAC "m"
 *   insn=0x00000000004C6DAC string=0x00000000004C6DB0 "k"
 *   insn=0x00000000004C6DB0 string=0x00000000004C6DB4 "a"
 *   insn=0x00000000004C6DBC string=0x00000000004C6DC0 "("
 *   insn=0x00000000004C6DC0 string=0x00000000004C6DC4 "I-"
 *   insn=0x00000000004C6DCC string=0x00000000004C6DD0 "+"
 *   insn=0x00000000004C6DD4 string=0x00000000004C6DE4 "}"
 *   insn=0x00000000004C6DE4 string=0x00000000004C6DE8 ""
 *   insn=0x00000000004C6DE8 string=0x00000000004C6DEC ""
 *   insn=0x00000000004C6DF0 string=0x00000000004C6DF4 ""
 *   insn=0x00000000004C6DF8 string=0x00000000004C6DFC "i"
 *   insn=0x00000000004C6E00 string=0x00000000004C6E04 "`"
 *   insn=0x00000000004C6E08 string=0x00000000004C6E0C "iB"
 *   insn=0x00000000004C6E14 string=0x00000000004C6E18 "i"
 *   insn=0x00000000004C6E18 string=0x00000000004C6E1C "s"
 *   insn=0x00000000004C6E20 string=0x00000000004C6E24 "|"
 *   insn=0x00000000004C6E38 string=0x00000000004C6E3C "*"
 *   insn=0x00000000004C6E3C string=0x00000000004C6E40 "\n"
 *   insn=0x00000000004C6E40 string=0x00000000004C6E44 " A"
 *   insn=0x00000000004C6E48 string=0x00000000004C6E4C "*"
 *   insn=0x00000000004C6E4C string=0x00000000004C6E50 "\n"
 *   insn=0x00000000004C6E50 string=0x00000000004C6E54 "*"
 *   insn=0x00000000004C6E54 string=0x00000000004C6E58 "\n"
 *   insn=0x00000000004C6E58 string=0x00000000004C6E5C "*"
 *   insn=0x00000000004C6E5C string=0x00000000004C6E60 ")"
 *   insn=0x00000000004C6E60 string=0x00000000004C6E64 "?"
 *   insn=0x00000000004C6E64 string=0x00000000004C6E68 "\n"
 *   insn=0x00000000004C6E68 string=0x00000000004C6E6C ""
 *   insn=0x00000000004C6E6C string=0x00000000004C6E70 "a"
 *   insn=0x00000000004C6E78 string=0x00000000004C6E7C "K"
 *   insn=0x00000000004C6E80 string=0x00000000004C6E84 ")"
 *   insn=0x00000000004C6E88 string=0x00000000004C6E8C "@A"
 *   insn=0x00000000004C6E90 string=0x00000000004C6E94 "K"
 *   insn=0x00000000004C6E98 string=0x00000000004C6E9C "K"
 *   insn=0x00000000004C6EA0 string=0x00000000004C6EA4 "K"
 *   insn=0x00000000004C6EA4 string=0x00000000004C6EA8 "J"
 *   insn=0x00000000004C6EA8 string=0x00000000004C6EAC "_"
 *   insn=0x00000000004C6EB0 string=0x00000000004C6EB4 "!"
 *   insn=0x00000000004C6EB8 string=0x00000000004C6EBC "_"
 *   insn=0x00000000004C6EC4 string=0x00000000004C6EC8 "l"
 *   insn=0x00000000004C6ED4 string=0x00000000004C6ED8 "k"
 *   insn=0x00000000004C6F08 string=0x00000000004C6F0C ""
 *   insn=0x00000000004C6F14 string=0x00000000004C6F18 "@"
 *   insn=0x00000000004C6F1C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C6F20 string=0x00000000004C6F24 "_"
 *   insn=0x00000000004C6F2C string=0x00000000004C6F30 "9"
 *   insn=0x00000000004C6F48 string=0x00000000004C6F4C "J"
 *   insn=0x00000000004C6F4C string=0x00000000004C6F50 "l1"
 *   insn=0x00000000004C6F50 string=0x00000000004C6F54 "_"
 *   insn=0x00000000004C6F58 string=0x00000000004C6F5C ""
 *   insn=0x00000000004C6F5C string=0x00000000004C6FBC "?"
 *   insn=0x00000000004C6F60 string=0x00000000004C6F70 "m"
 *   insn=0x00000000004C6F70 string=0x00000000004C6F74 "L}"
 *   insn=0x00000000004C6F74 string=0x00000000004C6F78 "j}"
 *   insn=0x00000000004C6F7C string=0x00000000004C6F80 "k"
 *   insn=0x00000000004C6F80 string=0x00000000004C6F84 ""
 *   insn=0x00000000004C6F84 string=0x00000000004C6F88 "L"
 *   insn=0x00000000004C6F8C string=0x00000000004C6F90 "k"
 *   insn=0x00000000004C6F94 string=0x00000000004C6F98 ""
 *   insn=0x00000000004C6FA4 string=0x00000000004C6FA8 "A"
 *   insn=0x00000000004C6FB0 string=0x00000000004C6FB4 ""
 *   insn=0x00000000004C6FC4 string=0x00000000004C6FD4 "(}"
 *   insn=0x00000000004C6FD4 string=0x00000000004C6FD8 ""
 *   insn=0x00000000004C6FD8 string=0x00000000004C6FDC ""
 *   insn=0x00000000004C6FE0 string=0x00000000004C6FE4 ""
 *   insn=0x00000000004C6FE8 string=0x00000000004C6FEC "i"
 *   insn=0x00000000004C6FF0 string=0x00000000004C6FF4 "`"
 *   insn=0x00000000004C6FF8 string=0x00000000004C6FFC "iB"
 *   insn=0x00000000004C7004 string=0x00000000004C7008 "i"
 *   insn=0x00000000004C7008 string=0x00000000004C700C "s"
 *   insn=0x00000000004C7028 string=0x00000000004C7030 "Gy"
 *   insn=0x00000000004C7028 string=0x0000000000597D94 "vector::_M_range_insert"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall std::vector<Caver::FontText::CharacterInfo>::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo>>>(
        void **a1,
        char *a2,
        char *a3,
        char *a4)
{
  char *v5; // x20
  char *v6; // x19
  char *v8; // x8
  __int64 v9; // x9
  unsigned __int64 v10; // x11
  char *v11; // x9
  unsigned __int64 v12; // x8
  bool v13; // cf
  unsigned __int64 v14; // x8
  int v15; // w11
  unsigned __int64 v16; // x24
  __int64 v17; // x0
  __int64 v18; // x23
  unsigned __int64 v19; // x10
  unsigned __int64 v20; // x12
  char *v21; // x10
  __int64 v22; // x12
  char *v23; // x14
  char v24; // w15
  char *v25; // x16
  long double result; // q0
  char *v27; // x12
  char *v28; // x11
  char *v29; // x13
  __int64 v30; // x14
  char *v31; // x11
  char *v32; // x12
  __int64 v33; // x13
  signed __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x8
  __int64 v37; // x10
  __int64 v38; // x9
  char *v39; // x10
  char v40; // w11
  __int64 v41; // x12
  char *v42; // x10
  __int64 v43; // x11
  char *v44; // x12
  char v45; // w13
  __int64 v46; // x14
  void *v47; // x19
  void *v48; // x0
  __int64 v49; // x10
  unsigned __int64 v50; // kr08_8
  __int64 v51; // x10
  signed __int64 v52; // x11
  char *v53; // x8
  signed __int64 v54; // x8
  __int64 v55; // x9

  v5 = a3;
  v6 = a2;
  if ( a3 != a4 )
  {
    v8 = (char *)a1[1];
    v9 = a4 - a3;
    v10 = 0x8E38E38E38E38E39LL * ((a4 - a3) >> 2);
    if ( 0x8E38E38E38E38E39LL * (((_BYTE *)a1[2] - v8) >> 2) < v10 )
    {
      v11 = (char *)*a1;
      v12 = 0x8E38E38E38E38E39LL * ((v8 - (_BYTE *)*a1) >> 2);
      if ( 0x71C71C71C71C71CLL - v12 < v10 )
        sub_56554C("vector::_M_range_insert");
      if ( v12 >= v10 )
        v10 = v12;
      v13 = __CFADD__(v10, v12);
      v14 = v10 + v12;
      v15 = v13;
      if ( v15 | (v14 > 0x71C71C71C71C71CLL) )
        v16 = 0x71C71C71C71C71CLL;
      else
        v16 = v14;
      if ( v16 )
      {
        if ( v16 > 0x71C71C71C71C71CLL )
          sub_565294(a1, a2, a3);
        v17 = operator new(36 * v16);
        v11 = (char *)*a1;
        v18 = v17;
      }
      else
      {
        v18 = 0;
      }
      v36 = v18;
      if ( v11 != v6 )
      {
        v36 = v18;
        do
        {
          *(_BYTE *)v36 = *v11;
          *(_OWORD *)(v36 + 4) = *(_OWORD *)(v11 + 4);
          *(_DWORD *)(v36 + 20) = *((_DWORD *)v11 + 5);
          *(_DWORD *)(v36 + 24) = *((_DWORD *)v11 + 6);
          v37 = *(_QWORD *)(v11 + 28);
          v11 += 36;
          *(_QWORD *)(v36 + 28) = v37;
          v36 += 36;
        }
        while ( v11 != v6 );
      }
      v38 = 0;
      do
      {
        v39 = &v5[v38];
        v40 = v5[v38];
        v41 = v36 + v38;
        v38 += 36;
        *(_BYTE *)v41 = v40;
        result = *(long double *)(v39 + 4);
        *(long double *)(v41 + 4) = result;
        *(_DWORD *)(v41 + 20) = *((_DWORD *)v39 + 5);
        *(_DWORD *)(v41 + 24) = *((_DWORD *)v39 + 6);
        *(_QWORD *)(v41 + 28) = *(_QWORD *)(v39 + 28);
      }
      while ( v39 + 36 != a4 );
      v42 = (char *)a1[1];
      if ( v42 == v6 )
      {
        v47 = (void *)(v36 + v38);
        v48 = *a1;
        if ( !*a1 )
          goto LABEL_43;
      }
      else
      {
        v43 = 0;
        do
        {
          v44 = &v6[v43];
          v45 = v6[v43];
          v46 = v36 + v43 + v38;
          v43 += 36;
          *(_BYTE *)v46 = v45;
          result = *(long double *)(v44 + 4);
          *(long double *)(v46 + 4) = result;
          *(_DWORD *)(v46 + 20) = *((_DWORD *)v44 + 5);
          *(_DWORD *)(v46 + 24) = *((_DWORD *)v44 + 6);
          *(_QWORD *)(v46 + 28) = *(_QWORD *)(v44 + 28);
        }
        while ( v44 + 36 != v42 );
        v47 = (void *)(v36 + v38 + v43);
        v48 = *a1;
        if ( !*a1 )
          goto LABEL_43;
      }
      operator delete(v48);
LABEL_43:
      *a1 = (void *)v18;
      a1[1] = v47;
      a1[2] = (void *)(v18 + 36 * v16);
      return result;
    }
    v19 = 0x8E38E38E38E38E39LL * ((v8 - a2) >> 2);
    v20 = v10 - v19;
    if ( v10 >= v19 )
    {
      v28 = (char *)a1[1];
      if ( &a3[4 * ((v8 - a2) >> 2)] != a4 )
      {
        v29 = &a3[4 * ((v8 - a2) >> 2)];
        do
        {
          *v28 = *v29;
          result = *(long double *)(v29 + 4);
          *(long double *)(v28 + 4) = result;
          *((_DWORD *)v28 + 5) = *((_DWORD *)v29 + 5);
          *((_DWORD *)v28 + 6) = *((_DWORD *)v29 + 6);
          v30 = *(_QWORD *)(v29 + 28);
          v29 += 36;
          *(_QWORD *)(v28 + 28) = v30;
          v28 += 36;
        }
        while ( v29 != a4 );
        v28 = (char *)a1[1];
      }
      v31 = &v28[36 * v20];
      a1[1] = v31;
      if ( v8 != a2 )
      {
        v32 = a2;
        do
        {
          *v31 = *v32;
          result = *(long double *)(v32 + 4);
          *(long double *)(v31 + 4) = result;
          *((_DWORD *)v31 + 5) = *((_DWORD *)v32 + 5);
          *((_DWORD *)v31 + 6) = *((_DWORD *)v32 + 6);
          v33 = *(_QWORD *)(v32 + 28);
          v32 += 36;
          *(_QWORD *)(v31 + 28) = v33;
          v31 += 36;
        }
        while ( v32 != v8 );
        v31 = (char *)a1[1];
      }
      a1[1] = &v31[4 * ((v8 - a2) >> 2)];
      if ( 4 * ((v8 - a2) >> 2) >= 1 )
      {
        v34 = 4 * ((v8 - a2) >> 2) / 0x24uLL + 1;
        do
        {
          --v34;
          *((_DWORD *)v6 + 4) = *((_DWORD *)v5 + 4);
          result = *(long double *)v5;
          *(_OWORD *)v6 = *(_OWORD *)v5;
          *(_QWORD *)(v6 + 20) = *(_QWORD *)(v5 + 20);
          v35 = *(_QWORD *)(v5 + 28);
          v5 += 36;
          *(_QWORD *)(v6 + 28) = v35;
          v6 += 36;
        }
        while ( v34 > 1 );
      }
    }
    else
    {
      v21 = &v8[-4 * ((a4 - a3) >> 2)];
      if ( v9 )
      {
        v22 = 0;
        do
        {
          v23 = &v21[v22];
          v24 = v21[v22];
          v25 = &v8[v22];
          v22 += 36;
          *v25 = v24;
          result = *(long double *)(v23 + 4);
          *(long double *)(v25 + 4) = result;
          *((_DWORD *)v25 + 5) = *((_DWORD *)v23 + 5);
          *((_DWORD *)v25 + 6) = *((_DWORD *)v23 + 6);
          *(_QWORD *)(v25 + 28) = *(_QWORD *)(v23 + 28);
        }
        while ( 4 * ((a4 - a3) >> 2) != v22 );
        v27 = (char *)a1[1];
      }
      else
      {
        v27 = (char *)a1[1];
      }
      v49 = v21 - a2;
      a1[1] = &v27[4 * ((a4 - a3) >> 2)];
      if ( v49 >= 1 )
      {
        v50 = v49;
        v51 = -4 * ((a4 - a3) >> 2);
        v52 = v50 / 0x24 + 1;
        v53 = v8 - 36;
        do
        {
          --v52;
          *((_DWORD *)v53 + 4) = *(_DWORD *)&v53[v51 + 16];
          result = *(long double *)&v53[v51];
          *(long double *)v53 = result;
          *(_QWORD *)(v53 + 20) = *(_QWORD *)&v53[v51 + 20];
          *(_QWORD *)(v53 + 28) = *(_QWORD *)&v53[v51 + 28];
          v53 -= 36;
        }
        while ( v52 > 1 );
      }
      if ( v9 >= 1 )
      {
        v54 = v9 / 0x24uLL + 1;
        do
        {
          --v54;
          *((_DWORD *)v6 + 4) = *((_DWORD *)v5 + 4);
          result = *(long double *)v5;
          *(_OWORD *)v6 = *(_OWORD *)v5;
          *(_QWORD *)(v6 + 20) = *(_QWORD *)(v5 + 20);
          v55 = *(_QWORD *)(v5 + 28);
          v5 += 36;
          *(_QWORD *)(v6 + 28) = v55;
          v6 += 36;
        }
        while ( v54 > 1 );
      }
    }
  }
  return result;
}

