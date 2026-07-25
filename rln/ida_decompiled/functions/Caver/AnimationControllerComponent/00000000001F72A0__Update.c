/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F72A0
 * Mangled: ._ZN5Caver28AnimationControllerComponent6UpdateEf
 * Demangled: Caver::AnimationControllerComponent::Update(float)
 *
 * Callers: 2
 *   0x000000000021CCB0  `non-virtual thunk to'Caver::AnimationControllerComponent::Update(float)
 *   0x0000000000257128  Caver::CharAnimControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000021C984  Caver::AnimationControllerComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F72A8 string=0x00000000001F72AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AnimationControllerComponent::Update(Caver::AnimationControllerComponent *this, float a2)
{
  JUMPOUT(0x21CBA8);
}

