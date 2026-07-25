/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200F00
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_19AttributePointsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AttributePointsView,Caver::AttributePointsView>(boost::shared_ptr<Caver::AttributePointsView> const*,Caver::AttributePointsView *)
 *
 * Callers: 1
 *   0x0000000000400144  boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>(Caver::AttributePointsView *)
 *
 * Callees: 1
 *   0x0000000000400250  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AttributePointsView,Caver::AttributePointsView>(boost::shared_ptr<Caver::AttributePointsView> const*,Caver::AttributePointsView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200F08 string=0x0000000000200F0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AttributePointsView,Caver::AttributePointsView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_19AttributePointsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

