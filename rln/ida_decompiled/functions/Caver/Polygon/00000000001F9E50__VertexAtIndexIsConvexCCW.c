/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9E50
 * Mangled: ._ZNK5Caver7Polygon24VertexAtIndexIsConvexCCWEi
 * Demangled: Caver::Polygon::VertexAtIndexIsConvexCCW(int)
 *
 * Callers: 1
 *   0x00000000002BB010  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *
 * Callees: 1
 *   0x00000000004B04A0  Caver::Polygon::VertexAtIndexIsConvexCCW(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9E54 string=0x00000000004B04A0 "?"
 *   insn=0x00000000001F9E58 string=0x00000000001F9E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Polygon::VertexAtIndexIsConvexCCW(Caver::Polygon *this, int a2)
{
  return _ZNK5Caver7Polygon24VertexAtIndexIsConvexCCWEi(this, a2);
}

