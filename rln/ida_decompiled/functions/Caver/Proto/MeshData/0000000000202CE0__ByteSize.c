/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202CE0
 * Mangled: ._ZNK5Caver5Proto8MeshData8ByteSizeEv
 * Demangled: Caver::Proto::MeshData::ByteSize(void)
 *
 * Callers: 1
 *   0x000000000033AC80  Caver::Proto::Mesh::ByteSize(void)
 *
 * Callees: 1
 *   0x0000000000338084  Caver::Proto::MeshData::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202CE8 string=0x0000000000202CEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MeshData::ByteSize(Caver::Proto::MeshData *this)
{
  return _ZNK5Caver5Proto8MeshData8ByteSizeEv(this);
}

