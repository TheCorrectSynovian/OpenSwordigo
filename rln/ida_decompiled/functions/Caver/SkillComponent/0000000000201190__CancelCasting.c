/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201190
 * Mangled: ._ZN5Caver14SkillComponent13CancelCastingEv
 * Demangled: Caver::SkillComponent::CancelCasting(void)
 *
 * Callers: 1
 *   0x00000000002601E0  Caver::CharControllerComponent::FinishCasting(void)
 *
 * Callees: 1
 *   0x000000000028EC2C  Caver::SkillComponent::FinishCasting(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201198 string=0x000000000020119C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SkillComponent::CancelCasting(Caver::SkillComponent *this)
{
  JUMPOUT(0x28EE04);
}

