/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6920
 * Mangled: ._ZNK5Caver5Proto12MeshMaterial8ByteSizeEv
 * Demangled: Caver::Proto::MeshMaterial::ByteSize(void)
 *
 * Callers: 1
 *   0x000000000033AC80  Caver::Proto::Mesh::ByteSize(void)
 *
 * Callees: 1
 *   0x0000000000338E1C  Caver::Proto::MeshMaterial::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6928 string=0x00000000001F692C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MeshMaterial::ByteSize(Caver::Proto::MeshMaterial *this)
{
  return _ZNK5Caver5Proto12MeshMaterial8ByteSizeEv(this);
}

