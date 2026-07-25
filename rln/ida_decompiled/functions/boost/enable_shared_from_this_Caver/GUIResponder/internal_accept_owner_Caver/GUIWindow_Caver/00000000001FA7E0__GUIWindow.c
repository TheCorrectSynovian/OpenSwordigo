/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA7E0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUIWindowES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIWindow,Caver::GUIWindow>(boost::shared_ptr<Caver::GUIWindow> const*,Caver::GUIWindow *)
 *
 * Callers: 1
 *   0x0000000000211894  boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>(Caver::GUIWindow *)
 *
 * Callees: 1
 *   0x00000000002119B4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIWindow,Caver::GUIWindow>(boost::shared_ptr<Caver::GUIWindow> const*,Caver::GUIWindow *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA7E8 string=0x00000000001FA7EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIWindow,Caver::GUIWindow>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUIWindowES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

