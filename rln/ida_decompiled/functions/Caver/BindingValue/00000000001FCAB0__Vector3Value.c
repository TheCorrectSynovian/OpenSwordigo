/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCAB0
 * Mangled: ._ZNK5Caver12BindingValue12Vector3ValueEv
 * Demangled: Caver::BindingValue::Vector3Value(void)
 *
 * Callers: 13
 *   0x0000000000222C50  Caver::LightComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000225A10  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000229DFC  Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023539C  Caver::ShadowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023543C  `non-virtual thunk to'Caver::ShadowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023B8B4  Caver::SpawnPointComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023B93C  `non-virtual thunk to'Caver::SpawnPointComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A2B48  Caver::FireEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A4364  Caver::OrbitControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A4428  `non-virtual thunk to'Caver::OrbitControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002ADD8C  Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AE494  `non-virtual thunk to'Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000487E38  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FCAB4 string=0x0000000000488010 "\t"
 *   insn=0x00000000001FCAB8 string=0x00000000001FCABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::BindingValue::Vector3Value(Caver::BindingValue *this)
{
  JUMPOUT(0x488010);
}

