/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002000C0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12PurchaseViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PurchaseView,Caver::PurchaseView>(boost::shared_ptr<Caver::PurchaseView> const*,Caver::PurchaseView *)
 *
 * Callers: 1
 *   0x00000000003EBB20  boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>(Caver::PurchaseView *)
 *
 * Callees: 1
 *   0x00000000003EBC2C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PurchaseView,Caver::PurchaseView>(boost::shared_ptr<Caver::PurchaseView> const*,Caver::PurchaseView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002000C8 string=0x00000000002000CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PurchaseView,Caver::PurchaseView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12PurchaseViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

