/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C5390
 * Mangled: _ZN5Caver7CoinBar8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::CoinBar::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 16
 *   insn=0x00000000003C53A4 string=0x00000000003C53A8 "X"
 *   insn=0x00000000003C53A8 string=0x00000000003C53AC ""
 *   insn=0x00000000003C53CC string=0x00000000003C53D0 ""
 *   insn=0x00000000003C53DC string=0x00000000001F7210 "0'"
 *   insn=0x00000000003C53E8 string=0x00000000001FC450 "0'"
 *   insn=0x00000000003C53F0 string=0x00000000001F3820 "P'"
 *   insn=0x00000000003C53FC string=0x00000000003C5400 ""
 *   insn=0x00000000003C53FC string=0x00000000001F5ED0 "P'"
 *   insn=0x00000000003C540C string=0x00000000003C5410 "d"
 *   insn=0x00000000003C5410 string=0x00000000001FB1A0 "0'"
 *   insn=0x00000000003C5418 string=0x00000000003C541C "a"
 *   insn=0x00000000003C541C string=0x00000000001FCDA0 "0'"
 *   insn=0x00000000003C542C string=0x00000000003C5430 ""
 *   insn=0x00000000003C5430 string=0x00000000003C5434 ""
 *   insn=0x00000000003C5430 string=0x00000000001F9850 "0'"
 *   insn=0x00000000003C545C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CoinBar::DrawRect(
        Caver::CoinBar *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  Caver::Sprite *v4; // x22
  int v6; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v7; // [xsp+8h] [xbp-38h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (Caver::CoinBar *)((char *)this + 248);
  (*(void (__fastcall **)(Caver::CoinBar *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::RenderingContext::SetBlendingEnabled(a2, 1);
  Caver::RenderingContext::SetDefaultBlendFunc(a2);
  Caver::RenderingContext::UseProgram(a2, 1u);
  v6 = -1;
  Caver::RenderingContext::SetColor(a2, (const Caver::Color *)&v6);
  Caver::Sprite::Draw(v4, a2);
  Caver::GUIView::DrawRect();
}

