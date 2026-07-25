/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD790
 * Mangled: ._ZN5Caver37BoneControlledCollisionShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000214C80  `non-virtual thunk to'Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000021490C  Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD798 string=0x00000000001FD79C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(
        Caver::BoneControlledCollisionShapeComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver37BoneControlledCollisionShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

