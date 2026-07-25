/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203500
 * Mangled: ._ZN5boost10shared_ptrIN5Caver11ItemOverlayEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ItemOverlay>::shared_ptr<Caver::ItemOverlay>(Caver::ItemOverlay *)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003D993C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CoinBar,Caver::CoinBar>(boost::shared_ptr<Caver::CoinBar> const*,Caver::CoinBar *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203508 string=0x000000000020350C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::ItemOverlay>::shared_ptr<Caver::ItemOverlay>()
{
  JUMPOUT(0x3D9A5C);
}

