/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200BB0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7MapViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *
 * Callers: 1
 *   0x00000000004200C0  boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>(Caver::MapView *)
 *
 * Callees: 1
 *   0x00000000004201CC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200BB8 string=0x0000000000200BBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7MapViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

