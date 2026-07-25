/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF070
 * Mangled: ._ZN5Caver4Mesh18SetNumTexCoordSetsEi
 * Demangled: Caver::Mesh::SetNumTexCoordSets(int)
 *
 * Callers: 4
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x000000000044604C  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *   0x0000000000446870  Caver::MeshBuilder::SetNumTexCoordSets(int)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *
 * Callees: 1
 *   0x0000000000444B1C  Caver::Mesh::SetNumTexCoordSets(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF078 string=0x00000000001FF07C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::SetNumTexCoordSets(Caver::Mesh *this, int a2)
{
  return _ZN5Caver4Mesh18SetNumTexCoordSetsEi(this, a2);
}

