/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A6A8
 * Mangled: sub_56A6A8
 * Demangled: sub_56A6A8
 *
 * Callers: 421
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000213DCC  Caver::BoneControlledCollisionShapeComponent::InitWithComponent(Caver::BoneControlledCollisionShapeComponent const*)
 *   0x0000000000213E7C  Caver::BoneControlledCollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000213F00  Caver::BoneControlledCollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000021490C  Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000215380  Caver::BoneControlledCollisionShapeComponent::Clone(void)
 *   0x0000000000215418  Caver::Component::InitWithComponent(Caver::Component const*)
 *   0x0000000000215AA8  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000002178A0  Caver::CollisionShapeComponent::InitWithComponent(Caver::CollisionShapeComponent const*)
 *   0x0000000000219C18  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x000000000021A3FC  Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000021C154  Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *   0x000000000021D270  Caver::AnimationControllerComponent::Clone(void)
 *   0x000000000021D4A8  Caver::BackgroundComponent::BackgroundComponent(void)
 *   0x000000000021D77C  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021E4A0  Caver::BlendAnimationComponent::BlendAnimationComponent(void)
 *   0x000000000021F7E0  Caver::BlendAnimationComponent::Clone(void)
 *   0x000000000021F9D8  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *   0x000000000021FD9C  Caver::KeyframeAnimationComponent::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *   0x000000000021FDFC  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *   0x000000000021FFEC  Caver::KeyframeAnimationComponent::RegisterLibrary(void)
 *   0x00000000002201E8  Caver::KeyframeAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000221048  Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000221AD8  Caver::LightComponent::InitWithComponent(Caver::LightComponent const*)
 *   0x0000000000223610  Caver::LightComponent::Clone(void)
 *   0x0000000000223EA0  Caver::ModelComponent::InitWithComponent(Caver::ModelComponent const*)
 *   0x0000000000223F44  Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *   0x0000000000224024  Caver::ModelComponent::setModelName(std::string const&)
 *   0x0000000000224688  Caver::ModelComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002247DC  Caver::ModelComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000226518  Caver::ModelComponent::Clone(void)
 *   0x0000000000226A04  Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(void)
 *   0x0000000000228848  Caver::ModelTransformControllerComponent::Clone(void)
 *   0x0000000000228A04  Caver::ObjectLinkControllerComponent::InitWithComponent(Caver::ObjectLinkControllerComponent const*)
 *   0x0000000000228BB4  Caver::ObjectLinkControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000228C7C  Caver::ObjectLinkControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000229DFC  Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022AE98  Caver::ObjectLinkControllerComponent::LinkToBone(boost::intrusive_ptr<Caver::SceneObject> const&,std::string const&)
 *   0x000000000022B11C  sub_22B11C
 *   0x000000000022B938  Caver::OverlayComponent::InitWithComponent(Caver::OverlayComponent const*)
 *   0x000000000022CFD4  Caver::OverlayTextComponent::InitWithComponent(Caver::OverlayTextComponent const*)
 *   0x000000000022D020  Caver::OverlayTextComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000022D0C0  Caver::OverlayTextComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000022DE24  Caver::OverlayTextComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022E058  Caver::OverlayTextComponent::SetText(std::string const&)
 *   0x000000000022E090  Caver::OverlayTextComponent::SetSpriteName(std::string const&)
 *   0x000000000022EAB8  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *   0x000000000022F1F4  Caver::OverlayTextComponent::Clone(void)
 *   0x000000000022F3C8  Caver::FontText::~FontText()
 *   0x000000000022F8A8  Caver::PortalComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000022F984  Caver::PortalComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000230128  Caver::PortalComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x00000000002311A8  Caver::PortalComponent::Clone(void)
 *   0x0000000000231558  Caver::ProgramComponent::InitWithComponent(Caver::ProgramComponent const*)
 *   0x00000000002324EC  Caver::ProgramComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023311C  Caver::PropertiesComponent::InitWithComponent(Caver::PropertiesComponent const*)
 *   0x00000000002335DC  Caver::PropertiesComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000233744  Caver::PropertiesComponent::RegisterLibrary(void)
 *   0x0000000000233EC0  sub_233EC0
 *   0x0000000000234110  sub_234110
 *   0x0000000000234BA4  Caver::ShadowComponent::InitWithComponent(Caver::ShadowComponent const*)
 *   0x0000000000236310  Caver::ShadowComponent::Clone(void)
 *   0x00000000002365C8  Caver::ShadowVolumeComponent::InitWithComponent(Caver::ShadowVolumeComponent const*)
 *   0x0000000000236BB4  Caver::ShadowVolumeComponent::Clone(void)
 *   0x0000000000236D68  Caver::ShapeComponent::InitWithComponent(Caver::ShapeComponent const*)
 *   0x0000000000239B44  Caver::SoundEffectComponent::InitWithComponent(Caver::SoundEffectComponent const*)
 *   0x0000000000239B8C  Caver::SoundEffectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000239BE0  Caver::SoundEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023A41C  Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023A8EC  Caver::SoundEffectComponent::Clone(void)
 *   0x000000000023AAD0  Caver::SpawnPointComponent::InitWithComponent(Caver::SpawnPointComponent const*)
 *   0x000000000023BA04  Caver::SpawnPointComponent::Clone(void)
 *   0x000000000023BB70  Caver::SpriteComponent::SpriteComponent(void)
 *   0x000000000023BDC4  Caver::SpriteComponent::SpriteComponent(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000023C0BC  Caver::SpriteComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023C100  Caver::SpriteComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023C1B0  Caver::SpriteComponent::Prepare(void)
 *   0x000000000023C520  Caver::SpriteComponent::ValueForBindedProperty(int)
 *   0x000000000023C678  Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023CB6C  Caver::SpriteComponent::Clone(void)
 *   0x000000000023CD04  Caver::TextBubbleComponent::InitWithComponent(Caver::TextBubbleComponent const*)
 *   0x000000000023DBE4  Caver::TextBubbleComponent::Clone(void)
 *   0x000000000023E1EC  Caver::TextureMappingComponent::InitWithComponent(Caver::TextureMappingComponent const*)
 *   0x000000000023E23C  Caver::TextureMappingComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023E2D4  Caver::TextureMappingComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023ED5C  Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023F228  Caver::TextureMappingComponent::Clone(void)
 *   0x000000000023F410  Caver::TouchableComponent::InitWithComponent(Caver::TouchableComponent const*)
 *   0x000000000023FADC  Caver::TouchableComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002403B4  Caver::TransformComponent::InitWithComponent(Caver::TransformComponent const*)
 *   0x00000000002404F0  Caver::TransformComponent::Clone(void)
 *   0x0000000000240774  Caver::TransformControllerComponent::InitWithComponent(Caver::TransformControllerComponent const*)
 *   0x0000000000241D00  Caver::TransformControllerComponent::Clone(void)
 *   0x0000000000241E84  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000241EB0  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000242D5C  Caver::Component::ValueForBindedProperty(int)
 *   0x0000000000243380  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x0000000000244F18  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_create_node(std::pair<std::string const,boost::function<Caver::Component * ()(void)>> const&)
 *   0x000000000025457C  Caver::BreakableObjectComponent::InitWithComponent(Caver::BreakableObjectComponent const*)
 *   0x0000000000255538  Caver::BreakableObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000025A13C  Caver::CharControllerComponent::InitWithComponent(Caver::CharControllerComponent const*)
 *   0x000000000026106C  Caver::CharControllerComponent::Clone(void)
 *   0x0000000000261928  Caver::CollectableItemComponent::InitWithComponent(Caver::CollectableItemComponent const*)
 *   0x0000000000261A70  Caver::CollectableItemComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000261B10  Caver::CollectableItemComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000262B50  Caver::CollectableItemComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002634A8  sub_2634A8
 *   0x0000000000263E64  Caver::DamageComponent::InitWithComponent(Caver::DamageComponent const*)
 *   0x0000000000266898  Caver::DamageComponent::Clone(void)
 *   0x0000000000266F14  Caver::EntityActionComponent::InitWithComponent(Caver::EntityActionComponent const*)
 *   0x00000000002673D4  Caver::EntityActionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000267BEC  Caver::EntityComponent::EntityComponent(void)
 *   0x0000000000269968  Caver::EntityComponent::~EntityComponent()
 *   0x000000000026A29C  Caver::EntityControllerComponent::InitWithComponent(Caver::EntityControllerComponent const*)
 *   0x000000000026E374  Caver::EntityControllerComponent::Clone(void)
 *   0x000000000026E9D0  Caver::EntityInfoComponent::InitWithComponent(Caver::EntityInfoComponent const*)
 *   0x000000000026EA0C  Caver::EntityInfoComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000026EA50  Caver::EntityInfoComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000026ED90  Caver::EntityInfoComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000026F700  Caver::EntityInfoComponent::Clone(void)
 *   0x000000000026FA44  Caver::HealthComponent::InitWithComponent(Caver::HealthComponent const*)
 *   0x0000000000271CAC  Caver::HealthComponent::Clone(void)
 *   0x0000000000272028  Caver::HeroEntityComponent::InitWithComponent(Caver::HeroEntityComponent const*)
 *   0x0000000000272510  Caver::HeroEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000273368  Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *   0x0000000000275AE4  Caver::ItemDropComponent::InitWithComponent(Caver::ItemDropComponent const*)
 *   0x0000000000275BF8  Caver::ItemDropComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000276128  Caver::ItemDropComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000277BEC  Caver::ItemDropComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000277E9C  Caver::ItemDropComponent::PerformBindedAction(int)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x0000000000279F40  sub_279F40
 *   0x000000000027A464  Caver::ItemDropComponent::className(void)
 *   0x000000000027A824  Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize(int)
 *   0x000000000027ABDC  Caver::ManaComponent::InitWithComponent(Caver::ManaComponent const*)
 *   0x000000000027AD90  Caver::ManaComponent::Clone(void)
 *   0x000000000027AF5C  Caver::MonsterEntityComponent::InitWithComponent(Caver::MonsterEntityComponent const*)
 *   0x000000000027BB28  Caver::MonsterEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000027DE30  Caver::PhysicsObjectComponent::PhysicsObjectComponent(void)
 *   0x000000000027FC24  Caver::PhysicsObjectComponent::~PhysicsObjectComponent()
 *   0x00000000002809C8  Caver::PhysicsPlatformComponent::InitWithComponent(Caver::PhysicsPlatformComponent const*)
 *   0x0000000000281794  Caver::PhysicsPlatformComponent::Clone(void)
 *   0x0000000000281968  Caver::DimensionObjectComponent::InitWithComponent(Caver::DimensionObjectComponent const*)
 *   0x0000000000281D20  Caver::DimensionObjectComponent::Clone(void)
 *   0x00000000002868F4  Caver::MagicExplosionComponent::MagicExplosionComponent(void)
 *   0x0000000000288CCC  Caver::MagicExplosionComponent::Clone(void)
 *   0x000000000028B580  Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *   0x000000000028BEC0  Caver::MagicSpellCastComponent::Clone(void)
 *   0x000000000028C058  Caver::ObjectModifierComponent::InitWithComponent(Caver::ObjectModifierComponent const*)
 *   0x000000000028C3FC  Caver::ObjectModifierComponent::Clone(void)
 *   0x000000000028C5B8  Caver::ProjectileControllerComponent::InitWithComponent(Caver::ProjectileControllerComponent const*)
 *   0x000000000028D710  Caver::ProjectileControllerComponent::Clone(void)
 *   0x000000000028D810  Caver::ProjectileControllerComponent::className(void)
 *   0x000000000028DBD4  Caver::SkillComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028DC80  Caver::SkillComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028E21C  Caver::SkillComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028F82C  Caver::SkillComponent::Clone(void)
 *   0x000000000028F9C4  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *   0x000000000028FEB4  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000290618  Caver::SpellComponent::className(void)
 *   0x000000000029215C  Caver::AttackComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000299114  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *   0x0000000000299C40  Caver::MonsterControllerComponent::className(void)
 *   0x000000000029B650  Caver::MonsterDeathControllerComponent::Clone(void)
 *   0x00000000002A1A00  Caver::FireEmitterComponent::FireEmitterComponent(void)
 *   0x00000000002A3288  Caver::FireEmitterComponent::Clone(void)
 *   0x00000000002A3510  Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *   0x00000000002A3B48  Caver::OrbitControllerComponent::InitWithComponent(Caver::OrbitControllerComponent const*)
 *   0x00000000002A4C28  Caver::OrbitControllerComponent::Clone(void)
 *   0x00000000002A4E04  Caver::ParticleComponent::InitWithComponent(Caver::ParticleComponent const*)
 *   0x00000000002A4E4C  Caver::ParticleComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A4EA0  Caver::ParticleComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A556C  Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A5B88  Caver::ParticleComponent::Clone(void)
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000002AC730  Caver::ParticleFieldComponent::InitWithComponent(Caver::ParticleFieldComponent const*)
 *   0x00000000002AC7CC  Caver::ParticleFieldComponent::Clone(void)
 *   0x00000000002AC914  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *   0x00000000002ACFDC  Caver::ParticleObjectComponent::~ParticleObjectComponent()
 *   0x00000000002AF0B8  Caver::ShatterComponent::InitWithComponent(Caver::ShatterComponent const*)
 *   0x00000000002AF528  Caver::ShatterComponent::Clone(void)
 *   0x00000000002B1320  Caver::BushControllerComponent::BushControllerComponent(void)
 *   0x00000000002B2210  Caver::BushControllerComponent::Clone(void)
 *   0x00000000002B2344  Caver::DoorControllerComponent::DoorControllerComponent(void)
 *   0x00000000002B3734  Caver::DoorControllerComponent::Clone(void)
 *   0x00000000002B3878  Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *   0x00000000002B4B6C  sub_2B4B6C
 *   0x00000000002B501C  Caver::ElevatorControllerComponent::Clone(void)
 *   0x00000000002B51E8  Caver::PressureTriggerComponent::InitWithComponent(Caver::PressureTriggerComponent const*)
 *   0x00000000002B5E1C  Caver::PressureTriggerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x00000000002BBB48  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *   0x00000000002BE92C  Caver::GroundPolygonComponent::InitWithComponent(Caver::GroundPolygonComponent const*)
 *   0x00000000002BF910  Caver::GroundPolygonComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C0418  Caver::CollisionShapeComponent::setOnCollide(Caver::Program const&)
 *   0x00000000002C1D0C  Caver::WaterMeshComponent::WaterMeshComponent(void)
 *   0x00000000002C330C  Caver::WaterMeshComponent::Clone(void)
 *   0x00000000002C3464  Caver::SwingableWeaponComponent::SwingableWeaponComponent(void)
 *   0x00000000002C7C8C  Caver::SwingableWeaponControllerComponent::InitWithComponent(Caver::SwingableWeaponControllerComponent const*)
 *   0x00000000002C7D10  Caver::SwingableWeaponControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C7DAC  Caver::SwingableWeaponControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002C8748  Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C9364  Caver::SwingableWeaponControllerComponent::Clone(void)
 *   0x00000000002C9468  Caver::SwingableWeaponControllerComponent::className(void)
 *   0x00000000002CA490  Caver::SwingComponent::Clone(void)
 *   0x00000000002CC828  Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *   0x00000000002CD0A8  Caver::WeaponTrailComponent::Clone(void)
 *   0x00000000002D12AC  Caver::Proto::Texture_Subtexture::Texture_Subtexture(Caver::Proto::Texture_Subtexture const&)
 *   0x00000000002D25A0  Caver::Proto::Texture::Texture(Caver::Proto::Texture const&)
 *   0x00000000002D4268  Caver::Proto::Font::Font(Caver::Proto::Font const&)
 *   0x00000000002D5604  Caver::Proto::Program::Program(Caver::Proto::Program const&)
 *   0x00000000002D6774  Caver::Proto::GUIViewLayout::GUIViewLayout(Caver::Proto::GUIViewLayout const&)
 *   0x00000000002D7620  Caver::Proto::SoundEffect::SoundEffect(Caver::Proto::SoundEffect const&)
 *   0x00000000002D8938  Caver::Proto::MusicTrack::MusicTrack(Caver::Proto::MusicTrack const&)
 *   0x00000000002D91D8  Caver::Proto::MusicPlaylist::MusicPlaylist(Caver::Proto::MusicPlaylist const&)
 *   0x00000000002DA000  Caver::Proto::EditorViewState::EditorViewState(Caver::Proto::EditorViewState const&)
 *   0x00000000002DB1B0  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *   0x00000000002DBB4C  Caver::Proto::MapNode_Portal::MapNode_Portal(Caver::Proto::MapNode_Portal const&)
 *   0x00000000002DC700  Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode const&)
 *   0x00000000002DDF78  Caver::Proto::MapZone::MapZone(Caver::Proto::MapZone const&)
 *   0x00000000002DF7D4  Caver::Proto::Item::Item(Caver::Proto::Item const&)
 *   0x00000000002E0A7C  Caver::Proto::Skill::Skill(Caver::Proto::Skill const&)
 *   0x00000000002E18FC  Caver::Proto::Quest::Quest(Caver::Proto::Quest const&)
 *   0x00000000002E2624  Caver::Proto::EntityClass::EntityClass(Caver::Proto::EntityClass const&)
 *   0x00000000002E3428  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *   0x00000000002E3D48  Caver::Proto::GuideTarget::GuideTarget(Caver::Proto::GuideTarget const&)
 *   0x00000000002E8B24  Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(Caver::Proto::PlayerProfile_Counter const&)
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *   0x00000000002EB780  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *   0x00000000002EC5F0  Caver::Proto::QuestState::QuestState(Caver::Proto::QuestState const&)
 *   0x00000000002ECED8  Caver::Proto::QuestText::QuestText(Caver::Proto::QuestText const&)
 *   0x00000000002F12C8  Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *   0x00000000002F1920  Caver::Proto::LevelState::LevelState(Caver::Proto::LevelState const&)
 *   0x00000000002F26F0  Caver::Proto::CharacterState_ItemState::CharacterState_ItemState(Caver::Proto::CharacterState_ItemState const&)
 *   0x00000000002FB0E0  Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000300304  Caver::Proto::SceneObjectGroup::SceneObjectGroup(Caver::Proto::SceneObjectGroup const&)
 *   0x000000000030278C  Caver::Proto::SpriteComponent::SpriteComponent(Caver::Proto::SpriteComponent const&)
 *   0x0000000000302F08  Caver::Proto::ModelComponent::ModelComponent(Caver::Proto::ModelComponent const&)
 *   0x0000000000303F2C  Caver::Proto::KeyframeAnimationComponent::KeyframeAnimationComponent(Caver::Proto::KeyframeAnimationComponent const&)
 *   0x0000000000306EB8  Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
 *   0x000000000030955C  Caver::Proto::TextureMappingComponent::TextureMappingComponent(Caver::Proto::TextureMappingComponent const&)
 *   0x000000000030E0D4  Caver::Proto::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(Caver::Proto::BoneControlledCollisionShapeComponent const&)
 *   0x000000000030E9D4  Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent(Caver::Proto::ObjectLinkControllerComponent const&)
 *   0x0000000000310E98  Caver::Proto::SoundEffectComponent::SoundEffectComponent(Caver::Proto::SoundEffectComponent const&)
 *   0x000000000031AFD8  Caver::Proto::EntityInfoComponent::EntityInfoComponent(Caver::Proto::EntityInfoComponent const&)
 *   0x000000000031BDB4  Caver::Proto::BackgroundComponent::BackgroundComponent(Caver::Proto::BackgroundComponent const&)
 *   0x000000000031F3D4  Caver::Proto::ParticleComponent::ParticleComponent(Caver::Proto::ParticleComponent const&)
 *   0x000000000032A9BC  Caver::Proto::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(Caver::Proto::SwingableWeaponControllerComponent const&)
 *   0x000000000032CCF8  Caver::Proto::PortalComponent::PortalComponent(Caver::Proto::PortalComponent const&)
 *   0x000000000032DFC8  Caver::Proto::CollectableItemComponent::CollectableItemComponent(Caver::Proto::CollectableItemComponent const&)
 *   0x000000000032F570  Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *   0x0000000000330140  Caver::Proto::ItemDropComponent::ItemDropComponent(Caver::Proto::ItemDropComponent const&)
 *   0x0000000000331088  Caver::Proto::OverlayTextComponent::OverlayTextComponent(Caver::Proto::OverlayTextComponent const&)
 *   0x0000000000333DBC  Caver::Proto::SkillComponent::SkillComponent(Caver::Proto::SkillComponent const&)
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *   0x000000000033B3E0  Caver::Proto::PackedMesh::PackedMesh(Caver::Proto::PackedMesh const&)
 *   0x000000000033C74C  Caver::Proto::UnpackedMesh::UnpackedMesh(Caver::Proto::UnpackedMesh const&)
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x000000000034FA78  Caver::GameSceneView::SetCurrentMenuTab(std::string const&)
 *   0x0000000000351C5C  Caver::GameViewController::LoadGameState(void)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000035EB00  sub_35EB00
 *   0x00000000003601E8  sub_3601E8
 *   0x0000000000362C58  sub_362C58
 *   0x0000000000368DE8  Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *   0x000000000036E914  Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000036F394  Caver::MainMenuViewController::MainMenuViewDidOpenShop(Caver::MainMenuView *)
 *   0x0000000000371414  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x0000000000389C70  Caver::BadgeCountView::SetCount(int)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000039CB54  Caver::PlayerProfile::equippedArmorName(void)
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *   0x00000000003A05B8  Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *   0x00000000003A8080  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *   0x00000000003A899C  Caver::ProfileManagerLoadingView::Update(float)
 *   0x00000000003AC040  Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *   0x00000000003AF6C4  Caver::EntityClass::LoadFromProtobufMessage(Caver::Proto::EntityClass const&)
 *   0x00000000003AF720  Caver::EntityClass::SaveToProtobufMessage(Caver::Proto::EntityClass *)
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *   0x00000000003B7C8C  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *   0x00000000003B7EC0  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *   0x00000000003BA46C  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *   0x00000000003BA870  Caver::Item::LoadFromProtobufMessage(Caver::Proto::Item const&)
 *   0x00000000003BA8EC  Caver::Item::SaveToProtobufMessage(Caver::Proto::Item *)
 *   0x00000000003BAB78  Caver::LevelState::LoadFromProtobufMessage(Caver::Proto::LevelState const&)
 *   0x00000000003BAC00  Caver::LevelState::SaveToProtobufMessage(Caver::Proto::LevelState *)
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *   0x00000000003BEB34  Caver::MapNode::LoadFromProtobufMessage(Caver::Proto::MapNode const&)
 *   0x00000000003BEE30  Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode *)
 *   0x00000000003BF274  Caver::MapNode::MusicName(void)
 *   0x00000000003BF8CC  Caver::MapZone::LoadFromProtobufMessage(Caver::Proto::MapZone const&)
 *   0x00000000003BF918  Caver::MapZone::SaveToProtobufMessage(Caver::Proto::MapZone *)
 *   0x00000000003BFA88  Caver::PlayerProfile::InitWithIdentifier(std::string const&)
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *   0x00000000003C173C  Caver::PlayerProfile::LoadFromProtobufMessage(Caver::Proto::PlayerProfile const&,bool)
 *   0x00000000003C38D0  Caver::Quest::LoadFromProtobufMessage(Caver::Proto::Quest const&)
 *   0x00000000003C391C  Caver::Quest::SaveToProtobufMessage(Caver::Proto::Quest *)
 *   0x00000000003C3A78  Caver::QuestState::LoadFromProtobufMessage(Caver::Proto::QuestState const&)
 *   0x00000000003C3AA8  Caver::QuestState::SaveToProtobufMessage(Caver::Proto::QuestState *)
 *   0x00000000003C3B20  Caver::QuestText::LoadFromProtobufMessage(Caver::Proto::QuestText const&)
 *   0x00000000003C3BB4  Caver::QuestText::SaveToProtobufMessage(Caver::Proto::QuestText *)
 *   0x00000000003C3CA4  Caver::Skill::LoadFromProtobufMessage(Caver::Proto::Skill const&)
 *   0x00000000003C3CF4  Caver::Skill::SaveToProtobufMessage(Caver::Proto::Skill *)
 *   0x00000000003C3E94  Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties *)
 *   0x00000000003C4F90  Caver::CoinBar::UpdateText(void)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *   0x00000000003CB89C  Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *   0x00000000003CBF00  Caver::DebugInfoOverlay::SetNumTriangles(int)
 *   0x00000000003D7578  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *   0x00000000003E04B4  Caver::OverlayButton::OverlayButton(void)
 *   0x00000000003E0C4C  Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *   0x00000000003E3434  Caver::TargetFrame::SetTargetInfo(std::string const&,int,bool)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003EA4EC  Caver::PurchaseViewController::FetchProduct(std::string const&)
 *   0x00000000003EA940  Caver::PurchaseViewController::ProductRequestCompletion(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000003F8A74  Caver::AttributePointsView::SetHelpText(std::string const&)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x000000000040DC14  Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041A708  Caver::ItemInfoView::SetSkill(boost::shared_ptr<Caver::Skill> const&)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000428DF4  std::vector<std::string,std::allocator<std::string>>::operator=(std::vector<std::string,std::allocator<std::string>> const&)
 *   0x000000000042C798  Caver::NotificationView::~NotificationView()
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *   0x000000000043650C  Caver::SceneLoadingView::Update(float)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000043F15C  Caver::StripeView::SetTitle(std::string const&)
 *   0x0000000000441A5C  Caver::TabbedMenuView::SetContentView(boost::shared_ptr<Caver::MenuViewPage> const&)
 *   0x0000000000443134  Caver::TabView::AddTab(std::string const&)
 *   0x0000000000443BA0  Caver::FastVector<std::string>::Resize(int)
 *   0x000000000044604C  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *   0x000000000044B5C4  Caver::ModelLibrary::ModelForName(std::string const&)
 *   0x000000000044BEF4  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *   0x000000000045A930  Caver::ObjectLibrary::SetLibrarySearchPath(std::string const&)
 *   0x000000000045A948  Caver::ObjectLibrary::FindLibrariesDirectoryFromParentDirectories(std::string const&)
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x000000000047301C  Caver::SceneObject::SetIdentifier(std::string const&)
 *   0x0000000000475190  Caver::SceneObjectGroup::LoadFromProtobufMessage(Caver::Proto::SceneObjectGroup const&)
 *   0x00000000004752D4  Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup *)
 *   0x00000000004763D0  Caver::SceneObjectGroup::SetIdentifier(std::string const&)
 *   0x0000000000476D9C  sub_476D9C
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *   0x000000000047D2A0  Caver::FindFileFromParentDirectories(std::string const&,std::string)
 *   0x000000000047D590  Caver::SetResourcesPath(std::string const&)
 *   0x0000000000480F14  Caver::MusicPlayer::PlaylistForName(std::string const&)
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x000000000048331C  Caver::MusicPlaylist::LoadFromProtobufMessage(Caver::Proto::MusicPlaylist const&)
 *   0x00000000004834EC  Caver::MusicPlaylist::SaveToProtobufMessage(Caver::Proto::MusicPlaylist *)
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x0000000000490628  Caver::GUIAlertView::SetTitle(std::string const&)
 *   0x0000000000490850  Caver::GUIAlertView::SetMessage(std::string const&)
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *   0x0000000000495A74  Caver::GUIButton::SetTitle(std::string const&)
 *   0x000000000049823C  Caver::GUILabel::BoundsForCharacterAtIndex(int)
 *   0x00000000004A7C04  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *   0x00000000004A8028  Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000004B41DC  Caver::SetAndroidFilesDir(std::string const&)
 *   0x00000000004B41F4  Caver::SetAndroidCacheDir(std::string const&)
 *   0x00000000004BA220  Caver::GUITextFieldImpl::UpdateText(void)
 *   0x00000000004BA5CC  Caver::GUITextFieldImpl::setText(std::string const&)
 *   0x00000000004BA5FC  Caver::GUITextFieldImpl::setPlaceHolder(std::string const&)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *   0x00000000004BC740  Caver::ProfileStats::ProfileStats(Caver::PlayerProfile *)
 *   0x00000000004C0068  Caver::Program::~Program()
 *   0x00000000004C06D4  Caver::Program::InitWithString(std::string const&,std::string *)
 *   0x00000000004C0B40  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *   0x00000000004C9694  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *   0x00000000004CB944  Caver::Texture::InitWithFile(std::string const&,Caver::ImageType,float)
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004CF91C  Caver::DateTime::FormattedTimeIntervalSinceDate(Caver::DateTime const&)
 *   0x00000000004D1D64  Caver::SoundEffect::LoadFromProtobufMessage(Caver::Proto::SoundEffect const&)
 *   0x00000000004D1DB4  Caver::SoundEffect::SaveToProtobufMessage(Caver::Proto::SoundEffect *)
 *   0x00000000004D32DC  Caver::RenderingProgramShader::AddUniformVariable(int,std::string const&)
 *   0x00000000004D3458  std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::RenderingProgramShader::UniformVariable*,std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>>,Caver::RenderingProgramShader::UniformVariable const&)
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *   0x00000000005459D8  sub_5459D8
 *   0x0000000000546758  sub_546758
 *   0x0000000000547030  sub_547030
 *   0x0000000000547A78  sub_547A78
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3F4  sub_56A3F4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 24
 *   insn=0x000000000056A6B8 string=0x000000000056A6BC "3"
 *   insn=0x000000000056A6BC string=0x000000000056A6C0 "_"
 *   insn=0x000000000056A6C4 string=0x000000000056A6C8 "c"
 *   insn=0x000000000056A6C8 string=0x000000000056A6CC "`b"
 *   insn=0x000000000056A6CC string=0x000000000056A6D0 "C"
 *   insn=0x000000000056A6D4 string=0x000000000056A6D8 "$"
 *   insn=0x000000000056A6E0 string=0x000000000056A6E4 "@`"
 *   insn=0x000000000056A6E4 string=0x000000000056A6E8 "!"
 *   insn=0x000000000056A708 string=0x000000000056A70C "!<G"
 *   insn=0x000000000056A710 string=0x000000000056A714 "B "
 *   insn=0x000000000056A710 string=0x000000000056A788 "A"
 *   insn=0x000000000056A714 string=0x000000000056A718 "A"
 *   insn=0x000000000056A718 string=0x000000000056A71C "#"
 *   insn=0x000000000056A71C string=0x000000000056A720 "C"
 *   insn=0x000000000056A724 string=0x000000000056A728 "?"
 *   insn=0x000000000056A728 string=0x000000000056A72C "L"
 *   insn=0x000000000056A730 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056A73C string=0x000000000056A740 "-"
 *   insn=0x000000000056A75C string=0x000000000056A760 "`""
 *   insn=0x000000000056A75C string=0x000000000056A77C "c"
 *   insn=0x000000000056A764 string=0x000000000056A768 "B"
 *   insn=0x000000000056A77C string=0x000000000056A780 "c"
 *   insn=0x000000000056A788 string=0x000000000056A78C "#"
 *   insn=0x000000000056A78C string=0x000000000056A790 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56A6A8(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // x2
  _DWORD *v4; // x19
  int v5; // w3
  __int64 *v6; // x0
  void *v7; // x0
  unsigned int *v9; // x2
  int v10; // w1
  unsigned int *v11; // x0
  unsigned int v12; // w2
  char v13; // [xsp+28h] [xbp+28h] BYREF

  v2 = *a1;
  v4 = (_DWORD *)*a2;
  if ( *a1 != *a2 )
  {
    v5 = *(v4 - 2);
    v6 = (__int64 *)(v4 - 6);
    if ( v5 < 0 )
    {
      v4 = sub_56A3F4((__int64)v6, (__int64)&v13, 0);
      v2 = *a1;
    }
    else if ( v6 != &qword_6FD2E0 )
    {
      if ( &pthread_create )
      {
        v11 = v4 - 2;
        do
          v12 = __ldaxr(v11);
        while ( __stlxr(v12 + 1, v11) );
        v2 = *a1;
      }
      else
      {
        *(v4 - 2) = v5 + 1;
      }
    }
    v7 = (void *)(v2 - 24);
    if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
    {
      if ( &pthread_create )
      {
        v9 = (unsigned int *)(v2 - 8);
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
      }
      else
      {
        v10 = *(_DWORD *)(v2 - 8);
        *(_DWORD *)(v2 - 8) = v10 - 1;
      }
      if ( v10 <= 0 )
        operator delete(v7);
    }
    *a1 = (__int64)v4;
  }
  return a1;
}

