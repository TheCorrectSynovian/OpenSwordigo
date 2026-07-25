/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9DD0
 * Mangled: ._ZN5Caver14ModelComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000225CF8  `non-virtual thunk to'Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000225A10  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9DD8 string=0x00000000001F9DDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelComponent::SetValueForBindedProperty(
        Caver::ModelComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver14ModelComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

