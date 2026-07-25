/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036A318
 * Mangled: _ZN5Caver20HeroEquipmentManager26ApplyCharacterStatsToSpellEPNS_11SceneObjectE
 * Demangled: Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell(Caver::SceneObject *)
 *
 * Callers: 1
 *   0x00000000001FE9B0  Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell(Caver::SceneObject *)
 *
 * Callees: 3
 *   0x00000000001FBBA0  Caver::CharacterState::SkillDamageRange(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *
 * Referenced strings: 10
 *   insn=0x000000000036A324 string=0x000000000036A328 "iF"
 *   insn=0x000000000036A328 string=0x000000000021C148 "@&"
 *   insn=0x000000000036A33C string=0x000000000036A340 "s"
 *   insn=0x000000000036A344 string=0x000000000036A348 "("
 *   insn=0x000000000036A350 string=0x00000000001FBBA0 "0'"
 *   insn=0x000000000036A354 string=0x000000000036A358 " q@"
 *   insn=0x000000000036A358 string=0x000000000036A35C ""
 *   insn=0x000000000036A35C string=0x000000000036A360 ""
 *   insn=0x000000000036A360 string=0x000000000036A364 "`"
 *   insn=0x000000000036A364 string=0x000000000036A368 "`f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell(
        Caver::HeroEquipmentManager *this,
        Caver::SceneObject *a2)
{
  __int64 v3; // x19
  double result; // d0
  __int64 v5; // x0

  v3 = Caver::SceneObject::ComponentWithInterface(a2, (__int64)Caver::DamageComponent::Interface);
  if ( v3 )
  {
    if ( *(_QWORD *)this )
    {
      v5 = Caver::CharacterState::SkillDamageRange((Caver::CharacterState *)(*(_QWORD *)this + 16LL));
      result = 0.0078125;
      *(_DWORD *)(v3 + 164) = v5;
      *(_DWORD *)(v3 + 168) = HIDWORD(v5) - v5;
      *(_QWORD *)(v3 + 200) = 0x3F80000000000000LL;
    }
  }
  return result;
}

