/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002013B0
 * Mangled: ._ZN5Caver19EntityInfoComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::EntityInfoComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000026EEC8  `non-virtual thunk to'Caver::EntityInfoComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000026ED90  Caver::EntityInfoComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002013B8 string=0x00000000002013BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityInfoComponent::SetValueForBindedProperty(
        Caver::EntityInfoComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver19EntityInfoComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

