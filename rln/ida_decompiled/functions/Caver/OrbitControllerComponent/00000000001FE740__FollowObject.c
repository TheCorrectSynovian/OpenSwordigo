/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE740
 * Mangled: ._ZN5Caver24OrbitControllerComponent12FollowObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::OrbitControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000002A49F0  Caver::OrbitControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE748 string=0x00000000001FE74C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::OrbitControllerComponent::FollowObject()
{
  return _ZN5Caver24OrbitControllerComponent12FollowObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

