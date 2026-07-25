/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256BC4
 * Mangled: _ZThn16_N5Caver27CharAnimControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::CharAnimControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
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

__int64 __fastcall `non-virtual thunk to'Caver::CharAnimControllerComponent::SetValueForBindedProperty(
        Caver::CharAnimControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::AnimationControllerComponent::SetValueForBindedProperty(
           (Caver::CharAnimControllerComponent *)((char *)this - 16),
           a2,
           a3);
}

