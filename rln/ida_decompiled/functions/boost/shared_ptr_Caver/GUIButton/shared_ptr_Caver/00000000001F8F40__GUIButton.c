/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8F40
 * Mangled: ._ZN5boost10shared_ptrIN5Caver9GUIButtonEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>(Caver::GUIButton *)
 *
 * Callers: 8
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041F0FC  Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::MapViewNode *)
 *   0x000000000042A9C8  Caver::NewMenuView::NewMenuView(void)
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *
 * Callees: 1
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8F48 string=0x00000000001F8F4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>()
{
  JUMPOUT(0x33F4D4);
}

