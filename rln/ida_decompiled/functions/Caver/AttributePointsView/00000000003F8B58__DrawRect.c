/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F8B58
 * Mangled: _ZN5Caver19AttributePointsView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::AttributePointsView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001F9CB0  Caver::AttributePointsView::UpdateSprite(void)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 12
 *   insn=0x00000000003F8B70 string=0x00000000003F8B74 "7"
 *   insn=0x00000000003F8B74 string=0x00000000001F9850 "0'"
 *   insn=0x00000000003F8B80 string=0x00000000003F8B84 "K"
 *   insn=0x00000000003F8B84 string=0x00000000001F9CB0 "0'"
 *   insn=0x00000000003F8B98 string=0x00000000003F8B9C ""
 *   insn=0x00000000003F8BA8 string=0x00000000001F7210 "0'"
 *   insn=0x00000000003F8BB4 string=0x00000000001F5ED0 "P'"
 *   insn=0x00000000003F8BBC string=0x00000000003F8BC0 "$"
 *   insn=0x00000000003F8BC0 string=0x00000000001FC450 "0'"
 *   insn=0x00000000003F8BC8 string=0x00000000001F3820 "P'"
 *   insn=0x00000000003F8BDC string=0x00000000003F8BE0 "p"
 *   insn=0x00000000003F8BE0 string=0x00000000001FCDA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AttributePointsView::DrawRect(
        Caver::AttributePointsView *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  Caver::GUIView::DrawRect();
  if ( *((_BYTE *)this + 1344) )
  {
    Caver::AttributePointsView::UpdateSprite(this);
    *((_BYTE *)this + 1344) = 0;
  }
  (*(void (__fastcall **)(Caver::AttributePointsView *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::RenderingContext::UseProgram(a2, 3u);
  Caver::RenderingContext::SetBlendingEnabled(a2, 1);
  Caver::RenderingContext::SetDefaultBlendFunc(a2);
  return Caver::Sprite::Draw((Caver::AttributePointsView *)((char *)this + 1256), a2);
}

