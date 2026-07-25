/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7EC0
 * Mangled: ._ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_34SwingableWeaponControllerComponentEEEvPSt6vectorIN5boost13intrusive_ptrIT_EESaIS7_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>> *)
 *
 * Callers: 1
 *   0x000000000026B4E0  Caver::EntityControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000026BC7C  Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7EC8 string=0x00000000001F7ECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>()
{
  return _ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_34SwingableWeaponControllerComponentEEEvPSt6vectorIN5boost13intrusive_ptrIT_EESaIS7_EE();
}

