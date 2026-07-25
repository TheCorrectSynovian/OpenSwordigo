/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045E850
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver13ObjectLibraryEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>>,boost::shared_ptr<Caver::ObjectLibrary> const&)
 *
 * Callers: 1
 *   0x0000000000200210  std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>>,boost::shared_ptr<Caver::ObjectLibrary> const&)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 119
 *   insn=0x000000000045E874 string=0x000000000045E878 "?"
 *   insn=0x000000000045E880 string=0x000000000045E884 "_"
 *   insn=0x000000000045E884 string=0x000000000045E888 "*"
 *   insn=0x000000000045E888 string=0x000000000045E88C "+)"
 *   insn=0x000000000045E890 string=0x000000000045E894 "K"
 *   insn=0x000000000045E890 string=0x000000000045E8A0 ")A"
 *   insn=0x000000000045E894 string=0x000000000045E898 "k"
 *   insn=0x000000000045E898 string=0x000000000045E89C "K"
 *   insn=0x000000000045E8AC string=0x000000000045E8BC "\t"
 *   insn=0x000000000045E8B0 string=0x000000000045E8B4 ")"
 *   insn=0x000000000045E8BC string=0x000000000045E8C0 "?"
 *   insn=0x000000000045E8C0 string=0x000000000045E8C4 "+"
 *   insn=0x000000000045E8C4 string=0x000000000045E8C8 ")"
 *   insn=0x000000000045E8C8 string=0x000000000045E8CC "7"
 *   insn=0x000000000045E8D0 string=0x000000000045E8D4 "\t"
 *   insn=0x000000000045E8D4 string=0x000000000045E8D8 "\n@"
 *   insn=0x000000000045E8DC string=0x000000000045E8E0 "K"
 *   insn=0x000000000045E8E0 string=0x000000000045E8E4 "k"
 *   insn=0x000000000045E8E4 string=0x000000000045E8E8 "K"
 *   insn=0x000000000045E8EC string=0x000000000045E8F0 "\t)"
 *   insn=0x000000000045E8F0 string=0x000000000045E8F4 "5"
 *   insn=0x000000000045E8F8 string=0x000000000045E8FC ""
 *   insn=0x000000000045E908 string=0x000000000045E90C "\t@"
 *   insn=0x000000000045E918 string=0x000000000045E91C ""
 *   insn=0x000000000045E928 string=0x000000000045E92C "@"
 *   insn=0x000000000045E948 string=0x000000000045E958 "u"
 *   insn=0x000000000045E94C string=0x000000000045E950 ""
 *   insn=0x000000000045E958 string=0x000000000045E95C "vR"
 *   insn=0x000000000045E95C string=0x000000000045E960 "5"
 *   insn=0x000000000045E960 string=0x000000000045E9A4 "t"
 *   insn=0x000000000045E964 string=0x000000000045E968 ""
 *   insn=0x000000000045E974 string=0x000000000045E978 "\t@"
 *   insn=0x000000000045E984 string=0x000000000045E988 ""
 *   insn=0x000000000045E994 string=0x000000000045E998 "@"
 *   insn=0x000000000045E9A8 string=0x000000000045E9AC ""
 *   insn=0x000000000045E9BC string=0x000000000045E9C0 "\t@"
 *   insn=0x000000000045E9C8 string=0x000000000045E9CC ""
 *   insn=0x000000000045E9F4 string=0x000000000045E9F8 " "
 *   insn=0x000000000045E9FC string=0x000000000045EA00 "("
 *   insn=0x000000000045EA00 string=0x000000000045EA04 ""
 *   insn=0x000000000045EA04 string=0x000000000045EA08 "\t"
 *   insn=0x000000000045EA08 string=0x000000000045EA0C "("
 *   insn=0x000000000045EA0C string=0x000000000045EA10 "\n"
 *   insn=0x000000000045EA14 string=0x000000000045EA18 "_"
 *   insn=0x000000000045EA1C string=0x000000000045EA20 ")"
 *   insn=0x000000000045EA20 string=0x000000000045EA24 "?"
 *   insn=0x000000000045EA28 string=0x000000000045EA2C "7"
 *   insn=0x000000000045EA40 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000045EA50 string=0x000000000045EA54 "i"
 *   insn=0x000000000045EA54 string=0x000000000045EA58 ")"
 *   insn=0x000000000045EA5C string=0x000000000045EA60 "("
 *   insn=0x000000000045EA64 string=0x000000000045EA68 "("
 *   insn=0x000000000045EA6C string=0x000000000045EA70 "\t"
 *   insn=0x000000000045EA70 string=0x000000000045EA74 ")"
 *   insn=0x000000000045EA74 string=0x000000000045EA78 "\t"
 *   insn=0x000000000045EA8C string=0x000000000045EA90 "hB"
 *   insn=0x000000000045EA94 string=0x000000000045EA98 "K"
 *   insn=0x000000000045EAA0 string=0x000000000045EAA4 "K"
 *   insn=0x000000000045EAAC string=0x000000000045EAB0 "l"
 *   insn=0x000000000045EAAC string=0x000000000045EABC "JA"
 *   insn=0x000000000045EAB4 string=0x000000000045EAB8 "l"
 *   insn=0x000000000045EABC string=0x000000000045EAC0 "_"
 *   insn=0x000000000045EAC0 string=0x000000000045EAC4 ")A"
 *   insn=0x000000000045EAC4 string=0x000000000045EAC8 "a"
 *   insn=0x000000000045EAC8 string=0x000000000045EACC ""
 *   insn=0x000000000045EACC string=0x000000000045EAD0 ""
 *   insn=0x000000000045EAD4 string=0x000000000045EAD8 "A"
 *   insn=0x000000000045EAE0 string=0x000000000045EAE4 "?"
 *   insn=0x000000000045EAE8 string=0x000000000045EAEC "(C"
 *   insn=0x000000000045EAF4 string=0x000000000045EAF8 "K"
 *   insn=0x000000000045EAF8 string=0x000000000045EAFC "+"
 *   insn=0x000000000045EAFC string=0x000000000045EB00 "K"
 *   insn=0x000000000045EB00 string=0x000000000045EB04 "+"
 *   insn=0x000000000045EB08 string=0x000000000045EB0C "l"
 *   insn=0x000000000045EB08 string=0x000000000045EB18 "JA"
 *   insn=0x000000000045EB10 string=0x000000000045EB14 "l"
 *   insn=0x000000000045EB18 string=0x000000000045EB1C "_"
 *   insn=0x000000000045EB1C string=0x000000000045EB20 ")A"
 *   insn=0x000000000045EB24 string=0x000000000045EB28 ""
 *   insn=0x000000000045EB28 string=0x000000000045EB2C ""
 *   insn=0x000000000045EB2C string=0x000000000045EB30 ""
 *   insn=0x000000000045EB3C string=0x000000000045EB98 "v"
 *   insn=0x000000000045EB40 string=0x000000000045EB44 "3"
 *   insn=0x000000000045EB44 string=0x000000000045EB48 "h"
 *   insn=0x000000000045EB48 string=0x000000000045EB4C ""
 *   insn=0x000000000045EB4C string=0x000000000045EB50 "h"
 *   insn=0x000000000045EB54 string=0x000000000045EB58 "h"
 *   insn=0x000000000045EB5C string=0x000000000045EB60 "\t@"
 *   insn=0x000000000045EB64 string=0x000000000045EB68 "h\n@"
 *   insn=0x000000000045EB68 string=0x000000000045EB6C ""
 *   insn=0x000000000045EB6C string=0x000000000045EB70 "h\n"
 *   insn=0x000000000045EB74 string=0x000000000045EB78 "h"
 *   insn=0x000000000045EB7C string=0x000000000045EB80 "@"
 *   insn=0x000000000045EB88 string=0x000000000045EB8C "?"
 *   insn=0x000000000045EBA0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045EBD8 string=0x000000000045EBDC "4"
 *   insn=0x000000000045EBE0 string=0x000000000045EBE4 ""
 *   insn=0x000000000045EBF0 string=0x000000000045EBF4 "\t@"
 *   insn=0x000000000045EC00 string=0x000000000045EC04 ""
 *   insn=0x000000000045EC10 string=0x000000000045EC14 "@"
 *   insn=0x000000000045EC20 string=0x000000000045EC24 "("
 *   insn=0x000000000045EC48 string=0x000000000045EC4C "vB"
 *   insn=0x000000000045EC54 string=0x000000000045EC58 "\t"
 *   insn=0x000000000045EC58 string=0x000000000045EC5C "?"
 *   insn=0x000000000045EC5C string=0x000000000045EC60 "+"
 *   insn=0x000000000045EC60 string=0x000000000045EC64 "("
 *   insn=0x000000000045EC70 string=0x000000000045EC74 "\n"
 *   insn=0x000000000045EC74 string=0x000000000045EC78 "J"
 *   insn=0x000000000045EC78 string=0x000000000045EC7C "\n"
 *   insn=0x000000000045EC84 string=0x000000000045EC88 "5"
 *   insn=0x000000000045EC8C string=0x000000000045EC90 ""
 *   insn=0x000000000045ECA0 string=0x000000000045ECA4 "\t@"
 *   insn=0x000000000045ECAC string=0x000000000045ECB0 ""
 *   insn=0x000000000045ECC0 string=0x000000000045ECC4 "@"
 *   insn=0x000000000045ECF0 string=0x000000000045ECF4 "4"
 *   insn=0x000000000045ECF8 string=0x000000000045ECFC ""
 *   insn=0x000000000045ED0C string=0x000000000045ED10 "\t@"
 *   insn=0x000000000045ED18 string=0x000000000045ED1C ""
 *   insn=0x000000000045ED2C string=0x000000000045ED30 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::ObjectLibrary>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
{
  _QWORD *v4; // x9
  char *v7; // x8
  __int64 v8; // x10
  _QWORD *v9; // x20
  __int64 v10; // x22
  __int64 v11; // x23
  char *v12; // x24
  __int64 v13; // x9
  __int64 v14; // t1
  __int64 v15; // x10
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  char *v24; // x24
  __int64 v25; // x8
  __int64 v26; // x9
  bool v27; // cf
  unsigned __int64 v28; // x8
  int v29; // w9
  unsigned __int64 v30; // x23
  __int64 v31; // x21
  _QWORD *v32; // x9
  __int64 v33; // x8
  char *v34; // x22
  unsigned __int64 v35; // x8
  __int64 v36; // x9
  _QWORD *v37; // x12
  __int64 v38; // x11
  __int64 v39; // x10
  char *v40; // x25
  unsigned __int64 v41; // x24
  _QWORD *v42; // x9
  char *v43; // x10
  __int64 v44; // x11
  _QWORD *v45; // x19
  __int64 v46; // x8
  __int64 v47; // x8

  v4 = (_QWORD *)a1[1];
  if ( v4 == (_QWORD *)a1[2] )
  {
    v24 = (char *)*a1;
    v25 = ((__int64)v4 - *a1) >> 4;
    if ( v4 == (_QWORD *)*a1 )
      v26 = 1;
    else
      v26 = ((__int64)v4 - *a1) >> 4;
    v27 = __CFADD__(v26, v25);
    v28 = v26 + v25;
    v29 = v27;
    if ( v29 | (v28 >> 60 != 0) )
      v30 = 0xFFFFFFFFFFFFFFFLL;
    else
      v30 = v28;
    if ( v30 )
    {
      if ( v30 >> 60 )
        sub_565294(a1, a2, a3);
      v31 = operator new(16 * v30);
    }
    else
    {
      v31 = 0;
    }
    v32 = (_QWORD *)(v31 + 16 * ((a2 - v24) >> 4));
    *v32 = *a3;
    v33 = a3[1];
    v32[1] = v33;
    if ( v33 )
      ++*(_QWORD *)(v33 + 8);
    v34 = (char *)*a1;
    v35 = v31;
    if ( (char *)*a1 != a2 )
    {
      v36 = 0;
      do
      {
        v37 = (_QWORD *)(v31 + v36);
        *v37 = *(_QWORD *)&v34[v36];
        v38 = *(_QWORD *)&v34[v36 + 8];
        v37[1] = v38;
        if ( v38 )
          ++*(_QWORD *)(v38 + 8);
        v39 = (__int64)&v34[v36 + 16];
        v36 += 16;
      }
      while ( (char *)v39 != a2 );
      v35 = v31 + ((a2 - 16 - v34) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    v40 = (char *)a1[1];
    v41 = v35 + 16;
    if ( v40 != a2 )
    {
      v42 = (_QWORD *)(v35 + 16);
      v43 = a2;
      do
      {
        *v42 = *(_QWORD *)v43;
        v44 = *((_QWORD *)v43 + 1);
        v42[1] = v44;
        if ( v44 )
          ++*(_QWORD *)(v44 + 8);
        v43 += 16;
        v42 += 2;
      }
      while ( v43 != v40 );
      v41 += ((v40 - 16 - a2) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    if ( v34 != v40 )
    {
      do
      {
        v45 = (_QWORD *)*((_QWORD *)v34 + 1);
        if ( v45 )
        {
          v46 = v45[1] - 1LL;
          v45[1] = v46;
          if ( !v46 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
            v47 = v45[2] - 1LL;
            v45[2] = v47;
            if ( !v47 )
              (*(void (__fastcall **)(_QWORD *))(*v45 + 24LL))(v45);
          }
        }
        v34 += 16;
      }
      while ( v40 != v34 );
      v34 = (char *)*a1;
    }
    if ( v34 )
      operator delete(v34);
    *a1 = v31;
    a1[1] = v41;
    a1[2] = v31 + 16 * v30;
  }
  else
  {
    v7 = (char *)(v4 - 2);
    v8 = *(v4 - 1);
    *v4 = *(v4 - 2);
    v4[1] = v8;
    if ( v8 )
      ++*(_QWORD *)(v8 + 8);
    a1[1] = (__int64)(v4 + 2);
    v10 = *a3;
    v9 = (_QWORD *)a3[1];
    if ( v9 )
      ++v9[1];
    if ( v7 - a2 >= 1 )
    {
      v11 = ((unsigned __int64)(v7 - a2) >> 4) + 1;
      v12 = (char *)(v4 - 2);
      do
      {
        v14 = *((_QWORD *)v12 - 2);
        v12 -= 16;
        v13 = v14;
        v15 = *((_QWORD *)v12 + 1);
        if ( v15 )
          ++*(_QWORD *)(v15 + 8);
        v16 = (_QWORD *)*((_QWORD *)v7 + 1);
        *(_QWORD *)v7 = v13;
        *((_QWORD *)v7 + 1) = v15;
        if ( v16 )
        {
          v17 = v16[1] - 1LL;
          v16[1] = v17;
          if ( !v17 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
            v18 = v16[2] - 1LL;
            v16[2] = v18;
            if ( !v18 )
              (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
          }
        }
        --v11;
        v7 = v12;
      }
      while ( v11 > 1 );
    }
    if ( v9 )
      ++v9[1];
    v19 = (_QWORD *)*((_QWORD *)a2 + 1);
    *(_QWORD *)a2 = v10;
    *((_QWORD *)a2 + 1) = v9;
    if ( v19 )
    {
      v20 = v19[1] - 1LL;
      v19[1] = v20;
      if ( !v20 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v21 = v19[2] - 1LL;
        v19[2] = v21;
        if ( !v21 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
    if ( v9 )
    {
      v22 = v9[1] - 1LL;
      v9[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v23 = v9[2] - 1LL;
        v9[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
  }
}

