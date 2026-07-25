/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD810
 * Mangled: ._ZN5boost10shared_ptrIN5Caver10StripeViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>(Caver::StripeView *)
 *
 * Callers: 4
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x00000000003EFDA4  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>(Caver::StripeView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD818 string=0x00000000001FD81C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>()
{
  return _ZN5boost10shared_ptrIN5Caver10StripeViewEEC2IS2_EEPT_();
}

