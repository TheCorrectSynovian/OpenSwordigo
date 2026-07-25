/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C6C8
 * Mangled: _ZN5Caver29ProjectileControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ProjectileControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001F4A60  Caver::ProjectileControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F4A60  Caver::ProjectileControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 118
 *   insn=0x000000000028C6E0 string=0x000000000028C6E4 "V"
 *   insn=0x000000000028C6F0 string=0x000000000028C6F4 "/"
 *   insn=0x000000000028C6F4 string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000028C6F8 string=0x0000000000588D6A "alignObjectRotation"
 *   insn=0x000000000028C704 string=0x000000000028C708 ",i"
 *   insn=0x000000000028C724 string=0x000000000028C728 ""
 *   insn=0x000000000028C730 string=0x000000000028C734 "t"
 *   insn=0x000000000028C744 string=0x000000000028C748 ""
 *   insn=0x000000000028C74C string=0x000000000028C750 "vw"
 *   insn=0x000000000028C754 string=0x000000000028C758 "\t\t@"
 *   insn=0x000000000028C75C string=0x000000000028C760 ""
 *   insn=0x000000000028C764 string=0x000000000028C768 "h"
 *   insn=0x000000000028C768 string=0x000000000028C76C ""
 *   insn=0x000000000028C76C string=0x000000000028C770 "h"
 *   insn=0x000000000028C780 string=0x000000000028C784 "W"
 *   insn=0x000000000028C784 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000028C798 string=0x000000000028C79C "a"
 *   insn=0x000000000028C7B0 string=0x0000000000588D7E "breaksOnGroundCollision"
 *   insn=0x000000000028C7D8 string=0x000000000028C7DC "Sw"
 *   insn=0x000000000028C7E4 string=0x000000000028C7E8 "t"
 *   insn=0x000000000028C7F8 string=0x000000000028C7FC ""
 *   insn=0x000000000028C800 string=0x000000000028C804 "Iw"
 *   insn=0x000000000028C804 string=0x000000000028C808 "C"
 *   insn=0x000000000028C808 string=0x000000000028C80C "\t\t@"
 *   insn=0x000000000028C810 string=0x000000000028C814 ""
 *   insn=0x000000000028C818 string=0x000000000028C81C "h"
 *   insn=0x000000000028C81C string=0x000000000028C820 ""
 *   insn=0x000000000028C820 string=0x000000000028C824 "h"
 *   insn=0x000000000028C834 string=0x000000000028C838 "*"
 *   insn=0x000000000028C844 string=0x000000000028C848 "A"
 *   insn=0x000000000028C868 string=0x000000000028C998 "N"
 *   insn=0x000000000028C888 string=0x000000000028C88C ")=G"
 *   insn=0x000000000028C88C string=0x000000000028C890 "!"
 *   insn=0x000000000028C890 string=0x000000000028C894 ")"
 *   insn=0x000000000028C894 string=0x000000000028C898 "\t"
 *   insn=0x000000000028C894 string=0x000000000028C918 "\t"
 *   insn=0x000000000028C898 string=0x000000000028C89C "*"
 *   insn=0x000000000028C89C string=0x000000000028C8A0 "\n"
 *   insn=0x000000000028C8A8 string=0x000000000028C924 "?"
 *   insn=0x000000000028C8AC string=0x000000000028C8B0 ")=G"
 *   insn=0x000000000028C8B0 string=0x000000000028C8B4 "!"
 *   insn=0x000000000028C8B4 string=0x000000000028C8B8 "\t"
 *   insn=0x000000000028C8B8 string=0x000000000028C8BC "\t"
 *   insn=0x000000000028C8B8 string=0x000000000028C938 "\t"
 *   insn=0x000000000028C8BC string=0x000000000028C8C0 "*"
 *   insn=0x000000000028C8C0 string=0x000000000028C8C4 "\n"
 *   insn=0x000000000028C8CC string=0x000000000028C944 "?"
 *   insn=0x000000000028C8D0 string=0x000000000028C8D4 ")=G"
 *   insn=0x000000000028C8D4 string=0x000000000028C8D8 "!"
 *   insn=0x000000000028C8DC string=0x000000000028C8E0 "\t"
 *   insn=0x000000000028C8DC string=0x000000000028C958 "\t"
 *   insn=0x000000000028C8E0 string=0x000000000028C8E4 "*"
 *   insn=0x000000000028C8E4 string=0x000000000028C8E8 "\n"
 *   insn=0x000000000028C8F0 string=0x000000000028C964 "?"
 *   insn=0x000000000028C8F4 string=0x000000000028C8F8 ")=G"
 *   insn=0x000000000028C8F8 string=0x000000000028C8FC "!"
 *   insn=0x000000000028C900 string=0x000000000028C904 "\t"
 *   insn=0x000000000028C900 string=0x000000000028C978 "\t"
 *   insn=0x000000000028C904 string=0x000000000028C908 "*"
 *   insn=0x000000000028C908 string=0x000000000028C90C "\n"
 *   insn=0x000000000028C914 string=0x000000000028C984 "?"
 *   insn=0x000000000028C918 string=0x000000000028C91C "*"
 *   insn=0x000000000028C91C string=0x000000000028C920 "\n"
 *   insn=0x000000000028C938 string=0x000000000028C93C "*"
 *   insn=0x000000000028C93C string=0x000000000028C940 "\n"
 *   insn=0x000000000028C944 string=0x000000000028C948 "L"
 *   insn=0x000000000028C958 string=0x000000000028C95C "*"
 *   insn=0x000000000028C95C string=0x000000000028C960 "\n"
 *   insn=0x000000000028C964 string=0x000000000028C968 ","
 *   insn=0x000000000028C978 string=0x000000000028C97C "*"
 *   insn=0x000000000028C97C string=0x000000000028C980 "\n"
 *   insn=0x000000000028C998 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028C9A0 string=0x000000000028C9A4 "(a"
 *   insn=0x000000000028C9B0 string=0x000000000028C9B4 "J=G"
 *   insn=0x000000000028C9B4 string=0x000000000028C9B8 ")!"
 *   insn=0x000000000028C9BC string=0x000000000028C9C0 "*"
 *   insn=0x000000000028C9BC string=0x000000000028C9D4 "*"
 *   insn=0x000000000028C9C0 string=0x000000000028C9C4 "K"
 *   insn=0x000000000028C9C4 string=0x000000000028C9C8 "+"
 *   insn=0x000000000028C9D0 string=0x000000000028C9E0 "_"
 *   insn=0x000000000028C9D4 string=0x000000000028C9D8 "K"
 *   insn=0x000000000028C9D8 string=0x000000000028C9DC "+"
 *   insn=0x000000000028C9EC string=0x000000000028C9F0 "mv"
 *   insn=0x000000000028CA0C string=0x000000000028CA10 ")=G"
 *   insn=0x000000000028CA10 string=0x000000000028CA14 "!"
 *   insn=0x000000000028CA18 string=0x000000000028CA1C "\t"
 *   insn=0x000000000028CA18 string=0x000000000028CAEC "\t"
 *   insn=0x000000000028CA1C string=0x000000000028CA20 "*"
 *   insn=0x000000000028CA20 string=0x000000000028CA24 "\n"
 *   insn=0x000000000028CA28 string=0x000000000028CA2C "*"
 *   insn=0x000000000028CA2C string=0x000000000028CAD4 "?"
 *   insn=0x000000000028CA38 string=0x000000000028CA3C "J"
 *   insn=0x000000000028CA40 string=0x000000000028CA44 "(a"
 *   insn=0x000000000028CA50 string=0x000000000028CA54 "J=G"
 *   insn=0x000000000028CA54 string=0x000000000028CA58 ")!"
 *   insn=0x000000000028CA5C string=0x000000000028CA60 "*"
 *   insn=0x000000000028CA5C string=0x000000000028CA74 "*"
 *   insn=0x000000000028CA60 string=0x000000000028CA64 "K"
 *   insn=0x000000000028CA64 string=0x000000000028CA68 "+"
 *   insn=0x000000000028CA70 string=0x000000000028CA80 "_"
 *   insn=0x000000000028CA74 string=0x000000000028CA78 "K"
 *   insn=0x000000000028CA78 string=0x000000000028CA7C "+"
 *   insn=0x000000000028CA8C string=0x000000000028CA90 "Ev"
 *   insn=0x000000000028CAA0 string=0x000000000028CAA4 ")"
 *   insn=0x000000000028CAB4 string=0x000000000028CAB8 ")=G"
 *   insn=0x000000000028CAB8 string=0x000000000028CABC "!"
 *   insn=0x000000000028CABC string=0x000000000028CAC0 "i"
 *   insn=0x000000000028CAC0 string=0x000000000028CAC4 "\t"
 *   insn=0x000000000028CAC4 string=0x000000000028CAC8 "*"
 *   insn=0x000000000028CAC8 string=0x000000000028CACC "\n"
 *   insn=0x000000000028CAD4 string=0x000000000028CAD8 "l"
 *   insn=0x000000000028CADC string=0x000000000028CAE0 "1v"
 *   insn=0x000000000028CAE4 string=0x000000000028CAE8 "w"
 *   insn=0x000000000028CAEC string=0x000000000028CAF0 "*"
 *   insn=0x000000000028CAF0 string=0x000000000028CAF4 "\n"
 *   insn=0x000000000028CAF4 string=0x000000000028CAF8 "?"
 *   insn=0x000000000028CAF8 string=0x000000000028CAFC ""
 *   insn=0x000000000028CB0C string=0x00000000001F4A60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProjectileControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  __int64 v17; // [xsp+8h] [xbp-78h] BYREF
  int v18; // [xsp+18h] [xbp-68h]
  __int64 v19; // [xsp+20h] [xbp-60h] BYREF
  __int64 v20; // [xsp+28h] [xbp-58h]
  int v21; // [xsp+30h] [xbp-50h]
  __int64 v22; // [xsp+38h] [xbp-48h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v17, "alignObjectRotation");
  v18 = 0;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x400000001LL;
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
  sub_566BB8((int)&v17, "breaksOnGroundCollision");
  v18 = 1;
  sub_56A528(&v19, &v17);
  v20 = 0x400000001LL;
  v21 = 0;
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

