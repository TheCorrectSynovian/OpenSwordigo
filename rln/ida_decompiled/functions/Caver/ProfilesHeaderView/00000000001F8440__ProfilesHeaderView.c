/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8440
 * Mangled: ._ZN5Caver18ProfilesHeaderViewC2Ev
 * Demangled: Caver::ProfilesHeaderView::ProfilesHeaderView(void)
 *
 * Callers: 1
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *
 * Callees: 1
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8448 string=0x00000000001F844C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProfilesHeaderView::ProfilesHeaderView(Caver::ProfilesHeaderView *this)
{
  JUMPOUT(0x3A4F08);
}

