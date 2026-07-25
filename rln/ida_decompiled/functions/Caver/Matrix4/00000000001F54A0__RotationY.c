/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F54A0
 * Mangled: ._ZN5Caver7Matrix49RotationYEf
 * Demangled: Caver::Matrix4::RotationY(float)
 *
 * Callers: 6
 *   0x0000000000224388  Caver::ModelComponent::UpdateBounds(void)
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x000000000022A1A0  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AB2D8  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002CB828  Caver::WeaponGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x00000000004AF3A0  Caver::Matrix4::RotationY(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F54A8 string=0x00000000001F54AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::RotationY(Caver::Matrix4 *this, float a2)
{
  return _ZN5Caver7Matrix49RotationYEf(this, a2);
}

