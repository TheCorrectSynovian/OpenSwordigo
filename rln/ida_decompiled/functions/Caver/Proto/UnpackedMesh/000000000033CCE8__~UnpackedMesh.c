/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033CCE8
 * Mangled: _ZN5Caver5Proto12UnpackedMeshD0Ev
 * Demangled: Caver::Proto::UnpackedMesh::~UnpackedMesh()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE10  Caver::Proto::UnpackedMesh::~UnpackedMesh()
 *   0x000000000033CD20  Caver::Proto::UnpackedMesh::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000033CCF4 string=0x000000000033CCF8 "F"
 *   insn=0x000000000033CD04 string=0x000000000033CD08 "j"
 *   insn=0x000000000033CD08 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000033CD10 string=0x000000000033CD14 "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::UnpackedMesh::~UnpackedMesh(Caver::Proto::UnpackedMesh *this)
{
  Caver::Proto::UnpackedMesh::~UnpackedMesh(this);
  operator delete(this);
}

