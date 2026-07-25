/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7780
 * Mangled: ._ZN5Caver17OverlayMenuButtonC2Ev
 * Demangled: Caver::OverlayMenuButton::OverlayMenuButton(void)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003E0A34  Caver::OverlayMenuButton::OverlayMenuButton(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7788 string=0x00000000001F778C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayMenuButton::OverlayMenuButton(Caver::OverlayMenuButton *this)
{
  return _ZN5Caver17OverlayMenuButtonC2Ev(this);
}

