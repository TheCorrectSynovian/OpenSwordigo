/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202AB0
 * Mangled: ._ZN5Caver19TextBubbleComponent8ShowTextERKSsf
 * Demangled: Caver::TextBubbleComponent::ShowText(std::string const&,float)
 *
 * Callers: 1
 *   0x000000000023D568  Caver::TextBubbleComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x000000000023CD60  Caver::TextBubbleComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202AB8 string=0x0000000000202ABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::TextBubbleComponent::ShowText()
{
  JUMPOUT(0x23CEA0);
}

