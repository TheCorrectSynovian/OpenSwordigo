/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6250
 * Mangled: ._ZN5Caver4Mesh21CreateInterleavedDataEiii
 * Demangled: Caver::Mesh::CreateInterleavedData(int,int,int)
 *
 * Callers: 2
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x0000000000447094  Caver::MeshBuilder::GenerateMesh(void)
 *
 * Callees: 1
 *   0x00000000004457D4  Caver::Mesh::CreateInterleavedData(int,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6258 string=0x00000000001F625C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::CreateInterleavedData(Caver::Mesh *this, int a2, int a3, int a4)
{
  return _ZN5Caver4Mesh21CreateInterleavedDataEiii(this, a2, a3, a4);
}

