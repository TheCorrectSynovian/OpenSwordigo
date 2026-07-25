/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203510
 * Mangled: ._ZN5Caver10GUIControl26SendActionsForControlEventENS0_5EventEj
 * Demangled: Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Callers: 20
 *   0x0000000000383DD0  Caver::OfflineAchievementsView::AnimateIn(void)
 *   0x000000000038CF88  Caver::CreditsView::AnimateIn(void)
 *   0x00000000003E6BE0  Caver::PurchaseView::AnimateIn(void)
 *   0x00000000003EF488  Caver::StoreView::AnimateIn(void)
 *   0x000000000042FA20  Caver::PortalView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x0000000000496188  Caver::GUIButton::CancelPress(void)
 *   0x00000000004961F4  Caver::GUIButton::TouchBegan(Caver::FWTouch const&)
 *   0x00000000004962DC  Caver::GUIButton::TouchMoved(Caver::FWTouch const&)
 *   0x00000000004963D8  Caver::GUIButton::TouchEnded(Caver::FWTouch const&)
 *   0x000000000049645C  Caver::GUIButton::TouchCancelled(Caver::FWTouch const&)
 *   0x000000000049D434  Caver::GUISlider::TouchBegan(Caver::FWTouch const&)
 *   0x000000000049D580  Caver::GUISlider::TouchMoved(Caver::FWTouch const&)
 *   0x000000000049D664  Caver::GUISlider::TouchEnded(Caver::FWTouch const&)
 *   0x000000000049DD14  Caver::GUISwitch::CancelPress(void)
 *   0x000000000049DD80  Caver::GUISwitch::TouchBegan(Caver::FWTouch const&)
 *   0x000000000049DE68  Caver::GUISwitch::TouchMoved(Caver::FWTouch const&)
 *   0x000000000049DF64  Caver::GUISwitch::TouchEnded(Caver::FWTouch const&)
 *   0x000000000049E014  Caver::GUISwitch::TouchCancelled(Caver::FWTouch const&)
 *   0x00000000004B9DBC  Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&)
 *   0x00000000004BA088  Caver::GUITextFieldImpl::SendValueChangedEvent(void)
 *
 * Callees: 1
 *   0x0000000000496990  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203518 string=0x000000000020351C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIControl::SendActionsForControlEvent()
{
  return _ZN5Caver10GUIControl26SendActionsForControlEventENS0_5EventEj();
}

