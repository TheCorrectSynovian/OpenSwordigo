/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000233338
 * Mangled: _ZN5Caver19PropertiesComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::PropertiesComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F7E70  Caver::PropertiesComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000233298  Caver::PropertiesComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F7E70  Caver::PropertiesComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x000000000023334C string=0x0000000000233350 "V"
 *   insn=0x0000000000233360 string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000233364 string=0x0000000000584678 "onLoad"
 *   insn=0x0000000000233388 string=0x000000000023338C "g"
 *   insn=0x000000000023339C string=0x00000000002333A0 "t"
 *   insn=0x00000000002333B0 string=0x00000000002333B4 ""
 *   insn=0x00000000002333B8 string=0x00000000002333BC "["
 *   insn=0x00000000002333C0 string=0x00000000002333C4 "\t\t@"
 *   insn=0x00000000002333C8 string=0x00000000002333CC ""
 *   insn=0x00000000002333D0 string=0x00000000002333D4 "h"
 *   insn=0x00000000002333D4 string=0x00000000002333D8 ""
 *   insn=0x00000000002333D8 string=0x00000000002333DC "h"
 *   insn=0x00000000002333EC string=0x00000000002333F0 "<"
 *   insn=0x00000000002333F0 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002333F8 string=0x00000000002333FC "s"
 *   insn=0x0000000000233424 string=0x0000000000233428 "!"
 *   insn=0x0000000000233444 string=0x0000000000233448 ")=G"
 *   insn=0x0000000000233448 string=0x000000000023344C "!"
 *   insn=0x0000000000233450 string=0x0000000000233454 "\t"
 *   insn=0x0000000000233450 string=0x000000000023348C "\t"
 *   insn=0x0000000000233454 string=0x0000000000233458 "*"
 *   insn=0x0000000000233458 string=0x000000000023345C "\n"
 *   insn=0x0000000000233460 string=0x0000000000233464 ""
 *   insn=0x0000000000233464 string=0x0000000000233498 "?"
 *   insn=0x0000000000233468 string=0x000000000023346C ")=G"
 *   insn=0x000000000023346C string=0x0000000000233470 "!"
 *   insn=0x0000000000233474 string=0x0000000000233478 "\t"
 *   insn=0x0000000000233474 string=0x00000000002334AC "\t"
 *   insn=0x0000000000233478 string=0x000000000023347C "*"
 *   insn=0x000000000023347C string=0x0000000000233480 "\n"
 *   insn=0x0000000000233488 string=0x00000000002334B8 "?"
 *   insn=0x000000000023348C string=0x0000000000233490 "*"
 *   insn=0x0000000000233490 string=0x0000000000233494 "\n"
 *   insn=0x00000000002334AC string=0x00000000002334B0 "*"
 *   insn=0x00000000002334B0 string=0x00000000002334B4 "\n"
 *   insn=0x00000000002334CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002334D4 string=0x00000000002334D8 "J"
 *   insn=0x00000000002334DC string=0x00000000002334E0 "(a"
 *   insn=0x00000000002334EC string=0x00000000002334F0 "J=G"
 *   insn=0x00000000002334F0 string=0x00000000002334F4 ")!"
 *   insn=0x00000000002334F8 string=0x00000000002334FC "*"
 *   insn=0x00000000002334F8 string=0x0000000000233510 "*"
 *   insn=0x00000000002334FC string=0x0000000000233500 "K"
 *   insn=0x0000000000233500 string=0x0000000000233504 "+"
 *   insn=0x000000000023350C string=0x000000000023351C "_"
 *   insn=0x0000000000233510 string=0x0000000000233514 "K"
 *   insn=0x0000000000233514 string=0x0000000000233518 "+"
 *   insn=0x000000000023353C string=0x0000000000233540 ")"
 *   insn=0x0000000000233550 string=0x0000000000233554 ")=G"
 *   insn=0x0000000000233554 string=0x0000000000233558 "!"
 *   insn=0x0000000000233558 string=0x000000000023355C "i"
 *   insn=0x000000000023355C string=0x0000000000233560 "\t"
 *   insn=0x000000000023355C string=0x0000000000233588 "\t"
 *   insn=0x0000000000233560 string=0x0000000000233564 "*"
 *   insn=0x0000000000233564 string=0x0000000000233568 "\n"
 *   insn=0x000000000023356C string=0x0000000000233570 "?"
 *   insn=0x0000000000233570 string=0x0000000000233574 "l"
 *   insn=0x0000000000233588 string=0x000000000023358C "*"
 *   insn=0x000000000023358C string=0x0000000000233590 "\n"
 *   insn=0x0000000000233590 string=0x0000000000233594 "?"
 *   insn=0x0000000000233594 string=0x0000000000233598 ""
 *   insn=0x00000000002335A4 string=0x00000000002335A8 "2"
 *   insn=0x00000000002335A8 string=0x00000000001F7E70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PropertiesComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v10, "onLoad");
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

