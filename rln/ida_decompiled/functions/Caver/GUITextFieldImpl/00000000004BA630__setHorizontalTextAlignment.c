/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA630
 * Mangled: _ZN5Caver16GUITextFieldImpl26setHorizontalTextAlignmentENS_16GUITextAlignmentE
 * Demangled: Caver::GUITextFieldImpl::setHorizontalTextAlignment(Caver::GUITextAlignment)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BA638 string=0x00000000001F5840 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUITextFieldImpl::setHorizontalTextAlignment(__int64 a1, int a2)
{
  Caver::GUILabel *v2; // x0

  v2 = *(Caver::GUILabel **)(a1 + 328);
  *((_DWORD *)v2 + 76) = a2;
  Caver::GUILabel::UpdateBounds(v2);
}

