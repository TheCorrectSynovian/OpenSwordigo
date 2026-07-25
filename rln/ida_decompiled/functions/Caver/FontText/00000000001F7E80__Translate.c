/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7E80
 * Mangled: ._ZN5Caver8FontText9TranslateERKNS_7Vector2E
 * Demangled: Caver::FontText::Translate(Caver::Vector2 const&)
 *
 * Callers: 4
 *   0x00000000003CE554  Caver::ExperienceBar::UpdateText(void)
 *   0x00000000003E3474  Caver::TargetFrame::UpdateInfo(void)
 *   0x00000000003E3FAC  Caver::TargetFrame::UpdateHealthText(void)
 *   0x00000000004AA9A8  Caver::GUITextBubble::UpdateLayout(void)
 *
 * Callees: 1
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7E88 string=0x00000000001F7E8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::FontText::Translate()
{
  JUMPOUT(0x4C6210);
}

