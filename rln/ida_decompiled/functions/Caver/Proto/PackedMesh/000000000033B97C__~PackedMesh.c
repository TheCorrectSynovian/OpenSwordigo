/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B97C
 * Mangled: _ZN5Caver5Proto10PackedMeshD0Ev
 * Demangled: Caver::Proto::PackedMesh::~PackedMesh()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F3F50  Caver::Proto::PackedMesh::~PackedMesh()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000033B9B4  Caver::Proto::PackedMesh::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000033B988 string=0x000000000033B98C "q"
 *   insn=0x000000000033B98C string=0x00000000001F3F50 "P'"
 *   insn=0x000000000033B998 string=0x000000000033B99C "E"
 *   insn=0x000000000033B99C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000033B9A4 string=0x000000000033B9A8 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PackedMesh::~PackedMesh(Caver::Proto::PackedMesh *this)
{
  Caver::Proto::PackedMesh::~PackedMesh(this);
  operator delete(this);
}

