/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299708
 * Mangled: _ZN5Caver26MonsterControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::MonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000200EB0  Caver::MonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000200EB0  Caver::MonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 71
 *   insn=0x000000000029971C string=0x0000000000299720 "V"
 *   insn=0x000000000029972C string=0x0000000000299730 " "
 *   insn=0x0000000000299730 string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000299734 string=0x0000000000589221 "walkSpeed"
 *   insn=0x000000000029975C string=0x0000000000299760 "rC"
 *   insn=0x0000000000299760 string=0x0000000000299764 "H"
 *   insn=0x0000000000299770 string=0x0000000000299774 "t"
 *   insn=0x0000000000299784 string=0x0000000000299788 ""
 *   insn=0x000000000029978C string=0x0000000000299790 "fC"
 *   insn=0x0000000000299794 string=0x0000000000299798 "\t\t@"
 *   insn=0x000000000029979C string=0x00000000002997A0 ""
 *   insn=0x00000000002997A4 string=0x00000000002997A8 "h"
 *   insn=0x00000000002997A8 string=0x00000000002997AC ""
 *   insn=0x00000000002997AC string=0x00000000002997B0 "h"
 *   insn=0x00000000002997C0 string=0x00000000002997C4 "Gx"
 *   insn=0x00000000002997C4 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002997C8 string=0x00000000002997CC "s""
 *   insn=0x00000000002997CC string=0x00000000002997D0 "s"
 *   insn=0x00000000002997DC string=0x0000000000299818 "I""
 *   insn=0x00000000002997EC string=0x000000000029983C "I""
 *   insn=0x00000000002997F8 string=0x00000000002997FC "!"
 *   insn=0x0000000000299818 string=0x000000000029981C ")=G"
 *   insn=0x000000000029981C string=0x0000000000299820 "!"
 *   insn=0x0000000000299824 string=0x0000000000299828 "\t"
 *   insn=0x0000000000299824 string=0x0000000000299860 "\t"
 *   insn=0x0000000000299828 string=0x000000000029982C "*"
 *   insn=0x000000000029982C string=0x0000000000299830 "\n"
 *   insn=0x0000000000299834 string=0x0000000000299838 ""
 *   insn=0x0000000000299838 string=0x000000000029986C "?"
 *   insn=0x000000000029983C string=0x0000000000299840 ")=G"
 *   insn=0x0000000000299840 string=0x0000000000299844 "!"
 *   insn=0x0000000000299848 string=0x000000000029984C "\t"
 *   insn=0x0000000000299848 string=0x0000000000299880 "\t"
 *   insn=0x000000000029984C string=0x0000000000299850 "*"
 *   insn=0x0000000000299850 string=0x0000000000299854 "\n"
 *   insn=0x000000000029985C string=0x000000000029988C "?"
 *   insn=0x0000000000299860 string=0x0000000000299864 "*"
 *   insn=0x0000000000299864 string=0x0000000000299868 "\n"
 *   insn=0x0000000000299880 string=0x0000000000299884 "*"
 *   insn=0x0000000000299884 string=0x0000000000299888 "\n"
 *   insn=0x00000000002998A0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002998A4 string=0x00000000002998A8 "j""
 *   insn=0x00000000002998A8 string=0x00000000002998AC "J"
 *   insn=0x00000000002998B0 string=0x00000000002998B4 "(a"
 *   insn=0x00000000002998BC string=0x00000000002998C0 "J""
 *   insn=0x00000000002998C0 string=0x00000000002998C4 "J=G"
 *   insn=0x00000000002998C4 string=0x00000000002998C8 ")!"
 *   insn=0x00000000002998CC string=0x00000000002998D0 "*"
 *   insn=0x00000000002998CC string=0x00000000002998E4 "*"
 *   insn=0x00000000002998D0 string=0x00000000002998D4 "K"
 *   insn=0x00000000002998D4 string=0x00000000002998D8 "+"
 *   insn=0x00000000002998E0 string=0x00000000002998F0 "_"
 *   insn=0x00000000002998E4 string=0x00000000002998E8 "K"
 *   insn=0x00000000002998E8 string=0x00000000002998EC "+"
 *   insn=0x000000000029990C string=0x0000000000299910 "i""
 *   insn=0x0000000000299910 string=0x0000000000299914 ")"
 *   insn=0x0000000000299920 string=0x0000000000299924 "I""
 *   insn=0x0000000000299924 string=0x0000000000299928 ")=G"
 *   insn=0x0000000000299928 string=0x000000000029992C "!"
 *   insn=0x000000000029992C string=0x0000000000299930 "i"
 *   insn=0x0000000000299930 string=0x0000000000299934 "\t"
 *   insn=0x0000000000299930 string=0x000000000029995C "\t"
 *   insn=0x0000000000299934 string=0x0000000000299938 "*"
 *   insn=0x0000000000299938 string=0x000000000029993C "\n"
 *   insn=0x0000000000299940 string=0x0000000000299944 "?"
 *   insn=0x0000000000299944 string=0x0000000000299948 "l"
 *   insn=0x000000000029995C string=0x0000000000299960 "*"
 *   insn=0x0000000000299960 string=0x0000000000299964 "\n"
 *   insn=0x0000000000299964 string=0x0000000000299968 "?"
 *   insn=0x0000000000299968 string=0x000000000029996C ""
 *   insn=0x0000000000299978 string=0x000000000029997C "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MonsterControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v10, "walkSpeed");
  v11 = 3;
  sub_56A528(&v12, &v10);
  v14 = 0;
  v13 = 0x500000001LL;
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

