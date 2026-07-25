/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201F20
 * Mangled: ._ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver16ProfilePanelViewEEEEEvPT_
 * Demangled: boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>(boost::shared_ptr<Caver::ProfilePanelView> *)
 *
 * Callers: 2
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003A2DB4  Caver::ProfileSelectionView::~ProfileSelectionView()
 *
 * Callees: 1
 *   0x00000000003A2F8C  boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>(boost::shared_ptr<Caver::ProfilePanelView> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201F28 string=0x0000000000201F2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>(void *a1)
{
  return _ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver16ProfilePanelViewEEEEEvPT_(a1);
}

