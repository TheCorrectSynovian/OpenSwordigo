/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000339A94
 * Mangled: _ZN5Caver5Proto4MeshD0Ev
 * Demangled: Caver::Proto::Mesh::~Mesh()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F46D0  Caver::Proto::Mesh::~Mesh()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000339ACC  Caver::Proto::Mesh::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000339AA0 string=0x0000000000339AA4 ""
 *   insn=0x0000000000339AA4 string=0x00000000001F46D0 "P'"
 *   insn=0x0000000000339AB4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Mesh::~Mesh(Caver::Proto::Mesh *this)
{
  Caver::Proto::Mesh::~Mesh(this);
  operator delete(this);
}

