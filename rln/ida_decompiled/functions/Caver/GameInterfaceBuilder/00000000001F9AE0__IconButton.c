/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9AE0
 * Mangled: ._ZN5Caver20GameInterfaceBuilder10IconButtonERKN5boost13intrusive_ptrINS_7TextureEEES6_
 * Demangled: Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 10
 *   0x000000000034E1A0  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *
 * Callees: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9AE8 string=0x00000000001F9AEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameInterfaceBuilder::IconButton()
{
  return _ZN5Caver20GameInterfaceBuilder10IconButtonERKN5boost13intrusive_ptrINS_7TextureEEES6_();
}

