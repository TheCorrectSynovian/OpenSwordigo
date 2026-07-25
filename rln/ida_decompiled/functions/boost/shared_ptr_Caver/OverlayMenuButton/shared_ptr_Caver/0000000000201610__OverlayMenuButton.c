/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201610
 * Mangled: ._ZN5boost10shared_ptrIN5Caver17OverlayMenuButtonEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OverlayMenuButton>::shared_ptr<Caver::OverlayMenuButton>(Caver::OverlayMenuButton *)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003D86E0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> const*,std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201618 string=0x000000000020161C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::OverlayMenuButton>::shared_ptr<Caver::OverlayMenuButton>()
{
  JUMPOUT(0x3D8848);
}

