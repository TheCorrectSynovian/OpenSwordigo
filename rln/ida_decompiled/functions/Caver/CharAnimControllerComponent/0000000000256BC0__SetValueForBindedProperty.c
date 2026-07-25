/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256BC0
 * Mangled: _ZN5Caver27CharAnimControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::CharAnimControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203C10  Caver::AnimationControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::SetValueForBindedProperty(
        Caver::CharAnimControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::AnimationControllerComponent::SetValueForBindedProperty(this, a2, a3);
}

