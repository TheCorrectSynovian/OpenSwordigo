/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F94B0
 * Mangled: ._ZN5Caver7GUIView14LayoutSubviewsEv
 * Demangled: Caver::GUIView::LayoutSubviews(void)
 *
 * Callers: 26
 *   0x000000000034EB34  Caver::GameSceneView::LayoutSubviews(void)
 *   0x00000000003721E4  Caver::SceneView::LayoutSubviews(void)
 *   0x0000000000383ADC  Caver::OfflineAchievementsView::LayoutSubviews(void)
 *   0x0000000000388640  Caver::OfflineAchievementView::LayoutSubviews(void)
 *   0x000000000038935C  Caver::BadgeCountView::BadgeCountView(void)
 *   0x000000000038B894  Caver::ChooseAgeView::LayoutSubviews(void)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003970BC  Caver::OnlineMenuView::LayoutSubviews(void)
 *   0x00000000003A8080  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003CD53C  Caver::DraggableOverlayItem::LayoutSubviews(void)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003ED584  Caver::StoreProductView::LayoutSubviews(void)
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *   0x00000000003F8230  Caver::AttributePointsView::LayoutSubviews(void)
 *   0x0000000000404520  Caver::GuidePurchaseView::LayoutSubviews(void)
 *   0x00000000004070E4  Caver::GuideToggleView::LayoutSubviews(void)
 *   0x000000000041CA50  Caver::LoadingView::LoadingView(void)
 *   0x000000000042F014  Caver::PortalView::LayoutSubviews(void)
 *   0x0000000000432A08  Caver::QuestsView::LayoutSubviews(void)
 *   0x0000000000495598  Caver::GUIButton::LayoutSubviews(void)
 *   0x000000000049D874  Caver::GUISwitch::GUISwitch(void)
 *   0x00000000004A2280  Caver::GUIWindow::LayoutSubviews(void)
 *   0x00000000004A7628  Caver::GUIEffect::~GUIEffect()
 *   0x00000000004B9BC8  Caver::GUITextFieldImpl::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x000000000049F4C0  Caver::GUIView::LayoutSubviews(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F94B8 string=0x00000000001F94BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::LayoutSubviews(Caver::GUIView *this)
{
  return _ZN5Caver7GUIView14LayoutSubviewsEv(this);
}

