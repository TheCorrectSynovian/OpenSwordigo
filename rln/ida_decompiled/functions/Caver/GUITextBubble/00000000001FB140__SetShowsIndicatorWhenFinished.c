/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB140
 * Mangled: ._ZN5Caver13GUITextBubble29SetShowsIndicatorWhenFinishedEb
 * Demangled: Caver::GUITextBubble::SetShowsIndicatorWhenFinished(bool)
 *
 * Callers: 2
 *   0x000000000023D4BC  Caver::TextBubbleComponent::SetHandleTouches(bool)
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *
 * Callees: 1
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB148 string=0x00000000001FB14C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUITextBubble::SetShowsIndicatorWhenFinished(Caver::GUITextBubble *this)
{
  JUMPOUT(0x4AA4B0);
}

