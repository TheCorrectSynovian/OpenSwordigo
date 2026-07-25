/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA9C0
 * Mangled: ._ZN5Caver15GameOverlayView22ButtonHighlightChangedEPvPNS_8GUIEventE
 * Demangled: Caver::GameOverlayView::ButtonHighlightChanged(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x00000000003D7C60  Caver::GameOverlayView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA9C4 string=0x00000000003D3C58 "\n"
 *   insn=0x00000000001FA9C8 string=0x00000000001FA9CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameOverlayView::ButtonHighlightChanged()
{
  JUMPOUT(0x3D3C58);
}

