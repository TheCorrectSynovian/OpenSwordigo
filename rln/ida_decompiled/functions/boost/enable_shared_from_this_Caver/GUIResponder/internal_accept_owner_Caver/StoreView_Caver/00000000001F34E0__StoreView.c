/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F34E0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9StoreViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreView,Caver::StoreView>(boost::shared_ptr<Caver::StoreView> const*,Caver::StoreView *)
 *
 * Callers: 1
 *   0x00000000003F5220  boost::shared_ptr<Caver::StoreView>::shared_ptr<Caver::StoreView>(Caver::StoreView *)
 *
 * Callees: 1
 *   0x00000000003F532C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreView,Caver::StoreView>(boost::shared_ptr<Caver::StoreView> const*,Caver::StoreView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F34E8 string=0x00000000001F34EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreView,Caver::StoreView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9StoreViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

