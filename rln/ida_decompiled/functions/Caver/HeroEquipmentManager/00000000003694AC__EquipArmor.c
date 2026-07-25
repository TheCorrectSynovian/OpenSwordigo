/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003694AC
 * Mangled: _ZN5Caver20HeroEquipmentManager10EquipArmorERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x00000000002010E0  Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036924C  Caver::HeroEquipmentManager::ModelNameForArmor(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD820  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FF8A0  Caver::CharacterState::ArmorDamageMultiplierWithItem(boost::shared_ptr<Caver::Item> const&,boost::shared_ptr<Caver::Item> const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x00000000003694BC string=0x00000000003694C0 "V"
 *   insn=0x00000000003694D8 string=0x00000000003694DC "!(B"
 *   insn=0x00000000003694DC string=0x00000000003694E0 "@\"
 *   insn=0x00000000003694DC string=0x000000000021C13C "@&"
 *   insn=0x00000000003694E4 string=0x00000000003694E8 "3"
 *   insn=0x00000000003694EC string=0x00000000003694F0 "(E@"
 *   insn=0x00000000003694F0 string=0x00000000003694F4 " A"
 *   insn=0x00000000003694F8 string=0x00000000003694FC "(I@"
 *   insn=0x0000000000369504 string=0x0000000000369508 "\t"
 *   insn=0x0000000000369508 string=0x000000000036950C ")"
 *   insn=0x000000000036950C string=0x0000000000369510 "\t"
 *   insn=0x000000000036951C string=0x0000000000369520 "`"
 *   insn=0x0000000000369524 string=0x0000000000369528 "3"
 *   insn=0x0000000000369528 string=0x000000000036952C "h"
 *   insn=0x000000000036952C string=0x0000000000369530 ""
 *   insn=0x0000000000369530 string=0x0000000000369534 "h"
 *   insn=0x0000000000369538 string=0x000000000036953C "h"
 *   insn=0x0000000000369540 string=0x0000000000369544 "\t@"
 *   insn=0x0000000000369548 string=0x000000000036954C "h\n@"
 *   insn=0x000000000036954C string=0x0000000000369550 ""
 *   insn=0x0000000000369550 string=0x0000000000369554 "h\n"
 *   insn=0x0000000000369558 string=0x000000000036955C "h"
 *   insn=0x0000000000369560 string=0x0000000000369564 "@"
 *   insn=0x0000000000369578 string=0x0000000000369590 "P3"
 *   insn=0x0000000000369590 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000369598 string=0x000000000036959C "4"
 *   insn=0x00000000003695A0 string=0x00000000003695A4 ""
 *   insn=0x00000000003695B0 string=0x00000000003695B4 "\t@"
 *   insn=0x00000000003695C0 string=0x00000000003695C4 ""
 *   insn=0x00000000003695D0 string=0x00000000003695D4 "@"
 *   insn=0x00000000003695E4 string=0x00000000003695E8 "Y"
 *   insn=0x00000000003695FC string=0x0000000000369600 "t"
 *   insn=0x000000000036961C string=0x00000000001FD820 "0'"
 *   insn=0x0000000000369624 string=0x0000000000369628 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HeroEquipmentManager::EquipArmor(Caver::SceneObject **a1)
{
  __int64 v2; // x19
  _QWORD *v3; // x8
  int v4; // s0
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // [xsp+40h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = Caver::SceneObject::ComponentWithInterface(a1[2], (__int64)Caver::HealthComponent::Interface);
  if ( v2 )
  {
    v3 = (_QWORD *)*((_QWORD *)*a1 + 18);
    v7 = v3;
    if ( v3 )
      ++v3[1];
    Caver::CharacterState::ArmorDamageMultiplierWithItem();
    *(_DWORD *)(v2 + 152) = v4;
    if ( v7 )
    {
      v5 = v7[1] - 1LL;
      v7[1] = v5;
      if ( !v5 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
        v6 = v7[2] - 1LL;
        v7[2] = v6;
        if ( !v6 )
          (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      }
    }
  }
}

