/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200A00
 * Mangled: ._ZN5Caver13GUITextBubble7SetTextERKSsRKNS_5ColorEf
 * Demangled: Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callers: 3
 *   0x000000000023CD60  Caver::TextBubbleComponent::RegisterLibrary(void)
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *   0x000000000042BD20  Caver::NotificationView::NotificationView(void)
 *
 * Callees: 1
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200A08 string=0x0000000000200A0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUITextBubble::SetText()
{
  return _ZN5Caver13GUITextBubble7SetTextERKSsRKNS_5ColorEf();
}

