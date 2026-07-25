/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200370
 * Mangled: ._ZN5Caver7Texture6UnloadEv
 * Demangled: Caver::Texture::Unload(void)
 *
 * Callers: 1
 *   0x00000000004CC06C  Caver::Texture::Reload(bool)
 *
 * Callees: 1
 *   0x00000000004CBFD8  Caver::Texture::Unload(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200378 string=0x000000000020037C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::Unload(Caver::Texture *this)
{
  return _ZN5Caver7Texture6UnloadEv(this);
}

