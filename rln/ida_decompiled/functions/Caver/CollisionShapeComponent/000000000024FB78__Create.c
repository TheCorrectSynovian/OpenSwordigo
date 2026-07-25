/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FB78
 * Mangled: _ZN5Caver23CollisionShapeComponent6CreateEv
 * Demangled: Caver::CollisionShapeComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FB04  Caver::UtilityShapeComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC1F0  Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *   0x000000000024FBB8  Caver::BoneControlledCollisionShapeComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024FB88 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FB90 string=0x00000000001FC1F0 "0'"
 *   insn=0x000000000024FBAC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024FBB0 string=0x000000000024FBB4 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::CollisionShapeComponent *__fastcall Caver::CollisionShapeComponent::Create(Caver::CollisionShapeComponent *this)
{
  Caver::CollisionShapeComponent *v1; // x19

  v1 = (Caver::CollisionShapeComponent *)operator new(0x1D0u);
  Caver::CollisionShapeComponent::CollisionShapeComponent(v1);
  return v1;
}

