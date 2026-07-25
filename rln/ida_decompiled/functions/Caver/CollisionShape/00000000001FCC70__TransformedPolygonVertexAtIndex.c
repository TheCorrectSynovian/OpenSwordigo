/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCC70
 * Mangled: ._ZNK5Caver14CollisionShape31TransformedPolygonVertexAtIndexEi
 * Demangled: Caver::CollisionShape::TransformedPolygonVertexAtIndex(int)
 *
 * Callers: 1
 *   0x0000000000235A70  Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Callees: 1
 *   0x0000000000217780  Caver::CollisionShape::TransformedPolygonVertexAtIndex(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FCC74 string=0x0000000000217780 "\t"
 *   insn=0x00000000001FCC78 string=0x00000000001FCC7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShape::TransformedPolygonVertexAtIndex(Caver::CollisionShape *this, int a2)
{
  return _ZNK5Caver14CollisionShape31TransformedPolygonVertexAtIndexEi(this, a2);
}

