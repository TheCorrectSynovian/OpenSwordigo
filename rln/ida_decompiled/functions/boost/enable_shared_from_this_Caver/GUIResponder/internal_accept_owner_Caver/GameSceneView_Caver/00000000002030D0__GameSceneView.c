/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002030D0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GameSceneViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameSceneView,Caver::GameSceneView>(boost::shared_ptr<Caver::GameSceneView> const*,Caver::GameSceneView *)
 *
 * Callers: 1
 *   0x0000000000364A54  boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>(Caver::GameSceneView *)
 *
 * Callees: 1
 *   0x0000000000364B60  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameSceneView,Caver::GameSceneView>(boost::shared_ptr<Caver::GameSceneView> const*,Caver::GameSceneView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002030D8 string=0x00000000002030DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameSceneView,Caver::GameSceneView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GameSceneViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

