/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000225CF8
 * Mangled: _ZThn16_N5Caver14ModelComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9DD0  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000225CF8 string=0x0000000000225CFC "5P"
 *   insn=0x0000000000225CFC string=0x00000000001F9DD0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ModelComponent::SetValueForBindedProperty(
        Caver::ModelComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::ModelComponent::SetValueForBindedProperty((Caver::ModelComponent *)((char *)this - 16), a2, a3);
}

