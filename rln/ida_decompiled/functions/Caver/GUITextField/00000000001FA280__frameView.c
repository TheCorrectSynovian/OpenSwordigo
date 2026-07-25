/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA280
 * Mangled: ._ZN5Caver12GUITextField9frameViewEv
 * Demangled: Caver::GUITextField::frameView(void)
 *
 * Callers: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Callees: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA288 string=0x00000000001FA28C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUITextField::frameView(Caver::GUITextField *this)
{
  JUMPOUT(0x39F944);
}

