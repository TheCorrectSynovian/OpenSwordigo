/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8750
 * Mangled: ._ZN5Caver7GUIView16DismissModalViewEPS0_
 * Demangled: Caver::GUIView::DismissModalView(Caver::GUIView*)
 *
 * Callers: 8
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x0000000000414ADC  Caver::ItemBuyPopupView::Dismiss(void)
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *   0x000000000041AB64  Caver::ItemInfoView::Dismiss(void)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041C798  Caver::LevelUpView::Dismiss(void)
 *   0x0000000000491B58  Caver::GUIAlertView::Dismiss(void)
 *   0x00000000004A15E0  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Callees: 1
 *   0x000000000049E55C  Caver::GUIView::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8758 string=0x00000000001F875C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIView::DismissModalView()
{
  JUMPOUT(0x49E904);
}

