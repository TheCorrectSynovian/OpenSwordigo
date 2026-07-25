/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041675C
 * Mangled: _ZN5Caver17ItemInfoPopupView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::ItemInfoPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FC610  Caver::FontText::Draw(Caver::RenderingContext *)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 14
 *   insn=0x0000000000416770 string=0x0000000000416774 "W"
 *   insn=0x0000000000416794 string=0x0000000000416798 ""
 *   insn=0x00000000004167A4 string=0x00000000001F7210 "0'"
 *   insn=0x00000000004167B0 string=0x00000000004167B4 ""
 *   insn=0x00000000004167B0 string=0x00000000001F5ED0 "P'"
 *   insn=0x00000000004167C0 string=0x00000000004167C4 "w"
 *   insn=0x00000000004167C4 string=0x00000000001FB1A0 "0'"
 *   insn=0x00000000004167CC string=0x00000000004167D0 "t"
 *   insn=0x00000000004167D0 string=0x00000000001FCDA0 "0'"
 *   insn=0x00000000004167D8 string=0x00000000004167DC "q"
 *   insn=0x00000000004167E4 string=0x00000000004167E8 "n"
 *   insn=0x00000000004167F4 string=0x00000000001FC610 "0'"
 *   insn=0x0000000000416814 string=0x00000000001F9850 "0'"
 *   insn=0x0000000000416840 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemInfoPopupView::DrawRect(
        Caver::Sprite **this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  int v6; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v7; // [xsp+8h] [xbp-38h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  (*((void (__fastcall **)(Caver::Sprite **, Caver::RenderingContext *, const Caver::Matrix4 *))*this + 37))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::RenderingContext::UseProgram(a2, 1u);
  v6 = -1;
  Caver::RenderingContext::SetColor(a2, (const Caver::Color *)&v6);
  Caver::Sprite::Draw(this[30], a2);
  Caver::Sprite::Draw(this[32], a2);
  Caver::Sprite::Draw(this[34], a2);
  Caver::FontText::Draw(this[36], a2);
  Caver::FontText::Draw(this[38], a2);
  Caver::GUIView::DrawRect();
}

