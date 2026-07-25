/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368C58
 * Mangled: _ZN5Caver20HeroEquipmentManagerC2Ev
 * Demangled: Caver::HeroEquipmentManager::HeroEquipmentManager(void)
 *
 * Callers: 1
 *   0x00000000001FED00  Caver::HeroEquipmentManager::HeroEquipmentManager(void)
 *
 * Callees: 1
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 1
 *   insn=0x0000000000368C68 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::HeroEquipmentManager::HeroEquipmentManager(Caver::HeroEquipmentManager *this)
{
  return memset(this, 0, 0x48u);
}

