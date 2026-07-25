/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F41A0
 * Mangled: ._ZN5Caver10FloatColor8FromHSLAEffff
 * Demangled: Caver::FloatColor::FromHSLA(float,float,float,float)
 *
 * Callers: 16
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002A1A00  Caver::FireEmitterComponent::FireEmitterComponent(void)
 *   0x00000000002A2C88  Caver::FireEmitterComponent::Update(float)
 *   0x00000000002A99E4  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002AF110  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000036963C  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *   0x000000000045525C  Caver::SparkParticleEmitter::Update(float)
 *   0x000000000045633C  Caver::WhooshParticleEmitter::Update(float)
 *   0x000000000048AB64  Caver::VaryingColor::RandomColor(void)
 *
 * Callees: 1
 *   0x000000000048A9BC  Caver::FloatColor::FromHSLA(float,float,float,float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F41A4 string=0x000000000048A9BC "  "
 *   insn=0x00000000001F41A8 string=0x00000000001F41AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FloatColor::FromHSLA(Caver::FloatColor *this, float a2, float a3, float a4, float a5)
{
  return _ZN5Caver10FloatColor8FromHSLAEffff(this, a2, a3, a4, a5);
}

