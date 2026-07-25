/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F46D0
 * Mangled: ._ZN5Caver5Proto4MeshD2Ev
 * Demangled: Caver::Proto::Mesh::~Mesh()
 *
 * Callers: 1
 *   0x0000000000339A94  Caver::Proto::Mesh::~Mesh()
 *
 * Callees: 1
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F46D8 string=0x00000000001F46DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Mesh::~Mesh(Caver::Proto::Mesh *this)
{
  JUMPOUT(0x33978C);
}

