/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F35D0
 * Mangled: ._ZN5Caver13GameSceneView16ShowNotificationERKN5boost10shared_ptrINS_16NotificationViewEEE
 * Demangled: Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *
 * Callers: 4
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000035EB00  sub_35EB00
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x000000000034F57C  Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F35D8 string=0x00000000001F35DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameSceneView::ShowNotification()
{
  return _ZN5Caver13GameSceneView16ShowNotificationERKN5boost10shared_ptrINS_16NotificationViewEEE();
}

