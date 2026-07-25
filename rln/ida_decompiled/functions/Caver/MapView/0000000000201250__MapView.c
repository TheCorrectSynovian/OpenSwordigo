/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201250
 * Mangled: ._ZN5Caver7MapViewC2Ev
 * Demangled: Caver::MapView::MapView(void)
 *
 * Callers: 3
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x000000000042080C  Caver::MapView::MapView(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201258 string=0x000000000020125C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::MapView(Caver::MapView *this)
{
  return _ZN5Caver7MapViewC2Ev(this);
}

