/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215454
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent19ImplementsInterfaceEl
 * Demangled: Caver::BoneControlledCollisionShapeComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000215A84  Caver::BoneControlledCollisionShapeComponent::Interface(void)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x0000000000215A9C  Caver::ShapeComponent::Interface(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000215454 string=0x0000000000215458 "\tA"
 *   insn=0x0000000000215458 string=0x000000000021545C "?"
 *   insn=0x000000000021545C string=0x0000000000215460 "a"
 *   insn=0x000000000021546C string=0x0000000000215470 ""
 *   insn=0x0000000000215474 string=0x0000000000215478 ")!D"
 *   insn=0x0000000000215478 string=0x000000000021547C "?"
 *   insn=0x0000000000215480 string=0x0000000000215484 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::ImplementsInterface(
        Caver::BoneControlledCollisionShapeComponent *this,
        __int64 (__fastcall *a2)(Caver::BoneControlledCollisionShapeComponent *__hidden this))
{
  if ( a2 == Caver::BoneControlledCollisionShapeComponent::Interface )
    return 1;
  else
    return (a2 == Caver::CollisionShapeComponent::Interface) | (unsigned int)(a2 == Caver::ShapeComponent::Interface);
}

