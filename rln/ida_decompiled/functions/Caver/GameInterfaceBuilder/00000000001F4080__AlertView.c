/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4080
 * Mangled: ._ZN5Caver20GameInterfaceBuilder9AlertViewERKSsS2_iPS1_i
 * Demangled: Caver::GameInterfaceBuilder::AlertView(std::string const&,std::string const&,int,std::string const*,int)
 *
 * Callers: 10
 *   0x0000000000365DF0  Caver::GuidePurchaseViewController::ProductRequestCompletion(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *   0x00000000003C6014  Caver::ConfigureOverlayView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003EA940  Caver::PurchaseViewController::ProductRequestCompletion(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x00000000003EB2F4  Caver::PurchaseViewController::PurchaseCompletion(std::string const&,bool,std::string const&)
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000003F4210  Caver::StoreViewController::RestoreCompletion(std::vector<std::string,std::allocator<std::string>> const&,std::string const&)
 *
 * Callees: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4088 string=0x00000000001F408C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameInterfaceBuilder::AlertView()
{
  JUMPOUT(0x3408E0);
}

