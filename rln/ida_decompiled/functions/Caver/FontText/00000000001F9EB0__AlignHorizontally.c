/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9EB0
 * Mangled: ._ZN5Caver8FontText17AlignHorizontallyENS_16GUITextAlignmentE
 * Demangled: Caver::FontText::AlignHorizontally(Caver::GUITextAlignment)
 *
 * Callers: 2
 *   0x0000000000497B54  Caver::GUILabel::UpdateText(void)
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x00000000004C6280  Caver::FontText::AlignHorizontally(Caver::GUITextAlignment)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9EB8 string=0x00000000001F9EBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FontText::AlignHorizontally(Caver::FontText *this)
{
  return _ZN5Caver8FontText17AlignHorizontallyENS_16GUITextAlignmentE(this);
}

