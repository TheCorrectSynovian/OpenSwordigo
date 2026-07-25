/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002029A0
 * Mangled: ._ZNK5Caver5Proto10LevelState8ByteSizeEv
 * Demangled: Caver::Proto::LevelState::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002F0960  Caver::Proto::GameState::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002F23A8  Caver::Proto::LevelState::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002029A8 string=0x00000000002029AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::LevelState::ByteSize(Caver::Proto::LevelState *this)
{
  return _ZNK5Caver5Proto10LevelState8ByteSizeEv(this);
}

