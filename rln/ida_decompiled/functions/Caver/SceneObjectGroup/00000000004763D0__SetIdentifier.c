/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004763D0
 * Mangled: _ZN5Caver16SceneObjectGroup13SetIdentifierERKSs
 * Demangled: Caver::SceneObjectGroup::SetIdentifier(std::string const&)
 *
 * Callers: 2
 *   0x00000000001F6070  Caver::SceneObjectGroup::SetIdentifier(std::string const&)
 *   0x00000000004760BC  Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F67C0  Caver::Scene::GroupIdentifierChanged(std::string const&,std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 39
 *   insn=0x00000000004763E0 string=0x00000000004763E4 "V"
 *   insn=0x00000000004763FC string=0x0000000000476400 "`"
 *   insn=0x0000000000476400 string=0x0000000000476404 "("
 *   insn=0x0000000000476408 string=0x000000000047640C "_"
 *   insn=0x000000000047640C string=0x0000000000476410 "a"
 *   insn=0x0000000000476410 string=0x0000000000476414 "_"
 *   insn=0x0000000000476414 string=0x0000000000476418 "@"
 *   insn=0x0000000000476414 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000476420 string=0x0000000000476424 "A"
 *   insn=0x0000000000476444 string=0x00000000001F67C0 "0'"
 *   insn=0x0000000000476448 string=0x000000000047644C "i"
 *   insn=0x000000000047644C string=0x0000000000476450 ")"
 *   insn=0x0000000000476458 string=0x000000000047645C "A"
 *   insn=0x000000000047645C string=0x0000000000476484 "i"
 *   insn=0x0000000000476484 string=0x0000000000476488 ")=G"
 *   insn=0x0000000000476488 string=0x000000000047648C "!"
 *   insn=0x0000000000476490 string=0x0000000000476494 "\t"
 *   insn=0x0000000000476490 string=0x00000000004764A8 "\t"
 *   insn=0x0000000000476494 string=0x0000000000476498 "*"
 *   insn=0x0000000000476498 string=0x000000000047649C "\n"
 *   insn=0x00000000004764A4 string=0x00000000004764B4 "?"
 *   insn=0x00000000004764A8 string=0x00000000004764AC "*"
 *   insn=0x00000000004764AC string=0x00000000004764B0 "\n"
 *   insn=0x00000000004764B4 string=0x00000000004764B8 "L"
 *   insn=0x00000000004764C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004764CC string=0x00000000004764D0 "j"
 *   insn=0x00000000004764D0 string=0x00000000004764D4 "J"
 *   insn=0x00000000004764D8 string=0x00000000004764DC "(a"
 *   insn=0x00000000004764E4 string=0x00000000004764E8 "j"
 *   insn=0x00000000004764E8 string=0x00000000004764EC "J=G"
 *   insn=0x00000000004764EC string=0x00000000004764F0 ")!"
 *   insn=0x00000000004764F4 string=0x00000000004764F8 "*"
 *   insn=0x00000000004764F4 string=0x0000000000476524 "*"
 *   insn=0x00000000004764F8 string=0x00000000004764FC "K"
 *   insn=0x00000000004764FC string=0x0000000000476500 "+"
 *   insn=0x0000000000476504 string=0x0000000000476508 "_"
 *   insn=0x0000000000476524 string=0x0000000000476528 "K"
 *   insn=0x0000000000476528 string=0x000000000047652C "+"
 *   insn=0x000000000047652C string=0x0000000000476530 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObjectGroup::SetIdentifier(__int64 a1, const void **a2)
{
  _QWORD *v4; // x1
  __int64 v5; // x21
  size_t v6; // x2
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9
  _QWORD v10[3]; // [xsp+8h] [xbp-38h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = a1 + 32;
  v4 = *(_QWORD **)(a1 + 32);
  v6 = *((_QWORD *)*a2 - 3);
  if ( v6 != *(v4 - 3) || memcmp(*a2, v4, v6) )
  {
    sub_56A528(v10, v5);
    sub_56A6A8(v5);
    if ( *(_QWORD *)(a1 + 24) )
      Caver::Scene::GroupIdentifierChanged();
    v7 = (void *)(v10[0] - 24LL);
    if ( (__int64 *)(v10[0] - 24LL) != &qword_6FD2E0 )
    {
      v8 = (unsigned int *)(v10[0] - 8LL);
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
        operator delete(v7);
    }
  }
}

