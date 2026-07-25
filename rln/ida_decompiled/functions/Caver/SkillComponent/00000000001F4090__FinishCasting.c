/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4090
 * Mangled: ._ZN5Caver14SkillComponent13FinishCastingEv
 * Demangled: Caver::SkillComponent::FinishCasting(void)
 *
 * Callers: 2
 *   0x00000000002601E0  Caver::CharControllerComponent::FinishCasting(void)
 *   0x000000000028F32C  sub_28F32C
 *
 * Callees: 1
 *   0x000000000028EC2C  Caver::SkillComponent::FinishCasting(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4098 string=0x00000000001F409C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillComponent::FinishCasting(Caver::SkillComponent *this)
{
  return _ZN5Caver14SkillComponent13FinishCastingEv(this);
}

