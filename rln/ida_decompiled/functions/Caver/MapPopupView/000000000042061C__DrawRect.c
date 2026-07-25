/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042061C
 * Mangled: _ZN5Caver12MapPopupView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::MapPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 10
 *   insn=0x0000000000420630 string=0x0000000000420634 "W"
 *   insn=0x0000000000420654 string=0x0000000000420658 ""
 *   insn=0x0000000000420664 string=0x00000000001F7210 "0'"
 *   insn=0x0000000000420670 string=0x0000000000420674 ""
 *   insn=0x0000000000420670 string=0x00000000001F5ED0 "P'"
 *   insn=0x0000000000420684 string=0x00000000001FB1A0 "0'"
 *   insn=0x0000000000420690 string=0x00000000001FCDA0 "0'"
 *   insn=0x00000000004206A0 string=0x00000000004206A4 "kd"
 *   insn=0x00000000004206A4 string=0x00000000001F9850 "0'"
 *   insn=0x00000000004206D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapPopupView::DrawRect(
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
  Caver::GUIView::DrawRect();
}

