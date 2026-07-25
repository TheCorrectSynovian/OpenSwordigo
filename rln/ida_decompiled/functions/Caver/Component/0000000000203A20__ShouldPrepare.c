/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203A20
 * Mangled: ._ZNK5Caver9Component13ShouldPrepareEv
 * Demangled: Caver::Component::ShouldPrepare(void)
 *
 * Callers: 6
 *   0x000000000021F9D8  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *   0x000000000021FD9C  Caver::KeyframeAnimationComponent::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *   0x000000000021FDFC  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *   0x0000000000221048  Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000223F44  Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *   0x00000000002A5938  Caver::ParticleComponent::AddTypeToParticleSystem(Caver::ParticleSystem *)
 *
 * Callees: 1
 *   0x0000000000242128  Caver::Component::ShouldPrepare(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203A24 string=0x0000000000242128 ""
 *   insn=0x0000000000203A28 string=0x0000000000203A2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Component::ShouldPrepare(Caver::Component *this)
{
  return _ZNK5Caver9Component13ShouldPrepareEv(this);
}

