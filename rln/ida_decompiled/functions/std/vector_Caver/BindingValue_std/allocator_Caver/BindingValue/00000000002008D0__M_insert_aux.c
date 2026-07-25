/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002008D0
 * Mangled: ._ZNSt6vectorIN5Caver12BindingValueESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *
 * Callers: 20
 *   0x0000000000214220  Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000219874  Caver::CollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002228F0  Caver::LightComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000229904  Caver::ObjectLinkControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000231FC8  Caver::ProgramComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002382D0  Caver::ShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000023B080  Caver::SpawnPointComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002426E4  Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000254FF4  Caver::BreakableObjectComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002627F8  Caver::CollectableItemComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002652DC  Caver::DamageComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002681F0  Caver::EntityComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000026AED8  Caver::EntityControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002703D8  Caver::HealthComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002A9088  Caver::ParticleEmitterComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002B3E74  Caver::ElevatorControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002BDFE4  Caver::GroundMeshGeneratorComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002C82F0  Caver::SwingableWeaponControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000471AE8  Caver::SceneObject::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000004CAD94  Caver::Texture::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 1
 *   0x0000000000215F14  std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>(Caver::Binding *,Caver::Binding *,Caver::Binding *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002008D8 string=0x00000000002008DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<Caver::BindingValue>::_M_insert_aux()
{
  JUMPOUT(0x216054);
}

