/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDD80
 * Mangled: ._ZN5Caver18GameViewController13LoadGameStateEv
 * Demangled: Caver::GameViewController::LoadGameState(void)
 *
 * Callers: 2
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x000000000036332C  sub_36332C
 *
 * Callees: 1
 *   0x0000000000351C5C  Caver::GameViewController::LoadGameState(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDD88 string=0x00000000001FDD8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameViewController::LoadGameState(Caver::GameViewController *this)
{
  return _ZN5Caver18GameViewController13LoadGameStateEv(this);
}

