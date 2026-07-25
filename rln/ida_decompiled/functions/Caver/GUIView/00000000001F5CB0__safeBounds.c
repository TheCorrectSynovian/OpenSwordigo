/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5CB0
 * Mangled: ._ZNK5Caver7GUIView10safeBoundsEv
 * Demangled: Caver::GUIView::safeBounds(void)
 *
 * Callers: 19
 *   0x000000000034EB34  Caver::GameSceneView::LayoutSubviews(void)
 *   0x000000000034EC74  Caver::GUIView::safeBounds(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000393EE8  Caver::MainMenuView::UpdatePrivacyButtonFrameLocation(void)
 *   0x0000000000393F74  Caver::MainMenuView::AnimateButtonsIn(float)
 *   0x00000000003970BC  Caver::OnlineMenuView::LayoutSubviews(void)
 *   0x00000000003D6A38  Caver::GameOverlayView::LayoutSubviews(void)
 *   0x00000000003D74B4  Caver::GameOverlayView::LayoutBoundsForSubview(std::string const&)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x000000000042F014  Caver::PortalView::LayoutSubviews(void)
 *   0x0000000000432A08  Caver::QuestsView::LayoutSubviews(void)
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *   0x000000000043D058  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x0000000000441904  Caver::TabbedMenuView::UpdateContentLayout(void)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000034EC74  Caver::GUIView::safeBounds(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5CB8 string=0x00000000001F5CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::safeBounds(Caver::GUIView *this)
{
  return _ZNK5Caver7GUIView10safeBoundsEv(this);
}

