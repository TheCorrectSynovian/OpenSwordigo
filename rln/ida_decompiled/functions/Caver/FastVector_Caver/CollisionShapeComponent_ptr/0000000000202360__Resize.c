/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202360
 * Mangled: ._ZN5Caver10FastVectorIPNS_23CollisionShapeComponentEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::CollisionShapeComponent *>::Resize(int)
 *
 * Callers: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x000000000046ACFC  Caver::FastVector<Caver::CollisionShapeComponent *>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202368 string=0x000000000020236C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<Caver::CollisionShapeComponent *>::Resize()
{
  return _ZN5Caver10FastVectorIPNS_23CollisionShapeComponentEE6ResizeEi();
}

