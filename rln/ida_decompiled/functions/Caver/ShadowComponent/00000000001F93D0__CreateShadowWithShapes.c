/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F93D0
 * Mangled: ._ZN5Caver15ShadowComponent22CreateShadowWithShapesEPPNS_23CollisionShapeComponentEiPNS_10FastVectorINS_12ShadowVertexEEE
 * Demangled: Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000235A70  Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F93D8 string=0x00000000001F93DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ShadowComponent::CreateShadowWithShapes()
{
  return _ZN5Caver15ShadowComponent22CreateShadowWithShapesEPPNS_23CollisionShapeComponentEiPNS_10FastVectorINS_12ShadowVertexEEE();
}

