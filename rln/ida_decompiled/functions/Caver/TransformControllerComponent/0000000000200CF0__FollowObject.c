/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200CF0
 * Mangled: ._ZN5Caver28TransformControllerComponent12FollowObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::TransformControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callees: 1
 *   0x00000000002411E0  Caver::TransformControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200CF8 string=0x0000000000200CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::TransformControllerComponent::FollowObject()
{
  return _ZN5Caver28TransformControllerComponent12FollowObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

