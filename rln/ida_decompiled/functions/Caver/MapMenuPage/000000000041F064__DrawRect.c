/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041F064
 * Mangled: _ZN5Caver11MapMenuPage8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::MapMenuPage::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *
 * Referenced strings: 9
 *   insn=0x000000000041F084 string=0x000000000041F088 ""
 *   insn=0x000000000041F094 string=0x000000000041F098 "^`"
 *   insn=0x000000000041F098 string=0x00000000001F7210 "0'"
 *   insn=0x000000000041F0A4 string=0x00000000001FC450 "0'"
 *   insn=0x000000000041F0AC string=0x00000000001F3820 "P'"
 *   insn=0x000000000041F0B8 string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000041F0CC string=0x00000000001F9850 "0'"
 *   insn=0x000000000041F0DC string=0x000000000041F0E0 ""
 *   insn=0x000000000041F0F4 string=0x000000000041F0F8 "F`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapMenuPage::DrawRect(
        Caver::MapMenuPage *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  (*(void (__fastcall **)(Caver::MapMenuPage *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this
                                                                                                  + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::RenderingContext::SetBlendingEnabled(a2, 1);
  Caver::RenderingContext::SetDefaultBlendFunc(a2);
  Caver::RenderingContext::UseProgram(a2, 0);
  Caver::GUIView::DrawRect();
  (*(void (__fastcall **)(Caver::MapMenuPage *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this
                                                                                                  + 296LL))(
    this,
    a2,
    a4);
  return Caver::RenderingContext::SetIdentityMatrix(a2);
}

