/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B171C
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver11GuideTargetEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GuideTarget>*,std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>>,boost::shared_ptr<Caver::GuideTarget> const&)
 *
 * Callers: 1
 *   0x0000000000200BF0  std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GuideTarget>*,std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>>,boost::shared_ptr<Caver::GuideTarget> const&)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 145
 *   insn=0x00000000003B1740 string=0x00000000003B1744 "?"
 *   insn=0x00000000003B174C string=0x00000000003B1750 "_"
 *   insn=0x00000000003B1750 string=0x00000000003B1754 "*"
 *   insn=0x00000000003B1754 string=0x00000000003B1758 "+)"
 *   insn=0x00000000003B175C string=0x00000000003B1760 "K"
 *   insn=0x00000000003B175C string=0x00000000003B176C ")A"
 *   insn=0x00000000003B1760 string=0x00000000003B1764 "k"
 *   insn=0x00000000003B1764 string=0x00000000003B1768 "K"
 *   insn=0x00000000003B1778 string=0x00000000003B1788 "\t"
 *   insn=0x00000000003B177C string=0x00000000003B1780 ")"
 *   insn=0x00000000003B1788 string=0x00000000003B178C "?"
 *   insn=0x00000000003B178C string=0x00000000003B1790 "+"
 *   insn=0x00000000003B1790 string=0x00000000003B1794 ")"
 *   insn=0x00000000003B1794 string=0x00000000003B1798 "7"
 *   insn=0x00000000003B179C string=0x00000000003B17A0 "\t"
 *   insn=0x00000000003B17A0 string=0x00000000003B17A4 "\n@"
 *   insn=0x00000000003B17A8 string=0x00000000003B17AC "K"
 *   insn=0x00000000003B17AC string=0x00000000003B17B0 "k"
 *   insn=0x00000000003B17B0 string=0x00000000003B17B4 "K"
 *   insn=0x00000000003B17B8 string=0x00000000003B17BC "\t)"
 *   insn=0x00000000003B17BC string=0x00000000003B17C0 "5"
 *   insn=0x00000000003B17C4 string=0x00000000003B17C8 ""
 *   insn=0x00000000003B17D4 string=0x00000000003B17D8 "\t@"
 *   insn=0x00000000003B17E4 string=0x00000000003B17E8 ""
 *   insn=0x00000000003B17F4 string=0x00000000003B17F8 "@"
 *   insn=0x00000000003B1814 string=0x00000000003B1824 "u"
 *   insn=0x00000000003B1818 string=0x00000000003B181C ""
 *   insn=0x00000000003B1824 string=0x00000000003B1828 "vR"
 *   insn=0x00000000003B1828 string=0x00000000003B182C "5"
 *   insn=0x00000000003B182C string=0x00000000003B1870 "t"
 *   insn=0x00000000003B1830 string=0x00000000003B1834 ""
 *   insn=0x00000000003B1840 string=0x00000000003B1844 "\t@"
 *   insn=0x00000000003B1850 string=0x00000000003B1854 ""
 *   insn=0x00000000003B1860 string=0x00000000003B1864 "@"
 *   insn=0x00000000003B1874 string=0x00000000003B1878 ""
 *   insn=0x00000000003B1888 string=0x00000000003B188C "\t@"
 *   insn=0x00000000003B1894 string=0x00000000003B1898 ""
 *   insn=0x00000000003B18C0 string=0x00000000003B18C4 " "
 *   insn=0x00000000003B18C8 string=0x00000000003B18CC "("
 *   insn=0x00000000003B18CC string=0x00000000003B18D0 ""
 *   insn=0x00000000003B18D0 string=0x00000000003B18D4 "\t"
 *   insn=0x00000000003B18D4 string=0x00000000003B18D8 "("
 *   insn=0x00000000003B18D8 string=0x00000000003B18DC "\n"
 *   insn=0x00000000003B18E0 string=0x00000000003B18E4 "_"
 *   insn=0x00000000003B18E8 string=0x00000000003B18EC ")"
 *   insn=0x00000000003B18EC string=0x00000000003B18F0 "?"
 *   insn=0x00000000003B18F4 string=0x00000000003B18F8 "7"
 *   insn=0x00000000003B1908 string=0x00000000003B190C "5"
 *   insn=0x00000000003B190C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B191C string=0x00000000003B1920 "i"
 *   insn=0x00000000003B1920 string=0x00000000003B1924 ")"
 *   insn=0x00000000003B1928 string=0x00000000003B192C "("
 *   insn=0x00000000003B1930 string=0x00000000003B1934 "("
 *   insn=0x00000000003B1938 string=0x00000000003B193C "\t"
 *   insn=0x00000000003B193C string=0x00000000003B1940 ")"
 *   insn=0x00000000003B1940 string=0x00000000003B1944 "\t"
 *   insn=0x00000000003B1958 string=0x00000000003B195C "hB"
 *   insn=0x00000000003B1960 string=0x00000000003B1964 "K"
 *   insn=0x00000000003B196C string=0x00000000003B1970 "K"
 *   insn=0x00000000003B1978 string=0x00000000003B197C "l"
 *   insn=0x00000000003B1978 string=0x00000000003B1988 "JA"
 *   insn=0x00000000003B1980 string=0x00000000003B1984 "l"
 *   insn=0x00000000003B1988 string=0x00000000003B198C "_"
 *   insn=0x00000000003B198C string=0x00000000003B1990 ")A"
 *   insn=0x00000000003B1990 string=0x00000000003B1994 "a"
 *   insn=0x00000000003B1994 string=0x00000000003B1998 ""
 *   insn=0x00000000003B1998 string=0x00000000003B199C ""
 *   insn=0x00000000003B19A0 string=0x00000000003B19A4 "A"
 *   insn=0x00000000003B19AC string=0x00000000003B19B0 "?"
 *   insn=0x00000000003B19B4 string=0x00000000003B19B8 "(C"
 *   insn=0x00000000003B19C0 string=0x00000000003B19C4 "K"
 *   insn=0x00000000003B19C4 string=0x00000000003B19C8 "+"
 *   insn=0x00000000003B19C8 string=0x00000000003B19CC "K"
 *   insn=0x00000000003B19CC string=0x00000000003B19D0 "+"
 *   insn=0x00000000003B19D4 string=0x00000000003B19D8 "l"
 *   insn=0x00000000003B19D4 string=0x00000000003B19E4 "JA"
 *   insn=0x00000000003B19DC string=0x00000000003B19E0 "l"
 *   insn=0x00000000003B19E4 string=0x00000000003B19E8 "_"
 *   insn=0x00000000003B19E8 string=0x00000000003B19EC ")A"
 *   insn=0x00000000003B19F0 string=0x00000000003B19F4 ""
 *   insn=0x00000000003B19F4 string=0x00000000003B19F8 ""
 *   insn=0x00000000003B19F8 string=0x00000000003B19FC ""
 *   insn=0x00000000003B1A08 string=0x00000000003B1A64 "v"
 *   insn=0x00000000003B1A0C string=0x00000000003B1A10 "3"
 *   insn=0x00000000003B1A10 string=0x00000000003B1A14 "h"
 *   insn=0x00000000003B1A14 string=0x00000000003B1A18 ""
 *   insn=0x00000000003B1A18 string=0x00000000003B1A1C "h"
 *   insn=0x00000000003B1A20 string=0x00000000003B1A24 "h"
 *   insn=0x00000000003B1A28 string=0x00000000003B1A2C "\t@"
 *   insn=0x00000000003B1A30 string=0x00000000003B1A34 "h\n@"
 *   insn=0x00000000003B1A34 string=0x00000000003B1A38 ""
 *   insn=0x00000000003B1A38 string=0x00000000003B1A3C "h\n"
 *   insn=0x00000000003B1A40 string=0x00000000003B1A44 "h"
 *   insn=0x00000000003B1A48 string=0x00000000003B1A4C "@"
 *   insn=0x00000000003B1A54 string=0x00000000003B1A58 "?"
 *   insn=0x00000000003B1A6C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B1AA4 string=0x00000000003B1AA8 "4"
 *   insn=0x00000000003B1AAC string=0x00000000003B1AB0 ""
 *   insn=0x00000000003B1ABC string=0x00000000003B1AC0 "\t@"
 *   insn=0x00000000003B1ACC string=0x00000000003B1AD0 ""
 *   insn=0x00000000003B1ADC string=0x00000000003B1AE0 "@"
 *   insn=0x00000000003B1AEC string=0x00000000003B1AF0 "u?"
 *   insn=0x00000000003B1B08 string=0x00000000003B1B0C "U"
 *   insn=0x00000000003B1B2C string=0x00000000003B1B30 ")"
 *   insn=0x00000000003B1B3C string=0x00000000003B1B40 "(A"
 *   insn=0x00000000003B1B44 string=0x00000000003B1B48 ""
 *   insn=0x00000000003B1B74 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B1B78 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B1B7C string=0x00000000003B1B80 "h\n@"
 *   insn=0x00000000003B1B94 string=0x00000000003B1B98 "h"
 *   insn=0x00000000003B1BA4 string=0x00000000003B1BA8 "h"
 *   insn=0x00000000003B1BB8 string=0x00000000003B1BBC ")=G"
 *   insn=0x00000000003B1BBC string=0x00000000003B1BC0 "!"
 *   insn=0x00000000003B1BC4 string=0x00000000003B1BC8 "\t"
 *   insn=0x00000000003B1BC4 string=0x00000000003B1C7C "\t"
 *   insn=0x00000000003B1BC8 string=0x00000000003B1BCC "*"
 *   insn=0x00000000003B1BCC string=0x00000000003B1BD0 "\n"
 *   insn=0x00000000003B1BD4 string=0x00000000003B1BD8 "?"
 *   insn=0x00000000003B1BD8 string=0x00000000003B1BDC "l"
 *   insn=0x00000000003B1BF4 string=0x00000000003B1BF8 ")=G"
 *   insn=0x00000000003B1BF8 string=0x00000000003B1BFC "!"
 *   insn=0x00000000003B1C00 string=0x00000000003B1C04 "\t"
 *   insn=0x00000000003B1C00 string=0x00000000003B1C3C "\t"
 *   insn=0x00000000003B1C04 string=0x00000000003B1C08 "*"
 *   insn=0x00000000003B1C08 string=0x00000000003B1C0C "\n"
 *   insn=0x00000000003B1C10 string=0x00000000003B1C14 ""
 *   insn=0x00000000003B1C14 string=0x00000000003B1C48 "?"
 *   insn=0x00000000003B1C18 string=0x00000000003B1C1C ")=G"
 *   insn=0x00000000003B1C1C string=0x00000000003B1C20 "!"
 *   insn=0x00000000003B1C24 string=0x00000000003B1C28 "\t"
 *   insn=0x00000000003B1C24 string=0x00000000003B1C5C "\t"
 *   insn=0x00000000003B1C28 string=0x00000000003B1C2C "*"
 *   insn=0x00000000003B1C2C string=0x00000000003B1C30 "\n"
 *   insn=0x00000000003B1C38 string=0x00000000003B1C68 "?"
 *   insn=0x00000000003B1C3C string=0x00000000003B1C40 "*"
 *   insn=0x00000000003B1C40 string=0x00000000003B1C44 "\n"
 *   insn=0x00000000003B1C48 string=0x00000000003B1C4C "l"
 *   insn=0x00000000003B1C5C string=0x00000000003B1C60 "*"
 *   insn=0x00000000003B1C60 string=0x00000000003B1C64 "\n"
 *   insn=0x00000000003B1C7C string=0x00000000003B1C80 "*"
 *   insn=0x00000000003B1C80 string=0x00000000003B1C84 "\n"
 *   insn=0x00000000003B1C84 string=0x00000000003B1C88 "?"
 *   insn=0x00000000003B1C94 string=0x00000000003B1C98 ">."
 *   insn=0x00000000003B1C98 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B1C9C string=0x00000000003B1CA0 "\t?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::GuideTarget>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
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

