/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA200
 * Mangled: ._ZNK5Caver5Proto7Texture8ByteSizeEv
 * Demangled: Caver::Proto::Texture::ByteSize(void)
 *
 * Callers: 3
 *   0x00000000002D5124  Caver::Proto::Font::ByteSize(void)
 *   0x00000000002FDBD4  Caver::Proto::ObjectLibrary::ByteSize(void)
 *   0x0000000000338E1C  Caver::Proto::MeshMaterial::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002D3240  Caver::Proto::Texture::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA208 string=0x00000000001FA20C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Texture::ByteSize(Caver::Proto::Texture *this)
{
  return _ZNK5Caver5Proto7Texture8ByteSizeEv(this);
}

