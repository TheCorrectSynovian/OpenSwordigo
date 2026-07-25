/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CA348
 * Mangled: _ZThn16_N5Caver14SwingComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::SwingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE8A0  Caver::SwingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002CA348 string=0x00000000002CA34C "U"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SwingComponent::SetValueForBindedProperty(
        Caver::SwingComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::SwingComponent::SetValueForBindedProperty((Caver::SwingComponent *)((char *)this - 16), a2, a3);
}

