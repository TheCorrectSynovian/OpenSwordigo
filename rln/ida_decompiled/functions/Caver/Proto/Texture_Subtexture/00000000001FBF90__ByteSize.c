/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBF90
 * Mangled: ._ZNK5Caver5Proto18Texture_Subtexture8ByteSizeEv
 * Demangled: Caver::Proto::Texture_Subtexture::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002D3240  Caver::Proto::Texture::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002D1B08  Caver::Proto::Texture_Subtexture::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBF98 string=0x00000000001FBF9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Texture_Subtexture::ByteSize(Caver::Proto::Texture_Subtexture *this)
{
  return _ZNK5Caver5Proto18Texture_Subtexture8ByteSizeEv(this);
}

