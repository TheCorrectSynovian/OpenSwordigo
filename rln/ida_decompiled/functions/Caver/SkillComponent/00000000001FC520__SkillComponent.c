/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC520
 * Mangled: ._ZN5Caver14SkillComponentC2Ev_0
 * Demangled: Caver::SkillComponent::SkillComponent(void)
 *
 * Callers: 1
 *   0x000000000028F82C  Caver::SkillComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000028D810  Caver::ProjectileControllerComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC528 string=0x00000000001FC52C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SkillComponent::SkillComponent(Caver::SkillComponent *this)
{
  JUMPOUT(0x28D868);
}

