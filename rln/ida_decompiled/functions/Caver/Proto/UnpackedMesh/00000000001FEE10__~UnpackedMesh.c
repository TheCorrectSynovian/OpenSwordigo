/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEE10
 * Mangled: ._ZN5Caver5Proto12UnpackedMeshD2Ev
 * Demangled: Caver::Proto::UnpackedMesh::~UnpackedMesh()
 *
 * Callers: 1
 *   0x000000000033CCE8  Caver::Proto::UnpackedMesh::~UnpackedMesh()
 *
 * Callees: 1
 *   0x000000000033C74C  Caver::Proto::UnpackedMesh::UnpackedMesh(Caver::Proto::UnpackedMesh const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEE18 string=0x00000000001FEE1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::UnpackedMesh::~UnpackedMesh(Caver::Proto::UnpackedMesh *this)
{
  JUMPOUT(0x33CAFC);
}

