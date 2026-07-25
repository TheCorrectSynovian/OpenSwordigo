/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203640
 * Mangled: ._ZN5Caver22GameOverViewController11ShowAdMaybeEv
 * Demangled: Caver::GameOverViewController::ShowAdMaybe(void)
 *
 * Callers: 2
 *   0x0000000000347EA4  Caver::GameOverViewController::Update(float)
 *   0x0000000000347EFC  Caver::GameOverViewController::ShowAdMaybe(void)
 *
 * Callees: 1
 *   0x0000000000347EFC  Caver::GameOverViewController::ShowAdMaybe(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203648 string=0x000000000020364C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOverViewController::ShowAdMaybe(Caver::GameOverViewController *this)
{
  return _ZN5Caver22GameOverViewController11ShowAdMaybeEv(this);
}

