/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256BB8
 * Mangled: _ZThn16_N5Caver27CharAnimControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::CharAnimControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002036A0  Caver::AnimationControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::CharAnimControllerComponent::ValueForBindedProperty(
        Caver::CharAnimControllerComponent *this,
        int a2)
{
  return Caver::AnimationControllerComponent::ValueForBindedProperty(
           (Caver::CharAnimControllerComponent *)((char *)this - 16),
           a2);
}

