/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3640
 * Mangled: ._ZN5Caver10StripeViewC2Ev
 * Demangled: Caver::StripeView::StripeView(void)
 *
 * Callers: 4
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x000000000043E760  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3648 string=0x00000000001F364C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::StripeView::StripeView(Caver::StripeView *this)
{
  JUMPOUT(0x43E9A8);
}

