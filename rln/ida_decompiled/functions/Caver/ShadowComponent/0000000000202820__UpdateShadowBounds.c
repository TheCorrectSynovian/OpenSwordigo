/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202820
 * Mangled: ._ZN5Caver15ShadowComponent18UpdateShadowBoundsEv
 * Demangled: Caver::ShadowComponent::UpdateShadowBounds(void)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000235720  Caver::ShadowComponent::UpdateShadowBounds(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202828 string=0x000000000020282C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShadowComponent::UpdateShadowBounds(Caver::ShadowComponent *this)
{
  return _ZN5Caver15ShadowComponent18UpdateShadowBoundsEv(this);
}

