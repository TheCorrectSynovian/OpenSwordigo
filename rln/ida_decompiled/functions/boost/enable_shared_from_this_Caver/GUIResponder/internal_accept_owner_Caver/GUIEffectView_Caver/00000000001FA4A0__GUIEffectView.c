/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA4A0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GUIEffectViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(boost::shared_ptr<Caver::GUIEffectView> const*,Caver::GUIEffectView *)
 *
 * Callers: 1
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *
 * Callees: 1
 *   0x000000000038D4E4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(boost::shared_ptr<Caver::GUIEffectView> const*,Caver::GUIEffectView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA4A8 string=0x00000000001FA4AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GUIEffectViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

