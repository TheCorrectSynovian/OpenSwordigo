/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201DA0
 * Mangled: ._ZN5Caver19SimpleGlowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SimpleGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002B0CA4  `non-virtual thunk to'Caver::SimpleGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002B08BC  Caver::SimpleGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201DA8 string=0x0000000000201DAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SimpleGlowComponent::SetValueForBindedProperty(
        Caver::SimpleGlowComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver19SimpleGlowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

