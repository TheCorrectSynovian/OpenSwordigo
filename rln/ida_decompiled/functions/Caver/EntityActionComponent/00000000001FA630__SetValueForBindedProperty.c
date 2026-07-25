/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA630
 * Mangled: ._ZN5Caver21EntityActionComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::EntityActionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002673D4  Caver::EntityActionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002673D4  Caver::EntityActionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA638 string=0x00000000001FA63C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityActionComponent::SetValueForBindedProperty(
        Caver::EntityActionComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver21EntityActionComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

