/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F644
 * Mangled: _ZN5Caver18TouchableComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::TouchableComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x0000000000200DF0  Caver::TouchableComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000023F59C  Caver::TouchableComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000200DF0  Caver::TouchableComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 130
 *   insn=0x000000000023F658 string=0x000000000023F65C "V"
 *   insn=0x000000000023F668 string=0x000000000023F66C "Q"
 *   insn=0x000000000023F66C string=0x000000000023F670 "!"
 *   insn=0x000000000023F66C string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000023F670 string=0x0000000000584A92 "touchRadius"
 *   insn=0x000000000023F67C string=0x000000000023F680 "N"
 *   insn=0x000000000023F698 string=0x000000000023F69C "("
 *   insn=0x000000000023F6A8 string=0x000000000023F6AC "t"
 *   insn=0x000000000023F6BC string=0x000000000023F6C0 ""
 *   insn=0x000000000023F6CC string=0x000000000023F6D0 "\t\t@"
 *   insn=0x000000000023F6D4 string=0x000000000023F6D8 ""
 *   insn=0x000000000023F6DC string=0x000000000023F6E0 "h"
 *   insn=0x000000000023F6E0 string=0x000000000023F6E4 ""
 *   insn=0x000000000023F6E4 string=0x000000000023F6E8 "h"
 *   insn=0x000000000023F6F8 string=0x000000000023F6FC "y"
 *   insn=0x000000000023F6FC string=0x00000000001F78E0 "0'"
 *   insn=0x000000000023F700 string=0x000000000023F704 "7%"
 *   insn=0x000000000023F714 string=0x000000000023F804 ")%"
 *   insn=0x000000000023F720 string=0x000000000023F724 "!"
 *   insn=0x000000000023F724 string=0x000000000023F728 "!"
 *   insn=0x000000000023F724 string=0x000000000023F828 ")%"
 *   insn=0x000000000023F728 string=0x0000000000584A9E "onTouch"
 *   insn=0x000000000023F734 string=0x000000000023F738 " "
 *   insn=0x000000000023F750 string=0x000000000023F754 "u"
 *   insn=0x000000000023F754 string=0x000000000023F758 "("
 *   insn=0x000000000023F764 string=0x000000000023F768 "t"
 *   insn=0x000000000023F778 string=0x000000000023F77C ""
 *   insn=0x000000000023F780 string=0x000000000023F784 "i"
 *   insn=0x000000000023F784 string=0x000000000023F788 "C"
 *   insn=0x000000000023F788 string=0x000000000023F78C "\t\t@"
 *   insn=0x000000000023F790 string=0x000000000023F794 ""
 *   insn=0x000000000023F798 string=0x000000000023F79C "h"
 *   insn=0x000000000023F79C string=0x000000000023F7A0 ""
 *   insn=0x000000000023F7A0 string=0x000000000023F7A4 "h"
 *   insn=0x000000000023F7B4 string=0x000000000023F7B8 "J"
 *   insn=0x000000000023F7C4 string=0x000000000023F7C8 "!"
 *   insn=0x000000000023F7C8 string=0x000000000023F84C ")%"
 *   insn=0x000000000023F7D8 string=0x000000000023F870 ")%"
 *   insn=0x000000000023F7E4 string=0x000000000023F7E8 "a\t"
 *   insn=0x000000000023F7E8 string=0x000000000023F914 "o"
 *   insn=0x000000000023F804 string=0x000000000023F808 ")=G"
 *   insn=0x000000000023F808 string=0x000000000023F80C "!"
 *   insn=0x000000000023F80C string=0x000000000023F810 ")"
 *   insn=0x000000000023F810 string=0x000000000023F814 "\t"
 *   insn=0x000000000023F810 string=0x000000000023F894 "\t"
 *   insn=0x000000000023F814 string=0x000000000023F818 "*"
 *   insn=0x000000000023F818 string=0x000000000023F81C "\n"
 *   insn=0x000000000023F824 string=0x000000000023F8A0 "?"
 *   insn=0x000000000023F828 string=0x000000000023F82C ")=G"
 *   insn=0x000000000023F82C string=0x000000000023F830 "!"
 *   insn=0x000000000023F830 string=0x000000000023F834 "\t"
 *   insn=0x000000000023F834 string=0x000000000023F838 "\t"
 *   insn=0x000000000023F834 string=0x000000000023F8B4 "\t"
 *   insn=0x000000000023F838 string=0x000000000023F83C "*"
 *   insn=0x000000000023F83C string=0x000000000023F840 "\n"
 *   insn=0x000000000023F848 string=0x000000000023F8C0 "?"
 *   insn=0x000000000023F84C string=0x000000000023F850 ")=G"
 *   insn=0x000000000023F850 string=0x000000000023F854 "!"
 *   insn=0x000000000023F858 string=0x000000000023F85C "\t"
 *   insn=0x000000000023F858 string=0x000000000023F8D4 "\t"
 *   insn=0x000000000023F85C string=0x000000000023F860 "*"
 *   insn=0x000000000023F860 string=0x000000000023F864 "\n"
 *   insn=0x000000000023F86C string=0x000000000023F8E0 "?"
 *   insn=0x000000000023F870 string=0x000000000023F874 ")=G"
 *   insn=0x000000000023F874 string=0x000000000023F878 "!"
 *   insn=0x000000000023F87C string=0x000000000023F880 "\t"
 *   insn=0x000000000023F87C string=0x000000000023F8F4 "\t"
 *   insn=0x000000000023F880 string=0x000000000023F884 "*"
 *   insn=0x000000000023F884 string=0x000000000023F888 "\n"
 *   insn=0x000000000023F890 string=0x000000000023F900 "?"
 *   insn=0x000000000023F894 string=0x000000000023F898 "*"
 *   insn=0x000000000023F898 string=0x000000000023F89C "\n"
 *   insn=0x000000000023F8B4 string=0x000000000023F8B8 "*"
 *   insn=0x000000000023F8B8 string=0x000000000023F8BC "\n"
 *   insn=0x000000000023F8C0 string=0x000000000023F8C4 ","
 *   insn=0x000000000023F8D4 string=0x000000000023F8D8 "*"
 *   insn=0x000000000023F8D8 string=0x000000000023F8DC "\n"
 *   insn=0x000000000023F8E0 string=0x000000000023F8E4 "L"
 *   insn=0x000000000023F8F4 string=0x000000000023F8F8 "*"
 *   insn=0x000000000023F8F8 string=0x000000000023F8FC "\n"
 *   insn=0x000000000023F914 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023F91C string=0x000000000023F920 "(a"
 *   insn=0x000000000023F928 string=0x000000000023F92C "*%"
 *   insn=0x000000000023F92C string=0x000000000023F930 "J=G"
 *   insn=0x000000000023F930 string=0x000000000023F934 ")!"
 *   insn=0x000000000023F938 string=0x000000000023F93C "*"
 *   insn=0x000000000023F938 string=0x000000000023F950 "*"
 *   insn=0x000000000023F93C string=0x000000000023F940 "K"
 *   insn=0x000000000023F940 string=0x000000000023F944 "+"
 *   insn=0x000000000023F94C string=0x000000000023F95C "_"
 *   insn=0x000000000023F950 string=0x000000000023F954 "K"
 *   insn=0x000000000023F954 string=0x000000000023F958 "+"
 *   insn=0x000000000023F984 string=0x000000000023F988 ")%"
 *   insn=0x000000000023F988 string=0x000000000023F98C ")=G"
 *   insn=0x000000000023F98C string=0x000000000023F990 "!"
 *   insn=0x000000000023F994 string=0x000000000023F998 "\t"
 *   insn=0x000000000023F994 string=0x000000000023FA68 "\t"
 *   insn=0x000000000023F998 string=0x000000000023F99C "*"
 *   insn=0x000000000023F99C string=0x000000000023F9A0 "\n"
 *   insn=0x000000000023F9A4 string=0x000000000023F9A8 "*"
 *   insn=0x000000000023F9A8 string=0x000000000023FA50 "?"
 *   insn=0x000000000023F9B0 string=0x000000000023F9B4 "*%"
 *   insn=0x000000000023F9B4 string=0x000000000023F9B8 "J"
 *   insn=0x000000000023F9BC string=0x000000000023F9C0 "(a"
 *   insn=0x000000000023F9C8 string=0x000000000023F9CC "*%"
 *   insn=0x000000000023F9CC string=0x000000000023F9D0 "J=G"
 *   insn=0x000000000023F9D0 string=0x000000000023F9D4 ")!"
 *   insn=0x000000000023F9D8 string=0x000000000023F9DC "*"
 *   insn=0x000000000023F9D8 string=0x000000000023F9F0 "*"
 *   insn=0x000000000023F9DC string=0x000000000023F9E0 "K"
 *   insn=0x000000000023F9E0 string=0x000000000023F9E4 "+"
 *   insn=0x000000000023F9EC string=0x000000000023F9FC "_"
 *   insn=0x000000000023F9F0 string=0x000000000023F9F4 "K"
 *   insn=0x000000000023F9F4 string=0x000000000023F9F8 "+"
 *   insn=0x000000000023FA08 string=0x000000000023FA0C "f"
 *   insn=0x000000000023FA18 string=0x000000000023FA1C ")%"
 *   insn=0x000000000023FA1C string=0x000000000023FA20 ")"
 *   insn=0x000000000023FA2C string=0x000000000023FA30 ")%"
 *   insn=0x000000000023FA30 string=0x000000000023FA34 ")=G"
 *   insn=0x000000000023FA34 string=0x000000000023FA38 "!"
 *   insn=0x000000000023FA38 string=0x000000000023FA3C "i"
 *   insn=0x000000000023FA3C string=0x000000000023FA40 "\t"
 *   insn=0x000000000023FA40 string=0x000000000023FA44 "*"
 *   insn=0x000000000023FA44 string=0x000000000023FA48 "\n"
 *   insn=0x000000000023FA50 string=0x000000000023FA54 "l"
 *   insn=0x000000000023FA58 string=0x000000000023FA5C "R"
 *   insn=0x000000000023FA68 string=0x000000000023FA6C "*"
 *   insn=0x000000000023FA6C string=0x000000000023FA70 "\n"
 *   insn=0x000000000023FA70 string=0x000000000023FA74 "?"
 *   insn=0x000000000023FA74 string=0x000000000023FA78 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TouchableComponent::GetBindings(Caver::Component *a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  int v16; // w9
  __int64 v17; // [xsp+8h] [xbp-68h] BYREF
  int v18; // [xsp+18h] [xbp-58h]
  __int64 v19; // [xsp+20h] [xbp-50h] BYREF
  __int64 v20; // [xsp+28h] [xbp-48h]
  int v21; // [xsp+30h] [xbp-40h]
  __int64 v22; // [xsp+38h] [xbp-38h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v17, "touchRadius");
  v18 = 0;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x500000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v18;
    sub_56A528(v3 + 8, &v19);
    *(_DWORD *)(v3 + 24) = v21;
    *(_QWORD *)(v3 + 16) = v20;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v19 - 24);
  if ( (__int64 *)(v19 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v19 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v17 - 24);
  if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v17 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v17, "onTouch");
  v18 = 1;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x600000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v18;
    sub_56A528(v6 + 8, &v19);
    *(_DWORD *)(v6 + 24) = v21;
    *(_QWORD *)(v6 + 16) = v20;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v19 - 24);
  if ( (__int64 *)(v19 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v19 - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v17 - 24);
  if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v17 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v8);
  }
}

