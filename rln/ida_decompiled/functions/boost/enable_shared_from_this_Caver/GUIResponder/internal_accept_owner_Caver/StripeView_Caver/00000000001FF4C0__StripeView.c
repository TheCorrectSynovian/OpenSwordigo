/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF4C0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_10StripeViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StripeView,Caver::StripeView>(boost::shared_ptr<Caver::StripeView> const*,Caver::StripeView *)
 *
 * Callers: 1
 *   0x00000000003EFDA4  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>(Caver::StripeView *)
 *
 * Callees: 1
 *   0x00000000003EFEB0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StripeView,Caver::StripeView>(boost::shared_ptr<Caver::StripeView> const*,Caver::StripeView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF4C8 string=0x00000000001FF4CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StripeView,Caver::StripeView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_10StripeViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

