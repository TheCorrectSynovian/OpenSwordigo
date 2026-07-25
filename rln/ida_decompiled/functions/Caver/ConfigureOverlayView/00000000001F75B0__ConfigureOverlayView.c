/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F75B0
 * Mangled: ._ZN5Caver20ConfigureOverlayViewC2Ev
 * Demangled: Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *
 * Callers: 1
 *   0x000000000033DE4C  Caver::ConfigureOverlayViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003C5664  Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F75B8 string=0x00000000001F75BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ConfigureOverlayView::ConfigureOverlayView(Caver::ConfigureOverlayView *this)
{
  return _ZN5Caver20ConfigureOverlayViewC2Ev(this);
}

