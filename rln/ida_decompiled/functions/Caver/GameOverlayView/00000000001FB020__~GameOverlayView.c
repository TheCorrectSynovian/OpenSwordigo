/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB020
 * Mangled: ._ZN5Caver15GameOverlayViewD2Ev
 * Demangled: Caver::GameOverlayView::~GameOverlayView()
 *
 * Callers: 1
 *   0x00000000003D4C10  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callees: 1
 *   0x00000000003D4C10  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB028 string=0x00000000001FB02C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameOverlayView::~GameOverlayView(Caver::GameOverlayView *this)
{
  JUMPOUT(0x3D576C);
}

