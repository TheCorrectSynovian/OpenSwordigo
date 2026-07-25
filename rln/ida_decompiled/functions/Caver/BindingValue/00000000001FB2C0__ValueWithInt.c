/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB2C0
 * Mangled: ._ZN5Caver12BindingValue12ValueWithIntEi
 * Demangled: Caver::BindingValue::ValueWithInt(int)
 *
 * Callers: 14
 *   0x0000000000219C18  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x0000000000220E74  Caver::KeyframeAnimationComponent::ValueForBindedProperty(int)
 *   0x00000000002426E4  Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000242D5C  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000002553A0  Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *   0x0000000000262AE8  Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *   0x00000000002659DC  Caver::DamageComponent::ValueForBindedProperty(int)
 *   0x00000000002706D4  Caver::HealthComponent::ValueForBindedProperty(int)
 *   0x0000000000277B1C  Caver::ItemDropComponent::ValueForBindedProperty(int)
 *   0x00000000002A99E4  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002B0850  Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *   0x00000000002BE2E0  Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *   0x00000000004CB7B8  Caver::Texture::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000021BC88  Caver::BindingValue::ValueWithInt(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB2C8 string=0x00000000001FB2CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BindingValue::ValueWithInt(Caver::BindingValue *this, int a2)
{
  return _ZN5Caver12BindingValue12ValueWithIntEi(this, a2);
}

