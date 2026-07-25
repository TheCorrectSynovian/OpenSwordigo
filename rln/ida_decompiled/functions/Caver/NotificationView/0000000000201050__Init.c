/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201050
 * Mangled: ._ZN5Caver16NotificationView4InitERKN5boost13intrusive_ptrINS_7TextureEEERKSs
 * Demangled: Caver::NotificationView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&)
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
 *   insn=0x0000000000201058 string=0x000000000020105C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::NotificationView::Init()
{
  JUMPOUT(0x42BD88);
}

