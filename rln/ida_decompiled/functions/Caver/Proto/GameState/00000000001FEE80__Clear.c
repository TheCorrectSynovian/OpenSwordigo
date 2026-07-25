/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEE80
 * Mangled: ._ZN5Caver5Proto9GameState5ClearEv
 * Demangled: Caver::Proto::GameState::Clear(void)
 *
 * Callers: 1
 *   0x00000000002EA15C  Caver::Proto::PlayerProfile::Clear(void)
 *
 * Callees: 1
 *   0x00000000002EA344  Caver::Proto::GameState::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEE88 string=0x00000000001FEE8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GameState::Clear(Caver::Proto::GameState *this)
{
  return _ZN5Caver5Proto9GameState5ClearEv(this);
}

