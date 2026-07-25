/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCA60
 * Mangled: ._ZN5Caver20FireEmitterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::FireEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002A2C2C  `non-virtual thunk to'Caver::FireEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002A2B48  Caver::FireEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCA68 string=0x00000000001FCA6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FireEmitterComponent::SetValueForBindedProperty(
        Caver::FireEmitterComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver20FireEmitterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

