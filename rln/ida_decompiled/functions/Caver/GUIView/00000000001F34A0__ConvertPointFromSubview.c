/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F34A0
 * Mangled: ._ZNK5Caver7GUIView23ConvertPointFromSubviewERKNS_7Vector2EPKS0_
 * Demangled: Caver::GUIView::ConvertPointFromSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *
 * Callers: 2
 *   0x000000000049C7F0  Caver::GUIScrollView::ConvertPointFromSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *   0x000000000049C8E8  Caver::GUIScrollView::ConvertRectFromSubview(Caver::Rectangle const&,Caver::GUIView const*)
 *
 * Callees: 1
 *   0x00000000004A0DD0  Caver::GUIView::ConvertPointFromSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F34A4 string=0x00000000004A0DD0 "@@H"
 *   insn=0x00000000001F34A8 string=0x00000000001F34AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::ConvertPointFromSubview(
        Caver::GUIView *this,
        const Caver::Vector2 *a2,
        const Caver::GUIView *a3)
{
  return _ZNK5Caver7GUIView23ConvertPointFromSubviewERKNS_7Vector2EPKS0_(this, a2, a3);
}

