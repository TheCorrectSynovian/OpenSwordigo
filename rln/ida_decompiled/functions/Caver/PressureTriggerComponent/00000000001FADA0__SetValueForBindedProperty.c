/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FADA0
 * Mangled: ._ZN5Caver24PressureTriggerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::PressureTriggerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002B5E1C  Caver::PressureTriggerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002B5E1C  Caver::PressureTriggerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FADA8 string=0x00000000001FADAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PressureTriggerComponent::SetValueForBindedProperty(
        Caver::PressureTriggerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver24PressureTriggerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

