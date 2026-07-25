/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5590
 * Mangled: ._ZN5Caver5Proto37BoneControlledCollisionShapeComponent16default_instanceEv
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000213F00  Caver::BoneControlledCollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9D0C  Caver::Proto::BoneControlledCollisionShapeComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5598 string=0x00000000001F559C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::default_instance(
        Caver::Proto::BoneControlledCollisionShapeComponent *this)
{
  return _ZN5Caver5Proto37BoneControlledCollisionShapeComponent16default_instanceEv(this);
}

