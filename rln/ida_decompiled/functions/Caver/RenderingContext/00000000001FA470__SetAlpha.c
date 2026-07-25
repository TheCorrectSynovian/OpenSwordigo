/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA470
 * Mangled: ._ZN5Caver16RenderingContext8SetAlphaEf
 * Demangled: Caver::RenderingContext::SetAlpha(float)
 *
 * Callers: 3
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x00000000002AE884  Caver::PortalEffectComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *
 * Callees: 1
 *   0x000000000048B4BC  Caver::RenderingContext::SetAlpha(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA478 string=0x00000000001FA47C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetAlpha(Caver::RenderingContext *this, float a2)
{
  return _ZN5Caver16RenderingContext8SetAlphaEf(this, a2);
}

