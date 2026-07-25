/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F07C
 * Mangled: _ZThn16_N5Caver23TextureMappingComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000023ED5C  Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000001F44B0  Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000023F080 string=0x00000000001F44B0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::TextureMappingComponent::SetValueForBindedProperty(
        Caver::TextureMappingComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::TextureMappingComponent::SetValueForBindedProperty(
           (Caver::TextureMappingComponent *)((char *)this - 16),
           a2,
           a3);
}

