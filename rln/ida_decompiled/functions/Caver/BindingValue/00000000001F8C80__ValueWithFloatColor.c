/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8C80
 * Mangled: ._ZN5Caver12BindingValue19ValueWithFloatColorERKNS_10FloatColorE
 * Demangled: Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *
 * Callers: 25
 *   0x0000000000222BE0  Caver::LightComponent::ValueForBindedProperty(int)
 *   0x00000000002258F4  Caver::ModelComponent::ValueForBindedProperty(int)
 *   0x0000000000282A58  Caver::FireBreathComponent::ValueForBindedProperty(int)
 *   0x0000000000282A6C  `non-virtual thunk to'Caver::FireBreathComponent::ValueForBindedProperty(int)
 *   0x0000000000284564  Caver::MagicBoltComponent::ValueForBindedProperty(int)
 *   0x0000000000284588  `non-virtual thunk to'Caver::MagicBoltComponent::ValueForBindedProperty(int)
 *   0x0000000000285CB0  Caver::MagicBombComponent::ValueForBindedProperty(int)
 *   0x0000000000285CC4  `non-virtual thunk to'Caver::MagicBombComponent::ValueForBindedProperty(int)
 *   0x00000000002875D0  Caver::MagicExplosionComponent::ValueForBindedProperty(int)
 *   0x0000000000287604  `non-virtual thunk to'Caver::MagicExplosionComponent::ValueForBindedProperty(int)
 *   0x0000000000289954  Caver::MagicHookshotComponent::ValueForBindedProperty(int)
 *   0x0000000000289968  `non-virtual thunk to'Caver::MagicHookshotComponent::ValueForBindedProperty(int)
 *   0x00000000002A2AF4  Caver::FireEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002A99E4  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002ADD40  Caver::PortalEffectComponent::ValueForBindedProperty(int)
 *   0x00000000002ADD64  `non-virtual thunk to'Caver::PortalEffectComponent::ValueForBindedProperty(int)
 *   0x00000000002B0850  Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *   0x00000000002B875C  Caver::GroundMeshComponent::ValueForBindedProperty(int)
 *   0x00000000002B877C  `non-virtual thunk to'Caver::GroundMeshComponent::ValueForBindedProperty(int)
 *   0x00000000002C2740  Caver::WaterMeshComponent::ValueForBindedProperty(int)
 *   0x00000000002C2764  `non-virtual thunk to'Caver::WaterMeshComponent::ValueForBindedProperty(int)
 *   0x00000000002C4DD8  Caver::SwingableWeaponComponent::ValueForBindedProperty(int)
 *   0x00000000002CB13C  Caver::WeaponGlowComponent::ValueForBindedProperty(int)
 *   0x00000000002CCE24  Caver::WeaponTrailComponent::ValueForBindedProperty(int)
 *   0x00000000002CCE34  `non-virtual thunk to'Caver::WeaponTrailComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000487A78  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8C88 string=0x00000000001F8C8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BindingValue::ValueWithFloatColor(Caver::BindingValue *this, const Caver::FloatColor *a2)
{
  return _ZN5Caver12BindingValue19ValueWithFloatColorERKNS_10FloatColorE(this, a2);
}

