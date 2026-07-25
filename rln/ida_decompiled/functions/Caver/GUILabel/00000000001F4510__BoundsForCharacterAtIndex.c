/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4510
 * Mangled: ._ZN5Caver8GUILabel25BoundsForCharacterAtIndexEi
 * Demangled: Caver::GUILabel::BoundsForCharacterAtIndex(int)
 *
 * Callers: 1
 *   0x00000000004B9CB0  Caver::GUITextFieldImpl::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000049823C  Caver::GUILabel::BoundsForCharacterAtIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4518 string=0x00000000001F451C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUILabel::BoundsForCharacterAtIndex(Caver::GUILabel *this, int a2)
{
  return _ZN5Caver8GUILabel25BoundsForCharacterAtIndexEi(this, a2);
}

