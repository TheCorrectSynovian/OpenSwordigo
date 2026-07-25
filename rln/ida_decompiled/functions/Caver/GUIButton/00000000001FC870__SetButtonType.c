/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC870
 * Mangled: ._ZN5Caver9GUIButton13SetButtonTypeENS_13GUIButtonTypeE
 * Demangled: Caver::GUIButton::SetButtonType(Caver::GUIButtonType)
 *
 * Callers: 1
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *
 * Callees: 1
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC878 string=0x00000000001FC87C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIButton::SetButtonType()
{
  JUMPOUT(0x4952D4);
}

