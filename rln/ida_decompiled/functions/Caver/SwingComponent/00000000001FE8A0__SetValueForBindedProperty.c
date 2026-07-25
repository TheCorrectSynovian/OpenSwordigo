/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE8A0
 * Mangled: ._ZN5Caver14SwingComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SwingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002CA348  `non-virtual thunk to'Caver::SwingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002CA0A8  Caver::SwingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE8A8 string=0x00000000001FE8AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingComponent::SetValueForBindedProperty(
        Caver::SwingComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver14SwingComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

