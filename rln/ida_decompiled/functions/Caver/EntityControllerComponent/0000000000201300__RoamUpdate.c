/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201300
 * Mangled: ._ZN5Caver25EntityControllerComponent10RoamUpdateEf
 * Demangled: Caver::EntityControllerComponent::RoamUpdate(float)
 *
 * Callers: 1
 *   0x000000000026C0F0  Caver::EntityControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000026BC7C  Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201308 string=0x000000000020130C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::EntityControllerComponent::RoamUpdate(Caver::EntityControllerComponent *this, float a2)
{
  JUMPOUT(0x26BE0C);
}

