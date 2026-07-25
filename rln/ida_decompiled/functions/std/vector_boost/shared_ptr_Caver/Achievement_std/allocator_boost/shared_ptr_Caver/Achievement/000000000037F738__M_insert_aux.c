/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037F738
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Achievement>*,std::vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>>,boost::shared_ptr<Caver::Achievement> const&)
 *
 * Callers: 1
 *   0x00000000001F5C70  std::vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Achievement>*,std::vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>>,boost::shared_ptr<Caver::Achievement> const&)
 *
 * Callees: 9
 *   0x00000000001F4140  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 140
 *   insn=0x000000000037F75C string=0x000000000037F760 "?"
 *   insn=0x000000000037F768 string=0x000000000037F76C "_"
 *   insn=0x000000000037F76C string=0x000000000037F770 "*"
 *   insn=0x000000000037F770 string=0x000000000037F774 "+)"
 *   insn=0x000000000037F778 string=0x000000000037F77C "K"
 *   insn=0x000000000037F778 string=0x000000000037F788 ")A"
 *   insn=0x000000000037F77C string=0x000000000037F780 "k"
 *   insn=0x000000000037F780 string=0x000000000037F784 "K"
 *   insn=0x000000000037F794 string=0x000000000037F7A4 "\t"
 *   insn=0x000000000037F798 string=0x000000000037F79C ")"
 *   insn=0x000000000037F7A4 string=0x000000000037F7A8 "?"
 *   insn=0x000000000037F7A8 string=0x000000000037F7AC "+"
 *   insn=0x000000000037F7AC string=0x000000000037F7B0 ")"
 *   insn=0x000000000037F7B0 string=0x000000000037F7B4 "7"
 *   insn=0x000000000037F7B8 string=0x000000000037F7BC "\t"
 *   insn=0x000000000037F7BC string=0x000000000037F7C0 "\n@"
 *   insn=0x000000000037F7C4 string=0x000000000037F7C8 "K"
 *   insn=0x000000000037F7C8 string=0x000000000037F7CC "k"
 *   insn=0x000000000037F7CC string=0x000000000037F7D0 "K"
 *   insn=0x000000000037F7D4 string=0x000000000037F7D8 "\t)"
 *   insn=0x000000000037F7D8 string=0x000000000037F7DC "5"
 *   insn=0x000000000037F7E0 string=0x000000000037F7E4 ""
 *   insn=0x000000000037F7F0 string=0x000000000037F7F4 "\t@"
 *   insn=0x000000000037F800 string=0x000000000037F804 ""
 *   insn=0x000000000037F810 string=0x000000000037F814 "@"
 *   insn=0x000000000037F830 string=0x000000000037F840 "u"
 *   insn=0x000000000037F834 string=0x000000000037F838 ""
 *   insn=0x000000000037F840 string=0x000000000037F844 "vR"
 *   insn=0x000000000037F844 string=0x000000000037F848 "5"
 *   insn=0x000000000037F848 string=0x000000000037F88C "t"
 *   insn=0x000000000037F84C string=0x000000000037F850 ""
 *   insn=0x000000000037F85C string=0x000000000037F860 "\t@"
 *   insn=0x000000000037F86C string=0x000000000037F870 ""
 *   insn=0x000000000037F87C string=0x000000000037F880 "@"
 *   insn=0x000000000037F890 string=0x000000000037F894 ""
 *   insn=0x000000000037F8A4 string=0x000000000037F8A8 "\t@"
 *   insn=0x000000000037F8B0 string=0x000000000037F8B4 ""
 *   insn=0x000000000037F8DC string=0x000000000037F8E0 " "
 *   insn=0x000000000037F8E4 string=0x000000000037F8E8 "("
 *   insn=0x000000000037F8E8 string=0x000000000037F8EC ""
 *   insn=0x000000000037F8EC string=0x000000000037F8F0 "\t"
 *   insn=0x000000000037F8F0 string=0x000000000037F8F4 "("
 *   insn=0x000000000037F8F4 string=0x000000000037F8F8 "\n"
 *   insn=0x000000000037F8FC string=0x000000000037F900 "_"
 *   insn=0x000000000037F904 string=0x000000000037F908 ")"
 *   insn=0x000000000037F908 string=0x000000000037F90C "?"
 *   insn=0x000000000037F910 string=0x000000000037F914 "7"
 *   insn=0x000000000037F924 string=0x000000000037F928 "."
 *   insn=0x000000000037F928 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000037F938 string=0x000000000037F93C "i"
 *   insn=0x000000000037F93C string=0x000000000037F940 ")"
 *   insn=0x000000000037F944 string=0x000000000037F948 "("
 *   insn=0x000000000037F94C string=0x000000000037F950 "("
 *   insn=0x000000000037F954 string=0x000000000037F958 "\t"
 *   insn=0x000000000037F958 string=0x000000000037F95C ")"
 *   insn=0x000000000037F95C string=0x000000000037F960 "\t"
 *   insn=0x000000000037F974 string=0x000000000037F978 "hB"
 *   insn=0x000000000037F97C string=0x000000000037F980 "K"
 *   insn=0x000000000037F988 string=0x000000000037F98C "K"
 *   insn=0x000000000037F994 string=0x000000000037F998 "l"
 *   insn=0x000000000037F994 string=0x000000000037F9A4 "JA"
 *   insn=0x000000000037F99C string=0x000000000037F9A0 "l"
 *   insn=0x000000000037F9A4 string=0x000000000037F9A8 "_"
 *   insn=0x000000000037F9A8 string=0x000000000037F9AC ")A"
 *   insn=0x000000000037F9AC string=0x000000000037F9B0 "a"
 *   insn=0x000000000037F9B0 string=0x000000000037F9B4 ""
 *   insn=0x000000000037F9B4 string=0x000000000037F9B8 ""
 *   insn=0x000000000037F9BC string=0x000000000037F9C0 "A"
 *   insn=0x000000000037F9C8 string=0x000000000037F9CC "?"
 *   insn=0x000000000037F9D0 string=0x000000000037F9D4 "(C"
 *   insn=0x000000000037F9DC string=0x000000000037F9E0 "K"
 *   insn=0x000000000037F9E0 string=0x000000000037F9E4 "+"
 *   insn=0x000000000037F9E4 string=0x000000000037F9E8 "K"
 *   insn=0x000000000037F9E8 string=0x000000000037F9EC "+"
 *   insn=0x000000000037F9F0 string=0x000000000037F9F4 "l"
 *   insn=0x000000000037F9F0 string=0x000000000037FA00 "JA"
 *   insn=0x000000000037F9F8 string=0x000000000037F9FC "l"
 *   insn=0x000000000037FA00 string=0x000000000037FA04 "_"
 *   insn=0x000000000037FA04 string=0x000000000037FA08 ")A"
 *   insn=0x000000000037FA0C string=0x000000000037FA10 ""
 *   insn=0x000000000037FA10 string=0x000000000037FA14 ""
 *   insn=0x000000000037FA14 string=0x000000000037FA18 ""
 *   insn=0x000000000037FA24 string=0x000000000037FA80 "v"
 *   insn=0x000000000037FA28 string=0x000000000037FA2C "3"
 *   insn=0x000000000037FA2C string=0x000000000037FA30 "h"
 *   insn=0x000000000037FA30 string=0x000000000037FA34 ""
 *   insn=0x000000000037FA34 string=0x000000000037FA38 "h"
 *   insn=0x000000000037FA3C string=0x000000000037FA40 "h"
 *   insn=0x000000000037FA44 string=0x000000000037FA48 "\t@"
 *   insn=0x000000000037FA4C string=0x000000000037FA50 "h\n@"
 *   insn=0x000000000037FA50 string=0x000000000037FA54 ""
 *   insn=0x000000000037FA54 string=0x000000000037FA58 "h\n"
 *   insn=0x000000000037FA5C string=0x000000000037FA60 "h"
 *   insn=0x000000000037FA64 string=0x000000000037FA68 "@"
 *   insn=0x000000000037FA70 string=0x000000000037FA74 "?"
 *   insn=0x000000000037FA84 string=0x000000000037FA88 "\n"
 *   insn=0x000000000037FA88 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037FAC0 string=0x000000000037FAC4 "4"
 *   insn=0x000000000037FAC8 string=0x000000000037FACC ""
 *   insn=0x000000000037FAD8 string=0x000000000037FADC "\t@"
 *   insn=0x000000000037FAE8 string=0x000000000037FAEC ""
 *   insn=0x000000000037FAF8 string=0x000000000037FAFC "@"
 *   insn=0x000000000037FB08 string=0x000000000037FB0C "n"
 *   insn=0x000000000037FB3C string=0x000000000037FB40 "`"
 *   insn=0x000000000037FB44 string=0x000000000037FB48 "w"
 *   insn=0x000000000037FB5C string=0x000000000037FB60 """
 *   insn=0x000000000037FB64 string=0x00000000001F5190 "P'"
 *   insn=0x000000000037FB6C string=0x000000000037FC00 ":"
 *   insn=0x000000000037FB8C string=0x000000000037FB90 ""
 *   insn=0x000000000037FB98 string=0x000000000037FB9C "}"
 *   insn=0x000000000037FBA4 string=0x000000000037FBA8 "c"
 *   insn=0x000000000037FBBC string=0x000000000037FBC0 ")"
 *   insn=0x000000000037FBC0 string=0x000000000037FBC4 ""
 *   insn=0x000000000037FBC8 string=0x000000000037FBCC """
 *   insn=0x000000000037FBCC string=0x000000000037FBD0 "p"
 *   insn=0x000000000037FBD4 string=0x000000000037FBD8 "@\t"
 *   insn=0x000000000037FBD8 string=0x000000000037FBDC "="
 *   insn=0x000000000037FBE0 string=0x000000000037FBE4 "_"
 *   insn=0x000000000037FBEC string=0x000000000037FBF0 "_"
 *   insn=0x000000000037FBF4 string=0x000000000037FBF8 "@"
 *   insn=0x000000000037FC0C string=0x000000000037FC10 "`"
 *   insn=0x000000000037FC20 string=0x000000000037FC24 "`"
 *   insn=0x000000000037FC38 string=0x000000000037FC3C "("
 *   insn=0x000000000037FC44 string=0x000000000037FC48 "R"
 *   insn=0x000000000037FC50 string=0x000000000037FC54 "?"
 *   insn=0x000000000037FC54 string=0x000000000037FC58 "L"
 *   insn=0x000000000037FC5C string=0x000000000037FC60 "?"
 *   insn=0x000000000037FC64 string=0x000000000037FC68 " "
 *   insn=0x000000000037FC6C string=0x000000000037FC70 "h"
 *   insn=0x000000000037FC78 string=0x000000000037FC7C "w"
 *   insn=0x000000000037FC80 string=0x000000000037FC84 "$"
 *   insn=0x000000000037FC88 string=0x000000000037FC8C "_"
 *   insn=0x000000000037FC94 string=0x000000000037FC98 "_"
 *   insn=0x000000000037FC9C string=0x000000000037FCA0 "@"
 *   insn=0x000000000037FCB4 string=0x000000000037FCB8 "L"
 *   insn=0x000000000037FCC4 string=0x000000000037FCC8 "`"
 *   insn=0x000000000037FCE0 string=0x000000000037FCE4 "?"
 *   insn=0x000000000037FCEC string=0x000000000037FCF0 "?"
 *   insn=0x000000000037FCF4 string=0x000000000037FCF8 " "
 *   insn=0x000000000037FD08 string=0x00000000001F4140 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::Achievement>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
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
        sub_565294();
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

