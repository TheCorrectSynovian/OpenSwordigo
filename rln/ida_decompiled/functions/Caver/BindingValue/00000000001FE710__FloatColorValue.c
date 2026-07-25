/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE710
 * Mangled: ._ZNK5Caver12BindingValue15FloatColorValueEv
 * Demangled: Caver::BindingValue::FloatColorValue(void)
 *
 * Callers: 25
 *   0x0000000000222C50  Caver::LightComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000225A10  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000282A84  Caver::FireBreathComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000282AF0  `non-virtual thunk to'Caver::FireBreathComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002845B0  Caver::MagicBoltComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000284638  `non-virtual thunk to'Caver::MagicBoltComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000285CDC  Caver::MagicBombComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000285D48  `non-virtual thunk to'Caver::MagicBombComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028763C  Caver::MagicExplosionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002876D8  `non-virtual thunk to'Caver::MagicExplosionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000289980  Caver::MagicHookshotComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002899F0  `non-virtual thunk to'Caver::MagicHookshotComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A2B48  Caver::FireEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002ADD8C  Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AE494  `non-virtual thunk to'Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B08BC  Caver::SimpleGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B87A0  Caver::GroundMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B8820  `non-virtual thunk to'Caver::GroundMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C278C  Caver::WaterMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C2B80  `non-virtual thunk to'Caver::WaterMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C4E2C  Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002CB200  Caver::WeaponGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002CB2BC  `non-virtual thunk to'Caver::WeaponGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002CCE48  Caver::WeaponTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000487A78  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE714 string=0x0000000000487C48 "\t"
 *   insn=0x00000000001FE718 string=0x00000000001FE71C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::BindingValue::FloatColorValue(Caver::BindingValue *this)
{
  JUMPOUT(0x487C48);
}

