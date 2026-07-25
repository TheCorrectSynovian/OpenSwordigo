/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044B5C4
 * Mangled: _ZN5Caver12ModelLibrary12ModelForNameERKSs
 * Demangled: Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F34B0  Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Callees: 19
 *   0x00000000001F5410  Caver::PODLoader::PODLoader(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5EF0  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *   0x00000000001F5F30  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F68F0  Caver::PODLoader::CreateModel(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7950  Caver::PODLoader::ReadModelFromFile(std::string const&)
 *   0x00000000001F7EB0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::find(std::string const&)
 *   0x00000000001FE200  std::map<std::string,boost::shared_ptr<Caver::Model const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::operator[](std::string const&)
 *   0x00000000001FEC00  boost::detail::shared_count::shared_count<Caver::PODLoader>(Caver::PODLoader *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000044BAB0  std::map<std::string,boost::shared_ptr<Caver::Model const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::operator[](std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 121
 *   insn=0x000000000044B5D8 string=0x000000000044B5DC "W"
 *   insn=0x000000000044B5F0 string=0x000000000044B5F4 "/"
 *   insn=0x000000000044B5F4 string=0x00000000001F7EB0 "0'"
 *   insn=0x000000000044B5FC string=0x000000000044B600 "@"
 *   insn=0x000000000044B600 string=0x000000000044B604 ""
 *   insn=0x000000000044B604 string=0x000000000044B608 "h"
 *   insn=0x000000000044B608 string=0x000000000044B60C ""
 *   insn=0x000000000044B60C string=0x000000000044B610 "h"
 *   insn=0x000000000044B614 string=0x000000000044B618 "\t"
 *   insn=0x000000000044B618 string=0x000000000044B61C ")"
 *   insn=0x000000000044B61C string=0x000000000044B620 "\t"
 *   insn=0x000000000044B62C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044B630 string=0x000000000044B634 "w"
 *   insn=0x000000000044B634 string=0x00000000001F5410 "P'"
 *   insn=0x000000000044B644 string=0x000000000044B648 "n"
 *   insn=0x000000000044B65C string=0x000000000044B660 "A\n"
 *   insn=0x000000000044B660 string=0x000000000059524F "POD"
 *   insn=0x000000000044B66C string=0x000000000044B670 "Rm"
 *   insn=0x000000000044B67C string=0x000000000044B680 ","
 *   insn=0x000000000044B680 string=0x00000000001F5F30 "P'"
 *   insn=0x000000000044B68C string=0x00000000001F7950 "0'"
 *   insn=0x000000000044B698 string=0x000000000044B69C "(a"
 *   insn=0x000000000044B6A8 string=0x000000000044B6AC "(a"
 *   insn=0x000000000044B6B4 string=0x000000000044B6B8 "`"
 *   insn=0x000000000044B6C4 string=0x00000000001F68F0 "0'"
 *   insn=0x000000000044B6E8 string=0x000000000044B6EC "\n"
 *   insn=0x000000000044B6EC string=0x000000000044B6F0 "J"
 *   insn=0x000000000044B6F0 string=0x000000000044B6F4 "\n"
 *   insn=0x000000000044B6F8 string=0x000000000044B6FC "\t "
 *   insn=0x000000000044B6FC string=0x000000000044B700 "5"
 *   insn=0x000000000044B704 string=0x000000000044B708 ""
 *   insn=0x000000000044B714 string=0x000000000044B718 "\t@"
 *   insn=0x000000000044B724 string=0x000000000044B728 ""
 *   insn=0x000000000044B734 string=0x000000000044B738 "@"
 *   insn=0x000000000044B754 string=0x00000000001F5EF0 "P'"
 *   insn=0x000000000044B75C string=0x000000000044B760 "\n"
 *   insn=0x000000000044B760 string=0x000000000044B764 "J"
 *   insn=0x000000000044B764 string=0x000000000044B768 "\n"
 *   insn=0x000000000044B76C string=0x000000000044B770 "\t "
 *   insn=0x000000000044B770 string=0x000000000044B774 "4"
 *   insn=0x000000000044B778 string=0x000000000044B77C ""
 *   insn=0x000000000044B788 string=0x000000000044B78C "\t@"
 *   insn=0x000000000044B798 string=0x000000000044B79C ""
 *   insn=0x000000000044B7A8 string=0x000000000044B7AC "@"
 *   insn=0x000000000044B7BC string=0x000000000044B7C0 "`R"
 *   insn=0x000000000044B7C0 string=0x000000000044B7C4 "4"
 *   insn=0x000000000044B7D0 string=0x000000000044B7D4 "\t@"
 *   insn=0x000000000044B7E0 string=0x000000000044B7E4 ""
 *   insn=0x000000000044B7F0 string=0x000000000044B7F4 "@"
 *   insn=0x000000000044B7FC string=0x000000000044B800 "*"
 *   insn=0x000000000044B804 string=0x000000000044B808 "J=G"
 *   insn=0x000000000044B808 string=0x000000000044B80C ")!"
 *   insn=0x000000000044B810 string=0x000000000044B814 "*"
 *   insn=0x000000000044B810 string=0x000000000044B84C "*"
 *   insn=0x000000000044B814 string=0x000000000044B818 "K"
 *   insn=0x000000000044B818 string=0x000000000044B81C "+"
 *   insn=0x000000000044B820 string=0x000000000044B824 ""
 *   insn=0x000000000044B824 string=0x000000000044B858 "_"
 *   insn=0x000000000044B828 string=0x000000000044B82C "J=G"
 *   insn=0x000000000044B82C string=0x000000000044B830 ")!"
 *   insn=0x000000000044B830 string=0x000000000044B834 "*"
 *   insn=0x000000000044B834 string=0x000000000044B838 "*"
 *   insn=0x000000000044B834 string=0x000000000044B878 "*"
 *   insn=0x000000000044B838 string=0x000000000044B83C "K"
 *   insn=0x000000000044B83C string=0x000000000044B840 "+"
 *   insn=0x000000000044B848 string=0x000000000044B884 "_"
 *   insn=0x000000000044B84C string=0x000000000044B850 "K"
 *   insn=0x000000000044B850 string=0x000000000044B854 "+"
 *   insn=0x000000000044B858 string=0x000000000044B85C "l"
 *   insn=0x000000000044B878 string=0x000000000044B87C "K"
 *   insn=0x000000000044B87C string=0x000000000044B880 "+"
 *   insn=0x000000000044B8A8 string=0x000000000044B8AC "3"
 *   insn=0x000000000044B8AC string=0x000000000044B8B0 "h"
 *   insn=0x000000000044B8B0 string=0x000000000044B8B4 ""
 *   insn=0x000000000044B8B4 string=0x000000000044B8B8 "h"
 *   insn=0x000000000044B8BC string=0x000000000044B8C0 "h"
 *   insn=0x000000000044B8C4 string=0x000000000044B8C8 "\t@"
 *   insn=0x000000000044B8CC string=0x000000000044B8D0 "h\n@"
 *   insn=0x000000000044B8D0 string=0x000000000044B8D4 ""
 *   insn=0x000000000044B8D4 string=0x000000000044B8D8 "h\n"
 *   insn=0x000000000044B8DC string=0x000000000044B8E0 "h"
 *   insn=0x000000000044B8E4 string=0x000000000044B8E8 "@"
 *   insn=0x000000000044B8FC string=0x000000000044B918 "n"
 *   insn=0x000000000044B918 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044B930 string=0x000000000044B934 ""
 *   insn=0x000000000044B940 string=0x000000000044B944 "\t@"
 *   insn=0x000000000044B950 string=0x000000000044B954 ""
 *   insn=0x000000000044B960 string=0x000000000044B964 "@"
 *   insn=0x000000000044B96C string=0x000000000044B970 "7"
 *   insn=0x000000000044B978 string=0x000000000044B97C "J"
 *   insn=0x000000000044B980 string=0x000000000044B984 "(a"
 *   insn=0x000000000044B990 string=0x000000000044B994 "J=G"
 *   insn=0x000000000044B994 string=0x000000000044B998 ")!"
 *   insn=0x000000000044B99C string=0x000000000044B9A0 "*"
 *   insn=0x000000000044B99C string=0x000000000044B9B4 "*"
 *   insn=0x000000000044B9A0 string=0x000000000044B9A4 "K"
 *   insn=0x000000000044B9A4 string=0x000000000044B9A8 "+"
 *   insn=0x000000000044B9B0 string=0x000000000044B9C0 "_"
 *   insn=0x000000000044B9B4 string=0x000000000044B9B8 "K"
 *   insn=0x000000000044B9B8 string=0x000000000044B9BC "+"
 *   insn=0x000000000044B9CC string=0x000000000044B9D0 "uz"
 *   insn=0x000000000044B9E0 string=0x000000000044B9E4 ")"
 *   insn=0x000000000044B9F4 string=0x000000000044B9F8 ")=G"
 *   insn=0x000000000044B9F8 string=0x000000000044B9FC "!"
 *   insn=0x000000000044BA00 string=0x000000000044BA04 "\t"
 *   insn=0x000000000044BA00 string=0x000000000044BA30 "\t"
 *   insn=0x000000000044BA04 string=0x000000000044BA08 "*"
 *   insn=0x000000000044BA08 string=0x000000000044BA0C "\n"
 *   insn=0x000000000044BA10 string=0x000000000044BA14 "?"
 *   insn=0x000000000044BA1C string=0x000000000044BA20 "az"
 *   insn=0x000000000044BA24 string=0x000000000044BA28 "t"
 *   insn=0x000000000044BA30 string=0x000000000044BA34 "*"
 *   insn=0x000000000044BA34 string=0x000000000044BA38 "\n"
 *   insn=0x000000000044BA38 string=0x000000000044BA3C "?"
 *   insn=0x000000000044BA54 string=0x000000000044BA58 ""
 *   insn=0x000000000044BA5C string=0x000000000044BA60 "A"
 *   insn=0x000000000044BA64 string=0x000000000044BA68 "\t@"
 *   insn=0x000000000044BA74 string=0x000000000044BA78 ""
 *   insn=0x000000000044BA7C string=0x000000000044BA80 "A"
 *   insn=0x000000000044BA84 string=0x000000000044BA88 "@"
 *   insn=0x000000000044BAA4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ModelLibrary::ModelForName@<X0>(__int64 a1@<X0>, __int64 *a2@<X8>)
{
  __int64 result; // x0
  __int64 v5; // x8
  Caver::PODLoader *v6; // x22
  void *v7; // x8
  void *v8; // x8
  _QWORD *v9; // x0
  _QWORD *v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x0
  _QWORD *v16; // x8
  Caver::PODLoader *v17; // x9
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  _QWORD *v21; // x20
  __int64 v22; // x8
  unsigned int *v23; // x9
  int v24; // w10
  unsigned int *v25; // x9
  int v26; // w10
  unsigned int v27; // w22
  _QWORD *v28; // x19
  __int64 v29; // x8
  __int64 v30; // x8
  unsigned int v31; // [xsp+Ch] [xbp-74h]
  __int64 v32; // [xsp+10h] [xbp-70h] BYREF
  _QWORD *v33; // [xsp+18h] [xbp-68h]
  __int64 v34; // [xsp+28h] [xbp-58h] BYREF
  Caver::PODLoader *v35; // [xsp+30h] [xbp-50h]
  _QWORD *v36; // [xsp+38h] [xbp-48h]
  __int64 v37; // [xsp+48h] [xbp-38h]

  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::find();
  if ( a1 + 8 != result )
  {
    *a2 = *(_QWORD *)(result + 40);
    v5 = *(_QWORD *)(result + 48);
    a2[1] = v5;
    if ( v5 )
      ++*(_QWORD *)(v5 + 8);
    return result;
  }
  v6 = (Caver::PODLoader *)operator new(0xB8u);
  Caver::PODLoader::PODLoader(v6);
  v35 = v6;
  boost::detail::shared_count::shared_count<Caver::PODLoader>();
  boost::detail::sp_enable_shared_from_this();
  sub_566BB8((int)&v34, "POD");
  Caver::PathForResourceOfType();
  result = Caver::PODLoader::ReadModelFromFile();
  v7 = (void *)(v32 - 24);
  if ( (__int64 *)(v32 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v32 - 8);
    if ( &pthread_create )
    {
      do
        v24 = __ldaxr(v23);
      while ( __stlxr(v24 - 1, v23) );
    }
    else
    {
      v24 = (*v23)--;
    }
    if ( v24 <= 0 )
    {
      v31 = result;
      operator delete(v7);
      result = v31;
    }
  }
  v8 = (void *)(v34 - 24);
  if ( (__int64 *)(v34 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v34 - 8);
    if ( &pthread_create )
    {
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = (*v25)--;
    }
    if ( v26 <= 0 )
    {
      v27 = result;
      operator delete(v8);
      result = v27;
      if ( (v27 & 1) == 0 )
        goto LABEL_37;
LABEL_7:
      Caver::PODLoader::CreateModel(&v32, v35);
      result = v32;
      if ( v32 )
      {
        sub_56A6A8(v32);
        v9 = (_QWORD *)std::map<std::string,boost::shared_ptr<Caver::Model const>>::operator[]();
        v11 = v32;
        v10 = v33;
        if ( v33 )
          ++v33[1];
        v12 = (_QWORD *)v9[1];
        *v9 = v11;
        v9[1] = v10;
        if ( v12 )
        {
          v13 = v12[1] - 1LL;
          v12[1] = v13;
          if ( !v13 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
            v14 = v12[2] - 1LL;
            v12[2] = v14;
            if ( !v14 )
              (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
          }
        }
        v34 = v32;
        v15 = (_QWORD *)std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>>::operator[]();
        v17 = v35;
        v16 = v36;
        if ( v36 )
          ++v36[1];
        v18 = (_QWORD *)v15[1];
        *v15 = v17;
        v15[1] = v16;
        if ( v18 )
        {
          v19 = v18[1] - 1LL;
          v18[1] = v19;
          if ( !v19 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
            v20 = v18[2] - 1LL;
            v18[2] = v20;
            if ( !v20 )
              (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
          }
        }
        result = v32;
      }
      v21 = v33;
      *a2 = result;
      a2[1] = (__int64)v21;
      if ( v21 )
      {
        if ( !v21[1] )
        {
          result = (*(__int64 (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
          v22 = v21[2] - 1LL;
          v21[2] = v22;
          if ( !v22 )
            result = (*(__int64 (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
        }
      }
      goto LABEL_38;
    }
  }
  if ( (result & 1) != 0 )
    goto LABEL_7;
LABEL_37:
  *a2 = 0;
  a2[1] = 0;
LABEL_38:
  v28 = v36;
  if ( v36 )
  {
    v29 = v36[1] - 1LL;
    v36[1] = v29;
    if ( !v29 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
      v30 = v28[2] - 1LL;
      v28[2] = v30;
      if ( !v30 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
    }
  }
  return result;
}

