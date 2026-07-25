/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD4A0
 * Mangled: ._ZNK5Caver7GUIView21ConvertPointToSubviewERKNS_7Vector2EPKS0_
 * Demangled: Caver::GUIView::ConvertPointToSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *
 * Callers: 2
 *   0x000000000049C780  Caver::GUIScrollView::ConvertPointToSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *   0x000000000049C860  Caver::GUIScrollView::ConvertRectToSubview(Caver::Rectangle const&,Caver::GUIView const*)
 *
 * Callees: 1
 *   0x00000000004A0DB4  Caver::GUIView::ConvertPointToSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD4A4 string=0x00000000004A0DB4 "@@G"
 *   insn=0x00000000001FD4A8 string=0x00000000001FD4AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::ConvertPointToSubview(
        Caver::GUIView *this,
        const Caver::Vector2 *a2,
        const Caver::GUIView *a3)
{
  return _ZNK5Caver7GUIView21ConvertPointToSubviewERKNS_7Vector2EPKS0_(this, a2, a3);
}

