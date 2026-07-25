/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBBA0
 * Mangled: ._ZN5Caver14CharacterState16SkillDamageRangeEv
 * Demangled: Caver::CharacterState::SkillDamageRange(void)
 *
 * Callers: 1
 *   0x000000000036A318  Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x00000000003ADDF0  Caver::CharacterState::SkillDamageRange(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBBA8 string=0x00000000001FBBAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharacterState::SkillDamageRange(Caver::CharacterState *this)
{
  return _ZN5Caver14CharacterState16SkillDamageRangeEv(this);
}

