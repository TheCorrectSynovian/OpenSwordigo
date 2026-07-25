/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267DA4
 * Mangled: _ZN5Caver15EntityComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::EntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001FA860  Caver::EntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FA860  Caver::EntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 111
 *   insn=0x0000000000267DB8 string=0x0000000000267DBC "V"
 *   insn=0x0000000000267DC8 string=0x0000000000267DCC "yM"
 *   insn=0x0000000000267DCC string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000267DD0 string=0x00000000005848C5 "facingDirection"
 *   insn=0x0000000000267DDC string=0x0000000000267DE0 "v"
 *   insn=0x0000000000267E0C string=0x0000000000267E10 "t"
 *   insn=0x0000000000267E20 string=0x0000000000267E24 ""
 *   insn=0x0000000000267E30 string=0x0000000000267E34 "\t\t@"
 *   insn=0x0000000000267E38 string=0x0000000000267E3C ""
 *   insn=0x0000000000267E40 string=0x0000000000267E44 "h"
 *   insn=0x0000000000267E44 string=0x0000000000267E48 ""
 *   insn=0x0000000000267E48 string=0x0000000000267E4C "h"
 *   insn=0x0000000000267E60 string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000267E84 string=0x0000000000267E88 "!"
 *   insn=0x0000000000267E8C string=0x0000000000587F48 "physicsEnabled"
 *   insn=0x0000000000267E98 string=0x0000000000267E9C "G"
 *   insn=0x0000000000267EC8 string=0x0000000000267ECC "t"
 *   insn=0x0000000000267EDC string=0x0000000000267EE0 ""
 *   insn=0x0000000000267EE8 string=0x0000000000267EEC "C"
 *   insn=0x0000000000267EEC string=0x0000000000267EF0 "\t\t@"
 *   insn=0x0000000000267EF4 string=0x0000000000267EF8 ""
 *   insn=0x0000000000267EFC string=0x0000000000267F00 "h"
 *   insn=0x0000000000267F00 string=0x0000000000267F04 ""
 *   insn=0x0000000000267F04 string=0x0000000000267F08 "h"
 *   insn=0x0000000000267F18 string=0x0000000000267F1C "q>"
 *   insn=0x0000000000267F28 string=0x0000000000267F2C "!"
 *   insn=0x0000000000267F48 string=0x0000000000267F4C "a\t"
 *   insn=0x0000000000267F68 string=0x0000000000267F6C ")=G"
 *   insn=0x0000000000267F6C string=0x0000000000267F70 "!"
 *   insn=0x0000000000267F70 string=0x0000000000267F74 ")"
 *   insn=0x0000000000267F74 string=0x0000000000267F78 "\t"
 *   insn=0x0000000000267F74 string=0x0000000000267FF8 "\t"
 *   insn=0x0000000000267F78 string=0x0000000000267F7C "*"
 *   insn=0x0000000000267F7C string=0x0000000000267F80 "\n"
 *   insn=0x0000000000267F88 string=0x0000000000268004 "?"
 *   insn=0x0000000000267F8C string=0x0000000000267F90 ")=G"
 *   insn=0x0000000000267F90 string=0x0000000000267F94 "!"
 *   insn=0x0000000000267F94 string=0x0000000000267F98 "\t"
 *   insn=0x0000000000267F98 string=0x0000000000267F9C "\t"
 *   insn=0x0000000000267F98 string=0x0000000000268018 "\t"
 *   insn=0x0000000000267F9C string=0x0000000000267FA0 "*"
 *   insn=0x0000000000267FA0 string=0x0000000000267FA4 "\n"
 *   insn=0x0000000000267FAC string=0x0000000000268024 "?"
 *   insn=0x0000000000267FB0 string=0x0000000000267FB4 ")=G"
 *   insn=0x0000000000267FB4 string=0x0000000000267FB8 "!"
 *   insn=0x0000000000267FBC string=0x0000000000267FC0 "\t"
 *   insn=0x0000000000267FBC string=0x0000000000268038 "\t"
 *   insn=0x0000000000267FC0 string=0x0000000000267FC4 "*"
 *   insn=0x0000000000267FC4 string=0x0000000000267FC8 "\n"
 *   insn=0x0000000000267FD0 string=0x0000000000268044 "?"
 *   insn=0x0000000000267FD4 string=0x0000000000267FD8 ")=G"
 *   insn=0x0000000000267FD8 string=0x0000000000267FDC "!"
 *   insn=0x0000000000267FE0 string=0x0000000000267FE4 "\t"
 *   insn=0x0000000000267FE0 string=0x0000000000268058 "\t"
 *   insn=0x0000000000267FE4 string=0x0000000000267FE8 "*"
 *   insn=0x0000000000267FE8 string=0x0000000000267FEC "\n"
 *   insn=0x0000000000267FF4 string=0x0000000000268064 "?"
 *   insn=0x0000000000267FF8 string=0x0000000000267FFC "*"
 *   insn=0x0000000000267FFC string=0x0000000000268000 "\n"
 *   insn=0x0000000000268018 string=0x000000000026801C "*"
 *   insn=0x000000000026801C string=0x0000000000268020 "\n"
 *   insn=0x0000000000268024 string=0x0000000000268028 ","
 *   insn=0x0000000000268038 string=0x000000000026803C "*"
 *   insn=0x000000000026803C string=0x0000000000268040 "\n"
 *   insn=0x0000000000268044 string=0x0000000000268048 "L"
 *   insn=0x0000000000268058 string=0x000000000026805C "*"
 *   insn=0x000000000026805C string=0x0000000000268060 "\n"
 *   insn=0x0000000000268078 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000268080 string=0x0000000000268084 "(a"
 *   insn=0x0000000000268090 string=0x0000000000268094 "J=G"
 *   insn=0x0000000000268094 string=0x0000000000268098 ")!"
 *   insn=0x000000000026809C string=0x00000000002680A0 "*"
 *   insn=0x000000000026809C string=0x00000000002680B4 "*"
 *   insn=0x00000000002680A0 string=0x00000000002680A4 "K"
 *   insn=0x00000000002680A4 string=0x00000000002680A8 "+"
 *   insn=0x00000000002680B0 string=0x00000000002680C0 "_"
 *   insn=0x00000000002680B4 string=0x00000000002680B8 "K"
 *   insn=0x00000000002680B8 string=0x00000000002680BC "+"
 *   insn=0x00000000002680EC string=0x00000000002680F0 ")=G"
 *   insn=0x00000000002680F0 string=0x00000000002680F4 "!"
 *   insn=0x00000000002680F8 string=0x00000000002680FC "\t"
 *   insn=0x00000000002680F8 string=0x00000000002681CC "\t"
 *   insn=0x00000000002680FC string=0x0000000000268100 "*"
 *   insn=0x0000000000268100 string=0x0000000000268104 "\n"
 *   insn=0x0000000000268108 string=0x000000000026810C "*"
 *   insn=0x000000000026810C string=0x00000000002681B4 "?"
 *   insn=0x0000000000268118 string=0x000000000026811C "J"
 *   insn=0x0000000000268120 string=0x0000000000268124 "(a"
 *   insn=0x0000000000268130 string=0x0000000000268134 "J=G"
 *   insn=0x0000000000268134 string=0x0000000000268138 ")!"
 *   insn=0x000000000026813C string=0x0000000000268140 "*"
 *   insn=0x000000000026813C string=0x0000000000268154 "*"
 *   insn=0x0000000000268140 string=0x0000000000268144 "K"
 *   insn=0x0000000000268144 string=0x0000000000268148 "+"
 *   insn=0x0000000000268150 string=0x0000000000268160 "_"
 *   insn=0x0000000000268154 string=0x0000000000268158 "K"
 *   insn=0x0000000000268158 string=0x000000000026815C "+"
 *   insn=0x0000000000268180 string=0x0000000000268184 ")"
 *   insn=0x0000000000268194 string=0x0000000000268198 ")=G"
 *   insn=0x0000000000268198 string=0x000000000026819C "!"
 *   insn=0x000000000026819C string=0x00000000002681A0 "i"
 *   insn=0x00000000002681A0 string=0x00000000002681A4 "\t"
 *   insn=0x00000000002681A4 string=0x00000000002681A8 "*"
 *   insn=0x00000000002681A8 string=0x00000000002681AC "\n"
 *   insn=0x00000000002681B4 string=0x00000000002681B8 "l"
 *   insn=0x00000000002681BC string=0x00000000002681C0 "y"
 *   insn=0x00000000002681CC string=0x00000000002681D0 "*"
 *   insn=0x00000000002681D0 string=0x00000000002681D4 "\n"
 *   insn=0x00000000002681D4 string=0x00000000002681D8 "?"
 *   insn=0x00000000002681D8 string=0x00000000002681DC ""
 *   insn=0x00000000002681EC string=0x00000000001FA860 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v17, "physicsEnabled");
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

