/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3EE0
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver9GUIButtonEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIButton>*,std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>>,boost::shared_ptr<Caver::GUIButton> const&)
 *
 * Callers: 6
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *   0x000000000042A9C8  Caver::NewMenuView::NewMenuView(void)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x0000000000490A78  Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *
 * Callees: 1
 *   0x00000000003958B0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>(boost::shared_ptr<Caver::BadgeCountView> const*,Caver::BadgeCountView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3EE8 string=0x00000000001F3EEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::GUIButton>>::_M_insert_aux()
{
  JUMPOUT(0x3959D0);
}

