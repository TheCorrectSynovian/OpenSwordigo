/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041C798
 * Mangled: _ZN5Caver11LevelUpView7DismissEv
 * Demangled: Caver::LevelUpView::Dismiss(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8750  Caver::GUIView::DismissModalView(Caver::GUIView*)
 *
 * Referenced strings: 4
 *   insn=0x000000000041C7A4 string=0x000000000041C7A8 "`z@"
 *   insn=0x000000000041C7AC string=0x000000000041C7B0 ""
 *   insn=0x000000000041C7B4 string=0x000000000041C7B8 ""
 *   insn=0x000000000041C7D0 string=0x00000000001F8750 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LevelUpView::Dismiss(Caver::LevelUpView *this)
{
  void (__fastcall ***v2)(_QWORD, Caver::LevelUpView *); // x0

  v2 = (void (__fastcall ***)(_QWORD, Caver::LevelUpView *))*((_QWORD *)this + 30);
  if ( v2 )
    (**v2)(v2, this);
  Caver::GUIView::DismissModalView();
}

