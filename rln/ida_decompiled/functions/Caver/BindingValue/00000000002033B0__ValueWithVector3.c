/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002033B0
 * Mangled: ._ZN5Caver12BindingValue16ValueWithVector3ERKNS_7Vector3E
 * Demangled: Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Callers: 12
 *   0x0000000000222BE0  Caver::LightComponent::ValueForBindedProperty(int)
 *   0x00000000002258F4  Caver::ModelComponent::ValueForBindedProperty(int)
 *   0x0000000000229D1C  Caver::ObjectLinkControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000235338  Caver::ShadowComponent::ValueForBindedProperty(int)
 *   0x0000000000235368  `non-virtual thunk to'Caver::ShadowComponent::ValueForBindedProperty(int)
 *   0x000000000023B734  Caver::SpawnPointComponent::ValueForBindedProperty(int)
 *   0x00000000002A2AF4  Caver::FireEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002A42E8  Caver::OrbitControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002A4324  `non-virtual thunk to'Caver::OrbitControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002A99E4  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002ADD40  Caver::PortalEffectComponent::ValueForBindedProperty(int)
 *   0x00000000002ADD64  `non-virtual thunk to'Caver::PortalEffectComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000487E38  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002033B8 string=0x00000000002033BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BindingValue::ValueWithVector3(Caver::BindingValue *this, const Caver::Vector3 *a2)
{
  return _ZN5Caver12BindingValue16ValueWithVector3ERKNS_7Vector3E(this, a2);
}

