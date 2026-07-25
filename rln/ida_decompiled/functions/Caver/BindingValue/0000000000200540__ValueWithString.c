/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200540
 * Mangled: ._ZN5Caver12BindingValue15ValueWithStringERKSs
 * Demangled: Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Callers: 37
 *   0x0000000000214220  Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002148E0  Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty(int)
 *   0x00000000002148F4  `non-virtual thunk to'Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty(int)
 *   0x000000000021DB94  Caver::BackgroundComponent::ValueForBindedProperty(int)
 *   0x0000000000220E74  Caver::KeyframeAnimationComponent::ValueForBindedProperty(int)
 *   0x00000000002228F0  Caver::LightComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000222BE0  Caver::LightComponent::ValueForBindedProperty(int)
 *   0x00000000002258F4  Caver::ModelComponent::ValueForBindedProperty(int)
 *   0x0000000000229904  Caver::ObjectLinkControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000229D1C  Caver::ObjectLinkControllerComponent::ValueForBindedProperty(int)
 *   0x000000000022DDC8  Caver::OverlayTextComponent::ValueForBindedProperty(int)
 *   0x00000000002300BC  Caver::PortalComponent::ValueForBindedProperty(int)
 *   0x00000000002300F0  `non-virtual thunk to'Caver::PortalComponent::ValueForBindedProperty(int)
 *   0x00000000002382D0  Caver::ShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002385C4  Caver::ShapeComponent::ValueForBindedProperty(int)
 *   0x000000000023A3B8  Caver::SoundEffectComponent::ValueForBindedProperty(int)
 *   0x000000000023A3E8  `non-virtual thunk to'Caver::SoundEffectComponent::ValueForBindedProperty(int)
 *   0x000000000023C520  Caver::SpriteComponent::ValueForBindedProperty(int)
 *   0x000000000023ECB8  Caver::TextureMappingComponent::ValueForBindedProperty(int)
 *   0x000000000023ED08  `non-virtual thunk to'Caver::TextureMappingComponent::ValueForBindedProperty(int)
 *   0x0000000000262AE8  Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *   0x000000000026ED6C  Caver::EntityInfoComponent::ValueForBindedProperty(int)
 *   0x000000000026ED7C  `non-virtual thunk to'Caver::EntityInfoComponent::ValueForBindedProperty(int)
 *   0x0000000000277B1C  Caver::ItemDropComponent::ValueForBindedProperty(int)
 *   0x000000000028E1D0  Caver::SkillComponent::ValueForBindedProperty(int)
 *   0x000000000028E1F4  `non-virtual thunk to'Caver::SkillComponent::ValueForBindedProperty(int)
 *   0x00000000002A5528  Caver::ParticleComponent::ValueForBindedProperty(int)
 *   0x00000000002A5548  `non-virtual thunk to'Caver::ParticleComponent::ValueForBindedProperty(int)
 *   0x00000000002C82F0  Caver::SwingableWeaponControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002C86FC  Caver::SwingableWeaponControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002C8720  `non-virtual thunk to'Caver::SwingableWeaponControllerComponent::ValueForBindedProperty(int)
 *   0x00000000004608A4  Caver::ObjectTemplate::ValueForBindedProperty(int)
 *   0x0000000000471AE8  Caver::SceneObject::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000472358  Caver::SceneObject::ValueForBindedProperty(int)
 *   0x0000000000475F6C  Caver::SceneObjectGroup::ValueForBindedProperty(int)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *   0x00000000004CB7B8  Caver::Texture::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000214220  Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200548 string=0x000000000020054C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::BindingValue::ValueWithString()
{
  JUMPOUT(0x214624);
}

