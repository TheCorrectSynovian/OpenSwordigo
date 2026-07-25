/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200D20
 * Mangled: ._ZN5Caver4Mesh15AllocateBuffersEi
 * Demangled: Caver::Mesh::AllocateBuffers(int)
 *
 * Callers: 1
 *   0x00000000004457D4  Caver::Mesh::CreateInterleavedData(int,int,int)
 *
 * Callees: 1
 *   0x00000000004459BC  Caver::Mesh::AllocateBuffers(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200D28 string=0x0000000000200D2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::AllocateBuffers(Caver::Mesh *this, int a2)
{
  return _ZN5Caver4Mesh15AllocateBuffersEi(this, a2);
}

