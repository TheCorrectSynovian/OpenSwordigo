/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA710
 * Mangled: ._ZN5Caver15GameOverlayView17SetShowsUseButtonEb
 * Demangled: Caver::GameOverlayView::SetShowsUseButton(bool)
 *
 * Callers: 1
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *
 * Callees: 1
 *   0x00000000003D685C  Caver::GameOverlayView::SetShowsUseButton(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA718 string=0x00000000001FA71C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOverlayView::SetShowsUseButton(Caver::GameOverlayView *this, bool a2)
{
  return _ZN5Caver15GameOverlayView17SetShowsUseButtonEb(this, a2);
}

