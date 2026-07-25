/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEE50
 * Mangled: ._ZN5Caver5Proto4Mesh10SharedDtorEv
 * Demangled: Caver::Proto::Mesh::SharedDtor(void)
 *
 * Callers: 1
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *
 * Callees: 1
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEE58 string=0x00000000001FEE5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Mesh::SharedDtor(Caver::Proto::Mesh *this)
{
  JUMPOUT(0x339894);
}

