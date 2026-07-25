/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5F10
 * Mangled: ._ZN5Caver16CollisionPairSet17RegisterCollisionEPNS_23CollisionShapeComponentES2_
 * Demangled: Caver::CollisionPairSet::RegisterCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *)
 *
 * Callers: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x0000000000215F14  std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>(Caver::Binding *,Caver::Binding *,Caver::Binding *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5F18 string=0x00000000001F5F1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::CollisionPairSet::RegisterCollision()
{
  JUMPOUT(0x21668C);
}

