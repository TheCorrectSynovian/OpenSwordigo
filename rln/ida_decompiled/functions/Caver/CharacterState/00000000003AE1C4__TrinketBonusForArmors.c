/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AE1C4
 * Mangled: _ZN5Caver14CharacterState21TrinketBonusForArmorsERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::TrinketBonusForArmors(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x00000000001FE210  Caver::CharacterState::TrinketBonusForArmors(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003ADE70  Caver::CharacterState::TrinketBonusForWeapons(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000003AE518  Caver::CharacterState::TrinketBonusForSkills(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 79
 *   insn=0x00000000003AE1D4 string=0x00000000003AE1D8 "U"
 *   insn=0x00000000003AE1EC string=0x00000000003AE1F0 "\t"
 *   insn=0x00000000003AE1F0 string=0x00000000003AE1F4 "!!"
 *   insn=0x00000000003AE200 string=0x000000000058EB23 "firetrinket"
 *   insn=0x00000000003AE218 string=0x00000000003AE21C "(a"
 *   insn=0x00000000003AE220 string=0x00000000003AE224 "!"
 *   insn=0x00000000003AE23C string=0x000000000058EB35 "icetrinket"
 *   insn=0x00000000003AE24C string=0x00000000003AE250 "(a"
 *   insn=0x00000000003AE258 string=0x00000000003AE25C "@\n"
 *   insn=0x00000000003AE270 string=0x000000000058EB45 "shadowtrinket"
 *   insn=0x00000000003AE28C string=0x00000000003AE290 "!"
 *   insn=0x00000000003AE290 string=0x00000000003AE294 "T\n"
 *   insn=0x00000000003AE2A4 string=0x00000000003AE2A8 "D"
 *   insn=0x00000000003AE2A8 string=0x00000000003AE2AC "Q"
 *   insn=0x00000000003AE2BC string=0x00000000003AE2C0 ">"
 *   insn=0x00000000003AE2C0 string=0x00000000003AE2C4 "K"
 *   insn=0x00000000003AE2C8 string=0x00000000003AE2CC "J=G"
 *   insn=0x00000000003AE2CC string=0x00000000003AE2D0 ")!"
 *   insn=0x00000000003AE2D4 string=0x00000000003AE2D8 "*"
 *   insn=0x00000000003AE2D4 string=0x00000000003AE310 "*"
 *   insn=0x00000000003AE2D8 string=0x00000000003AE2DC "K"
 *   insn=0x00000000003AE2DC string=0x00000000003AE2E0 "+"
 *   insn=0x00000000003AE2E4 string=0x00000000003AE2E8 ""
 *   insn=0x00000000003AE2E8 string=0x00000000003AE31C "_"
 *   insn=0x00000000003AE2EC string=0x00000000003AE2F0 "J=G"
 *   insn=0x00000000003AE2F0 string=0x00000000003AE2F4 ")!"
 *   insn=0x00000000003AE2F4 string=0x00000000003AE2F8 "\n"
 *   insn=0x00000000003AE2F8 string=0x00000000003AE2FC "*"
 *   insn=0x00000000003AE2F8 string=0x00000000003AE378 "*"
 *   insn=0x00000000003AE2FC string=0x00000000003AE300 "K"
 *   insn=0x00000000003AE300 string=0x00000000003AE304 "+"
 *   insn=0x00000000003AE30C string=0x00000000003AE384 "_"
 *   insn=0x00000000003AE310 string=0x00000000003AE314 "K"
 *   insn=0x00000000003AE314 string=0x00000000003AE318 "+"
 *   insn=0x00000000003AE31C string=0x00000000003AE320 "L"
 *   insn=0x00000000003AE33C string=0x0000000000591B8F "+Damages attacker"
 *   insn=0x00000000003AE348 string=0x00000000003AE34C ""
 *   insn=0x00000000003AE34C string=0x00000000003AE350 "("
 *   insn=0x00000000003AE354 string=0x00000000003AE358 ")=G"
 *   insn=0x00000000003AE358 string=0x00000000003AE35C "!"
 *   insn=0x00000000003AE360 string=0x00000000003AE364 "\t"
 *   insn=0x00000000003AE360 string=0x00000000003AE3BC "\t"
 *   insn=0x00000000003AE364 string=0x00000000003AE368 "*"
 *   insn=0x00000000003AE368 string=0x00000000003AE36C "\n"
 *   insn=0x00000000003AE374 string=0x00000000003AE3C8 "?"
 *   insn=0x00000000003AE378 string=0x00000000003AE37C "K"
 *   insn=0x00000000003AE37C string=0x00000000003AE380 "+"
 *   insn=0x00000000003AE3A4 string=0x0000000000591BA1 "+Freezes attacker"
 *   insn=0x00000000003AE3BC string=0x00000000003AE3C0 "*"
 *   insn=0x00000000003AE3C0 string=0x00000000003AE3C4 "\n"
 *   insn=0x00000000003AE3C8 string=0x00000000003AE3CC "L"
 *   insn=0x00000000003AE3DC string=0x0000000000591BB3 "+Health regeneration"
 *   insn=0x00000000003AE414 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AE42C string=0x00000000003AE430 "(a"
 *   insn=0x00000000003AE43C string=0x00000000003AE440 "J=G"
 *   insn=0x00000000003AE440 string=0x00000000003AE444 ")!"
 *   insn=0x00000000003AE448 string=0x00000000003AE44C "*"
 *   insn=0x00000000003AE448 string=0x00000000003AE4FC "*"
 *   insn=0x00000000003AE44C string=0x00000000003AE450 "K"
 *   insn=0x00000000003AE450 string=0x00000000003AE454 "+"
 *   insn=0x00000000003AE458 string=0x00000000003AE45C "!"
 *   insn=0x00000000003AE45C string=0x00000000003AE4E0 "_"
 *   insn=0x00000000003AE470 string=0x00000000003AE474 "(a"
 *   insn=0x00000000003AE480 string=0x00000000003AE484 "J=G"
 *   insn=0x00000000003AE484 string=0x00000000003AE488 ")!"
 *   insn=0x00000000003AE48C string=0x00000000003AE490 "*"
 *   insn=0x00000000003AE490 string=0x00000000003AE494 "K"
 *   insn=0x00000000003AE494 string=0x00000000003AE498 "+"
 *   insn=0x00000000003AE4A8 string=0x00000000003AE4AC "J"
 *   insn=0x00000000003AE4B0 string=0x00000000003AE4B4 "(a"
 *   insn=0x00000000003AE4C0 string=0x00000000003AE4C4 "J=G"
 *   insn=0x00000000003AE4C4 string=0x00000000003AE4C8 ")!"
 *   insn=0x00000000003AE4CC string=0x00000000003AE4D0 "*"
 *   insn=0x00000000003AE4D0 string=0x00000000003AE4D4 "K"
 *   insn=0x00000000003AE4D4 string=0x00000000003AE4D8 "+"
 *   insn=0x00000000003AE4E0 string=0x00000000003AE4E4 "l"
 *   insn=0x00000000003AE4FC string=0x00000000003AE500 "K"
 *   insn=0x00000000003AE500 string=0x00000000003AE504 "+"
 *   insn=0x00000000003AE504 string=0x00000000003AE508 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::CharacterState::TrinketBonusForArmors@<X0>(_QWORD *a1@<X1>, int a2@<W8>)
{
  int v4; // w0
  void *v5; // x8
  int v6; // w0
  void *v7; // x8
  int v8; // w20
  void *v9; // x0
  unsigned int *v11; // x9
  int v12; // w10
  unsigned int *v13; // x9
  int v14; // w10
  unsigned int *v15; // x8
  int v16; // w9
  int v17; // [xsp+4h] [xbp-3Ch]
  int v18; // [xsp+4h] [xbp-3Ch]
  _QWORD v19[3]; // [xsp+8h] [xbp-38h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*a1 )
    return sub_566BB8(a2, "");
  sub_56A528(v19, *a1 + 8LL);
  v4 = sub_5689E0((int)v19, "firetrinket");
  v5 = (void *)(v19[0] - 24LL);
  if ( (__int64 *)(v19[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_3;
  v11 = (unsigned int *)(v19[0] - 8LL);
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
  if ( v12 > 0 )
  {
LABEL_3:
    if ( !v4 )
      return sub_566BB8(a2, "+Damages attacker");
  }
  else
  {
    v17 = v4;
    operator delete(v5);
    if ( !v17 )
      return sub_566BB8(a2, "+Damages attacker");
  }
  sub_56A528(v19, *a1 + 8LL);
  v6 = sub_5689E0((int)v19, "icetrinket");
  v7 = (void *)(v19[0] - 24LL);
  if ( (__int64 *)(v19[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_5;
  v13 = (unsigned int *)(v19[0] - 8LL);
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
  if ( v14 > 0 )
  {
LABEL_5:
    if ( !v6 )
      return sub_566BB8(a2, "+Freezes attacker");
  }
  else
  {
    v18 = v6;
    operator delete(v7);
    if ( !v18 )
      return sub_566BB8(a2, "+Freezes attacker");
  }
  sub_56A528(v19, *a1 + 8LL);
  v8 = sub_5689E0((int)v19, "shadowtrinket");
  v9 = (void *)(v19[0] - 24LL);
  if ( (__int64 *)(v19[0] - 24LL) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v19[0] - 8LL);
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
    {
      operator delete(v9);
      if ( !v8 )
        return sub_566BB8(a2, "+Health regeneration");
      return sub_566BB8(a2, "");
    }
  }
  if ( v8 )
    return sub_566BB8(a2, "");
  return sub_566BB8(a2, "+Health regeneration");
}

