/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003946B0
 * Mangled: _ZN5Caver12MainMenuView19HandleKeyboardEventERKNS_16GUIKeyboardEventE
 * Demangled: Caver::MainMenuView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8060  Caver::AndroidQuitApplication(void)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Referenced strings: 7
 *   insn=0x00000000003946B8 string=0x00000000003946BC "("
 *   insn=0x00000000003946B8 string=0x00000000003946D4 "S"
 *   insn=0x00000000003946C0 string=0x00000000003946C4 "`"
 *   insn=0x00000000003946C4 string=0x00000000003946D0 "d"
 *   insn=0x00000000003946C8 string=0x00000000003946CC "A"
 *   insn=0x00000000003946D0 string=0x00000000001F8060 "0'"
 *   insn=0x00000000003946D4 string=0x00000000001FB420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuView::HandleKeyboardEvent(Caver *a1, __int64 a2)
{
  int v2; // w8

  if ( *(_DWORD *)(a2 + 12) == 1 && ((v2 = *(_DWORD *)(a2 + 16), v2 == 33) || v2 == 27) )
    return Caver::AndroidQuitApplication(a1);
  else
    return Caver::GUIResponder::HandleKeyboardEvent();
}

