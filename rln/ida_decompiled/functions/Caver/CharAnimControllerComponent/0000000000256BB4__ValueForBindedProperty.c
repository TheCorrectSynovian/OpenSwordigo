/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256BB4
 * Mangled: _ZN5Caver27CharAnimControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::CharAnimControllerComponent::ValueForBindedProperty(int)
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

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::ValueForBindedProperty(
        Caver::CharAnimControllerComponent *this,
        int a2)
{
  return Caver::AnimationControllerComponent::ValueForBindedProperty(this, a2);
}

