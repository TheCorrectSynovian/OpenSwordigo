/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD990
 * Mangled: ._ZNK5Caver5Proto4Mesh8ByteSizeEv
 * Demangled: Caver::Proto::Mesh::ByteSize(void)
 *
 * Callers: 1
 *   0x000000000030837C  Caver::Proto::GroundMeshComponent::ByteSize(void)
 *
 * Callees: 1
 *   0x000000000033AC80  Caver::Proto::Mesh::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD998 string=0x00000000001FD99C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Mesh::ByteSize(Caver::Proto::Mesh *this)
{
  return _ZNK5Caver5Proto4Mesh8ByteSizeEv(this);
}

