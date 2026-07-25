/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9D30
 * Mangled: ._ZN5boost10shared_ptrIN5Caver16NotificationViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::NotificationView>::shared_ptr<Caver::NotificationView>(Caver::NotificationView *)
 *
 * Callers: 4
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000035EB00  sub_35EB00
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9D38 string=0x00000000001F9D3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::NotificationView>::shared_ptr<Caver::NotificationView>()
{
  JUMPOUT(0x356448);
}

