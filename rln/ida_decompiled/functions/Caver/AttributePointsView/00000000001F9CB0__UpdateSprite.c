/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9CB0
 * Mangled: ._ZN5Caver19AttributePointsView12UpdateSpriteEv
 * Demangled: Caver::AttributePointsView::UpdateSprite(void)
 *
 * Callers: 1
 *   0x00000000003F8B58  Caver::AttributePointsView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000003F8BE4  Caver::AttributePointsView::UpdateSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9CB8 string=0x00000000001F9CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AttributePointsView::UpdateSprite(Caver::AttributePointsView *this)
{
  return _ZN5Caver19AttributePointsView12UpdateSpriteEv(this);
}

