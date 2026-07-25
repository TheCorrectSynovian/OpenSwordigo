/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCBA4
 * Mangled: _ZN5Caver20WeaponTrailComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::WeaponTrailComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x0000000000201680  Caver::WeaponTrailComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002CCB04  Caver::WeaponTrailComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000201680  Caver::WeaponTrailComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 64
 *   insn=0x00000000002CCBB8 string=0x00000000002CCBBC "V"
 *   insn=0x00000000002CCBCC string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002CCBD0 string=0x0000000000583F83 "color"
 *   insn=0x00000000002CCBF4 string=0x00000000002CCBF8 "Lv\n"
 *   insn=0x00000000002CCC08 string=0x00000000002CCC0C "t"
 *   insn=0x00000000002CCC1C string=0x00000000002CCC20 ""
 *   insn=0x00000000002CCC24 string=0x00000000002CCC28 "@v\n"
 *   insn=0x00000000002CCC2C string=0x00000000002CCC30 "\t\t@"
 *   insn=0x00000000002CCC34 string=0x00000000002CCC38 ""
 *   insn=0x00000000002CCC3C string=0x00000000002CCC40 "h"
 *   insn=0x00000000002CCC40 string=0x00000000002CCC44 ""
 *   insn=0x00000000002CCC44 string=0x00000000002CCC48 "h"
 *   insn=0x00000000002CCC58 string=0x00000000002CCC5C "!"
 *   insn=0x00000000002CCC5C string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002CCC64 string=0x00000000002CCC68 "s"
 *   insn=0x00000000002CCC90 string=0x00000000002CCC94 "!"
 *   insn=0x00000000002CCC94 string=0x00000000002CCD38 "f"
 *   insn=0x00000000002CCCB0 string=0x00000000002CCCB4 ")=G"
 *   insn=0x00000000002CCCB4 string=0x00000000002CCCB8 "!"
 *   insn=0x00000000002CCCBC string=0x00000000002CCCC0 "\t"
 *   insn=0x00000000002CCCBC string=0x00000000002CCCF8 "\t"
 *   insn=0x00000000002CCCC0 string=0x00000000002CCCC4 "*"
 *   insn=0x00000000002CCCC4 string=0x00000000002CCCC8 "\n"
 *   insn=0x00000000002CCCCC string=0x00000000002CCCD0 ""
 *   insn=0x00000000002CCCD0 string=0x00000000002CCD04 "?"
 *   insn=0x00000000002CCCD4 string=0x00000000002CCCD8 ")=G"
 *   insn=0x00000000002CCCD8 string=0x00000000002CCCDC "!"
 *   insn=0x00000000002CCCE0 string=0x00000000002CCCE4 "\t"
 *   insn=0x00000000002CCCE0 string=0x00000000002CCD18 "\t"
 *   insn=0x00000000002CCCE4 string=0x00000000002CCCE8 "*"
 *   insn=0x00000000002CCCE8 string=0x00000000002CCCEC "\n"
 *   insn=0x00000000002CCCF4 string=0x00000000002CCD24 "?"
 *   insn=0x00000000002CCCF8 string=0x00000000002CCCFC "*"
 *   insn=0x00000000002CCCFC string=0x00000000002CCD00 "\n"
 *   insn=0x00000000002CCD18 string=0x00000000002CCD1C "*"
 *   insn=0x00000000002CCD1C string=0x00000000002CCD20 "\n"
 *   insn=0x00000000002CCD38 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CCD40 string=0x00000000002CCD44 "J"
 *   insn=0x00000000002CCD48 string=0x00000000002CCD4C "(a"
 *   insn=0x00000000002CCD58 string=0x00000000002CCD5C "J=G"
 *   insn=0x00000000002CCD5C string=0x00000000002CCD60 ")!"
 *   insn=0x00000000002CCD64 string=0x00000000002CCD68 "*"
 *   insn=0x00000000002CCD64 string=0x00000000002CCD7C "*"
 *   insn=0x00000000002CCD68 string=0x00000000002CCD6C "K"
 *   insn=0x00000000002CCD6C string=0x00000000002CCD70 "+"
 *   insn=0x00000000002CCD78 string=0x00000000002CCD88 "_"
 *   insn=0x00000000002CCD7C string=0x00000000002CCD80 "K"
 *   insn=0x00000000002CCD80 string=0x00000000002CCD84 "+"
 *   insn=0x00000000002CCDA8 string=0x00000000002CCDAC ")"
 *   insn=0x00000000002CCDBC string=0x00000000002CCDC0 ")=G"
 *   insn=0x00000000002CCDC0 string=0x00000000002CCDC4 "!"
 *   insn=0x00000000002CCDC4 string=0x00000000002CCDC8 "i"
 *   insn=0x00000000002CCDC8 string=0x00000000002CCDCC "\t"
 *   insn=0x00000000002CCDC8 string=0x00000000002CCDF4 "\t"
 *   insn=0x00000000002CCDCC string=0x00000000002CCDD0 "*"
 *   insn=0x00000000002CCDD0 string=0x00000000002CCDD4 "\n"
 *   insn=0x00000000002CCDD8 string=0x00000000002CCDDC "?"
 *   insn=0x00000000002CCDDC string=0x00000000002CCDE0 "l"
 *   insn=0x00000000002CCDE4 string=0x00000000002CCDE8 "ou\n"
 *   insn=0x00000000002CCDF4 string=0x00000000002CCDF8 "*"
 *   insn=0x00000000002CCDF8 string=0x00000000002CCDFC "\n"
 *   insn=0x00000000002CCDFC string=0x00000000002CCE00 "?"
 *   insn=0x00000000002CCE00 string=0x00000000002CCE04 ""
 *   insn=0x00000000002CCE10 string=0x00000000002CCE14 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponTrailComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v10, "color");
  v11 = 0;
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

