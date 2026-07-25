/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDD10
 * Mangled: ._ZN5Caver14GUIPopoverView20PresentFromRectangleERKNS_9RectangleEj
 * Demangled: Caver::GUIPopoverView::PresentFromRectangle(Caver::Rectangle const&,uint)
 *
 * Callers: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004D4554  Caver::GUIPopoverView::PresentFromRectangle(Caver::Rectangle const&,uint)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDD14 string=0x00000000004D4554 " "
 *   insn=0x00000000001FDD18 string=0x00000000001FDD1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIPopoverView::PresentFromRectangle(
        Caver::GUIPopoverView *this,
        const Caver::Rectangle *a2,
        unsigned int a3)
{
  return _ZN5Caver14GUIPopoverView20PresentFromRectangleERKNS_9RectangleEj(this, a2, a3);
}

