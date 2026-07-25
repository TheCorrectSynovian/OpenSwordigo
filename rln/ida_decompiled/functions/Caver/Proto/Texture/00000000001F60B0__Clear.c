/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F60B0
 * Mangled: ._ZN5Caver5Proto7Texture5ClearEv
 * Demangled: Caver::Proto::Texture::Clear(void)
 *
 * Callers: 2
 *   0x00000000002D4920  Caver::Proto::Font::Clear(void)
 *   0x000000000033879C  Caver::Proto::MeshMaterial::Clear(void)
 *
 * Callees: 1
 *   0x00000000002D2BBC  Caver::Proto::Texture::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F60B8 string=0x00000000001F60BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Texture::Clear(Caver::Proto::Texture *this)
{
  return _ZN5Caver5Proto7Texture5ClearEv(this);
}

