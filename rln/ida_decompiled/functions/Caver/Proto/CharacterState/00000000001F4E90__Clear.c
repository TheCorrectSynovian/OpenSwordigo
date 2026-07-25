/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4E90
 * Mangled: ._ZN5Caver5Proto14CharacterState5ClearEv
 * Demangled: Caver::Proto::CharacterState::Clear(void)
 *
 * Callers: 1
 *   0x00000000002EA344  Caver::Proto::GameState::Clear(void)
 *
 * Callees: 1
 *   0x00000000002EF47C  Caver::Proto::CharacterState::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4E98 string=0x00000000001F4E9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::CharacterState::Clear(Caver::Proto::CharacterState *this)
{
  return _ZN5Caver5Proto14CharacterState5ClearEv(this);
}

