/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002896D0
 * Mangled: _ZN5Caver22MagicHookshotComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::MagicHookshotComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001FF9A0  Caver::MagicHookshotComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002895F8  Caver::MagicHookshotComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F8FD0  Caver::SpellComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FF9A0  Caver::MagicHookshotComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x00000000002896E4 string=0x00000000002896E8 "V"
 *   insn=0x00000000002896F4 string=0x00000000002896F8 "6"
 *   insn=0x00000000002896F8 string=0x00000000001F8FD0 "0'"
 *   insn=0x00000000002896FC string=0x0000000000583F83 "color"
 *   insn=0x0000000000289708 string=0x000000000028970C "+u"
 *   insn=0x0000000000289710 string=0x0000000000289714 ""
 *   insn=0x0000000000289738 string=0x000000000028973C "t"
 *   insn=0x000000000028974C string=0x0000000000289750 ""
 *   insn=0x0000000000289754 string=0x0000000000289758 "t"
 *   insn=0x000000000028975C string=0x0000000000289760 "\t\t@"
 *   insn=0x0000000000289764 string=0x0000000000289768 ""
 *   insn=0x000000000028976C string=0x0000000000289770 "h"
 *   insn=0x0000000000289770 string=0x0000000000289774 ""
 *   insn=0x0000000000289774 string=0x0000000000289778 "h"
 *   insn=0x0000000000289788 string=0x000000000028978C "U"
 *   insn=0x000000000028978C string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000289794 string=0x0000000000289798 "s"
 *   insn=0x00000000002897C0 string=0x00000000002897C4 "!"
 *   insn=0x00000000002897E0 string=0x00000000002897E4 ")=G"
 *   insn=0x00000000002897E4 string=0x00000000002897E8 "!"
 *   insn=0x00000000002897EC string=0x00000000002897F0 "\t"
 *   insn=0x00000000002897EC string=0x0000000000289828 "\t"
 *   insn=0x00000000002897F0 string=0x00000000002897F4 "*"
 *   insn=0x00000000002897F4 string=0x00000000002897F8 "\n"
 *   insn=0x00000000002897FC string=0x0000000000289800 ""
 *   insn=0x0000000000289800 string=0x0000000000289834 "?"
 *   insn=0x0000000000289804 string=0x0000000000289808 ")=G"
 *   insn=0x0000000000289808 string=0x000000000028980C "!"
 *   insn=0x0000000000289810 string=0x0000000000289814 "\t"
 *   insn=0x0000000000289810 string=0x0000000000289848 "\t"
 *   insn=0x0000000000289814 string=0x0000000000289818 "*"
 *   insn=0x0000000000289818 string=0x000000000028981C "\n"
 *   insn=0x0000000000289824 string=0x0000000000289854 "?"
 *   insn=0x0000000000289828 string=0x000000000028982C "*"
 *   insn=0x000000000028982C string=0x0000000000289830 "\n"
 *   insn=0x0000000000289848 string=0x000000000028984C "*"
 *   insn=0x000000000028984C string=0x0000000000289850 "\n"
 *   insn=0x0000000000289868 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000289870 string=0x0000000000289874 "J"
 *   insn=0x0000000000289878 string=0x000000000028987C "(a"
 *   insn=0x0000000000289888 string=0x000000000028988C "J=G"
 *   insn=0x000000000028988C string=0x0000000000289890 ")!"
 *   insn=0x0000000000289894 string=0x0000000000289898 "*"
 *   insn=0x0000000000289894 string=0x00000000002898AC "*"
 *   insn=0x0000000000289898 string=0x000000000028989C "K"
 *   insn=0x000000000028989C string=0x00000000002898A0 "+"
 *   insn=0x00000000002898A8 string=0x00000000002898B8 "_"
 *   insn=0x00000000002898AC string=0x00000000002898B0 "K"
 *   insn=0x00000000002898B0 string=0x00000000002898B4 "+"
 *   insn=0x00000000002898D8 string=0x00000000002898DC ")"
 *   insn=0x00000000002898EC string=0x00000000002898F0 ")=G"
 *   insn=0x00000000002898F0 string=0x00000000002898F4 "!"
 *   insn=0x00000000002898F4 string=0x00000000002898F8 "i"
 *   insn=0x00000000002898F8 string=0x00000000002898FC "\t"
 *   insn=0x00000000002898F8 string=0x0000000000289924 "\t"
 *   insn=0x00000000002898FC string=0x0000000000289900 "*"
 *   insn=0x0000000000289900 string=0x0000000000289904 "\n"
 *   insn=0x0000000000289908 string=0x000000000028990C "?"
 *   insn=0x000000000028990C string=0x0000000000289910 "l"
 *   insn=0x0000000000289924 string=0x0000000000289928 "*"
 *   insn=0x0000000000289928 string=0x000000000028992C "\n"
 *   insn=0x000000000028992C string=0x0000000000289930 "?"
 *   insn=0x0000000000289930 string=0x0000000000289934 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicHookshotComponent::GetBindings(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  __int64 v10; // [xsp+8h] [xbp-68h] BYREF
  int v11; // [xsp+18h] [xbp-58h]
  __int64 v12; // [xsp+20h] [xbp-50h] BYREF
  __int64 v13; // [xsp+28h] [xbp-48h]
  int v14; // [xsp+30h] [xbp-40h]
  __int64 v15; // [xsp+38h] [xbp-38h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::SpellComponent::GetBindings();
  sub_566BB8((int)&v10, "color");
  v11 = 104;
  sub_56A528(&v12, &v10);
  v14 = 0;
  v13 = 0x700000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v11;
    sub_56A528(v3 + 8, &v12);
    *(_DWORD *)(v3 + 24) = v14;
    *(_QWORD *)(v3 + 16) = v13;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v12 - 24);
  if ( (__int64 *)(v12 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v12 - 8);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v10 - 24);
  if ( (__int64 *)(v10 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(v10 - 8);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v5);
  }
}

