/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7990
 * Mangled: ._ZN5Caver12GameOverViewC2Ev
 * Demangled: Caver::GameOverView::GameOverView(void)
 *
 * Callers: 1
 *   0x0000000000347C68  Caver::GameOverViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7998 string=0x00000000001F799C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOverView::GameOverView(Caver::GameOverView *this)
{
  return _ZN5Caver12GameOverViewC2Ev(this);
}

