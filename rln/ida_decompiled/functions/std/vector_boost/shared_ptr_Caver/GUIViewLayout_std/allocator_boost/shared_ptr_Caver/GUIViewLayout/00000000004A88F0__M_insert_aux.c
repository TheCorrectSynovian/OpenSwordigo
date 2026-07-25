/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A88F0
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver13GUIViewLayoutEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIViewLayout>*,std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>>,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callers: 1
 *   0x0000000000201600  std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIViewLayout>*,std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>>,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callees: 9
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202FE0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 134
 *   insn=0x00000000004A8914 string=0x00000000004A8918 "?"
 *   insn=0x00000000004A8920 string=0x00000000004A8924 "_"
 *   insn=0x00000000004A8924 string=0x00000000004A8928 "*"
 *   insn=0x00000000004A8928 string=0x00000000004A892C "+)"
 *   insn=0x00000000004A8930 string=0x00000000004A8934 "K"
 *   insn=0x00000000004A8930 string=0x00000000004A8940 ")A"
 *   insn=0x00000000004A8934 string=0x00000000004A8938 "k"
 *   insn=0x00000000004A8938 string=0x00000000004A893C "K"
 *   insn=0x00000000004A894C string=0x00000000004A895C "\t"
 *   insn=0x00000000004A8950 string=0x00000000004A8954 ")"
 *   insn=0x00000000004A895C string=0x00000000004A8960 "?"
 *   insn=0x00000000004A8960 string=0x00000000004A8964 "+"
 *   insn=0x00000000004A8964 string=0x00000000004A8968 ")"
 *   insn=0x00000000004A8968 string=0x00000000004A896C "7"
 *   insn=0x00000000004A8970 string=0x00000000004A8974 "\t"
 *   insn=0x00000000004A8974 string=0x00000000004A8978 "\n@"
 *   insn=0x00000000004A897C string=0x00000000004A8980 "K"
 *   insn=0x00000000004A8980 string=0x00000000004A8984 "k"
 *   insn=0x00000000004A8984 string=0x00000000004A8988 "K"
 *   insn=0x00000000004A898C string=0x00000000004A8990 "\t)"
 *   insn=0x00000000004A8990 string=0x00000000004A8994 "5"
 *   insn=0x00000000004A8998 string=0x00000000004A899C ""
 *   insn=0x00000000004A89A8 string=0x00000000004A89AC "\t@"
 *   insn=0x00000000004A89B8 string=0x00000000004A89BC ""
 *   insn=0x00000000004A89C8 string=0x00000000004A89CC "@"
 *   insn=0x00000000004A89E8 string=0x00000000004A89F8 "u"
 *   insn=0x00000000004A89EC string=0x00000000004A89F0 ""
 *   insn=0x00000000004A89F8 string=0x00000000004A89FC "vR"
 *   insn=0x00000000004A89FC string=0x00000000004A8A00 "5"
 *   insn=0x00000000004A8A00 string=0x00000000004A8A44 "t"
 *   insn=0x00000000004A8A04 string=0x00000000004A8A08 ""
 *   insn=0x00000000004A8A14 string=0x00000000004A8A18 "\t@"
 *   insn=0x00000000004A8A24 string=0x00000000004A8A28 ""
 *   insn=0x00000000004A8A34 string=0x00000000004A8A38 "@"
 *   insn=0x00000000004A8A48 string=0x00000000004A8A4C ""
 *   insn=0x00000000004A8A5C string=0x00000000004A8A60 "\t@"
 *   insn=0x00000000004A8A68 string=0x00000000004A8A6C ""
 *   insn=0x00000000004A8A94 string=0x00000000004A8A98 " "
 *   insn=0x00000000004A8A9C string=0x00000000004A8AA0 "("
 *   insn=0x00000000004A8AA0 string=0x00000000004A8AA4 ""
 *   insn=0x00000000004A8AA4 string=0x00000000004A8AA8 "\t"
 *   insn=0x00000000004A8AA8 string=0x00000000004A8AAC "("
 *   insn=0x00000000004A8AAC string=0x00000000004A8AB0 "\n"
 *   insn=0x00000000004A8AB4 string=0x00000000004A8AB8 "_"
 *   insn=0x00000000004A8ABC string=0x00000000004A8AC0 ")"
 *   insn=0x00000000004A8AC0 string=0x00000000004A8AC4 "?"
 *   insn=0x00000000004A8AC8 string=0x00000000004A8ACC "7"
 *   insn=0x00000000004A8AE0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A8AF0 string=0x00000000004A8AF4 "i"
 *   insn=0x00000000004A8AF4 string=0x00000000004A8AF8 ")"
 *   insn=0x00000000004A8AFC string=0x00000000004A8B00 "("
 *   insn=0x00000000004A8B04 string=0x00000000004A8B08 "("
 *   insn=0x00000000004A8B0C string=0x00000000004A8B10 "\t"
 *   insn=0x00000000004A8B10 string=0x00000000004A8B14 ")"
 *   insn=0x00000000004A8B14 string=0x00000000004A8B18 "\t"
 *   insn=0x00000000004A8B2C string=0x00000000004A8B30 "hB"
 *   insn=0x00000000004A8B34 string=0x00000000004A8B38 "K"
 *   insn=0x00000000004A8B40 string=0x00000000004A8B44 "K"
 *   insn=0x00000000004A8B4C string=0x00000000004A8B50 "l"
 *   insn=0x00000000004A8B4C string=0x00000000004A8B5C "JA"
 *   insn=0x00000000004A8B54 string=0x00000000004A8B58 "l"
 *   insn=0x00000000004A8B5C string=0x00000000004A8B60 "_"
 *   insn=0x00000000004A8B60 string=0x00000000004A8B64 ")A"
 *   insn=0x00000000004A8B64 string=0x00000000004A8B68 "a"
 *   insn=0x00000000004A8B68 string=0x00000000004A8B6C ""
 *   insn=0x00000000004A8B6C string=0x00000000004A8B70 ""
 *   insn=0x00000000004A8B74 string=0x00000000004A8B78 "A"
 *   insn=0x00000000004A8B80 string=0x00000000004A8B84 "?"
 *   insn=0x00000000004A8B88 string=0x00000000004A8B8C "(C"
 *   insn=0x00000000004A8B94 string=0x00000000004A8B98 "K"
 *   insn=0x00000000004A8B98 string=0x00000000004A8B9C "+"
 *   insn=0x00000000004A8B9C string=0x00000000004A8BA0 "K"
 *   insn=0x00000000004A8BA0 string=0x00000000004A8BA4 "+"
 *   insn=0x00000000004A8BA8 string=0x00000000004A8BAC "l"
 *   insn=0x00000000004A8BA8 string=0x00000000004A8BB8 "JA"
 *   insn=0x00000000004A8BB0 string=0x00000000004A8BB4 "l"
 *   insn=0x00000000004A8BB8 string=0x00000000004A8BBC "_"
 *   insn=0x00000000004A8BBC string=0x00000000004A8BC0 ")A"
 *   insn=0x00000000004A8BC4 string=0x00000000004A8BC8 ""
 *   insn=0x00000000004A8BC8 string=0x00000000004A8BCC ""
 *   insn=0x00000000004A8BCC string=0x00000000004A8BD0 ""
 *   insn=0x00000000004A8BDC string=0x00000000004A8C38 "v"
 *   insn=0x00000000004A8BE0 string=0x00000000004A8BE4 "3"
 *   insn=0x00000000004A8BE4 string=0x00000000004A8BE8 "h"
 *   insn=0x00000000004A8BE8 string=0x00000000004A8BEC ""
 *   insn=0x00000000004A8BEC string=0x00000000004A8BF0 "h"
 *   insn=0x00000000004A8BF4 string=0x00000000004A8BF8 "h"
 *   insn=0x00000000004A8BFC string=0x00000000004A8C00 "\t@"
 *   insn=0x00000000004A8C04 string=0x00000000004A8C08 "h\n@"
 *   insn=0x00000000004A8C08 string=0x00000000004A8C0C ""
 *   insn=0x00000000004A8C0C string=0x00000000004A8C10 "h\n"
 *   insn=0x00000000004A8C14 string=0x00000000004A8C18 "h"
 *   insn=0x00000000004A8C1C string=0x00000000004A8C20 "@"
 *   insn=0x00000000004A8C28 string=0x00000000004A8C2C "?"
 *   insn=0x00000000004A8C40 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A8C78 string=0x00000000004A8C7C "4"
 *   insn=0x00000000004A8C80 string=0x00000000004A8C84 ""
 *   insn=0x00000000004A8C90 string=0x00000000004A8C94 "\t@"
 *   insn=0x00000000004A8CA0 string=0x00000000004A8CA4 ""
 *   insn=0x00000000004A8CB0 string=0x00000000004A8CB4 "@"
 *   insn=0x00000000004A8CF4 string=0x00000000004A8CF8 "`"
 *   insn=0x00000000004A8CFC string=0x00000000004A8D00 "w"
 *   insn=0x00000000004A8D14 string=0x00000000004A8D18 """
 *   insn=0x00000000004A8D1C string=0x00000000001F5190 "P'"
 *   insn=0x00000000004A8D24 string=0x00000000004A8DB8 ":"
 *   insn=0x00000000004A8D34 string=0x00000000004A8D38 "r"
 *   insn=0x00000000004A8D44 string=0x00000000004A8D48 ""
 *   insn=0x00000000004A8D5C string=0x00000000004A8D60 "c"
 *   insn=0x00000000004A8D74 string=0x00000000004A8D78 ")"
 *   insn=0x00000000004A8D78 string=0x00000000004A8D7C ""
 *   insn=0x00000000004A8D80 string=0x00000000004A8D84 """
 *   insn=0x00000000004A8D8C string=0x00000000004A8D90 "@\t"
 *   insn=0x00000000004A8D90 string=0x00000000004A8D94 "="
 *   insn=0x00000000004A8D98 string=0x00000000004A8D9C "_"
 *   insn=0x00000000004A8DA4 string=0x00000000004A8DA8 "_"
 *   insn=0x00000000004A8DAC string=0x00000000004A8DB0 "@"
 *   insn=0x00000000004A8DD8 string=0x00000000004A8DDC "`"
 *   insn=0x00000000004A8DF0 string=0x00000000004A8DF4 "("
 *   insn=0x00000000004A8E08 string=0x00000000004A8E0C "?"
 *   insn=0x00000000004A8E0C string=0x00000000004A8E10 "L"
 *   insn=0x00000000004A8E14 string=0x00000000004A8E18 "?"
 *   insn=0x00000000004A8E1C string=0x00000000004A8E20 " "
 *   insn=0x00000000004A8E24 string=0x00000000004A8E28 "h"
 *   insn=0x00000000004A8E30 string=0x00000000004A8E34 "w"
 *   insn=0x00000000004A8E38 string=0x00000000004A8E3C "$"
 *   insn=0x00000000004A8E40 string=0x00000000004A8E44 "_"
 *   insn=0x00000000004A8E4C string=0x00000000004A8E50 "_"
 *   insn=0x00000000004A8E54 string=0x00000000004A8E58 "@"
 *   insn=0x00000000004A8E6C string=0x00000000004A8E70 "L"
 *   insn=0x00000000004A8E7C string=0x00000000004A8E80 "`"
 *   insn=0x00000000004A8E98 string=0x00000000004A8E9C "?"
 *   insn=0x00000000004A8EA4 string=0x00000000004A8EA8 "?"
 *   insn=0x00000000004A8EAC string=0x00000000004A8EB0 " "
 *   insn=0x00000000004A8EBC string=0x00000000004A8EC0 "Hh"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::GUIViewLayout>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
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

