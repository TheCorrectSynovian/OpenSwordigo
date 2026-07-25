/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE2D0
 * Mangled: ._ZN5Caver13GameSceneView17ShowItemInfoPopupERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::GameSceneView::ShowItemInfoPopup(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x000000000034F57C  Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE2D8 string=0x00000000001FE2DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameSceneView::ShowItemInfoPopup()
{
  JUMPOUT(0x34F784);
}

