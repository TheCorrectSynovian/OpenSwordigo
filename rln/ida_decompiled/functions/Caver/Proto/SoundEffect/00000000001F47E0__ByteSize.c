/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F47E0
 * Mangled: ._ZNK5Caver5Proto11SoundEffect8ByteSizeEv
 * Demangled: Caver::Proto::SoundEffect::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002D8650  Caver::Proto::SoundLibrary::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002D7E58  Caver::Proto::SoundEffect::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F47E8 string=0x00000000001F47EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SoundEffect::ByteSize(Caver::Proto::SoundEffect *this)
{
  return _ZNK5Caver5Proto11SoundEffect8ByteSizeEv(this);
}

