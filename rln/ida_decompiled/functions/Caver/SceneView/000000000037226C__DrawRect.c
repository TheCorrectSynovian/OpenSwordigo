/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037226C
 * Mangled: _ZN5Caver9SceneView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::SceneView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FEB10  .glDepthFunc
 *   0x0000000000202770  Caver::RenderingContext::SetDepthTestEnabled(bool)
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Referenced strings: 15
 *   insn=0x0000000000372280 string=0x0000000000372284 "W"
 *   insn=0x00000000003722A4 string=0x00000000003722A8 ""
 *   insn=0x00000000003722B4 string=0x00000000001F7210 "0'"
 *   insn=0x00000000003722B8 string=0x00000000003722BC "h"
 *   insn=0x00000000003722C4 string=0x00000000003722C8 "*A"
 *   insn=0x00000000003722D8 string=0x00000000003722DC "]("
 *   insn=0x00000000003722DC string=0x00000000001FC450 "0'"
 *   insn=0x00000000003722E0 string=0x00000000003722E4 "O"
 *   insn=0x00000000003722E4 string=0x00000000001F3820 "P'"
 *   insn=0x00000000003722FC string=0x0000000000372300 " @"
 *   insn=0x0000000000372310 string=0x0000000000372314 ""
 *   insn=0x0000000000372314 string=0x0000000000372318 ""
 *   insn=0x000000000037232C string=0x0000000000372330 "H"
 *   insn=0x0000000000372330 string=0x00000000001F9850 "0'"
 *   insn=0x000000000037235C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneView::DrawRect(
        Caver::SceneView *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  int v7; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v8; // [xsp+8h] [xbp-38h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  (*(void (__fastcall **)(Caver::SceneView *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  if ( *((_BYTE *)this + 416) )
  {
    Caver::RenderingContext::SetDepthTestEnabled(a2, 1);
    glDepthFunc();
    Caver::RenderingContext::SetBlendingEnabled(a2, 1);
    Caver::RenderingContext::SetDefaultBlendFunc(a2);
    v7 = 0;
    Caver::RenderingContext::FillRect(a2, (Caver::SceneView *)((char *)this + 132), (const Caver::Color *)&v7, 1.0);
    glDepthFunc();
  }
  (*(void (__fastcall **)(_QWORD, Caver::RenderingContext *, const Caver::Matrix4 *))(**((_QWORD **)this + 30) + 32LL))(
    *((_QWORD *)this + 30),
    a2,
    a4);
  Caver::GUIView::DrawRect();
}

