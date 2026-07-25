/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4AC0
 * Mangled: ._ZNK5Caver7GUIView32ConvertRectFromSubviewUsingFrameERKNS_9RectangleEPKS0_S3_
 * Demangled: Caver::GUIView::ConvertRectFromSubviewUsingFrame(Caver::Rectangle const&,Caver::GUIView const*,Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x000000000049C970  Caver::GUIScrollView::ConvertRectFromSubviewUsingFrame(Caver::Rectangle const&,Caver::GUIView const*,Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x00000000004A0E34  Caver::GUIView::ConvertRectFromSubviewUsingFrame(Caver::Rectangle const&,Caver::GUIView const*,Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4AC4 string=0x00000000004A0E34 " "
 *   insn=0x00000000001F4AC8 string=0x00000000001F4ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::ConvertRectFromSubviewUsingFrame(
        Caver::GUIView *this,
        const Caver::Rectangle *a2,
        const Caver::GUIView *a3,
        const Caver::Rectangle *a4)
{
  return _ZNK5Caver7GUIView32ConvertRectFromSubviewUsingFrameERKNS_9RectangleEPKS0_S3_(this, a2, a3, a4);
}

