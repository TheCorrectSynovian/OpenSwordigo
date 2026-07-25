/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F86D0
 * Mangled: ._ZN5Caver14SkillComponentC2Ev
 * Demangled: Caver::SkillComponent::SkillComponent(void)
 *
 * Callers: 1
 *   0x0000000000250978  Caver::SkillComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000028D810  Caver::ProjectileControllerComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F86D8 string=0x00000000001F86DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SkillComponent::SkillComponent(Caver::SkillComponent *this)
{
  JUMPOUT(0x28D868);
}

