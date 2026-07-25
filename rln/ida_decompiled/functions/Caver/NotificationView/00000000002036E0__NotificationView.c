/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002036E0
 * Mangled: ._ZN5Caver16NotificationViewC2Ev
 * Demangled: Caver::NotificationView::NotificationView(void)
 *
 * Callers: 4
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000035EB00  sub_35EB00
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x000000000042BD20  Caver::NotificationView::NotificationView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002036E8 string=0x00000000002036EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::NotificationView::NotificationView(Caver::NotificationView *this)
{
  return _ZN5Caver16NotificationViewC2Ev(this);
}

