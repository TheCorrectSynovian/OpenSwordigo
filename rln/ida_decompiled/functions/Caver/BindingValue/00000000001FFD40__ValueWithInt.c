/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFD40
 * Mangled: ._ZN5Caver12BindingValue12ValueWithIntEiRKSs
 * Demangled: Caver::BindingValue::ValueWithInt(int,std::string const&)
 *
 * Callers: 27
 *   0x0000000000219874  Caver::CollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000219E7C  Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *   0x0000000000231FC8  Caver::ProgramComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000232370  Caver::ProgramComponent::ValueForBindedProperty(int)
 *   0x000000000023B080  Caver::SpawnPointComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000023B734  Caver::SpawnPointComponent::ValueForBindedProperty(int)
 *   0x0000000000254FF4  Caver::BreakableObjectComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002553A0  Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *   0x00000000002627F8  Caver::CollectableItemComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000262AE8  Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *   0x00000000002652DC  Caver::DamageComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002659DC  Caver::DamageComponent::ValueForBindedProperty(int)
 *   0x00000000002681F0  Caver::EntityComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002688A4  Caver::EntityComponent::ValueForBindedProperty(int)
 *   0x000000000026AED8  Caver::EntityControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000026B284  Caver::EntityControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002703D8  Caver::HealthComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002706D4  Caver::HealthComponent::ValueForBindedProperty(int)
 *   0x00000000002A9088  Caver::ParticleEmitterComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002A99E4  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002B3E74  Caver::ElevatorControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002B4168  Caver::ElevatorControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002B4188  `non-virtual thunk to'Caver::ElevatorControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002BDFE4  Caver::GroundMeshGeneratorComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002BE2E0  Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int)
 *   0x00000000004CAD94  Caver::Texture::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000004CB7B8  Caver::Texture::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000219C18  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFD48 string=0x00000000001FFD4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::BindingValue::ValueWithInt()
{
  return _ZN5Caver12BindingValue12ValueWithIntEiRKSs();
}

