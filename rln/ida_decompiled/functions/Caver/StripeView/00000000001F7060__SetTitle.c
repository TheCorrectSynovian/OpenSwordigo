/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7060
 * Mangled: ._ZN5Caver10StripeView8SetTitleERKSs
 * Demangled: Caver::StripeView::SetTitle(std::string const&)
 *
 * Callers: 8
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000003F3CD8  Caver::StoreViewController::Update(float)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x000000000042FA18  Caver::PortalView::SetDescription(std::string const&)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x000000000043F15C  Caver::StripeView::SetTitle(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7068 string=0x00000000001F706C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StripeView::SetTitle()
{
  return _ZN5Caver10StripeView8SetTitleERKSs();
}

