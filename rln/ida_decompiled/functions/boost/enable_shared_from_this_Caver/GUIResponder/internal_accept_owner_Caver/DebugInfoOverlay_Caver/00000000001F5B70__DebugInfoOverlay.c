/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5B70
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16DebugInfoOverlayES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>(boost::shared_ptr<Caver::DebugInfoOverlay> const*,Caver::DebugInfoOverlay *)
 *
 * Callers: 1
 *   0x000000000035119C  boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>(Caver::DebugInfoOverlay *)
 *
 * Callees: 1
 *   0x00000000003512A8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>(boost::shared_ptr<Caver::DebugInfoOverlay> const*,Caver::DebugInfoOverlay *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5B78 string=0x00000000001F5B7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16DebugInfoOverlayES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

