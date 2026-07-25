/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEE60
 * Mangled: ._ZN5Caver16ProgramComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ProgramComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002324EC  Caver::ProgramComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002324EC  Caver::ProgramComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEE68 string=0x00000000001FEE6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramComponent::SetValueForBindedProperty(
        Caver::ProgramComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver16ProgramComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

