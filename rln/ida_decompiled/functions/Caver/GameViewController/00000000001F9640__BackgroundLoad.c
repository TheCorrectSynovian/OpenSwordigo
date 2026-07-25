/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9640
 * Mangled: ._ZN5Caver18GameViewController14BackgroundLoadEv
 * Demangled: Caver::GameViewController::BackgroundLoad(void)
 *
 * Callers: 1
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *
 * Callees: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9648 string=0x00000000001F964C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameViewController::BackgroundLoad(Caver::GameViewController *this)
{
  return _ZN5Caver18GameViewController14BackgroundLoadEv(this);
}

