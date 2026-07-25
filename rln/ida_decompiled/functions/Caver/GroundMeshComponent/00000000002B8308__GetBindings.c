/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8308
 * Mangled: _ZN5Caver19GroundMeshComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::GroundMeshComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001FD570  Caver::GroundMeshComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002B80BC  Caver::MeshBuilder::MeshBuilder(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FD570  Caver::GroundMeshComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 134
 *   insn=0x00000000002B831C string=0x00000000002B8320 "V"
 *   insn=0x00000000002B832C string=0x00000000002B8330 " "
 *   insn=0x00000000002B8330 string=0x00000000002B8334 "A"
 *   insn=0x00000000002B8330 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002B8334 string=0x0000000000583F83 "color"
 *   insn=0x00000000002B8358 string=0x00000000002B835C "s"
 *   insn=0x00000000002B835C string=0x00000000002B8360 "H"
 *   insn=0x00000000002B836C string=0x00000000002B8370 "t"
 *   insn=0x00000000002B8380 string=0x00000000002B8384 ""
 *   insn=0x00000000002B8388 string=0x00000000002B838C "g"
 *   insn=0x00000000002B8390 string=0x00000000002B8394 "\t\t@"
 *   insn=0x00000000002B8398 string=0x00000000002B839C ""
 *   insn=0x00000000002B83A0 string=0x00000000002B83A4 "h"
 *   insn=0x00000000002B83A4 string=0x00000000002B83A8 ""
 *   insn=0x00000000002B83A8 string=0x00000000002B83AC "h"
 *   insn=0x00000000002B83BC string=0x00000000002B83C0 "H"
 *   insn=0x00000000002B83C0 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002B83C4 string=0x00000000002B83C8 "w!"
 *   insn=0x00000000002B83D8 string=0x00000000002B84C8 "i!"
 *   insn=0x00000000002B83E4 string=0x00000000002B83E8 "!"
 *   insn=0x00000000002B83E8 string=0x00000000002B83EC "a"
 *   insn=0x00000000002B83E8 string=0x00000000002B84EC "i!"
 *   insn=0x00000000002B83EC string=0x00000000005840A4 "transparent"
 *   insn=0x00000000002B8414 string=0x00000000002B8418 "D"
 *   insn=0x00000000002B8418 string=0x00000000002B841C "H"
 *   insn=0x00000000002B8428 string=0x00000000002B842C "t"
 *   insn=0x00000000002B843C string=0x00000000002B8440 ""
 *   insn=0x00000000002B8444 string=0x00000000002B8448 "8"
 *   insn=0x00000000002B8448 string=0x00000000002B844C "C"
 *   insn=0x00000000002B844C string=0x00000000002B8450 "\t\t@"
 *   insn=0x00000000002B8454 string=0x00000000002B8458 ""
 *   insn=0x00000000002B845C string=0x00000000002B8460 "h"
 *   insn=0x00000000002B8460 string=0x00000000002B8464 ""
 *   insn=0x00000000002B8464 string=0x00000000002B8468 "h"
 *   insn=0x00000000002B8488 string=0x00000000002B848C "!"
 *   insn=0x00000000002B848C string=0x00000000002B8510 "i!"
 *   insn=0x00000000002B849C string=0x00000000002B8534 "i!"
 *   insn=0x00000000002B84A8 string=0x00000000002B84AC "a\t"
 *   insn=0x00000000002B84AC string=0x00000000002B85D8 ">"
 *   insn=0x00000000002B84C8 string=0x00000000002B84CC ")=G"
 *   insn=0x00000000002B84CC string=0x00000000002B84D0 "!"
 *   insn=0x00000000002B84D0 string=0x00000000002B84D4 ")"
 *   insn=0x00000000002B84D4 string=0x00000000002B84D8 "\t"
 *   insn=0x00000000002B84D4 string=0x00000000002B8558 "\t"
 *   insn=0x00000000002B84D8 string=0x00000000002B84DC "*"
 *   insn=0x00000000002B84DC string=0x00000000002B84E0 "\n"
 *   insn=0x00000000002B84E8 string=0x00000000002B8564 "?"
 *   insn=0x00000000002B84EC string=0x00000000002B84F0 ")=G"
 *   insn=0x00000000002B84F0 string=0x00000000002B84F4 "!"
 *   insn=0x00000000002B84F4 string=0x00000000002B84F8 "\t"
 *   insn=0x00000000002B84F8 string=0x00000000002B84FC "\t"
 *   insn=0x00000000002B84F8 string=0x00000000002B8578 "\t"
 *   insn=0x00000000002B84FC string=0x00000000002B8500 "*"
 *   insn=0x00000000002B8500 string=0x00000000002B8504 "\n"
 *   insn=0x00000000002B850C string=0x00000000002B8584 "?"
 *   insn=0x00000000002B8510 string=0x00000000002B8514 ")=G"
 *   insn=0x00000000002B8514 string=0x00000000002B8518 "!"
 *   insn=0x00000000002B851C string=0x00000000002B8520 "\t"
 *   insn=0x00000000002B851C string=0x00000000002B8598 "\t"
 *   insn=0x00000000002B8520 string=0x00000000002B8524 "*"
 *   insn=0x00000000002B8524 string=0x00000000002B8528 "\n"
 *   insn=0x00000000002B8530 string=0x00000000002B85A4 "?"
 *   insn=0x00000000002B8534 string=0x00000000002B8538 ")=G"
 *   insn=0x00000000002B8538 string=0x00000000002B853C "!"
 *   insn=0x00000000002B8540 string=0x00000000002B8544 "\t"
 *   insn=0x00000000002B8540 string=0x00000000002B85B8 "\t"
 *   insn=0x00000000002B8544 string=0x00000000002B8548 "*"
 *   insn=0x00000000002B8548 string=0x00000000002B854C "\n"
 *   insn=0x00000000002B8554 string=0x00000000002B85C4 "?"
 *   insn=0x00000000002B8558 string=0x00000000002B855C "*"
 *   insn=0x00000000002B855C string=0x00000000002B8560 "\n"
 *   insn=0x00000000002B8578 string=0x00000000002B857C "*"
 *   insn=0x00000000002B857C string=0x00000000002B8580 "\n"
 *   insn=0x00000000002B8584 string=0x00000000002B8588 ","
 *   insn=0x00000000002B8598 string=0x00000000002B859C "*"
 *   insn=0x00000000002B859C string=0x00000000002B85A0 "\n"
 *   insn=0x00000000002B85A4 string=0x00000000002B85A8 "L"
 *   insn=0x00000000002B85AC string=0x00000000002B85B0 "}"
 *   insn=0x00000000002B85B8 string=0x00000000002B85BC "*"
 *   insn=0x00000000002B85BC string=0x00000000002B85C0 "\n"
 *   insn=0x00000000002B85CC string=0x00000000002B85D0 "u"
 *   insn=0x00000000002B85D8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B85E0 string=0x00000000002B85E4 "(a"
 *   insn=0x00000000002B85EC string=0x00000000002B85F0 "j!"
 *   insn=0x00000000002B85F0 string=0x00000000002B85F4 "J=G"
 *   insn=0x00000000002B85F4 string=0x00000000002B85F8 ")!"
 *   insn=0x00000000002B85FC string=0x00000000002B8600 "*"
 *   insn=0x00000000002B85FC string=0x00000000002B8614 "*"
 *   insn=0x00000000002B8600 string=0x00000000002B8604 "K"
 *   insn=0x00000000002B8604 string=0x00000000002B8608 "+"
 *   insn=0x00000000002B8610 string=0x00000000002B8620 "_"
 *   insn=0x00000000002B8614 string=0x00000000002B8618 "K"
 *   insn=0x00000000002B8618 string=0x00000000002B861C "+"
 *   insn=0x00000000002B862C string=0x00000000002B8630 "]"
 *   insn=0x00000000002B8648 string=0x00000000002B864C "i!"
 *   insn=0x00000000002B864C string=0x00000000002B8650 ")=G"
 *   insn=0x00000000002B8650 string=0x00000000002B8654 "!"
 *   insn=0x00000000002B8658 string=0x00000000002B865C "\t"
 *   insn=0x00000000002B8658 string=0x00000000002B872C "\t"
 *   insn=0x00000000002B865C string=0x00000000002B8660 "*"
 *   insn=0x00000000002B8660 string=0x00000000002B8664 "\n"
 *   insn=0x00000000002B8668 string=0x00000000002B866C "*"
 *   insn=0x00000000002B866C string=0x00000000002B8714 "?"
 *   insn=0x00000000002B8674 string=0x00000000002B8678 "j!"
 *   insn=0x00000000002B8678 string=0x00000000002B867C "J"
 *   insn=0x00000000002B8680 string=0x00000000002B8684 "(a"
 *   insn=0x00000000002B868C string=0x00000000002B8690 "j!"
 *   insn=0x00000000002B8690 string=0x00000000002B8694 "J=G"
 *   insn=0x00000000002B8694 string=0x00000000002B8698 ")!"
 *   insn=0x00000000002B869C string=0x00000000002B86A0 "*"
 *   insn=0x00000000002B869C string=0x00000000002B86B4 "*"
 *   insn=0x00000000002B86A0 string=0x00000000002B86A4 "K"
 *   insn=0x00000000002B86A4 string=0x00000000002B86A8 "+"
 *   insn=0x00000000002B86B0 string=0x00000000002B86C0 "_"
 *   insn=0x00000000002B86B4 string=0x00000000002B86B8 "K"
 *   insn=0x00000000002B86B8 string=0x00000000002B86BC "+"
 *   insn=0x00000000002B86CC string=0x00000000002B86D0 "5"
 *   insn=0x00000000002B86DC string=0x00000000002B86E0 "i!"
 *   insn=0x00000000002B86E0 string=0x00000000002B86E4 ")"
 *   insn=0x00000000002B86F0 string=0x00000000002B86F4 "i!"
 *   insn=0x00000000002B86F4 string=0x00000000002B86F8 ")=G"
 *   insn=0x00000000002B86F8 string=0x00000000002B86FC "!"
 *   insn=0x00000000002B86FC string=0x00000000002B8700 "i"
 *   insn=0x00000000002B8700 string=0x00000000002B8704 "\t"
 *   insn=0x00000000002B8704 string=0x00000000002B8708 "*"
 *   insn=0x00000000002B8708 string=0x00000000002B870C "\n"
 *   insn=0x00000000002B8714 string=0x00000000002B8718 "l"
 *   insn=0x00000000002B871C string=0x00000000002B8720 "!"
 *   insn=0x00000000002B8724 string=0x00000000002B8728 "g$"
 *   insn=0x00000000002B872C string=0x00000000002B8730 "*"
 *   insn=0x00000000002B8730 string=0x00000000002B8734 "\n"
 *   insn=0x00000000002B8734 string=0x00000000002B8738 "?"
 *   insn=0x00000000002B8738 string=0x00000000002B873C ""
 *   insn=0x00000000002B874C string=0x00000000001FD570 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v17, "color");
  v18 = 0;
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
  sub_566BB8((int)&v17, "transparent");
  v18 = 1;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x400000001LL;
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

