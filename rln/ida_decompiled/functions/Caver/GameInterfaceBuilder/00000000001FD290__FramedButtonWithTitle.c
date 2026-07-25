/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD290
 * Mangled: ._ZN5Caver20GameInterfaceBuilder21FramedButtonWithTitleERKSsb
 * Demangled: Caver::GameInterfaceBuilder::FramedButtonWithTitle(std::string const&,bool)
 *
 * Callers: 9
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003A8080  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *   0x00000000003C5664  Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *
 * Callees: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD298 string=0x00000000001FD29C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameInterfaceBuilder::FramedButtonWithTitle()
{
  JUMPOUT(0x33FF98);
}

