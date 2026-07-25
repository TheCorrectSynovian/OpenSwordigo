/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036A378
 * Mangled: _ZN5Caver20HeroEquipmentManager20ApplyTrinketToSpellsERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::ApplyTrinketToSpells(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001F6EB0  Caver::HeroEquipmentManager::ApplyTrinketToSpells(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FAC60  Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000271E54  Caver::ManaComponent::Interface(void)
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x000000000036A388 string=0x000000000036A38C "V"
 *   insn=0x000000000036A3AC string=0x000000000036A3B0 ",B"
 *   insn=0x000000000036A3B0 string=0x00000000001FAC60 "0'"
 *   insn=0x000000000036A3C4 string=0x000000000036A3C8 "!XE"
 *   insn=0x000000000036A3D8 string=0x000000000036A414 "4"
 *   insn=0x000000000036A3E0 string=0x000000000036A3E4 "Q"
 *   insn=0x000000000036A3E4 string=0x000000000036A3E8 "!"
 *   insn=0x000000000036A3E8 string=0x000000000058EB45 "shadowtrinket"
 *   insn=0x000000000036A3F0 string=0x000000000036A3F4 "{"
 *   insn=0x000000000036A3FC string=0x000000000036A400 "J"
 *   insn=0x000000000036A400 string=0x000000000036A404 "(a"
 *   insn=0x000000000036A410 string=0x000000000036A470 "T"
 *   insn=0x000000000036A420 string=0x000000000036A424 "J=G"
 *   insn=0x000000000036A424 string=0x000000000036A428 ")!"
 *   insn=0x000000000036A42C string=0x000000000036A430 "*"
 *   insn=0x000000000036A42C string=0x000000000036A444 "*"
 *   insn=0x000000000036A430 string=0x000000000036A434 "K"
 *   insn=0x000000000036A434 string=0x000000000036A438 "+"
 *   insn=0x000000000036A440 string=0x000000000036A450 "_"
 *   insn=0x000000000036A444 string=0x000000000036A448 "K"
 *   insn=0x000000000036A448 string=0x000000000036A44C "+"
 *   insn=0x000000000036A468 string=0x000000000036A46C "@"
 *   insn=0x000000000036A49C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036A4A4 string=0x000000000036A4A8 "J"
 *   insn=0x000000000036A4AC string=0x000000000036A4B0 "(a"
 *   insn=0x000000000036A4BC string=0x000000000036A4C0 "J=G"
 *   insn=0x000000000036A4C0 string=0x000000000036A4C4 ")!"
 *   insn=0x000000000036A4C8 string=0x000000000036A4CC "*"
 *   insn=0x000000000036A4C8 string=0x000000000036A4F8 "*"
 *   insn=0x000000000036A4CC string=0x000000000036A4D0 "K"
 *   insn=0x000000000036A4D0 string=0x000000000036A4D4 "+"
 *   insn=0x000000000036A4D8 string=0x000000000036A4DC "_"
 *   insn=0x000000000036A4F8 string=0x000000000036A4FC "K"
 *   insn=0x000000000036A4FC string=0x000000000036A500 "+"
 *   insn=0x000000000036A500 string=0x000000000036A504 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEquipmentManager::ApplyTrinketToSpells(__int64 a1, __int64 *a2)
{
  int v4; // w19
  __int64 result; // x0
  __int64 v6; // x8
  __int64 v7; // x20
  void *v8; // x8
  unsigned int *v9; // x9
  int v10; // w10
  unsigned int v11; // w21
  _QWORD v12[3]; // [xsp+8h] [xbp-38h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)a1 )
    v4 = Caver::CharacterState::ItemCount();
  else
    v4 = 1;
  result = Caver::SceneObject::ComponentWithInterface(
             *(Caver::SceneObject **)(a1 + 16),
             (__int64)Caver::ManaComponent::Interface);
  v6 = *a2;
  v7 = result;
  if ( !v6 )
    goto LABEL_7;
  sub_56A528(v12, v6 + 8);
  result = sub_5689E0((int)v12, "shadowtrinket");
  v8 = (void *)(v12[0] - 24LL);
  if ( (__int64 *)(v12[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_6;
  v9 = (unsigned int *)(v12[0] - 8LL);
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
  if ( v10 > 0 )
  {
LABEL_6:
    if ( !(_DWORD)result )
      goto LABEL_15;
LABEL_7:
    if ( v7 )
      *(_DWORD *)(v7 + 120) = 0;
    return result;
  }
  v11 = result;
  operator delete(v8);
  result = v11;
  if ( v11 )
    goto LABEL_7;
LABEL_15:
  if ( v7 )
    *(_DWORD *)(v7 + 120) = v4;
  return result;
}

