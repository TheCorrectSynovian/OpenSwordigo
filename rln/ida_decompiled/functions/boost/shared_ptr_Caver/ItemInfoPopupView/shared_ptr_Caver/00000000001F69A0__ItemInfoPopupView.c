/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F69A0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver17ItemInfoPopupViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ItemInfoPopupView>::shared_ptr<Caver::ItemInfoPopupView>(Caver::ItemInfoPopupView *)
 *
 * Callers: 1
 *   0x000000000034F57C  Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *
 * Callees: 1
 *   0x0000000000350BB0  boost::shared_ptr<Caver::ItemInfoPopupView>::shared_ptr<Caver::ItemInfoPopupView>(Caver::ItemInfoPopupView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F69A8 string=0x00000000001F69AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::ItemInfoPopupView>::shared_ptr<Caver::ItemInfoPopupView>()
{
  return _ZN5boost10shared_ptrIN5Caver17ItemInfoPopupViewEEC2IS2_EEPT_();
}

