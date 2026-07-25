/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203C10
 * Mangled: ._ZN5Caver28AnimationControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::AnimationControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 2
 *   0x0000000000256BC0  Caver::CharAnimControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000256BC4  `non-virtual thunk to'Caver::CharAnimControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000021C940  Caver::AnimationControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203C14 string=0x000000000021C940 "?"
 *   insn=0x0000000000203C18 string=0x0000000000203C1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AnimationControllerComponent::SetValueForBindedProperty(
        Caver::AnimationControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver28AnimationControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

