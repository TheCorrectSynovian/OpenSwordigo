/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F71C0
 * Mangled: ._ZN5Caver15GameOverlayView11CancelInputEv
 * Demangled: Caver::GameOverlayView::CancelInput(void)
 *
 * Callers: 1
 *   0x000000000034FB34  Caver::GameSceneView::SetCinematicModeEnabled(bool,bool,bool)
 *
 * Callees: 1
 *   0x00000000003D64EC  Caver::GameOverlayView::CancelInput(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F71C8 string=0x00000000001F71CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOverlayView::CancelInput(Caver::GameOverlayView *this)
{
  return _ZN5Caver15GameOverlayView11CancelInputEv(this);
}

