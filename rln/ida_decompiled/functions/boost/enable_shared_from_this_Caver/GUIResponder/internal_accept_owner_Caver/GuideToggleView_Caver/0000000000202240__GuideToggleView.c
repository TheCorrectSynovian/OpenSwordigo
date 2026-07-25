/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202240
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_15GuideToggleViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuideToggleView,Caver::GuideToggleView>(boost::shared_ptr<Caver::GuideToggleView> const*,Caver::GuideToggleView *)
 *
 * Callers: 1
 *   0x0000000000346EB4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapMenuPage,Caver::MapMenuPage>(boost::shared_ptr<Caver::MapMenuPage> const*,Caver::MapMenuPage *)
 *
 * Callees: 1
 *   0x00000000003470E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuideToggleView,Caver::GuideToggleView>(boost::shared_ptr<Caver::GuideToggleView> const*,Caver::GuideToggleView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202248 string=0x000000000020224C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuideToggleView,Caver::GuideToggleView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_15GuideToggleViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

