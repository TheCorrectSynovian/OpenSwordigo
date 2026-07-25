/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028410C
 * Mangled: _ZN5Caver18MagicBoltComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::MagicBoltComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001FD000  Caver::MagicBoltComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000284030  Caver::MagicBoltComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F8FD0  Caver::SpellComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FD000  Caver::MagicBoltComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 120
 *   insn=0x0000000000284120 string=0x0000000000284124 "V"
 *   insn=0x0000000000284134 string=0x00000000001F8FD0 "0'"
 *   insn=0x0000000000284138 string=0x0000000000583F83 "color"
 *   insn=0x0000000000284174 string=0x0000000000284178 "t"
 *   insn=0x0000000000284188 string=0x000000000028418C ""
 *   insn=0x0000000000284198 string=0x000000000028419C "\t\t@"
 *   insn=0x00000000002841A0 string=0x00000000002841A4 ""
 *   insn=0x00000000002841A8 string=0x00000000002841AC "h"
 *   insn=0x00000000002841AC string=0x00000000002841B0 ""
 *   insn=0x00000000002841B0 string=0x00000000002841B4 "h"
 *   insn=0x00000000002841C8 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002841E0 string=0x00000000002842D0 "\t#"
 *   insn=0x00000000002841EC string=0x00000000002841F0 "!"
 *   insn=0x00000000002841F0 string=0x00000000002841F4 "!"
 *   insn=0x00000000002841F0 string=0x00000000002842F4 "\t#"
 *   insn=0x00000000002841F4 string=0x0000000000588B61 "speed"
 *   insn=0x0000000000284200 string=0x0000000000284204 "m"
 *   insn=0x0000000000284208 string=0x000000000028420C ""
 *   insn=0x0000000000284230 string=0x0000000000284234 "t"
 *   insn=0x0000000000284244 string=0x0000000000284248 ""
 *   insn=0x0000000000284250 string=0x0000000000284254 "C"
 *   insn=0x0000000000284254 string=0x0000000000284258 "\t\t@"
 *   insn=0x000000000028425C string=0x0000000000284260 ""
 *   insn=0x0000000000284264 string=0x0000000000284268 "h"
 *   insn=0x0000000000284268 string=0x000000000028426C ""
 *   insn=0x000000000028426C string=0x0000000000284270 "h"
 *   insn=0x0000000000284290 string=0x0000000000284294 "!"
 *   insn=0x0000000000284294 string=0x0000000000284318 "\t#"
 *   insn=0x00000000002842A4 string=0x000000000028433C "\t#"
 *   insn=0x00000000002842B0 string=0x00000000002842B4 "a\t"
 *   insn=0x00000000002842D0 string=0x00000000002842D4 ")=G"
 *   insn=0x00000000002842D4 string=0x00000000002842D8 "!"
 *   insn=0x00000000002842D8 string=0x00000000002842DC ")"
 *   insn=0x00000000002842DC string=0x00000000002842E0 "\t"
 *   insn=0x00000000002842DC string=0x0000000000284360 "\t"
 *   insn=0x00000000002842E0 string=0x00000000002842E4 "*"
 *   insn=0x00000000002842E4 string=0x00000000002842E8 "\n"
 *   insn=0x00000000002842F0 string=0x000000000028436C "?"
 *   insn=0x00000000002842F4 string=0x00000000002842F8 ")=G"
 *   insn=0x00000000002842F8 string=0x00000000002842FC "!"
 *   insn=0x00000000002842FC string=0x0000000000284300 "\t"
 *   insn=0x0000000000284300 string=0x0000000000284304 "\t"
 *   insn=0x0000000000284300 string=0x0000000000284380 "\t"
 *   insn=0x0000000000284304 string=0x0000000000284308 "*"
 *   insn=0x0000000000284308 string=0x000000000028430C "\n"
 *   insn=0x0000000000284314 string=0x000000000028438C "?"
 *   insn=0x0000000000284318 string=0x000000000028431C ")=G"
 *   insn=0x000000000028431C string=0x0000000000284320 "!"
 *   insn=0x0000000000284324 string=0x0000000000284328 "\t"
 *   insn=0x0000000000284324 string=0x00000000002843A0 "\t"
 *   insn=0x0000000000284328 string=0x000000000028432C "*"
 *   insn=0x000000000028432C string=0x0000000000284330 "\n"
 *   insn=0x0000000000284338 string=0x00000000002843AC "?"
 *   insn=0x000000000028433C string=0x0000000000284340 ")=G"
 *   insn=0x0000000000284340 string=0x0000000000284344 "!"
 *   insn=0x0000000000284348 string=0x000000000028434C "\t"
 *   insn=0x0000000000284348 string=0x00000000002843C0 "\t"
 *   insn=0x000000000028434C string=0x0000000000284350 "*"
 *   insn=0x0000000000284350 string=0x0000000000284354 "\n"
 *   insn=0x000000000028435C string=0x00000000002843CC "?"
 *   insn=0x0000000000284360 string=0x0000000000284364 "*"
 *   insn=0x0000000000284364 string=0x0000000000284368 "\n"
 *   insn=0x0000000000284374 string=0x0000000000284378 ""
 *   insn=0x0000000000284380 string=0x0000000000284384 "*"
 *   insn=0x0000000000284384 string=0x0000000000284388 "\n"
 *   insn=0x000000000028438C string=0x0000000000284390 ","
 *   insn=0x00000000002843A0 string=0x00000000002843A4 "*"
 *   insn=0x00000000002843A4 string=0x00000000002843A8 "\n"
 *   insn=0x00000000002843AC string=0x00000000002843B0 "L"
 *   insn=0x00000000002843C0 string=0x00000000002843C4 "*"
 *   insn=0x00000000002843C4 string=0x00000000002843C8 "\n"
 *   insn=0x00000000002843E0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002843E8 string=0x00000000002843EC "(a"
 *   insn=0x00000000002843F4 string=0x00000000002843F8 "\n#"
 *   insn=0x00000000002843F8 string=0x00000000002843FC "J=G"
 *   insn=0x00000000002843FC string=0x0000000000284400 ")!"
 *   insn=0x0000000000284404 string=0x0000000000284408 "*"
 *   insn=0x0000000000284404 string=0x000000000028441C "*"
 *   insn=0x0000000000284408 string=0x000000000028440C "K"
 *   insn=0x000000000028440C string=0x0000000000284410 "+"
 *   insn=0x0000000000284418 string=0x0000000000284428 "_"
 *   insn=0x000000000028441C string=0x0000000000284420 "K"
 *   insn=0x0000000000284420 string=0x0000000000284424 "+"
 *   insn=0x0000000000284450 string=0x0000000000284454 "\t#"
 *   insn=0x0000000000284454 string=0x0000000000284458 ")=G"
 *   insn=0x0000000000284458 string=0x000000000028445C "!"
 *   insn=0x0000000000284460 string=0x0000000000284464 "\t"
 *   insn=0x0000000000284460 string=0x0000000000284534 "\t"
 *   insn=0x0000000000284464 string=0x0000000000284468 "*"
 *   insn=0x0000000000284468 string=0x000000000028446C "\n"
 *   insn=0x0000000000284470 string=0x0000000000284474 "*"
 *   insn=0x0000000000284474 string=0x000000000028451C "?"
 *   insn=0x000000000028447C string=0x0000000000284480 "\n#"
 *   insn=0x0000000000284480 string=0x0000000000284484 "J"
 *   insn=0x0000000000284488 string=0x000000000028448C "(a"
 *   insn=0x0000000000284494 string=0x0000000000284498 "\n#"
 *   insn=0x0000000000284498 string=0x000000000028449C "J=G"
 *   insn=0x000000000028449C string=0x00000000002844A0 ")!"
 *   insn=0x00000000002844A4 string=0x00000000002844A8 "*"
 *   insn=0x00000000002844A4 string=0x00000000002844BC "*"
 *   insn=0x00000000002844A8 string=0x00000000002844AC "K"
 *   insn=0x00000000002844AC string=0x00000000002844B0 "+"
 *   insn=0x00000000002844B8 string=0x00000000002844C8 "_"
 *   insn=0x00000000002844BC string=0x00000000002844C0 "K"
 *   insn=0x00000000002844C0 string=0x00000000002844C4 "+"
 *   insn=0x00000000002844E4 string=0x00000000002844E8 "\t#"
 *   insn=0x00000000002844E8 string=0x00000000002844EC ")"
 *   insn=0x00000000002844F8 string=0x00000000002844FC "\t#"
 *   insn=0x00000000002844FC string=0x0000000000284500 ")=G"
 *   insn=0x0000000000284500 string=0x0000000000284504 "!"
 *   insn=0x0000000000284504 string=0x0000000000284508 "i"
 *   insn=0x0000000000284508 string=0x000000000028450C "\t"
 *   insn=0x000000000028450C string=0x0000000000284510 "*"
 *   insn=0x0000000000284510 string=0x0000000000284514 "\n"
 *   insn=0x000000000028451C string=0x0000000000284520 "l"
 *   insn=0x0000000000284534 string=0x0000000000284538 "*"
 *   insn=0x0000000000284538 string=0x000000000028453C "\n"
 *   insn=0x000000000028453C string=0x0000000000284540 "?"
 *   insn=0x0000000000284540 string=0x0000000000284544 ""
 *   insn=0x0000000000284554 string=0x00000000001FD000 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBoltComponent::GetBindings(__int64 a1, __int64 a2)
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
  Caver::SpellComponent::GetBindings();
  sub_566BB8((int)&v17, "color");
  v18 = 103;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x700000001LL;
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
  sub_566BB8((int)&v17, "speed");
  v18 = 104;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x500000001LL;
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

