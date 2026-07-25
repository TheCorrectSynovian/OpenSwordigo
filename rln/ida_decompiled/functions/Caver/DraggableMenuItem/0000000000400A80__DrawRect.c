/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000400A80
 * Mangled: _ZN5Caver17DraggableMenuItem8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::DraggableMenuItem::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F8B80  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 6
 *   insn=0x0000000000400A98 string=0x0000000000400A9C "m"
 *   insn=0x0000000000400A9C string=0x00000000001F9850 "0'"
 *   insn=0x0000000000400AAC string=0x0000000000400AB0 ""
 *   insn=0x0000000000400ABC string=0x00000000001F7210 "0'"
 *   insn=0x0000000000400AD0 string=0x0000000000400AD4 "+"
 *   insn=0x0000000000400AD4 string=0x00000000001F8B80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DraggableMenuItem::DrawRect(
        Caver::DraggableMenuItem *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  Caver::GUIView::DrawRect();
  (*(void (__fastcall **)(Caver::DraggableMenuItem *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  return Caver::GUITexturedRect::Draw((Caver::DraggableMenuItem *)((char *)this + 272), a2);
}

