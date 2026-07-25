/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3DC0
 * Mangled: ._ZN5Caver23CollisionShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 2
 *   0x000000000021490C  Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000021A85C  `non-virtual thunk to'Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000021A3FC  Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3DC8 string=0x00000000001F3DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::SetValueForBindedProperty(
        Caver::CollisionShapeComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver23CollisionShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

