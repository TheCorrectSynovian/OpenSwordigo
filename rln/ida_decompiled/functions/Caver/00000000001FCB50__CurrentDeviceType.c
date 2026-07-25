/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCB50
 * Mangled: ._ZN5Caver17CurrentDeviceTypeEv
 * Demangled: Caver::CurrentDeviceType(void)
 *
 * Callers: 7
 *   0x000000000033E14C  Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView *)
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x00000000003C8610  Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003D4C10  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callees: 1
 *   0x00000000004B2D70  Caver::CurrentDeviceType(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCB58 string=0x00000000001FCB5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CurrentDeviceType(Caver *this)
{
  return _ZN5Caver17CurrentDeviceTypeEv(this);
}

