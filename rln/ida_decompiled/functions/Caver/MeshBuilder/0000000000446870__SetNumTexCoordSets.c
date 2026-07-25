/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000446870
 * Mangled: _ZN5Caver11MeshBuilder18SetNumTexCoordSetsEi
 * Demangled: Caver::MeshBuilder::SetNumTexCoordSets(int)
 *
 * Callers: 1
 *   0x00000000002024D0  Caver::MeshBuilder::SetNumTexCoordSets(int)
 *
 * Callees: 1
 *   0x00000000001FF070  Caver::Mesh::SetNumTexCoordSets(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshBuilder::SetNumTexCoordSets(Caver::Mesh **this, int a2)
{
  return Caver::Mesh::SetNumTexCoordSets(*this, a2);
}

