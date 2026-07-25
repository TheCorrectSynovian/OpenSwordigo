/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB030
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_11MapMenuPageES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapMenuPage,Caver::MapMenuPage>(boost::shared_ptr<Caver::MapMenuPage> const*,Caver::MapMenuPage *)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x0000000000346EB4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapMenuPage,Caver::MapMenuPage>(boost::shared_ptr<Caver::MapMenuPage> const*,Caver::MapMenuPage *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB038 string=0x00000000001FB03C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapMenuPage,Caver::MapMenuPage>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_11MapMenuPageES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

