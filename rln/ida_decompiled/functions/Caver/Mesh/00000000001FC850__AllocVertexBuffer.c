/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC850
 * Mangled: ._ZN5Caver4Mesh17AllocVertexBufferEi
 * Demangled: Caver::Mesh::AllocVertexBuffer(int)
 *
 * Callers: 2
 *   0x000000000044A508  Caver::MeshPrimitives::Cube(bool)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *
 * Callees: 1
 *   0x0000000000444AD0  Caver::Mesh::AllocVertexBuffer(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC858 string=0x00000000001FC85C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::AllocVertexBuffer(Caver::Mesh *this, int a2)
{
  return _ZN5Caver4Mesh17AllocVertexBufferEi(this, a2);
}

