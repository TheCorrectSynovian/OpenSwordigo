/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022FA94
 * Mangled: _ZN5Caver15PortalComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::PortalComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001F7550  Caver::PortalComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7550  Caver::PortalComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 180
 *   insn=0x000000000022FAAC string=0x000000000022FAB0 "V"
 *   insn=0x000000000022FABC string=0x000000000022FAC0 "<."
 *   insn=0x000000000022FAC0 string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000022FAC4 string=0x0000000000584445 "destinationScene"
 *   insn=0x000000000022FAD0 string=0x000000000022FAD4 "9"
 *   insn=0x000000000022FAF0 string=0x000000000022FAF4 "("
 *   insn=0x000000000022FAFC string=0x000000000022FB00 "t"
 *   insn=0x000000000022FB10 string=0x000000000022FB14 ""
 *   insn=0x000000000022FB20 string=0x000000000022FB24 "\t\t@"
 *   insn=0x000000000022FB28 string=0x000000000022FB2C ""
 *   insn=0x000000000022FB30 string=0x000000000022FB34 "h"
 *   insn=0x000000000022FB34 string=0x000000000022FB38 ""
 *   insn=0x000000000022FB38 string=0x000000000022FB3C "h"
 *   insn=0x000000000022FB4C string=0x000000000022FB50 "d"
 *   insn=0x000000000022FB50 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000022FB7C string=0x0000000000584456 "spawnPoint"
 *   insn=0x000000000022FB88 string=0x000000000022FB8C ""
 *   insn=0x000000000022FBA4 string=0x000000000022FBA8 "`"
 *   insn=0x000000000022FBB0 string=0x000000000022FBB4 "t"
 *   insn=0x000000000022FBC4 string=0x000000000022FBC8 ""
 *   insn=0x000000000022FBCC string=0x000000000022FBD0 "V"
 *   insn=0x000000000022FBD0 string=0x000000000022FBD4 "C"
 *   insn=0x000000000022FBD4 string=0x000000000022FBD8 "\t\t@"
 *   insn=0x000000000022FBDC string=0x000000000022FBE0 ""
 *   insn=0x000000000022FBE4 string=0x000000000022FBE8 "h"
 *   insn=0x000000000022FBE8 string=0x000000000022FBEC ""
 *   insn=0x000000000022FBEC string=0x000000000022FBF0 "h"
 *   insn=0x000000000022FC00 string=0x000000000022FC04 "7"
 *   insn=0x000000000022FC28 string=0x0000000000584461 "tapToEnter"
 *   insn=0x000000000022FC50 string=0x000000000022FC54 "5"
 *   insn=0x000000000022FC64 string=0x000000000022FC68 "t"
 *   insn=0x000000000022FC78 string=0x000000000022FC7C ""
 *   insn=0x000000000022FC80 string=0x000000000022FC84 ")"
 *   insn=0x000000000022FC84 string=0x000000000022FC88 "C"
 *   insn=0x000000000022FC88 string=0x000000000022FC8C "\t\t@"
 *   insn=0x000000000022FC90 string=0x000000000022FC94 ""
 *   insn=0x000000000022FC98 string=0x000000000022FC9C "h"
 *   insn=0x000000000022FC9C string=0x000000000022FCA0 ""
 *   insn=0x000000000022FCA0 string=0x000000000022FCA4 "h"
 *   insn=0x000000000022FCB4 string=0x000000000022FCB8 "\n"
 *   insn=0x000000000022FCD4 string=0x000000000022FCD8 "!"
 *   insn=0x000000000022FD08 string=0x000000000022FD0C ")=G"
 *   insn=0x000000000022FD0C string=0x000000000022FD10 "!"
 *   insn=0x000000000022FD10 string=0x000000000022FD14 "i"
 *   insn=0x000000000022FD14 string=0x000000000022FD18 "\t"
 *   insn=0x000000000022FD14 string=0x000000000022FDE0 "\t"
 *   insn=0x000000000022FD18 string=0x000000000022FD1C "*"
 *   insn=0x000000000022FD1C string=0x000000000022FD20 "\n"
 *   insn=0x000000000022FD24 string=0x000000000022FD28 "1"
 *   insn=0x000000000022FD28 string=0x000000000022FDEC "?"
 *   insn=0x000000000022FD2C string=0x000000000022FD30 ")=G"
 *   insn=0x000000000022FD30 string=0x000000000022FD34 "!"
 *   insn=0x000000000022FD34 string=0x000000000022FD38 "I"
 *   insn=0x000000000022FD38 string=0x000000000022FD3C "\t"
 *   insn=0x000000000022FD38 string=0x000000000022FE00 "\t"
 *   insn=0x000000000022FD3C string=0x000000000022FD40 "*"
 *   insn=0x000000000022FD40 string=0x000000000022FD44 "\n"
 *   insn=0x000000000022FD48 string=0x000000000022FD4C "0"
 *   insn=0x000000000022FD4C string=0x000000000022FE0C "?"
 *   insn=0x000000000022FD50 string=0x000000000022FD54 ")=G"
 *   insn=0x000000000022FD54 string=0x000000000022FD58 "!"
 *   insn=0x000000000022FD58 string=0x000000000022FD5C ")"
 *   insn=0x000000000022FD5C string=0x000000000022FD60 "\t"
 *   insn=0x000000000022FD5C string=0x000000000022FE20 "\t"
 *   insn=0x000000000022FD60 string=0x000000000022FD64 "*"
 *   insn=0x000000000022FD64 string=0x000000000022FD68 "\n"
 *   insn=0x000000000022FD6C string=0x000000000022FD70 "/"
 *   insn=0x000000000022FD70 string=0x000000000022FE2C "?"
 *   insn=0x000000000022FD74 string=0x000000000022FD78 ")=G"
 *   insn=0x000000000022FD78 string=0x000000000022FD7C "!"
 *   insn=0x000000000022FD7C string=0x000000000022FD80 "\t"
 *   insn=0x000000000022FD80 string=0x000000000022FD84 "\t"
 *   insn=0x000000000022FD80 string=0x000000000022FE40 "\t"
 *   insn=0x000000000022FD84 string=0x000000000022FD88 "*"
 *   insn=0x000000000022FD88 string=0x000000000022FD8C "\n"
 *   insn=0x000000000022FD90 string=0x000000000022FD94 "."
 *   insn=0x000000000022FD94 string=0x000000000022FE4C "?"
 *   insn=0x000000000022FD98 string=0x000000000022FD9C ")=G"
 *   insn=0x000000000022FD9C string=0x000000000022FDA0 "!"
 *   insn=0x000000000022FDA4 string=0x000000000022FDA8 "\t"
 *   insn=0x000000000022FDA4 string=0x000000000022FE60 "\t"
 *   insn=0x000000000022FDA8 string=0x000000000022FDAC "*"
 *   insn=0x000000000022FDAC string=0x000000000022FDB0 "\n"
 *   insn=0x000000000022FDB4 string=0x000000000022FDB8 "-"
 *   insn=0x000000000022FDB8 string=0x000000000022FE6C "?"
 *   insn=0x000000000022FDBC string=0x000000000022FDC0 ")=G"
 *   insn=0x000000000022FDC0 string=0x000000000022FDC4 "!"
 *   insn=0x000000000022FDC8 string=0x000000000022FDCC "\t"
 *   insn=0x000000000022FDC8 string=0x000000000022FE80 "\t"
 *   insn=0x000000000022FDCC string=0x000000000022FDD0 "*"
 *   insn=0x000000000022FDD0 string=0x000000000022FDD4 "\n"
 *   insn=0x000000000022FDD8 string=0x000000000022FDDC ","
 *   insn=0x000000000022FDDC string=0x000000000022FE8C "?"
 *   insn=0x000000000022FDE0 string=0x000000000022FDE4 "*"
 *   insn=0x000000000022FDE4 string=0x000000000022FDE8 "\n"
 *   insn=0x000000000022FDF4 string=0x000000000022FDF8 "k"
 *   insn=0x000000000022FDF8 string=0x000000000022FDFC "\"
 *   insn=0x000000000022FE00 string=0x000000000022FE04 "*"
 *   insn=0x000000000022FE04 string=0x000000000022FE08 "\n"
 *   insn=0x000000000022FE0C string=0x000000000022FE10 "l"
 *   insn=0x000000000022FE14 string=0x000000000022FE18 "c"
 *   insn=0x000000000022FE18 string=0x000000000022FE1C "X"
 *   insn=0x000000000022FE20 string=0x000000000022FE24 "*"
 *   insn=0x000000000022FE24 string=0x000000000022FE28 "\n"
 *   insn=0x000000000022FE2C string=0x000000000022FE30 "L"
 *   insn=0x000000000022FE34 string=0x000000000022FE38 "["
 *   insn=0x000000000022FE38 string=0x000000000022FE3C "w"
 *   insn=0x000000000022FE40 string=0x000000000022FE44 "*"
 *   insn=0x000000000022FE44 string=0x000000000022FE48 "\n"
 *   insn=0x000000000022FE54 string=0x000000000022FE58 "S"
 *   insn=0x000000000022FE58 string=0x000000000022FE5C "s"
 *   insn=0x000000000022FE60 string=0x000000000022FE64 "*"
 *   insn=0x000000000022FE64 string=0x000000000022FE68 "\n"
 *   insn=0x000000000022FE74 string=0x000000000022FE78 "K"
 *   insn=0x000000000022FE80 string=0x000000000022FE84 "*"
 *   insn=0x000000000022FE84 string=0x000000000022FE88 "\n"
 *   insn=0x000000000022FE8C string=0x000000000022FE90 "l"
 *   insn=0x000000000022FE94 string=0x000000000022FE98 "C"
 *   insn=0x000000000022FEA0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022FEA8 string=0x000000000022FEAC "(a"
 *   insn=0x000000000022FEB8 string=0x000000000022FEBC "J=G"
 *   insn=0x000000000022FEBC string=0x000000000022FEC0 ")!"
 *   insn=0x000000000022FEC4 string=0x000000000022FEC8 "*"
 *   insn=0x000000000022FEC4 string=0x000000000022FEDC "*"
 *   insn=0x000000000022FEC8 string=0x000000000022FECC "K"
 *   insn=0x000000000022FECC string=0x000000000022FED0 "+"
 *   insn=0x000000000022FED8 string=0x000000000022FEE8 "_"
 *   insn=0x000000000022FEDC string=0x000000000022FEE0 "K"
 *   insn=0x000000000022FEE0 string=0x000000000022FEE4 "+"
 *   insn=0x000000000022FEF4 string=0x000000000022FEF8 "+"
 *   insn=0x000000000022FF14 string=0x000000000022FF18 ")=G"
 *   insn=0x000000000022FF18 string=0x000000000022FF1C "!"
 *   insn=0x000000000022FF1C string=0x000000000022FF20 "i"
 *   insn=0x000000000022FF20 string=0x000000000022FF24 "\t"
 *   insn=0x000000000022FF20 string=0x000000000023008C "\t"
 *   insn=0x000000000022FF24 string=0x000000000022FF28 "*"
 *   insn=0x000000000022FF28 string=0x000000000022FF2C "\n"
 *   insn=0x000000000022FF30 string=0x000000000022FF34 "P"
 *   insn=0x000000000022FF34 string=0x0000000000230074 "?"
 *   insn=0x000000000022FF40 string=0x000000000022FF44 "(a"
 *   insn=0x000000000022FF50 string=0x000000000022FF54 "J=G"
 *   insn=0x000000000022FF54 string=0x000000000022FF58 ")!"
 *   insn=0x000000000022FF5C string=0x000000000022FF60 "*"
 *   insn=0x000000000022FF5C string=0x000000000022FF74 "*"
 *   insn=0x000000000022FF60 string=0x000000000022FF64 "K"
 *   insn=0x000000000022FF64 string=0x000000000022FF68 "+"
 *   insn=0x000000000022FF70 string=0x000000000022FF80 "_"
 *   insn=0x000000000022FF74 string=0x000000000022FF78 "K"
 *   insn=0x000000000022FF78 string=0x000000000022FF7C "+"
 *   insn=0x000000000022FFAC string=0x000000000022FFB0 ")=G"
 *   insn=0x000000000022FFB0 string=0x000000000022FFB4 "!"
 *   insn=0x000000000022FFB8 string=0x000000000022FFBC "\t"
 *   insn=0x000000000022FFBC string=0x000000000022FFC0 "*"
 *   insn=0x000000000022FFC0 string=0x000000000022FFC4 "\n"
 *   insn=0x000000000022FFC8 string=0x000000000022FFCC "*"
 *   insn=0x000000000022FFD8 string=0x000000000022FFDC "J"
 *   insn=0x000000000022FFE0 string=0x000000000022FFE4 "(a"
 *   insn=0x000000000022FFF0 string=0x000000000022FFF4 "J=G"
 *   insn=0x000000000022FFF4 string=0x000000000022FFF8 ")!"
 *   insn=0x000000000022FFFC string=0x0000000000230000 "*"
 *   insn=0x000000000022FFFC string=0x0000000000230014 "*"
 *   insn=0x0000000000230000 string=0x0000000000230004 "K"
 *   insn=0x0000000000230004 string=0x0000000000230008 "+"
 *   insn=0x0000000000230010 string=0x0000000000230020 "_"
 *   insn=0x0000000000230014 string=0x0000000000230018 "K"
 *   insn=0x0000000000230018 string=0x000000000023001C "+"
 *   insn=0x0000000000230040 string=0x0000000000230044 ")"
 *   insn=0x0000000000230054 string=0x0000000000230058 ")=G"
 *   insn=0x0000000000230058 string=0x000000000023005C "!"
 *   insn=0x000000000023005C string=0x0000000000230060 "i"
 *   insn=0x0000000000230060 string=0x0000000000230064 "\t"
 *   insn=0x0000000000230064 string=0x0000000000230068 "*"
 *   insn=0x0000000000230068 string=0x000000000023006C "\n"
 *   insn=0x0000000000230074 string=0x0000000000230078 "l"
 *   insn=0x000000000023008C string=0x0000000000230090 "*"
 *   insn=0x0000000000230090 string=0x0000000000230094 "\n"
 *   insn=0x0000000000230094 string=0x0000000000230098 "?"
 *   insn=0x0000000000230098 string=0x000000000023009C ""
 *   insn=0x00000000002300A8 string=0x00000000002300AC ")"
 *   insn=0x00000000002300AC string=0x00000000001F7550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalComponent::GetBindings(Caver::Component *a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x20
  void *v10; // x0
  void *v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  __int64 v24; // [xsp+8h] [xbp-78h] BYREF
  int v25; // [xsp+18h] [xbp-68h]
  __int64 v26; // [xsp+20h] [xbp-60h] BYREF
  __int64 v27; // [xsp+28h] [xbp-58h]
  int v28; // [xsp+30h] [xbp-50h]
  __int64 v29; // [xsp+38h] [xbp-48h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v24, "destinationScene");
  v25 = 1;
  sub_56A528(&v26, &v24);
  v27 = 0x100000001LL;
  v28 = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v25;
    sub_56A528(v3 + 8, &v26);
    *(_DWORD *)(v3 + 24) = v28;
    *(_QWORD *)(v3 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v24, "spawnPoint");
  v25 = 2;
  sub_56A528(&v26, &v24);
  v27 = 0x100000001LL;
  v28 = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v25;
    sub_56A528(v6 + 8, &v26);
    *(_DWORD *)(v6 + 24) = v28;
    *(_QWORD *)(v6 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)&v24, "tapToEnter");
  v25 = 3;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x400000001LL;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v25;
    sub_56A528(v9 + 8, &v26);
    *(_DWORD *)(v9 + 24) = v28;
    *(_QWORD *)(v9 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
      operator delete(v10);
  }
  v11 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v23 = __ldaxr(v22);
      while ( __stlxr(v23 - 1, v22) );
    }
    else
    {
      v23 = (*v22)--;
    }
    if ( v23 <= 0 )
      operator delete(v11);
  }
}

