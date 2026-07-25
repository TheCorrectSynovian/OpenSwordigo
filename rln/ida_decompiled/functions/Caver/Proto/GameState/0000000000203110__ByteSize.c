/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203110
 * Mangled: ._ZNK5Caver5Proto9GameState8ByteSizeEv
 * Demangled: Caver::Proto::GameState::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002EB24C  Caver::Proto::PlayerProfile::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002F0960  Caver::Proto::GameState::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203118 string=0x000000000020311C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GameState::ByteSize(Caver::Proto::GameState *this)
{
  return _ZNK5Caver5Proto9GameState8ByteSizeEv(this);
}

