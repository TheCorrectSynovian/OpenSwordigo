/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB400
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9SceneViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneView,Caver::SceneView>(boost::shared_ptr<Caver::SceneView> const*,Caver::SceneView *)
 *
 * Callers: 1
 *   0x000000000038D294  boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>(Caver::SceneView *)
 *
 * Callees: 1
 *   0x000000000038D3A0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneView,Caver::SceneView>(boost::shared_ptr<Caver::SceneView> const*,Caver::SceneView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB408 string=0x00000000001FB40C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneView,Caver::SceneView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9SceneViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

