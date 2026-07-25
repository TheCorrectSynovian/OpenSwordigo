/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C22E8
 * Mangled: _ZN5Caver18WaterMeshComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::WaterMeshComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F5FB0  Caver::WaterMeshComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002C21F8  Caver::WaterMeshComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F5FB0  Caver::WaterMeshComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 134
 *   insn=0x00000000002C2300 string=0x00000000002C2304 "V"
 *   insn=0x00000000002C2310 string=0x00000000002C2314 "'"
 *   insn=0x00000000002C2314 string=0x00000000002C2318 "!"
 *   insn=0x00000000002C2314 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002C2318 string=0x0000000000589FF4 "frontColor"
 *   insn=0x00000000002C2324 string=0x00000000002C2328 "$"
 *   insn=0x00000000002C2340 string=0x00000000002C2344 "y"
 *   insn=0x00000000002C2344 string=0x00000000002C2348 ""
 *   insn=0x00000000002C2348 string=0x00000000002C234C "yG"
 *   insn=0x00000000002C2354 string=0x00000000002C2358 "t"
 *   insn=0x00000000002C2368 string=0x00000000002C236C ""
 *   insn=0x00000000002C2370 string=0x00000000002C2374 "m"
 *   insn=0x00000000002C2378 string=0x00000000002C237C "\t\t@"
 *   insn=0x00000000002C2380 string=0x00000000002C2384 ""
 *   insn=0x00000000002C2388 string=0x00000000002C238C "h"
 *   insn=0x00000000002C238C string=0x00000000002C2390 ""
 *   insn=0x00000000002C2390 string=0x00000000002C2394 "h"
 *   insn=0x00000000002C23A4 string=0x00000000002C23A8 "N"
 *   insn=0x00000000002C23A8 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002C23BC string=0x00000000002C23C0 "a"
 *   insn=0x00000000002C23C0 string=0x00000000002C24AC "\t!"
 *   insn=0x00000000002C23D0 string=0x00000000002C23D4 "!"
 *   insn=0x00000000002C23D0 string=0x00000000002C24D0 "\t!"
 *   insn=0x00000000002C23D4 string=0x0000000000589FFF "surfaceColor"
 *   insn=0x00000000002C23FC string=0x00000000002C2400 "J"
 *   insn=0x00000000002C2408 string=0x00000000002C240C "t"
 *   insn=0x00000000002C241C string=0x00000000002C2420 ""
 *   insn=0x00000000002C2424 string=0x00000000002C2428 "@"
 *   insn=0x00000000002C2428 string=0x00000000002C242C "C"
 *   insn=0x00000000002C242C string=0x00000000002C2430 "\t\t@"
 *   insn=0x00000000002C2434 string=0x00000000002C2438 ""
 *   insn=0x00000000002C243C string=0x00000000002C2440 "h"
 *   insn=0x00000000002C2440 string=0x00000000002C2444 ""
 *   insn=0x00000000002C2444 string=0x00000000002C2448 "h"
 *   insn=0x00000000002C2458 string=0x00000000002C245C "!"
 *   insn=0x00000000002C2468 string=0x00000000002C246C "A"
 *   insn=0x00000000002C246C string=0x00000000002C24F4 "\t!"
 *   insn=0x00000000002C247C string=0x00000000002C2518 "\t!"
 *   insn=0x00000000002C248C string=0x00000000002C25BC "E"
 *   insn=0x00000000002C24AC string=0x00000000002C24B0 ")=G"
 *   insn=0x00000000002C24B0 string=0x00000000002C24B4 "!"
 *   insn=0x00000000002C24B4 string=0x00000000002C24B8 ")"
 *   insn=0x00000000002C24B8 string=0x00000000002C24BC "\t"
 *   insn=0x00000000002C24B8 string=0x00000000002C253C "\t"
 *   insn=0x00000000002C24BC string=0x00000000002C24C0 "*"
 *   insn=0x00000000002C24C0 string=0x00000000002C24C4 "\n"
 *   insn=0x00000000002C24CC string=0x00000000002C2548 "?"
 *   insn=0x00000000002C24D0 string=0x00000000002C24D4 ")=G"
 *   insn=0x00000000002C24D4 string=0x00000000002C24D8 "!"
 *   insn=0x00000000002C24D8 string=0x00000000002C24DC "\t"
 *   insn=0x00000000002C24DC string=0x00000000002C24E0 "\t"
 *   insn=0x00000000002C24DC string=0x00000000002C255C "\t"
 *   insn=0x00000000002C24E0 string=0x00000000002C24E4 "*"
 *   insn=0x00000000002C24E4 string=0x00000000002C24E8 "\n"
 *   insn=0x00000000002C24F0 string=0x00000000002C2568 "?"
 *   insn=0x00000000002C24F4 string=0x00000000002C24F8 ")=G"
 *   insn=0x00000000002C24F8 string=0x00000000002C24FC "!"
 *   insn=0x00000000002C2500 string=0x00000000002C2504 "\t"
 *   insn=0x00000000002C2500 string=0x00000000002C257C "\t"
 *   insn=0x00000000002C2504 string=0x00000000002C2508 "*"
 *   insn=0x00000000002C2508 string=0x00000000002C250C "\n"
 *   insn=0x00000000002C2514 string=0x00000000002C2588 "?"
 *   insn=0x00000000002C2518 string=0x00000000002C251C ")=G"
 *   insn=0x00000000002C251C string=0x00000000002C2520 "!"
 *   insn=0x00000000002C2524 string=0x00000000002C2528 "\t"
 *   insn=0x00000000002C2524 string=0x00000000002C259C "\t"
 *   insn=0x00000000002C2528 string=0x00000000002C252C "*"
 *   insn=0x00000000002C252C string=0x00000000002C2530 "\n"
 *   insn=0x00000000002C2538 string=0x00000000002C25A8 "?"
 *   insn=0x00000000002C253C string=0x00000000002C2540 "*"
 *   insn=0x00000000002C2540 string=0x00000000002C2544 "\n"
 *   insn=0x00000000002C255C string=0x00000000002C2560 "*"
 *   insn=0x00000000002C2560 string=0x00000000002C2564 "\n"
 *   insn=0x00000000002C2568 string=0x00000000002C256C "L"
 *   insn=0x00000000002C257C string=0x00000000002C2580 "*"
 *   insn=0x00000000002C2580 string=0x00000000002C2584 "\n"
 *   insn=0x00000000002C2588 string=0x00000000002C258C ","
 *   insn=0x00000000002C259C string=0x00000000002C25A0 "*"
 *   insn=0x00000000002C25A0 string=0x00000000002C25A4 "\n"
 *   insn=0x00000000002C25B0 string=0x00000000002C25B4 "|"
 *   insn=0x00000000002C25BC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C25C4 string=0x00000000002C25C8 "(a"
 *   insn=0x00000000002C25D0 string=0x00000000002C25D4 "\n!"
 *   insn=0x00000000002C25D4 string=0x00000000002C25D8 "J=G"
 *   insn=0x00000000002C25D8 string=0x00000000002C25DC ")!"
 *   insn=0x00000000002C25E0 string=0x00000000002C25E4 "*"
 *   insn=0x00000000002C25E0 string=0x00000000002C25F8 "*"
 *   insn=0x00000000002C25E4 string=0x00000000002C25E8 "K"
 *   insn=0x00000000002C25E8 string=0x00000000002C25EC "+"
 *   insn=0x00000000002C25F4 string=0x00000000002C2604 "_"
 *   insn=0x00000000002C25F8 string=0x00000000002C25FC "K"
 *   insn=0x00000000002C25FC string=0x00000000002C2600 "+"
 *   insn=0x00000000002C2610 string=0x00000000002C2614 "d"
 *   insn=0x00000000002C262C string=0x00000000002C2630 "\t!"
 *   insn=0x00000000002C2630 string=0x00000000002C2634 ")=G"
 *   insn=0x00000000002C2634 string=0x00000000002C2638 "!"
 *   insn=0x00000000002C263C string=0x00000000002C2640 "\t"
 *   insn=0x00000000002C263C string=0x00000000002C2710 "\t"
 *   insn=0x00000000002C2640 string=0x00000000002C2644 "*"
 *   insn=0x00000000002C2644 string=0x00000000002C2648 "\n"
 *   insn=0x00000000002C264C string=0x00000000002C2650 "*"
 *   insn=0x00000000002C2650 string=0x00000000002C26F8 "?"
 *   insn=0x00000000002C2658 string=0x00000000002C265C "\n!"
 *   insn=0x00000000002C265C string=0x00000000002C2660 "J"
 *   insn=0x00000000002C2664 string=0x00000000002C2668 "(a"
 *   insn=0x00000000002C2670 string=0x00000000002C2674 "\n!"
 *   insn=0x00000000002C2674 string=0x00000000002C2678 "J=G"
 *   insn=0x00000000002C2678 string=0x00000000002C267C ")!"
 *   insn=0x00000000002C2680 string=0x00000000002C2684 "*"
 *   insn=0x00000000002C2680 string=0x00000000002C2698 "*"
 *   insn=0x00000000002C2684 string=0x00000000002C2688 "K"
 *   insn=0x00000000002C2688 string=0x00000000002C268C "+"
 *   insn=0x00000000002C2694 string=0x00000000002C26A4 "_"
 *   insn=0x00000000002C2698 string=0x00000000002C269C "K"
 *   insn=0x00000000002C269C string=0x00000000002C26A0 "+"
 *   insn=0x00000000002C26B0 string=0x00000000002C26B4 "<"
 *   insn=0x00000000002C26C0 string=0x00000000002C26C4 "\t!"
 *   insn=0x00000000002C26C4 string=0x00000000002C26C8 ")"
 *   insn=0x00000000002C26D4 string=0x00000000002C26D8 "\t!"
 *   insn=0x00000000002C26D8 string=0x00000000002C26DC ")=G"
 *   insn=0x00000000002C26DC string=0x00000000002C26E0 "!"
 *   insn=0x00000000002C26E0 string=0x00000000002C26E4 "i"
 *   insn=0x00000000002C26E4 string=0x00000000002C26E8 "\t"
 *   insn=0x00000000002C26E8 string=0x00000000002C26EC "*"
 *   insn=0x00000000002C26EC string=0x00000000002C26F0 "\n"
 *   insn=0x00000000002C26F8 string=0x00000000002C26FC "l"
 *   insn=0x00000000002C2700 string=0x00000000002C2704 "("
 *   insn=0x00000000002C2708 string=0x00000000002C270C "n"
 *   insn=0x00000000002C2710 string=0x00000000002C2714 "*"
 *   insn=0x00000000002C2714 string=0x00000000002C2718 "\n"
 *   insn=0x00000000002C2718 string=0x00000000002C271C "?"
 *   insn=0x00000000002C271C string=0x00000000002C2720 ""
 *   insn=0x00000000002C272C string=0x00000000002C2730 " "
 *   insn=0x00000000002C2730 string=0x00000000001F5FB0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WaterMeshComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  __int64 v17; // [xsp+8h] [xbp-78h] BYREF
  int v18; // [xsp+18h] [xbp-68h]
  __int64 v19; // [xsp+20h] [xbp-60h] BYREF
  __int64 v20; // [xsp+28h] [xbp-58h]
  int v21; // [xsp+30h] [xbp-50h]
  __int64 v22; // [xsp+38h] [xbp-48h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v17, "frontColor");
  v18 = 2;
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
  sub_566BB8((int)&v17, "surfaceColor");
  v18 = 3;
  sub_56A528(&v19, &v17);
  v20 = 0x700000001LL;
  v21 = 0;
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

