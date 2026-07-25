/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE700
 * Mangled: ._ZN5boost10shared_ptrIN5Caver13GUIBubbleViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIBubbleView>::shared_ptr<Caver::GUIBubbleView>(Caver::GUIBubbleView *)
 *
 * Callers: 1
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *
 * Callees: 1
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE708 string=0x00000000001FE70C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GUIBubbleView>::shared_ptr<Caver::GUIBubbleView>()
{
  JUMPOUT(0x34238C);
}

