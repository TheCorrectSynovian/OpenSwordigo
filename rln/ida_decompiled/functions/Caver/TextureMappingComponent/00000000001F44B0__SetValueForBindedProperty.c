/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F44B0
 * Mangled: ._ZN5Caver23TextureMappingComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000023F07C  `non-virtual thunk to'Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000023ED5C  Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F44B8 string=0x00000000001F44BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureMappingComponent::SetValueForBindedProperty(
        Caver::TextureMappingComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver23TextureMappingComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

