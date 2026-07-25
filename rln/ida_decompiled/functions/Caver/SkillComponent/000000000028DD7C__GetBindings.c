/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028DD7C
 * Mangled: _ZN5Caver14SkillComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SkillComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x0000000000202990  Caver::SkillComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000028DC80  Caver::SkillComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000202990  Caver::SkillComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 108
 *   insn=0x000000000028DD90 string=0x000000000028DD94 "V"
 *   insn=0x000000000028DDA4 string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000028DDA8 string=0x0000000000588DE4 "castObjectTemplate"
 *   insn=0x000000000028DDD4 string=0x000000000028DDD8 " "
 *   insn=0x000000000028DDE0 string=0x000000000028DDE4 "t"
 *   insn=0x000000000028DDF4 string=0x000000000028DDF8 ""
 *   insn=0x000000000028DE04 string=0x000000000028DE08 "\t\t@"
 *   insn=0x000000000028DE0C string=0x000000000028DE10 ""
 *   insn=0x000000000028DE14 string=0x000000000028DE18 "h"
 *   insn=0x000000000028DE18 string=0x000000000028DE1C ""
 *   insn=0x000000000028DE1C string=0x000000000028DE20 "h"
 *   insn=0x000000000028DE34 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000028DE58 string=0x000000000028DE5C "!"
 *   insn=0x000000000028DE60 string=0x0000000000584070 "origin"
 *   insn=0x000000000028DE6C string=0x000000000028DE70 "Rc"
 *   insn=0x000000000028DE9C string=0x000000000028DEA0 "t"
 *   insn=0x000000000028DEB0 string=0x000000000028DEB4 ""
 *   insn=0x000000000028DEBC string=0x000000000028DEC0 "C"
 *   insn=0x000000000028DEC0 string=0x000000000028DEC4 "\t\t@"
 *   insn=0x000000000028DEC8 string=0x000000000028DECC ""
 *   insn=0x000000000028DED0 string=0x000000000028DED4 "h"
 *   insn=0x000000000028DED4 string=0x000000000028DED8 ""
 *   insn=0x000000000028DED8 string=0x000000000028DEDC "h"
 *   insn=0x000000000028DEEC string=0x000000000028DEF0 "|"
 *   insn=0x000000000028DEFC string=0x000000000028DF00 "!"
 *   insn=0x000000000028DF1C string=0x000000000028DF20 "a\t"
 *   insn=0x000000000028DF3C string=0x000000000028DF40 ")=G"
 *   insn=0x000000000028DF40 string=0x000000000028DF44 "!"
 *   insn=0x000000000028DF44 string=0x000000000028DF48 ")"
 *   insn=0x000000000028DF48 string=0x000000000028DF4C "\t"
 *   insn=0x000000000028DF48 string=0x000000000028DFCC "\t"
 *   insn=0x000000000028DF4C string=0x000000000028DF50 "*"
 *   insn=0x000000000028DF50 string=0x000000000028DF54 "\n"
 *   insn=0x000000000028DF5C string=0x000000000028DFD8 "?"
 *   insn=0x000000000028DF60 string=0x000000000028DF64 ")=G"
 *   insn=0x000000000028DF64 string=0x000000000028DF68 "!"
 *   insn=0x000000000028DF68 string=0x000000000028DF6C "\t"
 *   insn=0x000000000028DF6C string=0x000000000028DF70 "\t"
 *   insn=0x000000000028DF6C string=0x000000000028DFEC "\t"
 *   insn=0x000000000028DF70 string=0x000000000028DF74 "*"
 *   insn=0x000000000028DF74 string=0x000000000028DF78 "\n"
 *   insn=0x000000000028DF80 string=0x000000000028DFF8 "?"
 *   insn=0x000000000028DF84 string=0x000000000028DF88 ")=G"
 *   insn=0x000000000028DF88 string=0x000000000028DF8C "!"
 *   insn=0x000000000028DF90 string=0x000000000028DF94 "\t"
 *   insn=0x000000000028DF90 string=0x000000000028E00C "\t"
 *   insn=0x000000000028DF94 string=0x000000000028DF98 "*"
 *   insn=0x000000000028DF98 string=0x000000000028DF9C "\n"
 *   insn=0x000000000028DFA4 string=0x000000000028E018 "?"
 *   insn=0x000000000028DFA8 string=0x000000000028DFAC ")=G"
 *   insn=0x000000000028DFAC string=0x000000000028DFB0 "!"
 *   insn=0x000000000028DFB4 string=0x000000000028DFB8 "\t"
 *   insn=0x000000000028DFB4 string=0x000000000028E02C "\t"
 *   insn=0x000000000028DFB8 string=0x000000000028DFBC "*"
 *   insn=0x000000000028DFBC string=0x000000000028DFC0 "\n"
 *   insn=0x000000000028DFC8 string=0x000000000028E038 "?"
 *   insn=0x000000000028DFCC string=0x000000000028DFD0 "*"
 *   insn=0x000000000028DFD0 string=0x000000000028DFD4 "\n"
 *   insn=0x000000000028DFEC string=0x000000000028DFF0 "*"
 *   insn=0x000000000028DFF0 string=0x000000000028DFF4 "\n"
 *   insn=0x000000000028DFF8 string=0x000000000028DFFC ","
 *   insn=0x000000000028E00C string=0x000000000028E010 "*"
 *   insn=0x000000000028E010 string=0x000000000028E014 "\n"
 *   insn=0x000000000028E018 string=0x000000000028E01C "L"
 *   insn=0x000000000028E02C string=0x000000000028E030 "*"
 *   insn=0x000000000028E030 string=0x000000000028E034 "\n"
 *   insn=0x000000000028E04C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028E054 string=0x000000000028E058 "(a"
 *   insn=0x000000000028E064 string=0x000000000028E068 "J=G"
 *   insn=0x000000000028E068 string=0x000000000028E06C ")!"
 *   insn=0x000000000028E070 string=0x000000000028E074 "*"
 *   insn=0x000000000028E070 string=0x000000000028E088 "*"
 *   insn=0x000000000028E074 string=0x000000000028E078 "K"
 *   insn=0x000000000028E078 string=0x000000000028E07C "+"
 *   insn=0x000000000028E084 string=0x000000000028E094 "_"
 *   insn=0x000000000028E088 string=0x000000000028E08C "K"
 *   insn=0x000000000028E08C string=0x000000000028E090 "+"
 *   insn=0x000000000028E0C0 string=0x000000000028E0C4 ")=G"
 *   insn=0x000000000028E0C4 string=0x000000000028E0C8 "!"
 *   insn=0x000000000028E0CC string=0x000000000028E0D0 "\t"
 *   insn=0x000000000028E0CC string=0x000000000028E1A0 "\t"
 *   insn=0x000000000028E0D0 string=0x000000000028E0D4 "*"
 *   insn=0x000000000028E0D4 string=0x000000000028E0D8 "\n"
 *   insn=0x000000000028E0DC string=0x000000000028E0E0 "*"
 *   insn=0x000000000028E0E0 string=0x000000000028E188 "?"
 *   insn=0x000000000028E0EC string=0x000000000028E0F0 "J"
 *   insn=0x000000000028E0F4 string=0x000000000028E0F8 "(a"
 *   insn=0x000000000028E104 string=0x000000000028E108 "J=G"
 *   insn=0x000000000028E108 string=0x000000000028E10C ")!"
 *   insn=0x000000000028E110 string=0x000000000028E114 "*"
 *   insn=0x000000000028E110 string=0x000000000028E128 "*"
 *   insn=0x000000000028E114 string=0x000000000028E118 "K"
 *   insn=0x000000000028E118 string=0x000000000028E11C "+"
 *   insn=0x000000000028E124 string=0x000000000028E134 "_"
 *   insn=0x000000000028E128 string=0x000000000028E12C "K"
 *   insn=0x000000000028E12C string=0x000000000028E130 "+"
 *   insn=0x000000000028E154 string=0x000000000028E158 ")"
 *   insn=0x000000000028E168 string=0x000000000028E16C ")=G"
 *   insn=0x000000000028E16C string=0x000000000028E170 "!"
 *   insn=0x000000000028E170 string=0x000000000028E174 "i"
 *   insn=0x000000000028E174 string=0x000000000028E178 "\t"
 *   insn=0x000000000028E178 string=0x000000000028E17C "*"
 *   insn=0x000000000028E17C string=0x000000000028E180 "\n"
 *   insn=0x000000000028E188 string=0x000000000028E18C "l"
 *   insn=0x000000000028E1A0 string=0x000000000028E1A4 "*"
 *   insn=0x000000000028E1A4 string=0x000000000028E1A8 "\n"
 *   insn=0x000000000028E1A8 string=0x000000000028E1AC "?"
 *   insn=0x000000000028E1AC string=0x000000000028E1B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkillComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v17, "castObjectTemplate");
  v18 = 1;
  sub_56A528(&v19, &v17);
  v20 = 0x100000001LL;
  v21 = 0;
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
  sub_566BB8((int)&v17, "origin");
  v18 = 2;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x800000001LL;
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

