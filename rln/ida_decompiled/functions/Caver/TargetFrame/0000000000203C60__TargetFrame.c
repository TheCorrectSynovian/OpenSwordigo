/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203C60
 * Mangled: ._ZN5Caver11TargetFrameC2Ev
 * Demangled: Caver::TargetFrame::TargetFrame(void)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003E2B10  Caver::TargetFrame::TargetFrame(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203C68 string=0x0000000000203C6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TargetFrame::TargetFrame(Caver::TargetFrame *this)
{
  return _ZN5Caver11TargetFrameC2Ev(this);
}

