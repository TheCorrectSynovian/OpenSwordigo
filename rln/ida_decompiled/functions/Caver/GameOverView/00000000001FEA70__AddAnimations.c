/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEA70
 * Mangled: ._ZN5Caver12GameOverView13AddAnimationsEb
 * Demangled: Caver::GameOverView::AddAnimations(bool)
 *
 * Callers: 1
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *
 * Callees: 1
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEA78 string=0x00000000001FEA7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameOverView::AddAnimations(Caver::GameOverView *this)
{
  JUMPOUT(0x401414);
}

