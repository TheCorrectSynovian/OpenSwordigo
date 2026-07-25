/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD600
 * Mangled: ._ZN5Caver4Mesh16AllocIndexBufferEi
 * Demangled: Caver::Mesh::AllocIndexBuffer(int)
 *
 * Callers: 2
 *   0x000000000044A508  Caver::MeshPrimitives::Cube(bool)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *
 * Callees: 1
 *   0x0000000000444A84  Caver::Mesh::AllocIndexBuffer(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD608 string=0x00000000001FD60C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::AllocIndexBuffer(Caver::Mesh *this, int a2)
{
  return _ZN5Caver4Mesh16AllocIndexBufferEi(this, a2);
}

