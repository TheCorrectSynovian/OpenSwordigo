/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FBB8
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent6CreateEv
 * Demangled: Caver::BoneControlledCollisionShapeComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FB78  Caver::CollisionShapeComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F3AB0  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024FBF8  Caver::DamageComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024FBC8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FBD0 string=0x00000000001F3AB0 "P'"
 *   insn=0x000000000024FBEC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024FBF0 string=0x000000000024FBF4 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::BoneControlledCollisionShapeComponent *__fastcall Caver::BoneControlledCollisionShapeComponent::Create(
        Caver::BoneControlledCollisionShapeComponent *this)
{
  Caver::BoneControlledCollisionShapeComponent *v1; // x19

  v1 = (Caver::BoneControlledCollisionShapeComponent *)operator new(0x200u);
  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(v1);
  return v1;
}

