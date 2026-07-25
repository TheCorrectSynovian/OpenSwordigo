/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002827D4
 * Mangled: _ZN5Caver19FireBreathComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::FireBreathComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001FDF00  Caver::FireBreathComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F8FD0  Caver::SpellComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FDF00  Caver::FireBreathComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 72
 *   insn=0x00000000002827E8 string=0x00000000002827EC "V"
 *   insn=0x00000000002827FC string=0x00000000001F8FD0 "0'"
 *   insn=0x0000000000282800 string=0x0000000000583F83 "color"
 *   insn=0x0000000000282828 string=0x000000000028282C "?"
 *   insn=0x000000000028282C string=0x0000000000282830 ""
 *   insn=0x000000000028283C string=0x0000000000282840 "t"
 *   insn=0x0000000000282850 string=0x0000000000282854 ""
 *   insn=0x0000000000282858 string=0x000000000028285C "3"
 *   insn=0x0000000000282860 string=0x0000000000282864 "\t\t@"
 *   insn=0x0000000000282868 string=0x000000000028286C ""
 *   insn=0x0000000000282870 string=0x0000000000282874 "h"
 *   insn=0x0000000000282874 string=0x0000000000282878 ""
 *   insn=0x0000000000282878 string=0x000000000028287C "h"
 *   insn=0x0000000000282890 string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000282898 string=0x000000000028289C "s"
 *   insn=0x00000000002828A8 string=0x00000000002828E4 "\t#"
 *   insn=0x00000000002828B8 string=0x0000000000282908 "\t#"
 *   insn=0x00000000002828C4 string=0x00000000002828C8 "!"
 *   insn=0x00000000002828C8 string=0x000000000028296C "Y"
 *   insn=0x00000000002828E4 string=0x00000000002828E8 ")=G"
 *   insn=0x00000000002828E8 string=0x00000000002828EC "!"
 *   insn=0x00000000002828F0 string=0x00000000002828F4 "\t"
 *   insn=0x00000000002828F0 string=0x000000000028292C "\t"
 *   insn=0x00000000002828F4 string=0x00000000002828F8 "*"
 *   insn=0x00000000002828F8 string=0x00000000002828FC "\n"
 *   insn=0x0000000000282900 string=0x0000000000282904 ""
 *   insn=0x0000000000282904 string=0x0000000000282938 "?"
 *   insn=0x0000000000282908 string=0x000000000028290C ")=G"
 *   insn=0x000000000028290C string=0x0000000000282910 "!"
 *   insn=0x0000000000282914 string=0x0000000000282918 "\t"
 *   insn=0x0000000000282914 string=0x000000000028294C "\t"
 *   insn=0x0000000000282918 string=0x000000000028291C "*"
 *   insn=0x000000000028291C string=0x0000000000282920 "\n"
 *   insn=0x0000000000282928 string=0x0000000000282958 "?"
 *   insn=0x000000000028292C string=0x0000000000282930 "*"
 *   insn=0x0000000000282930 string=0x0000000000282934 "\n"
 *   insn=0x000000000028294C string=0x0000000000282950 "*"
 *   insn=0x0000000000282950 string=0x0000000000282954 "\n"
 *   insn=0x000000000028296C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000282970 string=0x0000000000282974 "\n#"
 *   insn=0x0000000000282974 string=0x0000000000282978 "J"
 *   insn=0x000000000028297C string=0x0000000000282980 "(a"
 *   insn=0x0000000000282988 string=0x000000000028298C "\n#"
 *   insn=0x000000000028298C string=0x0000000000282990 "J=G"
 *   insn=0x0000000000282990 string=0x0000000000282994 ")!"
 *   insn=0x0000000000282998 string=0x000000000028299C "*"
 *   insn=0x0000000000282998 string=0x00000000002829B0 "*"
 *   insn=0x000000000028299C string=0x00000000002829A0 "K"
 *   insn=0x00000000002829A0 string=0x00000000002829A4 "+"
 *   insn=0x00000000002829AC string=0x00000000002829BC "_"
 *   insn=0x00000000002829B0 string=0x00000000002829B4 "K"
 *   insn=0x00000000002829B4 string=0x00000000002829B8 "+"
 *   insn=0x00000000002829C8 string=0x00000000002829CC "v"
 *   insn=0x00000000002829D8 string=0x00000000002829DC "\t#"
 *   insn=0x00000000002829DC string=0x00000000002829E0 ")"
 *   insn=0x00000000002829EC string=0x00000000002829F0 "\t#"
 *   insn=0x00000000002829F0 string=0x00000000002829F4 ")=G"
 *   insn=0x00000000002829F4 string=0x00000000002829F8 "!"
 *   insn=0x00000000002829F8 string=0x00000000002829FC "i"
 *   insn=0x00000000002829FC string=0x0000000000282A00 "\t"
 *   insn=0x00000000002829FC string=0x0000000000282A28 "\t"
 *   insn=0x0000000000282A00 string=0x0000000000282A04 "*"
 *   insn=0x0000000000282A04 string=0x0000000000282A08 "\n"
 *   insn=0x0000000000282A0C string=0x0000000000282A10 "?"
 *   insn=0x0000000000282A10 string=0x0000000000282A14 "l"
 *   insn=0x0000000000282A18 string=0x0000000000282A1C "b"
 *   insn=0x0000000000282A28 string=0x0000000000282A2C "*"
 *   insn=0x0000000000282A2C string=0x0000000000282A30 "\n"
 *   insn=0x0000000000282A30 string=0x0000000000282A34 "?"
 *   insn=0x0000000000282A34 string=0x0000000000282A38 ""
 *   insn=0x0000000000282A44 string=0x0000000000282A48 "."
 *   insn=0x0000000000282A48 string=0x00000000001FDF00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireBreathComponent::GetBindings(__int64 a1, __int64 a2)
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
  v11 = 102;
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

