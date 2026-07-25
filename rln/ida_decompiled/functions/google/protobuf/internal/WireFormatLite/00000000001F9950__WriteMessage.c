/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9950
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite12WriteMessageEiRKNS0_11MessageLiteEPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 70
 *   0x00000000002CFFD0  Caver::Proto::Circle::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D08A8  Caver::Proto::Polygon::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D1A78  Caver::Proto::Texture_Subtexture::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D3160  Caver::Proto::Texture::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D3E80  Caver::Proto::Font_Glyph::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D500C  Caver::Proto::Font::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D7294  Caver::Proto::GUIViewLayout::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D85F4  Caver::Proto::SoundLibrary::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D99CC  Caver::Proto::MusicPlaylist::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DAE10  Caver::Proto::EditorViewState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DD7F0  Caver::Proto::MapNode::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DEBBC  Caver::Proto::MapZone::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DF538  Caver::Proto::Map::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E4B54  Caver::Proto::GuideTarget::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E6070  Caver::Proto::GameOptions::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E77AC  Caver::Proto::GameData::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002EB050  Caver::Proto::PlayerProfile::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F068C  Caver::Proto::GameState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F22E0  Caver::Proto::LevelState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F4298  Caver::Proto::CharacterState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002FC3BC  Caver::Proto::ObjectTemplate::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002FDAC4  Caver::Proto::ObjectLibrary::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002FECC0  Caver::Proto::SceneObject::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000300E74  Caver::Proto::SceneObjectGroup::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000302278  Caver::Proto::Scene::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000303A98  Caver::Proto::ModelComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000305998  Caver::Proto::ModelTransformControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003069D4  Caver::Proto::GroundPolygonComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000308204  Caver::Proto::GroundMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000309D0C  Caver::Proto::TextureMappingComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030A79C  Caver::Proto::WaterMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030B344  Caver::Proto::ShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030C5B0  Caver::Proto::CollisionShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030DDF8  Caver::Proto::HealthComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030F4F0  Caver::Proto::ObjectLinkControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000310274  Caver::Proto::LightComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000310C14  Caver::Proto::ShadowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000316074  Caver::Proto::PressureTriggerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000317384  Caver::Proto::ProgramComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000317E44  Caver::Proto::MonsterEntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000318A38  Caver::Proto::PhysicsObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003194A0  Caver::Proto::BreakableObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031A7A8  Caver::Proto::EntityActionComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031BBDC  Caver::Proto::HeroEntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031C9B8  Caver::Proto::PropertiesComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031D85C  Caver::Proto::ParticleEmitter::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031ECA4  Caver::Proto::ParticleEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003217B8  Caver::Proto::FireEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003225F8  Caver::Proto::SimpleGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003233F0  Caver::Proto::OrbitControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003261B4  Caver::Proto::AttackComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032A350  Caver::Proto::SwingableWeaponComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032C310  Caver::Proto::WeaponGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032CAF8  Caver::Proto::WeaponTrailComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032DD0C  Caver::Proto::SpawnPointComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032E9F8  Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032F328  Caver::Proto::TouchableComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000330BD8  Caver::Proto::ItemDropComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000331A0C  Caver::Proto::OverlayTextComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000332574  Caver::Proto::PortalEffectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000333010  Caver::Proto::MagicBoltComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000333A80  Caver::Proto::MagicExplosionComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000334580  Caver::Proto::SkillComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000335438  Caver::Proto::FireBreathComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000033612C  Caver::Proto::MagicBombComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000336A6C  Caver::Proto::MagicHookshotComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003372E4  Caver::Proto::SpellComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000338D0C  Caver::Proto::MeshMaterial::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000033AA0C  Caver::Proto::Mesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E31A8  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9958 string=0x00000000001F995C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteMessage(
        google::protobuf::internal::WireFormatLite *this,
        int a2,
        const google::protobuf::MessageLite *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  return _ZN6google8protobuf8internal14WireFormatLite12WriteMessageEiRKNS0_11MessageLiteEPNS0_2io17CodedOutputStreamE(
           this,
           a2,
           a3,
           a4);
}

