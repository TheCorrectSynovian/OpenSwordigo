/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000234D10
 * Mangled: _ZN5Caver15ShadowComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ShadowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F9B90  Caver::ShadowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000234C58  Caver::ShadowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F9B90  Caver::ShadowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 181
 *   insn=0x0000000000234D28 string=0x0000000000234D2C "V"
 *   insn=0x0000000000234D3C string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000234D40 string=0x00000000005846D4 "widthRadius"
 *   insn=0x0000000000234D68 string=0x0000000000234D6C "h"
 *   insn=0x0000000000234D6C string=0x0000000000234D70 ""
 *   insn=0x0000000000234D78 string=0x0000000000234D7C "t"
 *   insn=0x0000000000234D8C string=0x0000000000234D90 ""
 *   insn=0x0000000000234D9C string=0x0000000000234DA0 "\t\t@"
 *   insn=0x0000000000234DA4 string=0x0000000000234DA8 ""
 *   insn=0x0000000000234DAC string=0x0000000000234DB0 "h"
 *   insn=0x0000000000234DB0 string=0x0000000000234DB4 ""
 *   insn=0x0000000000234DB4 string=0x0000000000234DB8 "h"
 *   insn=0x0000000000234DCC string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000234DF8 string=0x00000000005846E0 "depthRadius"
 *   insn=0x0000000000234E04 string=0x0000000000234E08 "l"
 *   insn=0x0000000000234E2C string=0x0000000000234E30 "t"
 *   insn=0x0000000000234E40 string=0x0000000000234E44 ""
 *   insn=0x0000000000234E4C string=0x0000000000234E50 "C"
 *   insn=0x0000000000234E50 string=0x0000000000234E54 "\t\t@"
 *   insn=0x0000000000234E58 string=0x0000000000234E5C ""
 *   insn=0x0000000000234E60 string=0x0000000000234E64 "h"
 *   insn=0x0000000000234E64 string=0x0000000000234E68 ""
 *   insn=0x0000000000234E68 string=0x0000000000234E6C "h"
 *   insn=0x0000000000234EA0 string=0x0000000000234EA4 "a"
 *   insn=0x0000000000234EA4 string=0x0000000000583F90 "offset"
 *   insn=0x0000000000234EB0 string=0x0000000000234EB4 "A"
 *   insn=0x0000000000234ED0 string=0x0000000000234ED4 "h"
 *   insn=0x0000000000234EE0 string=0x0000000000234EE4 "t"
 *   insn=0x0000000000234EF4 string=0x0000000000234EF8 ""
 *   insn=0x0000000000234F00 string=0x0000000000234F04 "C"
 *   insn=0x0000000000234F04 string=0x0000000000234F08 "\t\t@"
 *   insn=0x0000000000234F0C string=0x0000000000234F10 ""
 *   insn=0x0000000000234F14 string=0x0000000000234F18 "h"
 *   insn=0x0000000000234F18 string=0x0000000000234F1C ""
 *   insn=0x0000000000234F1C string=0x0000000000234F20 "h"
 *   insn=0x0000000000234F30 string=0x0000000000234F34 "k\n"
 *   insn=0x0000000000234F44 string=0x0000000000235014 "i%"
 *   insn=0x0000000000234F50 string=0x0000000000234F54 "!"
 *   insn=0x0000000000234F54 string=0x0000000000235038 "i%"
 *   insn=0x0000000000234F64 string=0x000000000023511C "m"
 *   insn=0x0000000000234F84 string=0x0000000000234F88 ")=G"
 *   insn=0x0000000000234F88 string=0x0000000000234F8C "!"
 *   insn=0x0000000000234F8C string=0x0000000000234F90 "i"
 *   insn=0x0000000000234F90 string=0x0000000000234F94 "\t"
 *   insn=0x0000000000234F90 string=0x000000000023505C "\t"
 *   insn=0x0000000000234F94 string=0x0000000000234F98 "*"
 *   insn=0x0000000000234F98 string=0x0000000000234F9C "\n"
 *   insn=0x0000000000234FA0 string=0x0000000000234FA4 "1"
 *   insn=0x0000000000234FA4 string=0x0000000000235068 "?"
 *   insn=0x0000000000234FA8 string=0x0000000000234FAC ")=G"
 *   insn=0x0000000000234FAC string=0x0000000000234FB0 "!"
 *   insn=0x0000000000234FB0 string=0x0000000000234FB4 "I"
 *   insn=0x0000000000234FB4 string=0x0000000000234FB8 "\t"
 *   insn=0x0000000000234FB4 string=0x000000000023507C "\t"
 *   insn=0x0000000000234FB8 string=0x0000000000234FBC "*"
 *   insn=0x0000000000234FBC string=0x0000000000234FC0 "\n"
 *   insn=0x0000000000234FC4 string=0x0000000000234FC8 "0"
 *   insn=0x0000000000234FC8 string=0x0000000000235088 "?"
 *   insn=0x0000000000234FCC string=0x0000000000234FD0 ")=G"
 *   insn=0x0000000000234FD0 string=0x0000000000234FD4 "!"
 *   insn=0x0000000000234FD4 string=0x0000000000234FD8 ")"
 *   insn=0x0000000000234FD8 string=0x0000000000234FDC "\t"
 *   insn=0x0000000000234FD8 string=0x000000000023509C "\t"
 *   insn=0x0000000000234FDC string=0x0000000000234FE0 "*"
 *   insn=0x0000000000234FE0 string=0x0000000000234FE4 "\n"
 *   insn=0x0000000000234FE8 string=0x0000000000234FEC "/"
 *   insn=0x0000000000234FEC string=0x00000000002350A8 "?"
 *   insn=0x0000000000234FF0 string=0x0000000000234FF4 ")=G"
 *   insn=0x0000000000234FF4 string=0x0000000000234FF8 "!"
 *   insn=0x0000000000234FF8 string=0x0000000000234FFC "\t"
 *   insn=0x0000000000234FFC string=0x0000000000235000 "\t"
 *   insn=0x0000000000234FFC string=0x00000000002350BC "\t"
 *   insn=0x0000000000235000 string=0x0000000000235004 "*"
 *   insn=0x0000000000235004 string=0x0000000000235008 "\n"
 *   insn=0x000000000023500C string=0x0000000000235010 "."
 *   insn=0x0000000000235010 string=0x00000000002350C8 "?"
 *   insn=0x0000000000235014 string=0x0000000000235018 ")=G"
 *   insn=0x0000000000235018 string=0x000000000023501C "!"
 *   insn=0x0000000000235020 string=0x0000000000235024 "\t"
 *   insn=0x0000000000235020 string=0x00000000002350DC "\t"
 *   insn=0x0000000000235024 string=0x0000000000235028 "*"
 *   insn=0x0000000000235028 string=0x000000000023502C "\n"
 *   insn=0x0000000000235030 string=0x0000000000235034 "-"
 *   insn=0x0000000000235034 string=0x00000000002350E8 "?"
 *   insn=0x0000000000235038 string=0x000000000023503C ")=G"
 *   insn=0x000000000023503C string=0x0000000000235040 "!"
 *   insn=0x0000000000235044 string=0x0000000000235048 "\t"
 *   insn=0x0000000000235044 string=0x00000000002350FC "\t"
 *   insn=0x0000000000235048 string=0x000000000023504C "*"
 *   insn=0x000000000023504C string=0x0000000000235050 "\n"
 *   insn=0x0000000000235054 string=0x0000000000235058 ","
 *   insn=0x0000000000235058 string=0x0000000000235108 "?"
 *   insn=0x000000000023505C string=0x0000000000235060 "*"
 *   insn=0x0000000000235060 string=0x0000000000235064 "\n"
 *   insn=0x0000000000235074 string=0x0000000000235078 "\"
 *   insn=0x000000000023507C string=0x0000000000235080 "*"
 *   insn=0x0000000000235080 string=0x0000000000235084 "\n"
 *   insn=0x0000000000235088 string=0x000000000023508C "l"
 *   insn=0x0000000000235094 string=0x0000000000235098 "X"
 *   insn=0x000000000023509C string=0x00000000002350A0 "*"
 *   insn=0x00000000002350A0 string=0x00000000002350A4 "\n"
 *   insn=0x00000000002350A8 string=0x00000000002350AC "L"
 *   insn=0x00000000002350B4 string=0x00000000002350B8 "w"
 *   insn=0x00000000002350BC string=0x00000000002350C0 "*"
 *   insn=0x00000000002350C0 string=0x00000000002350C4 "\n"
 *   insn=0x00000000002350D4 string=0x00000000002350D8 "s"
 *   insn=0x00000000002350DC string=0x00000000002350E0 "*"
 *   insn=0x00000000002350E0 string=0x00000000002350E4 "\n"
 *   insn=0x00000000002350FC string=0x0000000000235100 "*"
 *   insn=0x0000000000235100 string=0x0000000000235104 "\n"
 *   insn=0x0000000000235108 string=0x000000000023510C "l"
 *   insn=0x000000000023511C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000235124 string=0x0000000000235128 "(a"
 *   insn=0x0000000000235130 string=0x0000000000235134 "j%"
 *   insn=0x0000000000235134 string=0x0000000000235138 "J=G"
 *   insn=0x0000000000235138 string=0x000000000023513C ")!"
 *   insn=0x0000000000235140 string=0x0000000000235144 "*"
 *   insn=0x0000000000235140 string=0x0000000000235158 "*"
 *   insn=0x0000000000235144 string=0x0000000000235148 "K"
 *   insn=0x0000000000235148 string=0x000000000023514C "+"
 *   insn=0x0000000000235154 string=0x0000000000235164 "_"
 *   insn=0x0000000000235158 string=0x000000000023515C "K"
 *   insn=0x000000000023515C string=0x0000000000235160 "+"
 *   insn=0x000000000023518C string=0x0000000000235190 "i%"
 *   insn=0x0000000000235190 string=0x0000000000235194 ")=G"
 *   insn=0x0000000000235194 string=0x0000000000235198 "!"
 *   insn=0x0000000000235198 string=0x000000000023519C "i"
 *   insn=0x000000000023519C string=0x00000000002351A0 "\t"
 *   insn=0x000000000023519C string=0x0000000000235308 "\t"
 *   insn=0x00000000002351A0 string=0x00000000002351A4 "*"
 *   insn=0x00000000002351A4 string=0x00000000002351A8 "\n"
 *   insn=0x00000000002351AC string=0x00000000002351B0 "P"
 *   insn=0x00000000002351B0 string=0x00000000002352F0 "?"
 *   insn=0x00000000002351BC string=0x00000000002351C0 "(a"
 *   insn=0x00000000002351C8 string=0x00000000002351CC "j%"
 *   insn=0x00000000002351CC string=0x00000000002351D0 "J=G"
 *   insn=0x00000000002351D0 string=0x00000000002351D4 ")!"
 *   insn=0x00000000002351D8 string=0x00000000002351DC "*"
 *   insn=0x00000000002351D8 string=0x00000000002351F0 "*"
 *   insn=0x00000000002351DC string=0x00000000002351E0 "K"
 *   insn=0x00000000002351E0 string=0x00000000002351E4 "+"
 *   insn=0x00000000002351EC string=0x00000000002351FC "_"
 *   insn=0x00000000002351F0 string=0x00000000002351F4 "K"
 *   insn=0x00000000002351F4 string=0x00000000002351F8 "+"
 *   insn=0x0000000000235208 string=0x000000000023520C "f"
 *   insn=0x0000000000235224 string=0x0000000000235228 "i%"
 *   insn=0x0000000000235228 string=0x000000000023522C ")=G"
 *   insn=0x000000000023522C string=0x0000000000235230 "!"
 *   insn=0x0000000000235234 string=0x0000000000235238 "\t"
 *   insn=0x0000000000235238 string=0x000000000023523C "*"
 *   insn=0x000000000023523C string=0x0000000000235240 "\n"
 *   insn=0x0000000000235244 string=0x0000000000235248 "*"
 *   insn=0x0000000000235254 string=0x0000000000235258 "J"
 *   insn=0x000000000023525C string=0x0000000000235260 "(a"
 *   insn=0x0000000000235268 string=0x000000000023526C "j%"
 *   insn=0x000000000023526C string=0x0000000000235270 "J=G"
 *   insn=0x0000000000235270 string=0x0000000000235274 ")!"
 *   insn=0x0000000000235278 string=0x000000000023527C "*"
 *   insn=0x0000000000235278 string=0x0000000000235290 "*"
 *   insn=0x000000000023527C string=0x0000000000235280 "K"
 *   insn=0x0000000000235280 string=0x0000000000235284 "+"
 *   insn=0x000000000023528C string=0x000000000023529C "_"
 *   insn=0x0000000000235290 string=0x0000000000235294 "K"
 *   insn=0x0000000000235294 string=0x0000000000235298 "+"
 *   insn=0x00000000002352A8 string=0x00000000002352AC ">"
 *   insn=0x00000000002352BC string=0x00000000002352C0 ")"
 *   insn=0x00000000002352CC string=0x00000000002352D0 "i%"
 *   insn=0x00000000002352D0 string=0x00000000002352D4 ")=G"
 *   insn=0x00000000002352D4 string=0x00000000002352D8 "!"
 *   insn=0x00000000002352D8 string=0x00000000002352DC "i"
 *   insn=0x00000000002352DC string=0x00000000002352E0 "\t"
 *   insn=0x00000000002352E0 string=0x00000000002352E4 "*"
 *   insn=0x00000000002352E4 string=0x00000000002352E8 "\n"
 *   insn=0x00000000002352F0 string=0x00000000002352F4 "l"
 *   insn=0x00000000002352F8 string=0x00000000002352FC "*"
 *   insn=0x0000000000235300 string=0x0000000000235304 "p1"
 *   insn=0x0000000000235308 string=0x000000000023530C "*"
 *   insn=0x000000000023530C string=0x0000000000235310 "\n"
 *   insn=0x0000000000235310 string=0x0000000000235314 "?"
 *   insn=0x0000000000235314 string=0x0000000000235318 ""
 *   insn=0x0000000000235328 string=0x00000000001F9B90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShadowComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v24, "widthRadius");
  v25 = 0;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x500000001LL;
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
  sub_566BB8((int)&v24, "depthRadius");
  v25 = 1;
  sub_56A528(&v26, &v24);
  v27 = 0x500000001LL;
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
  sub_566BB8((int)&v24, "offset");
  v25 = 2;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x900000001LL;
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

