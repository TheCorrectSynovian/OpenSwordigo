/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9BA0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16StoreProductViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreProductView,Caver::StoreProductView>(boost::shared_ptr<Caver::StoreProductView> const*,Caver::StoreProductView *)
 *
 * Callers: 1
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *
 * Callees: 1
 *   0x00000000003EFFF4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreProductView,Caver::StoreProductView>(boost::shared_ptr<Caver::StoreProductView> const*,Caver::StoreProductView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9BA8 string=0x00000000001F9BAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreProductView,Caver::StoreProductView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16StoreProductViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

