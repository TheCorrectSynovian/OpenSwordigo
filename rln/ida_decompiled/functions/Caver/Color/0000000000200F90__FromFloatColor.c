/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200F90
 * Mangled: ._ZN5Caver5Color14FromFloatColorERKNS_10FloatColorE
 * Demangled: Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Callers: 33
 *   0x0000000000224688  Caver::ModelComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000225A10  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x0000000000282B80  Caver::FireBreathComponent::Update(float)
 *   0x0000000000283338  Caver::HookshotTrailComponent::UpdateVertices(void)
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x0000000000285DC0  Caver::MagicBombComponent::Prepare(void)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x0000000000288848  Caver::MagicExplosionComponent::UpdateStarPolygonColor(void)
 *   0x00000000002A2C88  Caver::FireEmitterComponent::Update(float)
 *   0x00000000002ADE28  Caver::PortalEffectComponent::CreateVertices(void)
 *   0x00000000002AF110  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *   0x00000000002B09B8  Caver::SimpleGlowComponent::CreateVertexData(void)
 *   0x00000000002C2DF4  Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002C5124  Caver::SwingableWeaponComponent::SetGlowColor(Caver::FloatColor)
 *   0x00000000002CA878  Caver::WeaponGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002CB200  Caver::WeaponGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002CB2BC  `non-virtual thunk to'Caver::WeaponGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002CBAE8  Caver::WeaponGlowComponent::CreateVertexData(int,int,int,int,float *,float *)
 *   0x00000000002CC828  Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *   0x00000000002CC9EC  Caver::WeaponTrailComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002CCE48  Caver::WeaponTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002CD0A8  Caver::WeaponTrailComponent::Clone(void)
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *   0x000000000044B14C  Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000452078  Caver::FountainParticleEmitter::Update(float)
 *   0x000000000045525C  Caver::SparkParticleEmitter::Update(float)
 *   0x00000000004559B8  Caver::TrailParticleEmitter::Update(float)
 *   0x000000000045633C  Caver::WhooshParticleEmitter::Update(float)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000489FE0  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200F98 string=0x0000000000200F9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Color::FromFloatColor()
{
  JUMPOUT(0x48A6AC);
}

