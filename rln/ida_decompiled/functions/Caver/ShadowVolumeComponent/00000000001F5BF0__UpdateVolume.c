/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5BF0
 * Mangled: ._ZN5Caver21ShadowVolumeComponent12UpdateVolumeEv
 * Demangled: Caver::ShadowVolumeComponent::UpdateVolume(void)
 *
 * Callers: 1
 *   0x0000000000236964  Caver::ShadowVolumeComponent::Draw(Caver::RenderingContext *,boost::intrusive_ptr<Caver::LightComponent> const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000236664  Caver::ShadowVolumeComponent::UpdateVolume(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5BF8 string=0x00000000001F5BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShadowVolumeComponent::UpdateVolume(Caver::ShadowVolumeComponent *this)
{
  return _ZN5Caver21ShadowVolumeComponent12UpdateVolumeEv(this);
}

