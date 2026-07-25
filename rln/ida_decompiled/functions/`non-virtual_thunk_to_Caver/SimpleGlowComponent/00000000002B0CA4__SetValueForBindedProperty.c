/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B0CA4
 * Mangled: _ZThn16_N5Caver19SimpleGlowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::SimpleGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201DA0  Caver::SimpleGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002B0CA4 string=0x00000000002B0CA8 ">D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SimpleGlowComponent::SetValueForBindedProperty(
        Caver::SimpleGlowComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::SimpleGlowComponent::SetValueForBindedProperty(
           (Caver::SimpleGlowComponent *)((char *)this - 16),
           a2,
           a3);
}

