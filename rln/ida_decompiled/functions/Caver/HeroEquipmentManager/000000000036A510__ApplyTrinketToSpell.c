/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036A510
 * Mangled: _ZN5Caver20HeroEquipmentManager19ApplyTrinketToSpellEPNS_11SceneObjectERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::ApplyTrinketToSpell(Caver::SceneObject *,boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001FB510  Caver::HeroEquipmentManager::ApplyTrinketToSpell(Caver::SceneObject *,boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FAC60  Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 60
 *   insn=0x000000000036A524 string=0x000000000036A528 "V"
 *   insn=0x000000000036A540 string=0x000000000036A544 "iF"
 *   insn=0x000000000036A544 string=0x000000000021C148 "@&"
 *   insn=0x000000000036A548 string=0x000000000036A54C "%X"
 *   insn=0x000000000036A54C string=0x000000000036A550 "h"
 *   insn=0x000000000036A554 string=0x000000000036A558 ""
 *   insn=0x000000000036A564 string=0x00000000001FAC60 "0'"
 *   insn=0x000000000036A570 string=0x000000000036A574 """
 *   insn=0x000000000036A58C string=0x000000000036A590 "!"
 *   insn=0x000000000036A590 string=0x000000000058EB23 "firetrinket"
 *   insn=0x000000000036A5B8 string=0x000000000036A5BC ""
 *   insn=0x000000000036A5C8 string=0x000000000036A5CC "!"
 *   insn=0x000000000036A5CC string=0x000000000058EB35 "icetrinket"
 *   insn=0x000000000036A5EC string=0x000000000036A5F0 "s"
 *   insn=0x000000000036A5F0 string=0x000000000036A5F4 "U"
 *   insn=0x000000000036A5F4 string=0x000000000036A5F8 "t"
 *   insn=0x000000000036A624 string=0x000000000036A628 ")=G"
 *   insn=0x000000000036A628 string=0x000000000036A62C "!"
 *   insn=0x000000000036A630 string=0x000000000036A634 "\t"
 *   insn=0x000000000036A630 string=0x000000000036A66C "\t"
 *   insn=0x000000000036A634 string=0x000000000036A638 "*"
 *   insn=0x000000000036A638 string=0x000000000036A63C "\n"
 *   insn=0x000000000036A640 string=0x000000000036A644 ""
 *   insn=0x000000000036A644 string=0x000000000036A678 "?"
 *   insn=0x000000000036A648 string=0x000000000036A64C ")=G"
 *   insn=0x000000000036A64C string=0x000000000036A650 "!"
 *   insn=0x000000000036A650 string=0x000000000036A654 "\t"
 *   insn=0x000000000036A654 string=0x000000000036A658 "\t"
 *   insn=0x000000000036A654 string=0x000000000036A694 "\t"
 *   insn=0x000000000036A658 string=0x000000000036A65C "*"
 *   insn=0x000000000036A65C string=0x000000000036A660 "\n"
 *   insn=0x000000000036A668 string=0x000000000036A6A0 "?"
 *   insn=0x000000000036A66C string=0x000000000036A670 "*"
 *   insn=0x000000000036A670 string=0x000000000036A674 "\n"
 *   insn=0x000000000036A680 string=0x000000000036A684 "H"
 *   insn=0x000000000036A694 string=0x000000000036A698 "*"
 *   insn=0x000000000036A698 string=0x000000000036A69C "\n"
 *   insn=0x000000000036A6A0 string=0x000000000036A6A4 "l"
 *   insn=0x000000000036A6A8 string=0x000000000036A6AC ">"
 *   insn=0x000000000036A6AC string=0x000000000036A6B0 "3"
 *   insn=0x000000000036A6B8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036A6C0 string=0x000000000036A6C4 "(a"
 *   insn=0x000000000036A6D0 string=0x000000000036A6D4 "J=G"
 *   insn=0x000000000036A6D4 string=0x000000000036A6D8 ")!"
 *   insn=0x000000000036A6DC string=0x000000000036A6E0 "*"
 *   insn=0x000000000036A6DC string=0x000000000036A74C "*"
 *   insn=0x000000000036A6E0 string=0x000000000036A6E4 "K"
 *   insn=0x000000000036A6E4 string=0x000000000036A6E8 "+"
 *   insn=0x000000000036A6F0 string=0x000000000036A730 "_"
 *   insn=0x000000000036A6F8 string=0x000000000036A6FC "J"
 *   insn=0x000000000036A700 string=0x000000000036A704 "(a"
 *   insn=0x000000000036A710 string=0x000000000036A714 "J=G"
 *   insn=0x000000000036A714 string=0x000000000036A718 ")!"
 *   insn=0x000000000036A71C string=0x000000000036A720 "*"
 *   insn=0x000000000036A720 string=0x000000000036A724 "K"
 *   insn=0x000000000036A724 string=0x000000000036A728 "+"
 *   insn=0x000000000036A744 string=0x000000000036A748 "_\"
 *   insn=0x000000000036A74C string=0x000000000036A750 "K"
 *   insn=0x000000000036A750 string=0x000000000036A754 "+"
 *   insn=0x000000000036A754 string=0x000000000036A758 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HeroEquipmentManager::ApplyTrinketToSpell(__int64 *a1, Caver::SceneObject *this, __int64 *a3)
{
  __int64 v5; // x0
  __int64 v6; // x8
  __int64 v7; // x19
  int v8; // w20
  __int64 v9; // x8
  void *v10; // x0
  __int64 v11; // x8
  int v12; // w21
  void *v13; // x0
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  _QWORD v18[3]; // [xsp+8h] [xbp-48h] BYREF

  v18[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = Caver::SceneObject::ComponentWithInterface(this, (__int64)Caver::DamageComponent::Interface);
  v6 = *a1;
  v7 = v5;
  if ( v6 )
  {
    v8 = Caver::CharacterState::ItemCount();
    v9 = *a3;
    if ( !*a3 )
      return;
  }
  else
  {
    v8 = 1;
    v9 = *a3;
    if ( !*a3 )
      return;
  }
  sub_56A528(v18, v9 + 8);
  sub_5689E0((int)v18, "firetrinket");
  v10 = (void *)(v18[0] - 24LL);
  if ( (__int64 *)(v18[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_6;
  v14 = (unsigned int *)(v18[0] - 8LL);
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
  if ( v15 > 0 )
  {
LABEL_6:
    v11 = *a3;
    if ( !*a3 )
      return;
  }
  else
  {
    operator delete(v10);
    v11 = *a3;
    if ( !*a3 )
      return;
  }
  sub_56A528(v18, v11 + 8);
  v12 = sub_5689E0((int)v18, "icetrinket");
  v13 = (void *)(v18[0] - 24LL);
  if ( (__int64 *)(v18[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_8;
  v16 = (unsigned int *)(v18[0] - 8LL);
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
  if ( v17 > 0 )
  {
LABEL_8:
    if ( !v7 )
      return;
  }
  else
  {
    operator delete(v13);
    if ( !v7 )
      return;
  }
  if ( !v12 )
    *(_DWORD *)(v7 + 192) = v8;
}

