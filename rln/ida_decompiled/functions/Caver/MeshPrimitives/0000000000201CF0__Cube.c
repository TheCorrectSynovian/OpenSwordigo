/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201CF0
 * Mangled: ._ZN5Caver14MeshPrimitives4CubeEb
 * Demangled: Caver::MeshPrimitives::Cube(bool)
 *
 * Callers: 1
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000044A508  Caver::MeshPrimitives::Cube(bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201CF8 string=0x0000000000201CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshPrimitives::Cube(Caver::MeshPrimitives *this, bool a2)
{
  return _ZN5Caver14MeshPrimitives4CubeEb(this, a2);
}

