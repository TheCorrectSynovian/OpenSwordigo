/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201D00
 * Mangled: ._ZN5Caver17ItemInfoPopupView12InitWithItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::ItemInfoPopupView::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x000000000034F57C  Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *
 * Callees: 1
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201D08 string=0x0000000000201D0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ItemInfoPopupView::InitWithItem()
{
  JUMPOUT(0x415E28);
}

