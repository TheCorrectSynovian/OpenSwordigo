/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F94C0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver7MapViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>(Caver::MapView *)
 *
 * Callers: 3
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x00000000004200C0  boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>(Caver::MapView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F94C8 string=0x00000000001F94CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>()
{
  return _ZN5boost10shared_ptrIN5Caver7MapViewEEC2IS2_EEPT_();
}

