/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003FF59C
 * Mangled: _ZN5Caver13CharacterView7DismissEv
 * Demangled: Caver::CharacterView::Dismiss(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD4B0  Caver::CharacterView::AddAnimations(bool)
 *
 * Referenced strings: 4
 *   insn=0x00000000003FF5A8 string=0x00000000003FF5AC "`"
 *   insn=0x00000000003FF5B0 string=0x00000000003FF5B4 ""
 *   insn=0x00000000003FF5B8 string=0x00000000003FF5BC ""
 *   insn=0x00000000003FF5D8 string=0x00000000001FD4B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharacterView::Dismiss(Caver::CharacterView *this)
{
  void (__fastcall ***v2)(_QWORD, Caver::CharacterView *); // x0

  v2 = (void (__fastcall ***)(_QWORD, Caver::CharacterView *))*((_QWORD *)this + 32);
  if ( v2 )
  {
    (**v2)(v2, this);
    *((_QWORD *)this + 32) = 0;
  }
  Caver::CharacterView::AddAnimations(this);
}

