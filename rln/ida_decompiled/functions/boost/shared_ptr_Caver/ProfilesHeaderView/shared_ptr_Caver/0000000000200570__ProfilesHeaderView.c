/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200570
 * Mangled: ._ZN5boost10shared_ptrIN5Caver18ProfilesHeaderViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ProfilesHeaderView>::shared_ptr<Caver::ProfilesHeaderView>(Caver::ProfilesHeaderView *)
 *
 * Callers: 1
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *
 * Callees: 1
 *   0x00000000003A4454  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilePanelView,Caver::ProfilePanelView>(boost::shared_ptr<Caver::ProfilePanelView> const*,Caver::ProfilePanelView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200578 string=0x000000000020057C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::ProfilesHeaderView>::shared_ptr<Caver::ProfilesHeaderView>()
{
  JUMPOUT(0x3A4574);
}

