/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002036A0
 * Mangled: ._ZN5Caver28AnimationControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::AnimationControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 2
 *   0x0000000000256BB4  Caver::CharAnimControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000256BB8  `non-virtual thunk to'Caver::CharAnimControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000021C914  Caver::AnimationControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002036A4 string=0x000000000021C914 "?"
 *   insn=0x00000000002036A8 string=0x00000000002036AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AnimationControllerComponent::ValueForBindedProperty(
        Caver::AnimationControllerComponent *this,
        int a2)
{
  return _ZN5Caver28AnimationControllerComponent22ValueForBindedPropertyEi(this, a2);
}

