/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C690
 * Mangled: _ZN5Caver28AnimationControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::AnimationControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001FCD60  Caver::AnimationControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FCD60  Caver::AnimationControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 71
 *   insn=0x000000000021C6A4 string=0x000000000021C6A8 "V"
 *   insn=0x000000000021C6B4 string=0x000000000021C6B8 ">{"
 *   insn=0x000000000021C6B8 string=0x000000000021C6BC "!"
 *   insn=0x000000000021C6B8 string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000021C6BC string=0x0000000000583C53 "selfUpdate"
 *   insn=0x000000000021C6C8 string=0x000000000021C6CC ";)"
 *   insn=0x000000000021C6E8 string=0x000000000021C6EC "("
 *   insn=0x000000000021C6F8 string=0x000000000021C6FC "t"
 *   insn=0x000000000021C70C string=0x000000000021C710 ""
 *   insn=0x000000000021C71C string=0x000000000021C720 "\t\t@"
 *   insn=0x000000000021C724 string=0x000000000021C728 ""
 *   insn=0x000000000021C72C string=0x000000000021C730 "h"
 *   insn=0x000000000021C730 string=0x000000000021C734 ""
 *   insn=0x000000000021C734 string=0x000000000021C738 "h"
 *   insn=0x000000000021C748 string=0x000000000021C74C "el"
 *   insn=0x000000000021C74C string=0x00000000001F78E0 "0'"
 *   insn=0x000000000021C750 string=0x000000000021C754 "S&"
 *   insn=0x000000000021C754 string=0x000000000021C758 "s"
 *   insn=0x000000000021C764 string=0x000000000021C7A0 "I&"
 *   insn=0x000000000021C774 string=0x000000000021C7C4 "I&"
 *   insn=0x000000000021C780 string=0x000000000021C784 "!"
 *   insn=0x000000000021C7A0 string=0x000000000021C7A4 ")=G"
 *   insn=0x000000000021C7A4 string=0x000000000021C7A8 "!"
 *   insn=0x000000000021C7AC string=0x000000000021C7B0 "\t"
 *   insn=0x000000000021C7AC string=0x000000000021C7E8 "\t"
 *   insn=0x000000000021C7B0 string=0x000000000021C7B4 "*"
 *   insn=0x000000000021C7B4 string=0x000000000021C7B8 "\n"
 *   insn=0x000000000021C7BC string=0x000000000021C7C0 ""
 *   insn=0x000000000021C7C0 string=0x000000000021C7F4 "?"
 *   insn=0x000000000021C7C4 string=0x000000000021C7C8 ")=G"
 *   insn=0x000000000021C7C8 string=0x000000000021C7CC "!"
 *   insn=0x000000000021C7D0 string=0x000000000021C7D4 "\t"
 *   insn=0x000000000021C7D0 string=0x000000000021C808 "\t"
 *   insn=0x000000000021C7D4 string=0x000000000021C7D8 "*"
 *   insn=0x000000000021C7D8 string=0x000000000021C7DC "\n"
 *   insn=0x000000000021C7E4 string=0x000000000021C814 "?"
 *   insn=0x000000000021C7E8 string=0x000000000021C7EC "*"
 *   insn=0x000000000021C7EC string=0x000000000021C7F0 "\n"
 *   insn=0x000000000021C808 string=0x000000000021C80C "*"
 *   insn=0x000000000021C80C string=0x000000000021C810 "\n"
 *   insn=0x000000000021C828 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021C82C string=0x000000000021C830 "J&"
 *   insn=0x000000000021C830 string=0x000000000021C834 "J"
 *   insn=0x000000000021C838 string=0x000000000021C83C "(a"
 *   insn=0x000000000021C844 string=0x000000000021C848 "J&"
 *   insn=0x000000000021C848 string=0x000000000021C84C "J=G"
 *   insn=0x000000000021C84C string=0x000000000021C850 ")!"
 *   insn=0x000000000021C854 string=0x000000000021C858 "*"
 *   insn=0x000000000021C854 string=0x000000000021C86C "*"
 *   insn=0x000000000021C858 string=0x000000000021C85C "K"
 *   insn=0x000000000021C85C string=0x000000000021C860 "+"
 *   insn=0x000000000021C868 string=0x000000000021C878 "_"
 *   insn=0x000000000021C86C string=0x000000000021C870 "K"
 *   insn=0x000000000021C870 string=0x000000000021C874 "+"
 *   insn=0x000000000021C894 string=0x000000000021C898 "I&"
 *   insn=0x000000000021C898 string=0x000000000021C89C ")"
 *   insn=0x000000000021C8A8 string=0x000000000021C8AC "I&"
 *   insn=0x000000000021C8AC string=0x000000000021C8B0 ")=G"
 *   insn=0x000000000021C8B0 string=0x000000000021C8B4 "!"
 *   insn=0x000000000021C8B4 string=0x000000000021C8B8 "i"
 *   insn=0x000000000021C8B8 string=0x000000000021C8BC "\t"
 *   insn=0x000000000021C8B8 string=0x000000000021C8E4 "\t"
 *   insn=0x000000000021C8BC string=0x000000000021C8C0 "*"
 *   insn=0x000000000021C8C0 string=0x000000000021C8C4 "\n"
 *   insn=0x000000000021C8C8 string=0x000000000021C8CC "?"
 *   insn=0x000000000021C8CC string=0x000000000021C8D0 "l"
 *   insn=0x000000000021C8E4 string=0x000000000021C8E8 "*"
 *   insn=0x000000000021C8E8 string=0x000000000021C8EC "\n"
 *   insn=0x000000000021C8EC string=0x000000000021C8F0 "?"
 *   insn=0x000000000021C8F0 string=0x000000000021C8F4 ""
 *   insn=0x000000000021C904 string=0x00000000001FCD60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AnimationControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v10, "selfUpdate");
  v11 = 2;
  sub_56A528(&v12, &v10);
  v14 = 0;
  v13 = 0x400000001LL;
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

