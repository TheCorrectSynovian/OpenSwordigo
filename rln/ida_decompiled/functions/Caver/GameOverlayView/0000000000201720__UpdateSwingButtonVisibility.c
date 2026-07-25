/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201720
 * Mangled: ._ZN5Caver15GameOverlayView27UpdateSwingButtonVisibilityEv
 * Demangled: Caver::GameOverlayView::UpdateSwingButtonVisibility(void)
 *
 * Callers: 1
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003D4B44  Caver::GameOverlayView::UpdateSwingButtonVisibility(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201728 string=0x000000000020172C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOverlayView::UpdateSwingButtonVisibility(Caver::GameOverlayView *this)
{
  return _ZN5Caver15GameOverlayView27UpdateSwingButtonVisibilityEv(this);
}

