/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000214C80
 * Mangled: _ZThn16_N5Caver37BoneControlledCollisionShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD790  Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000214C84 string=0x00000000001FD790 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(
        Caver::BoneControlledCollisionShapeComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(
           (Caver::BoneControlledCollisionShapeComponent *)((char *)this - 16),
           a2,
           a3);
}

