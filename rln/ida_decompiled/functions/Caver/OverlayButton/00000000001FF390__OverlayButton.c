/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF390
 * Mangled: ._ZN5Caver13OverlayButtonC2Ev_0
 * Demangled: Caver::OverlayButton::OverlayButton(void)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003E04B4  Caver::OverlayButton::OverlayButton(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF398 string=0x00000000001FF39C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayButton::OverlayButton(Caver::OverlayButton *this)
{
  return _ZN5Caver13OverlayButtonC2Ev(this);
}

