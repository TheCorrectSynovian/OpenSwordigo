/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034A8E4
 * Mangled: _ZN5Caver19GameSceneController12UnequipArmorEv
 * Demangled: Caver::GameSceneController::UnequipArmor(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA210  Caver::HeroEquipmentManager::ApplyWeaponTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FE030  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000002010E0  Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x000000000034A8F0 string=0x000000000034A8F4 "T"
 *   insn=0x000000000034A910 string=0x000000000034A914 "3"
 *   insn=0x000000000034A914 string=0x000000000034A918 "h"
 *   insn=0x000000000034A918 string=0x000000000034A91C ""
 *   insn=0x000000000034A91C string=0x000000000034A920 "h"
 *   insn=0x000000000034A924 string=0x000000000034A928 "h"
 *   insn=0x000000000034A92C string=0x000000000034A930 "\t@"
 *   insn=0x000000000034A934 string=0x000000000034A938 "h\n@"
 *   insn=0x000000000034A938 string=0x000000000034A93C ""
 *   insn=0x000000000034A93C string=0x000000000034A940 "h\n"
 *   insn=0x000000000034A944 string=0x000000000034A948 "h"
 *   insn=0x000000000034A94C string=0x000000000034A950 "@"
 *   insn=0x000000000034A964 string=0x000000000034A978 "V"
 *   insn=0x000000000034A978 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000034A980 string=0x000000000034A984 "4"
 *   insn=0x000000000034A988 string=0x000000000034A98C ""
 *   insn=0x000000000034A998 string=0x000000000034A99C "\t@"
 *   insn=0x000000000034A9A8 string=0x000000000034A9AC ""
 *   insn=0x000000000034A9B8 string=0x000000000034A9BC "@"
 *   insn=0x000000000034A9CC string=0x000000000034A9D0 "_"
 *   insn=0x000000000034A9D0 string=0x000000000034A9D4 "?"
 *   insn=0x000000000034A9D8 string=0x000000000034A9DC "?"
 *   insn=0x000000000034A9E8 string=0x000000000034A9EC "\t"
 *   insn=0x000000000034A9EC string=0x00000000001FA210 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneController::UnequipArmor(Caver::GameSceneController *this)
{
  _ReadStatusReg(TPIDR_EL0);
  return Caver::HeroEquipmentManager::EquipArmor();
}

