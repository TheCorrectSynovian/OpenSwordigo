/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038DAFC
 * Mangled: _ZN5Caver21CreditsViewController13ViewDidAppearEv
 * Demangled: Caver::CreditsViewController::ViewDidAppear(void)
 *
 * Callers: 1
 *   0x000000000038D904  Caver::CreditsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000001F83E0  Caver::CreditsView::AnimateIn(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000038DAFC string=0x000000000038DB00 "8"
 *   insn=0x000000000038DB00 string=0x00000000001F83E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CreditsViewController::ViewDidAppear(Caver::CreditsView **this)
{
  return Caver::CreditsView::AnimateIn(this[9]);
}

