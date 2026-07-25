/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000272260
 * Mangled: _ZN5Caver19HeroEntityComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::HeroEntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001FB6D0  Caver::HeroEntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000272194  Caver::HeroEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FA860  Caver::EntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FB6D0  Caver::HeroEntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 62
 *   insn=0x0000000000272274 string=0x0000000000272278 "V"
 *   insn=0x0000000000272284 string=0x0000000000272288 "v!"
 *   insn=0x0000000000272288 string=0x00000000001FA860 "0'"
 *   insn=0x000000000027228C string=0x0000000000588424 "onItemGet"
 *   insn=0x0000000000272298 string=0x000000000027229C "G"
 *   insn=0x00000000002722C8 string=0x00000000002722CC "t"
 *   insn=0x00000000002722DC string=0x00000000002722E0 ""
 *   insn=0x00000000002722EC string=0x00000000002722F0 "\t\t@"
 *   insn=0x00000000002722F4 string=0x00000000002722F8 ""
 *   insn=0x00000000002722FC string=0x0000000000272300 "h"
 *   insn=0x0000000000272300 string=0x0000000000272304 ""
 *   insn=0x0000000000272304 string=0x0000000000272308 "h"
 *   insn=0x0000000000272318 string=0x000000000027231C "q"
 *   insn=0x000000000027231C string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000272324 string=0x0000000000272328 "s"
 *   insn=0x0000000000272350 string=0x0000000000272354 "!"
 *   insn=0x0000000000272370 string=0x0000000000272374 ")=G"
 *   insn=0x0000000000272374 string=0x0000000000272378 "!"
 *   insn=0x000000000027237C string=0x0000000000272380 "\t"
 *   insn=0x000000000027237C string=0x00000000002723B8 "\t"
 *   insn=0x0000000000272380 string=0x0000000000272384 "*"
 *   insn=0x0000000000272384 string=0x0000000000272388 "\n"
 *   insn=0x000000000027238C string=0x0000000000272390 ""
 *   insn=0x0000000000272390 string=0x00000000002723C4 "?"
 *   insn=0x0000000000272394 string=0x0000000000272398 ")=G"
 *   insn=0x0000000000272398 string=0x000000000027239C "!"
 *   insn=0x00000000002723A0 string=0x00000000002723A4 "\t"
 *   insn=0x00000000002723A0 string=0x00000000002723D8 "\t"
 *   insn=0x00000000002723A4 string=0x00000000002723A8 "*"
 *   insn=0x00000000002723A8 string=0x00000000002723AC "\n"
 *   insn=0x00000000002723B4 string=0x00000000002723E4 "?"
 *   insn=0x00000000002723B8 string=0x00000000002723BC "*"
 *   insn=0x00000000002723BC string=0x00000000002723C0 "\n"
 *   insn=0x00000000002723D8 string=0x00000000002723DC "*"
 *   insn=0x00000000002723DC string=0x00000000002723E0 "\n"
 *   insn=0x00000000002723F8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000272400 string=0x0000000000272404 "J"
 *   insn=0x0000000000272408 string=0x000000000027240C "(a"
 *   insn=0x0000000000272418 string=0x000000000027241C "J=G"
 *   insn=0x000000000027241C string=0x0000000000272420 ")!"
 *   insn=0x0000000000272424 string=0x0000000000272428 "*"
 *   insn=0x0000000000272424 string=0x000000000027243C "*"
 *   insn=0x0000000000272428 string=0x000000000027242C "K"
 *   insn=0x000000000027242C string=0x0000000000272430 "+"
 *   insn=0x0000000000272438 string=0x0000000000272448 "_"
 *   insn=0x000000000027243C string=0x0000000000272440 "K"
 *   insn=0x0000000000272440 string=0x0000000000272444 "+"
 *   insn=0x0000000000272468 string=0x000000000027246C ")"
 *   insn=0x000000000027247C string=0x0000000000272480 ")=G"
 *   insn=0x0000000000272480 string=0x0000000000272484 "!"
 *   insn=0x0000000000272484 string=0x0000000000272488 "i"
 *   insn=0x0000000000272488 string=0x000000000027248C "\t"
 *   insn=0x0000000000272488 string=0x00000000002724B4 "\t"
 *   insn=0x000000000027248C string=0x0000000000272490 "*"
 *   insn=0x0000000000272490 string=0x0000000000272494 "\n"
 *   insn=0x0000000000272498 string=0x000000000027249C "?"
 *   insn=0x000000000027249C string=0x00000000002724A0 "l"
 *   insn=0x00000000002724B4 string=0x00000000002724B8 "*"
 *   insn=0x00000000002724B8 string=0x00000000002724BC "\n"
 *   insn=0x00000000002724BC string=0x00000000002724C0 "?"
 *   insn=0x00000000002724C0 string=0x00000000002724C4 ""
 *   insn=0x00000000002724D4 string=0x00000000001FB6D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HeroEntityComponent::GetBindings(__int64 a1, __int64 a2)
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
  Caver::EntityComponent::GetBindings();
  sub_566BB8((int)&v10, "onItemGet");
  v11 = 100;
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

