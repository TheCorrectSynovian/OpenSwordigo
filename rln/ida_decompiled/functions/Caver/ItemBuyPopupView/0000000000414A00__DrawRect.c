/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000414A00
 * Mangled: _ZN5Caver16ItemBuyPopupView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::ItemBuyPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
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
 * Referenced strings: 11
 *   insn=0x0000000000414A14 string=0x0000000000414A18 "W"
 *   insn=0x0000000000414A38 string=0x0000000000414A3C ""
 *   insn=0x0000000000414A48 string=0x00000000001F7210 "0'"
 *   insn=0x0000000000414A54 string=0x0000000000414A58 ""
 *   insn=0x0000000000414A54 string=0x00000000001F5ED0 "P'"
 *   insn=0x0000000000414A68 string=0x00000000001FB1A0 "0'"
 *   insn=0x0000000000414A74 string=0x00000000001FCDA0 "0'"
 *   insn=0x0000000000414A98 string=0x00000000001FC610 "0'"
 *   insn=0x0000000000414AA8 string=0x0000000000414AAC "i"
 *   insn=0x0000000000414AAC string=0x00000000001F9850 "0'"
 *   insn=0x0000000000414AD8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemBuyPopupView::DrawRect(
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
  Caver::Sprite::Draw(this[38], a2);
  Caver::Sprite::Draw(this[40], a2);
  Caver::FontText::Draw(this[32], a2);
  Caver::GUIView::DrawRect();
}

