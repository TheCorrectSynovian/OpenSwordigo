/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201B00
 * Mangled: ._ZN5boost10shared_ptrIN5Caver15GuideToggleViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GuideToggleView>::shared_ptr<Caver::GuideToggleView>(Caver::GuideToggleView *)
 *
 * Callers: 2
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *
 * Callees: 1
 *   0x0000000000346EB4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapMenuPage,Caver::MapMenuPage>(boost::shared_ptr<Caver::MapMenuPage> const*,Caver::MapMenuPage *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201B08 string=0x0000000000201B0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GuideToggleView>::shared_ptr<Caver::GuideToggleView>()
{
  JUMPOUT(0x346FD4);
}

