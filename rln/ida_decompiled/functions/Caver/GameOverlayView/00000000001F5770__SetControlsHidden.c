/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5770
 * Mangled: ._ZN5Caver15GameOverlayView17SetControlsHiddenEb
 * Demangled: Caver::GameOverlayView::SetControlsHidden(bool)
 *
 * Callers: 1
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *
 * Callees: 1
 *   0x00000000003D6544  Caver::GameOverlayView::SetControlsHidden(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5778 string=0x00000000001F577C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOverlayView::SetControlsHidden(Caver::GameOverlayView *this, bool a2)
{
  return _ZN5Caver15GameOverlayView17SetControlsHiddenEb(this, a2);
}

