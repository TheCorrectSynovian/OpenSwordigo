/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000286FA4
 * Mangled: _ZN5Caver23MagicExplosionComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::MagicExplosionComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000002007E0  Caver::MagicExplosionComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000286ED8  Caver::MagicExplosionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002007E0  Caver::MagicExplosionComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 165
 *   insn=0x0000000000286FBC string=0x0000000000286FC0 "V"
 *   insn=0x0000000000286FD0 string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000286FD4 string=0x0000000000583F83 "color"
 *   insn=0x0000000000286FFC string=0x0000000000287000 "J"
 *   insn=0x0000000000287010 string=0x0000000000287014 "t"
 *   insn=0x0000000000287024 string=0x0000000000287028 ""
 *   insn=0x000000000028702C string=0x0000000000287030 ">"
 *   insn=0x0000000000287034 string=0x0000000000287038 "\t\t@"
 *   insn=0x000000000028703C string=0x0000000000287040 ""
 *   insn=0x0000000000287044 string=0x0000000000287048 "h"
 *   insn=0x0000000000287048 string=0x000000000028704C ""
 *   insn=0x000000000028704C string=0x0000000000287050 "h"
 *   insn=0x0000000000287064 string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000287090 string=0x0000000000583F89 "radius"
 *   insn=0x00000000002870B8 string=0x00000000002870BC ""
 *   insn=0x00000000002870C0 string=0x00000000002870C4 ""
 *   insn=0x00000000002870CC string=0x00000000002870D0 "t"
 *   insn=0x00000000002870E0 string=0x00000000002870E4 ""
 *   insn=0x00000000002870EC string=0x00000000002870F0 "C"
 *   insn=0x00000000002870F0 string=0x00000000002870F4 "\t\t@"
 *   insn=0x00000000002870F8 string=0x00000000002870FC ""
 *   insn=0x0000000000287100 string=0x0000000000287104 "h"
 *   insn=0x0000000000287104 string=0x0000000000287108 ""
 *   insn=0x0000000000287108 string=0x000000000028710C "h"
 *   insn=0x000000000028713C string=0x0000000000287140 "A\n"
 *   insn=0x0000000000287144 string=0x0000000000583E4E "duration"
 *   insn=0x0000000000287178 string=0x000000000028717C "t"
 *   insn=0x000000000028718C string=0x0000000000287190 ""
 *   insn=0x0000000000287198 string=0x000000000028719C "C"
 *   insn=0x000000000028719C string=0x00000000002871A0 "\t\t@"
 *   insn=0x00000000002871A4 string=0x00000000002871A8 ""
 *   insn=0x00000000002871AC string=0x00000000002871B0 "h"
 *   insn=0x00000000002871B0 string=0x00000000002871B4 ""
 *   insn=0x00000000002871B4 string=0x00000000002871B8 "h"
 *   insn=0x00000000002871E8 string=0x00000000002871EC "!"
 *   insn=0x000000000028721C string=0x0000000000287220 ")=G"
 *   insn=0x0000000000287220 string=0x0000000000287224 "!"
 *   insn=0x0000000000287224 string=0x0000000000287228 "i"
 *   insn=0x0000000000287228 string=0x000000000028722C "\t"
 *   insn=0x0000000000287228 string=0x00000000002872F4 "\t"
 *   insn=0x000000000028722C string=0x0000000000287230 "*"
 *   insn=0x0000000000287230 string=0x0000000000287234 "\n"
 *   insn=0x0000000000287238 string=0x000000000028723C "1"
 *   insn=0x000000000028723C string=0x0000000000287300 "?"
 *   insn=0x0000000000287240 string=0x0000000000287244 ")=G"
 *   insn=0x0000000000287244 string=0x0000000000287248 "!"
 *   insn=0x0000000000287248 string=0x000000000028724C "I"
 *   insn=0x000000000028724C string=0x0000000000287250 "\t"
 *   insn=0x000000000028724C string=0x0000000000287314 "\t"
 *   insn=0x0000000000287250 string=0x0000000000287254 "*"
 *   insn=0x0000000000287254 string=0x0000000000287258 "\n"
 *   insn=0x000000000028725C string=0x0000000000287260 "0"
 *   insn=0x0000000000287260 string=0x0000000000287320 "?"
 *   insn=0x0000000000287264 string=0x0000000000287268 ")=G"
 *   insn=0x0000000000287268 string=0x000000000028726C "!"
 *   insn=0x000000000028726C string=0x0000000000287270 ")"
 *   insn=0x0000000000287270 string=0x0000000000287274 "\t"
 *   insn=0x0000000000287270 string=0x0000000000287334 "\t"
 *   insn=0x0000000000287274 string=0x0000000000287278 "*"
 *   insn=0x0000000000287278 string=0x000000000028727C "\n"
 *   insn=0x0000000000287280 string=0x0000000000287284 "/"
 *   insn=0x0000000000287284 string=0x0000000000287340 "?"
 *   insn=0x0000000000287288 string=0x000000000028728C ")=G"
 *   insn=0x000000000028728C string=0x0000000000287290 "!"
 *   insn=0x0000000000287290 string=0x0000000000287294 "\t"
 *   insn=0x0000000000287294 string=0x0000000000287298 "\t"
 *   insn=0x0000000000287294 string=0x0000000000287354 "\t"
 *   insn=0x0000000000287298 string=0x000000000028729C "*"
 *   insn=0x000000000028729C string=0x00000000002872A0 "\n"
 *   insn=0x00000000002872A4 string=0x00000000002872A8 "."
 *   insn=0x00000000002872A8 string=0x0000000000287360 "?"
 *   insn=0x00000000002872AC string=0x00000000002872B0 ")=G"
 *   insn=0x00000000002872B0 string=0x00000000002872B4 "!"
 *   insn=0x00000000002872B8 string=0x00000000002872BC "\t"
 *   insn=0x00000000002872B8 string=0x0000000000287374 "\t"
 *   insn=0x00000000002872BC string=0x00000000002872C0 "*"
 *   insn=0x00000000002872C0 string=0x00000000002872C4 "\n"
 *   insn=0x00000000002872C8 string=0x00000000002872CC "-"
 *   insn=0x00000000002872CC string=0x0000000000287380 "?"
 *   insn=0x00000000002872D0 string=0x00000000002872D4 ")=G"
 *   insn=0x00000000002872D4 string=0x00000000002872D8 "!"
 *   insn=0x00000000002872DC string=0x00000000002872E0 "\t"
 *   insn=0x00000000002872DC string=0x0000000000287394 "\t"
 *   insn=0x00000000002872E0 string=0x00000000002872E4 "*"
 *   insn=0x00000000002872E4 string=0x00000000002872E8 "\n"
 *   insn=0x00000000002872EC string=0x00000000002872F0 ","
 *   insn=0x00000000002872F0 string=0x00000000002873A0 "?"
 *   insn=0x00000000002872F4 string=0x00000000002872F8 "*"
 *   insn=0x00000000002872F8 string=0x00000000002872FC "\n"
 *   insn=0x0000000000287308 string=0x000000000028730C "&"
 *   insn=0x000000000028730C string=0x0000000000287310 "\"
 *   insn=0x0000000000287314 string=0x0000000000287318 "*"
 *   insn=0x0000000000287318 string=0x000000000028731C "\n"
 *   insn=0x0000000000287320 string=0x0000000000287324 "l"
 *   insn=0x000000000028732C string=0x0000000000287330 "X"
 *   insn=0x0000000000287334 string=0x0000000000287338 "*"
 *   insn=0x0000000000287338 string=0x000000000028733C "\n"
 *   insn=0x000000000028734C string=0x0000000000287350 "y"
 *   insn=0x0000000000287354 string=0x0000000000287358 "*"
 *   insn=0x0000000000287358 string=0x000000000028735C "\n"
 *   insn=0x000000000028736C string=0x0000000000287370 "u"
 *   insn=0x0000000000287374 string=0x0000000000287378 "*"
 *   insn=0x0000000000287378 string=0x000000000028737C "\n"
 *   insn=0x0000000000287394 string=0x0000000000287398 "*"
 *   insn=0x0000000000287398 string=0x000000000028739C "\n"
 *   insn=0x00000000002873A0 string=0x00000000002873A4 "l"
 *   insn=0x00000000002873B4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002873BC string=0x00000000002873C0 "(a"
 *   insn=0x00000000002873CC string=0x00000000002873D0 "J=G"
 *   insn=0x00000000002873D0 string=0x00000000002873D4 ")!"
 *   insn=0x00000000002873D8 string=0x00000000002873DC "*"
 *   insn=0x00000000002873D8 string=0x00000000002873F0 "*"
 *   insn=0x00000000002873DC string=0x00000000002873E0 "K"
 *   insn=0x00000000002873E0 string=0x00000000002873E4 "+"
 *   insn=0x00000000002873EC string=0x00000000002873FC "_"
 *   insn=0x00000000002873F0 string=0x00000000002873F4 "K"
 *   insn=0x00000000002873F4 string=0x00000000002873F8 "+"
 *   insn=0x0000000000287428 string=0x000000000028742C ")=G"
 *   insn=0x000000000028742C string=0x0000000000287430 "!"
 *   insn=0x0000000000287430 string=0x0000000000287434 "i"
 *   insn=0x0000000000287434 string=0x0000000000287438 "\t"
 *   insn=0x0000000000287434 string=0x00000000002875A0 "\t"
 *   insn=0x0000000000287438 string=0x000000000028743C "*"
 *   insn=0x000000000028743C string=0x0000000000287440 "\n"
 *   insn=0x0000000000287444 string=0x0000000000287448 "P"
 *   insn=0x0000000000287448 string=0x0000000000287588 "?"
 *   insn=0x0000000000287454 string=0x0000000000287458 "(a"
 *   insn=0x0000000000287464 string=0x0000000000287468 "J=G"
 *   insn=0x0000000000287468 string=0x000000000028746C ")!"
 *   insn=0x0000000000287470 string=0x0000000000287474 "*"
 *   insn=0x0000000000287470 string=0x0000000000287488 "*"
 *   insn=0x0000000000287474 string=0x0000000000287478 "K"
 *   insn=0x0000000000287478 string=0x000000000028747C "+"
 *   insn=0x0000000000287484 string=0x0000000000287494 "_"
 *   insn=0x0000000000287488 string=0x000000000028748C "K"
 *   insn=0x000000000028748C string=0x0000000000287490 "+"
 *   insn=0x00000000002874C0 string=0x00000000002874C4 ")=G"
 *   insn=0x00000000002874C4 string=0x00000000002874C8 "!"
 *   insn=0x00000000002874CC string=0x00000000002874D0 "\t"
 *   insn=0x00000000002874D0 string=0x00000000002874D4 "*"
 *   insn=0x00000000002874D4 string=0x00000000002874D8 "\n"
 *   insn=0x00000000002874DC string=0x00000000002874E0 "*"
 *   insn=0x00000000002874EC string=0x00000000002874F0 "J"
 *   insn=0x00000000002874F4 string=0x00000000002874F8 "(a"
 *   insn=0x0000000000287504 string=0x0000000000287508 "J=G"
 *   insn=0x0000000000287508 string=0x000000000028750C ")!"
 *   insn=0x0000000000287510 string=0x0000000000287514 "*"
 *   insn=0x0000000000287510 string=0x0000000000287528 "*"
 *   insn=0x0000000000287514 string=0x0000000000287518 "K"
 *   insn=0x0000000000287518 string=0x000000000028751C "+"
 *   insn=0x0000000000287524 string=0x0000000000287534 "_"
 *   insn=0x0000000000287528 string=0x000000000028752C "K"
 *   insn=0x000000000028752C string=0x0000000000287530 "+"
 *   insn=0x0000000000287554 string=0x0000000000287558 ")"
 *   insn=0x0000000000287568 string=0x000000000028756C ")=G"
 *   insn=0x000000000028756C string=0x0000000000287570 "!"
 *   insn=0x0000000000287570 string=0x0000000000287574 "i"
 *   insn=0x0000000000287574 string=0x0000000000287578 "\t"
 *   insn=0x0000000000287578 string=0x000000000028757C "*"
 *   insn=0x000000000028757C string=0x0000000000287580 "\n"
 *   insn=0x0000000000287588 string=0x000000000028758C "l"
 *   insn=0x00000000002875A0 string=0x00000000002875A4 "*"
 *   insn=0x00000000002875A4 string=0x00000000002875A8 "\n"
 *   insn=0x00000000002875A8 string=0x00000000002875AC "?"
 *   insn=0x00000000002875AC string=0x00000000002875B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicExplosionComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v24, "color");
  v25 = 1;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x700000001LL;
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
  sub_566BB8((int)&v24, "radius");
  v25 = 2;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x500000001LL;
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
  sub_566BB8((int)&v24, "duration");
  v25 = 3;
  sub_56A528(&v26, &v24);
  v27 = 0x500000001LL;
  v28 = 0;
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

