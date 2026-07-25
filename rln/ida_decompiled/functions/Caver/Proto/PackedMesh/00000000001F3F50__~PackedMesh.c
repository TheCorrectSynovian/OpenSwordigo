/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3F50
 * Mangled: ._ZN5Caver5Proto10PackedMeshD2Ev
 * Demangled: Caver::Proto::PackedMesh::~PackedMesh()
 *
 * Callers: 1
 *   0x000000000033B97C  Caver::Proto::PackedMesh::~PackedMesh()
 *
 * Callees: 1
 *   0x000000000033B3E0  Caver::Proto::PackedMesh::PackedMesh(Caver::Proto::PackedMesh const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3F58 string=0x00000000001F3F5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PackedMesh::~PackedMesh(Caver::Proto::PackedMesh *this)
{
  JUMPOUT(0x33B790);
}

