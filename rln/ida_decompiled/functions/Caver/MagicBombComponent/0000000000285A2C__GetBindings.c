/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285A2C
 * Mangled: _ZN5Caver18MagicBombComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::MagicBombComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F35F0  Caver::MagicBombComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000028598C  Caver::MagicBombComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F35F0  Caver::MagicBombComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F8FD0  Caver::SpellComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x0000000000285A40 string=0x0000000000285A44 "V"
 *   insn=0x0000000000285A50 string=0x0000000000285A54 "_"
 *   insn=0x0000000000285A54 string=0x00000000001F8FD0 "0'"
 *   insn=0x0000000000285A58 string=0x0000000000583F83 "color"
 *   insn=0x0000000000285A64 string=0x0000000000285A68 "T"
 *   insn=0x0000000000285A94 string=0x0000000000285A98 "t"
 *   insn=0x0000000000285AA8 string=0x0000000000285AAC ""
 *   insn=0x0000000000285AB8 string=0x0000000000285ABC "\t\t@"
 *   insn=0x0000000000285AC0 string=0x0000000000285AC4 ""
 *   insn=0x0000000000285AC8 string=0x0000000000285ACC "h"
 *   insn=0x0000000000285ACC string=0x0000000000285AD0 ""
 *   insn=0x0000000000285AD0 string=0x0000000000285AD4 "h"
 *   insn=0x0000000000285AE4 string=0x0000000000285AE8 "~"
 *   insn=0x0000000000285AE8 string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000285AF0 string=0x0000000000285AF4 "s"
 *   insn=0x0000000000285B1C string=0x0000000000285B20 "!"
 *   insn=0x0000000000285B3C string=0x0000000000285B40 ")=G"
 *   insn=0x0000000000285B40 string=0x0000000000285B44 "!"
 *   insn=0x0000000000285B48 string=0x0000000000285B4C "\t"
 *   insn=0x0000000000285B48 string=0x0000000000285B84 "\t"
 *   insn=0x0000000000285B4C string=0x0000000000285B50 "*"
 *   insn=0x0000000000285B50 string=0x0000000000285B54 "\n"
 *   insn=0x0000000000285B58 string=0x0000000000285B5C ""
 *   insn=0x0000000000285B5C string=0x0000000000285B90 "?"
 *   insn=0x0000000000285B60 string=0x0000000000285B64 ")=G"
 *   insn=0x0000000000285B64 string=0x0000000000285B68 "!"
 *   insn=0x0000000000285B6C string=0x0000000000285B70 "\t"
 *   insn=0x0000000000285B6C string=0x0000000000285BA4 "\t"
 *   insn=0x0000000000285B70 string=0x0000000000285B74 "*"
 *   insn=0x0000000000285B74 string=0x0000000000285B78 "\n"
 *   insn=0x0000000000285B80 string=0x0000000000285BB0 "?"
 *   insn=0x0000000000285B84 string=0x0000000000285B88 "*"
 *   insn=0x0000000000285B88 string=0x0000000000285B8C "\n"
 *   insn=0x0000000000285BA4 string=0x0000000000285BA8 "*"
 *   insn=0x0000000000285BA8 string=0x0000000000285BAC "\n"
 *   insn=0x0000000000285BC4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000285BC8 string=0x0000000000285BCC "\n#"
 *   insn=0x0000000000285BCC string=0x0000000000285BD0 "J"
 *   insn=0x0000000000285BD4 string=0x0000000000285BD8 "(a"
 *   insn=0x0000000000285BE4 string=0x0000000000285BE8 "J=G"
 *   insn=0x0000000000285BE8 string=0x0000000000285BEC ")!"
 *   insn=0x0000000000285BF0 string=0x0000000000285BF4 "*"
 *   insn=0x0000000000285BF0 string=0x0000000000285C08 "*"
 *   insn=0x0000000000285BF4 string=0x0000000000285BF8 "K"
 *   insn=0x0000000000285BF8 string=0x0000000000285BFC "+"
 *   insn=0x0000000000285C04 string=0x0000000000285C14 "_"
 *   insn=0x0000000000285C08 string=0x0000000000285C0C "K"
 *   insn=0x0000000000285C0C string=0x0000000000285C10 "+"
 *   insn=0x0000000000285C30 string=0x0000000000285C34 "\t#"
 *   insn=0x0000000000285C34 string=0x0000000000285C38 ")"
 *   insn=0x0000000000285C48 string=0x0000000000285C4C ")=G"
 *   insn=0x0000000000285C4C string=0x0000000000285C50 "!"
 *   insn=0x0000000000285C50 string=0x0000000000285C54 "i"
 *   insn=0x0000000000285C54 string=0x0000000000285C58 "\t"
 *   insn=0x0000000000285C54 string=0x0000000000285C80 "\t"
 *   insn=0x0000000000285C58 string=0x0000000000285C5C "*"
 *   insn=0x0000000000285C5C string=0x0000000000285C60 "\n"
 *   insn=0x0000000000285C64 string=0x0000000000285C68 "?"
 *   insn=0x0000000000285C68 string=0x0000000000285C6C "l"
 *   insn=0x0000000000285C80 string=0x0000000000285C84 "*"
 *   insn=0x0000000000285C84 string=0x0000000000285C88 "\n"
 *   insn=0x0000000000285C88 string=0x0000000000285C8C "?"
 *   insn=0x0000000000285C8C string=0x0000000000285C90 ""
 *   insn=0x0000000000285C9C string=0x0000000000285CA0 "T"
 *   insn=0x0000000000285CA0 string=0x00000000001F35F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBombComponent::GetBindings(__int64 a1, __int64 a2)
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
  v11 = 100;
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

