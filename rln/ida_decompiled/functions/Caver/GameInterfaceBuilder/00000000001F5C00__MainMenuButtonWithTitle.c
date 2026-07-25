/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5C00
 * Mangled: ._ZN5Caver20GameInterfaceBuilder23MainMenuButtonWithTitleERKSs
 * Demangled: Caver::GameInterfaceBuilder::MainMenuButtonWithTitle(std::string const&)
 *
 * Callers: 2
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *
 * Callees: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5C08 string=0x00000000001F5C0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameInterfaceBuilder::MainMenuButtonWithTitle()
{
  JUMPOUT(0x340504);
}

