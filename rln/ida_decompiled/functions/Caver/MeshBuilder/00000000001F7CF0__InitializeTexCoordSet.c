/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7CF0
 * Mangled: ._ZN5Caver11MeshBuilder21InitializeTexCoordSetEiNS_8DataTypeEi
 * Demangled: Caver::MeshBuilder::InitializeTexCoordSet(int,Caver::DataType,int)
 *
 * Callers: 1
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *
 * Callees: 1
 *   0x0000000000446878  Caver::MeshBuilder::InitializeTexCoordSet(int,Caver::DataType,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7CF4 string=0x0000000000446878 ""
 *   insn=0x00000000001F7CF8 string=0x00000000001F7CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MeshBuilder::InitializeTexCoordSet()
{
  return _ZN5Caver11MeshBuilder21InitializeTexCoordSetEiNS_8DataTypeEi();
}

