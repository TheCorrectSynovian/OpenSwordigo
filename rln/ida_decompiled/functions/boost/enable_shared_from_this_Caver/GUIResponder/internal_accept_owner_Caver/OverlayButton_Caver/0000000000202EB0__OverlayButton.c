/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202EB0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13OverlayButtonES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayButton,Caver::OverlayButton>(boost::shared_ptr<Caver::OverlayButton> const*,Caver::OverlayButton *)
 *
 * Callers: 1
 *   0x00000000003D8954  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayMenuButton,Caver::OverlayMenuButton>(boost::shared_ptr<Caver::OverlayMenuButton> const*,Caver::OverlayMenuButton *)
 *
 * Callees: 1
 *   0x00000000003D8B80  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayButton,Caver::OverlayButton>(boost::shared_ptr<Caver::OverlayButton> const*,Caver::OverlayButton *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202EB8 string=0x0000000000202EBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayButton,Caver::OverlayButton>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13OverlayButtonES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

