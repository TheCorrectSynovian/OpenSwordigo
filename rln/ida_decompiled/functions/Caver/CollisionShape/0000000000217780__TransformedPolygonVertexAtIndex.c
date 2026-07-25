/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000217780
 * Mangled: _ZNK5Caver14CollisionShape31TransformedPolygonVertexAtIndexEi
 * Demangled: Caver::CollisionShape::TransformedPolygonVertexAtIndex(int)
 *
 * Callers: 1
 *   0x00000000001FCC70  Caver::CollisionShape::TransformedPolygonVertexAtIndex(int)
 *
 * Callees: 1
 *   0x00000000001FE880  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 3
 *   insn=0x0000000000217784 string=0x0000000000217788 ")"
 *   insn=0x0000000000217788 string=0x000000000021778C ")"
 *   insn=0x0000000000217794 string=0x0000000000217798 ":"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShape::TransformedPolygonVertexAtIndex(Caver::CollisionShape *this, int a2)
{
  return Caver::Vector2::Transformed(
           (Caver::Vector2 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL * a2),
           (Caver::CollisionShape *)((char *)this + 24),
           *((float *)this + 8),
           *((float *)this + 9));
}

