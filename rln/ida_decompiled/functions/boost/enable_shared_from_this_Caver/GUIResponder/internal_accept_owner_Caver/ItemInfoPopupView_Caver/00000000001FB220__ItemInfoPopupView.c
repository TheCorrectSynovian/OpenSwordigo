/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB220
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_17ItemInfoPopupViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoPopupView,Caver::ItemInfoPopupView>(boost::shared_ptr<Caver::ItemInfoPopupView> const*,Caver::ItemInfoPopupView *)
 *
 * Callers: 1
 *   0x0000000000350BB0  boost::shared_ptr<Caver::ItemInfoPopupView>::shared_ptr<Caver::ItemInfoPopupView>(Caver::ItemInfoPopupView *)
 *
 * Callees: 1
 *   0x0000000000350CBC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoPopupView,Caver::ItemInfoPopupView>(boost::shared_ptr<Caver::ItemInfoPopupView> const*,Caver::ItemInfoPopupView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB228 string=0x00000000001FB22C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoPopupView,Caver::ItemInfoPopupView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_17ItemInfoPopupViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

