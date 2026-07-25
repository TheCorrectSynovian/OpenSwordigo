/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021A85C
 * Mangled: _ZThn16_N5Caver23CollisionShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3DC0  Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000021A85C string=0x000000000021A860 "Xe"
 *   insn=0x000000000021A860 string=0x00000000001F3DC0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::CollisionShapeComponent::SetValueForBindedProperty(
        Caver::CollisionShapeComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::CollisionShapeComponent::SetValueForBindedProperty(
           (Caver::CollisionShapeComponent *)((char *)this - 16),
           a2,
           a3);
}

