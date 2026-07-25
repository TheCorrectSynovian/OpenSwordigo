/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C7EA8
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SwingableWeaponControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001F8540  Caver::SwingableWeaponControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F8540  Caver::SwingableWeaponControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 117
 *   insn=0x00000000002C7EC0 string=0x00000000002C7EC4 "V"
 *   insn=0x00000000002C7ED0 string=0x00000000002C7ED4 "7"
 *   insn=0x00000000002C7ED4 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002C7ED8 string=0x000000000058A1CC "controllingBone"
 *   insn=0x00000000002C7EE4 string=0x00000000002C7EE8 "4{\n"
 *   insn=0x00000000002C7F04 string=0x00000000002C7F08 "("
 *   insn=0x00000000002C7F10 string=0x00000000002C7F14 "t"
 *   insn=0x00000000002C7F24 string=0x00000000002C7F28 ""
 *   insn=0x00000000002C7F2C string=0x00000000002C7F30 "~"
 *   insn=0x00000000002C7F34 string=0x00000000002C7F38 "\t\t@"
 *   insn=0x00000000002C7F3C string=0x00000000002C7F40 ""
 *   insn=0x00000000002C7F44 string=0x00000000002C7F48 "h"
 *   insn=0x00000000002C7F48 string=0x00000000002C7F4C ""
 *   insn=0x00000000002C7F4C string=0x00000000002C7F50 "h"
 *   insn=0x00000000002C7F60 string=0x00000000002C7F64 "_"
 *   insn=0x00000000002C7F64 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002C7F78 string=0x00000000002C7F7C "a"
 *   insn=0x00000000002C7F90 string=0x000000000058A1DC "weaponTemplate"
 *   insn=0x00000000002C7FB8 string=0x00000000002C7FBC "["
 *   insn=0x00000000002C7FC4 string=0x00000000002C7FC8 "t"
 *   insn=0x00000000002C7FD8 string=0x00000000002C7FDC ""
 *   insn=0x00000000002C7FE0 string=0x00000000002C7FE4 "Q"
 *   insn=0x00000000002C7FE4 string=0x00000000002C7FE8 "C"
 *   insn=0x00000000002C7FE8 string=0x00000000002C7FEC "\t\t@"
 *   insn=0x00000000002C7FF0 string=0x00000000002C7FF4 ""
 *   insn=0x00000000002C7FF8 string=0x00000000002C7FFC "h"
 *   insn=0x00000000002C7FFC string=0x00000000002C8000 ""
 *   insn=0x00000000002C8000 string=0x00000000002C8004 "h"
 *   insn=0x00000000002C8014 string=0x00000000002C8018 "2"
 *   insn=0x00000000002C8024 string=0x00000000002C8028 "A"
 *   insn=0x00000000002C8048 string=0x00000000002C8178 "V"
 *   insn=0x00000000002C8068 string=0x00000000002C806C ")=G"
 *   insn=0x00000000002C806C string=0x00000000002C8070 "!"
 *   insn=0x00000000002C8070 string=0x00000000002C8074 ")"
 *   insn=0x00000000002C8074 string=0x00000000002C8078 "\t"
 *   insn=0x00000000002C8074 string=0x00000000002C80F8 "\t"
 *   insn=0x00000000002C8078 string=0x00000000002C807C "*"
 *   insn=0x00000000002C807C string=0x00000000002C8080 "\n"
 *   insn=0x00000000002C8088 string=0x00000000002C8104 "?"
 *   insn=0x00000000002C808C string=0x00000000002C8090 ")=G"
 *   insn=0x00000000002C8090 string=0x00000000002C8094 "!"
 *   insn=0x00000000002C8094 string=0x00000000002C8098 "\t"
 *   insn=0x00000000002C8098 string=0x00000000002C809C "\t"
 *   insn=0x00000000002C8098 string=0x00000000002C8118 "\t"
 *   insn=0x00000000002C809C string=0x00000000002C80A0 "*"
 *   insn=0x00000000002C80A0 string=0x00000000002C80A4 "\n"
 *   insn=0x00000000002C80AC string=0x00000000002C8124 "?"
 *   insn=0x00000000002C80B0 string=0x00000000002C80B4 ")=G"
 *   insn=0x00000000002C80B4 string=0x00000000002C80B8 "!"
 *   insn=0x00000000002C80BC string=0x00000000002C80C0 "\t"
 *   insn=0x00000000002C80BC string=0x00000000002C8138 "\t"
 *   insn=0x00000000002C80C0 string=0x00000000002C80C4 "*"
 *   insn=0x00000000002C80C4 string=0x00000000002C80C8 "\n"
 *   insn=0x00000000002C80D0 string=0x00000000002C8144 "?"
 *   insn=0x00000000002C80D4 string=0x00000000002C80D8 ")=G"
 *   insn=0x00000000002C80D8 string=0x00000000002C80DC "!"
 *   insn=0x00000000002C80E0 string=0x00000000002C80E4 "\t"
 *   insn=0x00000000002C80E0 string=0x00000000002C8158 "\t"
 *   insn=0x00000000002C80E4 string=0x00000000002C80E8 "*"
 *   insn=0x00000000002C80E8 string=0x00000000002C80EC "\n"
 *   insn=0x00000000002C80F4 string=0x00000000002C8164 "?"
 *   insn=0x00000000002C80F8 string=0x00000000002C80FC "*"
 *   insn=0x00000000002C80FC string=0x00000000002C8100 "\n"
 *   insn=0x00000000002C8118 string=0x00000000002C811C "*"
 *   insn=0x00000000002C811C string=0x00000000002C8120 "\n"
 *   insn=0x00000000002C8124 string=0x00000000002C8128 "L"
 *   insn=0x00000000002C8138 string=0x00000000002C813C "*"
 *   insn=0x00000000002C813C string=0x00000000002C8140 "\n"
 *   insn=0x00000000002C8144 string=0x00000000002C8148 ","
 *   insn=0x00000000002C8158 string=0x00000000002C815C "*"
 *   insn=0x00000000002C815C string=0x00000000002C8160 "\n"
 *   insn=0x00000000002C8178 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C8180 string=0x00000000002C8184 "(a"
 *   insn=0x00000000002C8190 string=0x00000000002C8194 "J=G"
 *   insn=0x00000000002C8194 string=0x00000000002C8198 ")!"
 *   insn=0x00000000002C819C string=0x00000000002C81A0 "*"
 *   insn=0x00000000002C819C string=0x00000000002C81B4 "*"
 *   insn=0x00000000002C81A0 string=0x00000000002C81A4 "K"
 *   insn=0x00000000002C81A4 string=0x00000000002C81A8 "+"
 *   insn=0x00000000002C81B0 string=0x00000000002C81C0 "_"
 *   insn=0x00000000002C81B4 string=0x00000000002C81B8 "K"
 *   insn=0x00000000002C81B8 string=0x00000000002C81BC "+"
 *   insn=0x00000000002C81CC string=0x00000000002C81D0 "u"
 *   insn=0x00000000002C81EC string=0x00000000002C81F0 ")=G"
 *   insn=0x00000000002C81F0 string=0x00000000002C81F4 "!"
 *   insn=0x00000000002C81F8 string=0x00000000002C81FC "\t"
 *   insn=0x00000000002C81F8 string=0x00000000002C82CC "\t"
 *   insn=0x00000000002C81FC string=0x00000000002C8200 "*"
 *   insn=0x00000000002C8200 string=0x00000000002C8204 "\n"
 *   insn=0x00000000002C8208 string=0x00000000002C820C "*"
 *   insn=0x00000000002C820C string=0x00000000002C82B4 "?"
 *   insn=0x00000000002C8218 string=0x00000000002C821C "J"
 *   insn=0x00000000002C8220 string=0x00000000002C8224 "(a"
 *   insn=0x00000000002C8230 string=0x00000000002C8234 "J=G"
 *   insn=0x00000000002C8234 string=0x00000000002C8238 ")!"
 *   insn=0x00000000002C823C string=0x00000000002C8240 "*"
 *   insn=0x00000000002C823C string=0x00000000002C8254 "*"
 *   insn=0x00000000002C8240 string=0x00000000002C8244 "K"
 *   insn=0x00000000002C8244 string=0x00000000002C8248 "+"
 *   insn=0x00000000002C8250 string=0x00000000002C8260 "_"
 *   insn=0x00000000002C8254 string=0x00000000002C8258 "K"
 *   insn=0x00000000002C8258 string=0x00000000002C825C "+"
 *   insn=0x00000000002C826C string=0x00000000002C8270 "M"
 *   insn=0x00000000002C8280 string=0x00000000002C8284 ")"
 *   insn=0x00000000002C8294 string=0x00000000002C8298 ")=G"
 *   insn=0x00000000002C8298 string=0x00000000002C829C "!"
 *   insn=0x00000000002C829C string=0x00000000002C82A0 "i"
 *   insn=0x00000000002C82A0 string=0x00000000002C82A4 "\t"
 *   insn=0x00000000002C82A4 string=0x00000000002C82A8 "*"
 *   insn=0x00000000002C82A8 string=0x00000000002C82AC "\n"
 *   insn=0x00000000002C82B4 string=0x00000000002C82B8 "l"
 *   insn=0x00000000002C82BC string=0x00000000002C82C0 "9"
 *   insn=0x00000000002C82CC string=0x00000000002C82D0 "*"
 *   insn=0x00000000002C82D0 string=0x00000000002C82D4 "\n"
 *   insn=0x00000000002C82D4 string=0x00000000002C82D8 "?"
 *   insn=0x00000000002C82D8 string=0x00000000002C82DC ""
 *   insn=0x00000000002C82EC string=0x00000000001F8540 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v17, "controllingBone");
  v18 = 1;
  sub_56A528(&v19, &v17);
  v20 = 0x100000001LL;
  v21 = 1;
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
  sub_566BB8((int)&v17, "weaponTemplate");
  v18 = 2;
  sub_56A528(&v19, &v17);
  v20 = 0x100000001LL;
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

