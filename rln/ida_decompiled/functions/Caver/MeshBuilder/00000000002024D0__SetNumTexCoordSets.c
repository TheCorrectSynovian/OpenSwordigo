/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002024D0
 * Mangled: ._ZN5Caver11MeshBuilder18SetNumTexCoordSetsEi
 * Demangled: Caver::MeshBuilder::SetNumTexCoordSets(int)
 *
 * Callers: 1
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *
 * Callees: 1
 *   0x0000000000446870  Caver::MeshBuilder::SetNumTexCoordSets(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002024D8 string=0x00000000002024DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshBuilder::SetNumTexCoordSets(Caver::MeshBuilder *this, int a2)
{
  return _ZN5Caver11MeshBuilder18SetNumTexCoordSetsEi(this, a2);
}

