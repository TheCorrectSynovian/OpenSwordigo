/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028FC10
 * Mangled: _ZN5Caver14SpellComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SpellComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F8FD0  Caver::SpellComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000028FB40  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F8FD0  Caver::SpellComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x000000000028FC24 string=0x000000000028FC28 "V"
 *   insn=0x000000000028FC38 string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000028FC3C string=0x0000000000588E39 "onCast"
 *   insn=0x000000000028FC60 string=0x000000000028FC64 "1j"
 *   insn=0x000000000028FC74 string=0x000000000028FC78 "t"
 *   insn=0x000000000028FC88 string=0x000000000028FC8C ""
 *   insn=0x000000000028FC90 string=0x000000000028FC94 "%j"
 *   insn=0x000000000028FC98 string=0x000000000028FC9C "\t\t@"
 *   insn=0x000000000028FCA0 string=0x000000000028FCA4 ""
 *   insn=0x000000000028FCA8 string=0x000000000028FCAC "h"
 *   insn=0x000000000028FCAC string=0x000000000028FCB0 ""
 *   insn=0x000000000028FCB0 string=0x000000000028FCB4 "h"
 *   insn=0x000000000028FCC8 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000028FCD0 string=0x000000000028FCD4 "s"
 *   insn=0x000000000028FCFC string=0x000000000028FD00 "!"
 *   insn=0x000000000028FD00 string=0x000000000028FDA4 "K"
 *   insn=0x000000000028FD1C string=0x000000000028FD20 ")=G"
 *   insn=0x000000000028FD20 string=0x000000000028FD24 "!"
 *   insn=0x000000000028FD28 string=0x000000000028FD2C "\t"
 *   insn=0x000000000028FD28 string=0x000000000028FD64 "\t"
 *   insn=0x000000000028FD2C string=0x000000000028FD30 "*"
 *   insn=0x000000000028FD30 string=0x000000000028FD34 "\n"
 *   insn=0x000000000028FD38 string=0x000000000028FD3C ""
 *   insn=0x000000000028FD3C string=0x000000000028FD70 "?"
 *   insn=0x000000000028FD40 string=0x000000000028FD44 ")=G"
 *   insn=0x000000000028FD44 string=0x000000000028FD48 "!"
 *   insn=0x000000000028FD4C string=0x000000000028FD50 "\t"
 *   insn=0x000000000028FD4C string=0x000000000028FD84 "\t"
 *   insn=0x000000000028FD50 string=0x000000000028FD54 "*"
 *   insn=0x000000000028FD54 string=0x000000000028FD58 "\n"
 *   insn=0x000000000028FD60 string=0x000000000028FD90 "?"
 *   insn=0x000000000028FD64 string=0x000000000028FD68 "*"
 *   insn=0x000000000028FD68 string=0x000000000028FD6C "\n"
 *   insn=0x000000000028FD84 string=0x000000000028FD88 "*"
 *   insn=0x000000000028FD88 string=0x000000000028FD8C "\n"
 *   insn=0x000000000028FDA4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028FDAC string=0x000000000028FDB0 "J"
 *   insn=0x000000000028FDB4 string=0x000000000028FDB8 "(a"
 *   insn=0x000000000028FDC4 string=0x000000000028FDC8 "J=G"
 *   insn=0x000000000028FDC8 string=0x000000000028FDCC ")!"
 *   insn=0x000000000028FDD0 string=0x000000000028FDD4 "*"
 *   insn=0x000000000028FDD0 string=0x000000000028FDE8 "*"
 *   insn=0x000000000028FDD4 string=0x000000000028FDD8 "K"
 *   insn=0x000000000028FDD8 string=0x000000000028FDDC "+"
 *   insn=0x000000000028FDE4 string=0x000000000028FDF4 "_"
 *   insn=0x000000000028FDE8 string=0x000000000028FDEC "K"
 *   insn=0x000000000028FDEC string=0x000000000028FDF0 "+"
 *   insn=0x000000000028FE00 string=0x000000000028FE04 "hi"
 *   insn=0x000000000028FE14 string=0x000000000028FE18 ")"
 *   insn=0x000000000028FE28 string=0x000000000028FE2C ")=G"
 *   insn=0x000000000028FE2C string=0x000000000028FE30 "!"
 *   insn=0x000000000028FE30 string=0x000000000028FE34 "i"
 *   insn=0x000000000028FE34 string=0x000000000028FE38 "\t"
 *   insn=0x000000000028FE34 string=0x000000000028FE60 "\t"
 *   insn=0x000000000028FE38 string=0x000000000028FE3C "*"
 *   insn=0x000000000028FE3C string=0x000000000028FE40 "\n"
 *   insn=0x000000000028FE44 string=0x000000000028FE48 "?"
 *   insn=0x000000000028FE48 string=0x000000000028FE4C "l"
 *   insn=0x000000000028FE50 string=0x000000000028FE54 "Ti"
 *   insn=0x000000000028FE60 string=0x000000000028FE64 "*"
 *   insn=0x000000000028FE64 string=0x000000000028FE68 "\n"
 *   insn=0x000000000028FE68 string=0x000000000028FE6C "?"
 *   insn=0x000000000028FE6C string=0x000000000028FE70 ""
 *   insn=0x000000000028FE7C string=0x000000000028FE80 "T"
 *   insn=0x000000000028FE80 string=0x00000000001F8FD0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpellComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v10, "onCast");
  v11 = 0;
  sub_56A528(&v12, &v10);
  v14 = 0;
  v13 = 0x600000001LL;
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

