/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023AC34
 * Mangled: _ZN5Caver19SpawnPointComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SpawnPointComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x0000000000201010  Caver::SpawnPointComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000023AB7C  Caver::SpawnPointComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000201010  Caver::SpawnPointComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 127
 *   insn=0x000000000023AC48 string=0x000000000023AC4C "V"
 *   insn=0x000000000023AC5C string=0x000000000023AC60 "A"
 *   insn=0x000000000023AC5C string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000023AC60 string=0x00000000005848C5 "facingDirection"
 *   insn=0x000000000023AC84 string=0x000000000023AC88 "("
 *   insn=0x000000000023AC88 string=0x000000000023AC8C "H"
 *   insn=0x000000000023AC9C string=0x000000000023ACA0 "t"
 *   insn=0x000000000023ACB0 string=0x000000000023ACB4 ""
 *   insn=0x000000000023ACB8 string=0x000000000023ACBC ""
 *   insn=0x000000000023ACC0 string=0x000000000023ACC4 "\t\t@"
 *   insn=0x000000000023ACC8 string=0x000000000023ACCC ""
 *   insn=0x000000000023ACD0 string=0x000000000023ACD4 "h"
 *   insn=0x000000000023ACD4 string=0x000000000023ACD8 ""
 *   insn=0x000000000023ACD8 string=0x000000000023ACDC "h"
 *   insn=0x000000000023ACF0 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000023ACF4 string=0x000000000023ACF8 "W%"
 *   insn=0x000000000023AD08 string=0x000000000023ADF8 "I%"
 *   insn=0x000000000023AD14 string=0x000000000023AD18 "!"
 *   insn=0x000000000023AD18 string=0x000000000023AD1C "A"
 *   insn=0x000000000023AD18 string=0x000000000023AE1C "I%"
 *   insn=0x000000000023AD1C string=0x00000000005848D5 "spawnOffset"
 *   insn=0x000000000023AD48 string=0x000000000023AD4C "H"
 *   insn=0x000000000023AD58 string=0x000000000023AD5C "t"
 *   insn=0x000000000023AD6C string=0x000000000023AD70 ""
 *   insn=0x000000000023AD78 string=0x000000000023AD7C "C"
 *   insn=0x000000000023AD7C string=0x000000000023AD80 "\t\t@"
 *   insn=0x000000000023AD84 string=0x000000000023AD88 ""
 *   insn=0x000000000023AD8C string=0x000000000023AD90 "h"
 *   insn=0x000000000023AD90 string=0x000000000023AD94 ""
 *   insn=0x000000000023AD94 string=0x000000000023AD98 "h"
 *   insn=0x000000000023ADB8 string=0x000000000023ADBC "!"
 *   insn=0x000000000023ADBC string=0x000000000023AE40 "I%"
 *   insn=0x000000000023ADCC string=0x000000000023AE64 "I%"
 *   insn=0x000000000023ADD8 string=0x000000000023ADDC "a\t"
 *   insn=0x000000000023ADF8 string=0x000000000023ADFC ")=G"
 *   insn=0x000000000023ADFC string=0x000000000023AE00 "!"
 *   insn=0x000000000023AE00 string=0x000000000023AE04 ")"
 *   insn=0x000000000023AE04 string=0x000000000023AE08 "\t"
 *   insn=0x000000000023AE04 string=0x000000000023AE88 "\t"
 *   insn=0x000000000023AE08 string=0x000000000023AE0C "*"
 *   insn=0x000000000023AE0C string=0x000000000023AE10 "\n"
 *   insn=0x000000000023AE18 string=0x000000000023AE94 "?"
 *   insn=0x000000000023AE1C string=0x000000000023AE20 ")=G"
 *   insn=0x000000000023AE20 string=0x000000000023AE24 "!"
 *   insn=0x000000000023AE24 string=0x000000000023AE28 "\t"
 *   insn=0x000000000023AE28 string=0x000000000023AE2C "\t"
 *   insn=0x000000000023AE28 string=0x000000000023AEA8 "\t"
 *   insn=0x000000000023AE2C string=0x000000000023AE30 "*"
 *   insn=0x000000000023AE30 string=0x000000000023AE34 "\n"
 *   insn=0x000000000023AE3C string=0x000000000023AEB4 "?"
 *   insn=0x000000000023AE40 string=0x000000000023AE44 ")=G"
 *   insn=0x000000000023AE44 string=0x000000000023AE48 "!"
 *   insn=0x000000000023AE4C string=0x000000000023AE50 "\t"
 *   insn=0x000000000023AE4C string=0x000000000023AEC8 "\t"
 *   insn=0x000000000023AE50 string=0x000000000023AE54 "*"
 *   insn=0x000000000023AE54 string=0x000000000023AE58 "\n"
 *   insn=0x000000000023AE60 string=0x000000000023AED4 "?"
 *   insn=0x000000000023AE64 string=0x000000000023AE68 ")=G"
 *   insn=0x000000000023AE68 string=0x000000000023AE6C "!"
 *   insn=0x000000000023AE70 string=0x000000000023AE74 "\t"
 *   insn=0x000000000023AE70 string=0x000000000023AEE8 "\t"
 *   insn=0x000000000023AE74 string=0x000000000023AE78 "*"
 *   insn=0x000000000023AE78 string=0x000000000023AE7C "\n"
 *   insn=0x000000000023AE84 string=0x000000000023AEF4 "?"
 *   insn=0x000000000023AE88 string=0x000000000023AE8C "*"
 *   insn=0x000000000023AE8C string=0x000000000023AE90 "\n"
 *   insn=0x000000000023AE9C string=0x000000000023AEA0 "A"
 *   insn=0x000000000023AEA8 string=0x000000000023AEAC "*"
 *   insn=0x000000000023AEAC string=0x000000000023AEB0 "\n"
 *   insn=0x000000000023AEB4 string=0x000000000023AEB8 ","
 *   insn=0x000000000023AEBC string=0x000000000023AEC0 "9"
 *   insn=0x000000000023AEC8 string=0x000000000023AECC "*"
 *   insn=0x000000000023AECC string=0x000000000023AED0 "\n"
 *   insn=0x000000000023AED4 string=0x000000000023AED8 "L"
 *   insn=0x000000000023AEDC string=0x000000000023AEE0 "1"
 *   insn=0x000000000023AEE8 string=0x000000000023AEEC "*"
 *   insn=0x000000000023AEEC string=0x000000000023AEF0 "\n"
 *   insn=0x000000000023AEFC string=0x000000000023AF00 ")"
 *   insn=0x000000000023AF08 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023AF10 string=0x000000000023AF14 "(a"
 *   insn=0x000000000023AF1C string=0x000000000023AF20 "J%"
 *   insn=0x000000000023AF20 string=0x000000000023AF24 "J=G"
 *   insn=0x000000000023AF24 string=0x000000000023AF28 ")!"
 *   insn=0x000000000023AF2C string=0x000000000023AF30 "*"
 *   insn=0x000000000023AF2C string=0x000000000023AF44 "*"
 *   insn=0x000000000023AF30 string=0x000000000023AF34 "K"
 *   insn=0x000000000023AF34 string=0x000000000023AF38 "+"
 *   insn=0x000000000023AF40 string=0x000000000023AF50 "_"
 *   insn=0x000000000023AF44 string=0x000000000023AF48 "K"
 *   insn=0x000000000023AF48 string=0x000000000023AF4C "+"
 *   insn=0x000000000023AF78 string=0x000000000023AF7C "I%"
 *   insn=0x000000000023AF7C string=0x000000000023AF80 ")=G"
 *   insn=0x000000000023AF80 string=0x000000000023AF84 "!"
 *   insn=0x000000000023AF88 string=0x000000000023AF8C "\t"
 *   insn=0x000000000023AF88 string=0x000000000023B05C "\t"
 *   insn=0x000000000023AF8C string=0x000000000023AF90 "*"
 *   insn=0x000000000023AF90 string=0x000000000023AF94 "\n"
 *   insn=0x000000000023AF98 string=0x000000000023AF9C "*"
 *   insn=0x000000000023AF9C string=0x000000000023B044 "?"
 *   insn=0x000000000023AFA4 string=0x000000000023AFA8 "J%"
 *   insn=0x000000000023AFA8 string=0x000000000023AFAC "J"
 *   insn=0x000000000023AFB0 string=0x000000000023AFB4 "(a"
 *   insn=0x000000000023AFBC string=0x000000000023AFC0 "J%"
 *   insn=0x000000000023AFC0 string=0x000000000023AFC4 "J=G"
 *   insn=0x000000000023AFC4 string=0x000000000023AFC8 ")!"
 *   insn=0x000000000023AFCC string=0x000000000023AFD0 "*"
 *   insn=0x000000000023AFCC string=0x000000000023AFE4 "*"
 *   insn=0x000000000023AFD0 string=0x000000000023AFD4 "K"
 *   insn=0x000000000023AFD4 string=0x000000000023AFD8 "+"
 *   insn=0x000000000023AFE0 string=0x000000000023AFF0 "_"
 *   insn=0x000000000023AFE4 string=0x000000000023AFE8 "K"
 *   insn=0x000000000023AFE8 string=0x000000000023AFEC "+"
 *   insn=0x000000000023B00C string=0x000000000023B010 "I%"
 *   insn=0x000000000023B010 string=0x000000000023B014 ")"
 *   insn=0x000000000023B020 string=0x000000000023B024 "I%"
 *   insn=0x000000000023B024 string=0x000000000023B028 ")=G"
 *   insn=0x000000000023B028 string=0x000000000023B02C "!"
 *   insn=0x000000000023B02C string=0x000000000023B030 "i"
 *   insn=0x000000000023B030 string=0x000000000023B034 "\t"
 *   insn=0x000000000023B034 string=0x000000000023B038 "*"
 *   insn=0x000000000023B038 string=0x000000000023B03C "\n"
 *   insn=0x000000000023B044 string=0x000000000023B048 "l"
 *   insn=0x000000000023B054 string=0x000000000023B058 ""
 *   insn=0x000000000023B05C string=0x000000000023B060 "*"
 *   insn=0x000000000023B060 string=0x000000000023B064 "\n"
 *   insn=0x000000000023B064 string=0x000000000023B068 "?"
 *   insn=0x000000000023B068 string=0x000000000023B06C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpawnPointComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v17, "facingDirection");
  v18 = 0;
  sub_56A528(&v19, &v17);
  v21 = 1;
  v20 = 0x200000001LL;
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
  sub_566BB8((int)&v17, "spawnOffset");
  v18 = 1;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x900000001LL;
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

