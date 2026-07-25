/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200590
 * Mangled: ._ZN5Caver5Proto23CollisionShapeComponent16default_instanceEv
 * Demangled: Caver::Proto::CollisionShapeComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000217DC4  Caver::CollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9C50  Caver::Proto::CollisionShapeComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200598 string=0x000000000020059C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::CollisionShapeComponent::default_instance(Caver::Proto::CollisionShapeComponent *this)
{
  return _ZN5Caver5Proto23CollisionShapeComponent16default_instanceEv(this);
}

