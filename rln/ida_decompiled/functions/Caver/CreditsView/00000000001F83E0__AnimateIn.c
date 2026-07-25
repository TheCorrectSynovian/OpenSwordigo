/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F83E0
 * Mangled: ._ZN5Caver11CreditsView9AnimateInEv
 * Demangled: Caver::CreditsView::AnimateIn(void)
 *
 * Callers: 1
 *   0x000000000038DAFC  Caver::CreditsViewController::ViewDidAppear(void)
 *
 * Callees: 1
 *   0x000000000038CF88  Caver::CreditsView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F83E8 string=0x00000000001F83EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CreditsView::AnimateIn(Caver::CreditsView *this)
{
  return _ZN5Caver11CreditsView9AnimateInEv(this);
}

