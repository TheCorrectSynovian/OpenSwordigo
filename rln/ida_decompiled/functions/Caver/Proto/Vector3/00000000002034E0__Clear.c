/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002034E0
 * Mangled: ._ZN5Caver5Proto7Vector35ClearEv
 * Demangled: Caver::Proto::Vector3::Clear(void)
 *
 * Callers: 12
 *   0x00000000002DA760  Caver::Proto::EditorViewState::Clear(void)
 *   0x0000000000303440  Caver::Proto::ModelComponent::Clear(void)
 *   0x0000000000305558  Caver::Proto::ModelTransformControllerComponent::Clear(void)
 *   0x000000000030EF78  Caver::Proto::ObjectLinkControllerComponent::Clear(void)
 *   0x000000000030FD6C  Caver::Proto::LightComponent::Clear(void)
 *   0x0000000000310958  Caver::Proto::ShadowComponent::Clear(void)
 *   0x000000000031D098  Caver::Proto::ParticleEmitter::Clear(void)
 *   0x000000000031E354  Caver::Proto::ParticleEmitterComponent::Clear(void)
 *   0x00000000003210F4  Caver::Proto::FireEmitterComponent::Clear(void)
 *   0x0000000000323134  Caver::Proto::OrbitControllerComponent::Clear(void)
 *   0x000000000032DA88  Caver::Proto::SpawnPointComponent::Clear(void)
 *   0x0000000000332164  Caver::Proto::PortalEffectComponent::Clear(void)
 *
 * Callees: 1
 *   0x00000000002CE848  Caver::Proto::Vector3::Clear(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002034E4 string=0x00000000002CE848 "`@9h"
 *   insn=0x00000000002034E8 string=0x00000000002034EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Vector3::Clear(Caver::Proto::Vector3 *this)
{
  return _ZN5Caver5Proto7Vector35ClearEv(this);
}

