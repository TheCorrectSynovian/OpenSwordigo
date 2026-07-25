/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE6B0
 * Mangled: ._ZN5Caver21ShadowVolumeComponent4DrawEPNS_16RenderingContextERKN5boost13intrusive_ptrINS_14LightComponentEEERKNS_7Matrix4E
 * Demangled: Caver::ShadowVolumeComponent::Draw(Caver::RenderingContext *,boost::intrusive_ptr<Caver::LightComponent> const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000236964  Caver::ShadowVolumeComponent::Draw(Caver::RenderingContext *,boost::intrusive_ptr<Caver::LightComponent> const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE6B8 string=0x00000000001FE6BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShadowVolumeComponent::Draw(Caver::ShadowVolumeComponent *this, int a2, int a3, float *a4)
{
  return _ZN5Caver21ShadowVolumeComponent4DrawEPNS_16RenderingContextERKN5boost13intrusive_ptrINS_14LightComponentEEERKNS_7Matrix4E(
           this,
           a2,
           a3,
           a4);
}

