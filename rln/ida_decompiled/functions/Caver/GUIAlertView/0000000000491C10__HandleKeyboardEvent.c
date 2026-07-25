/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000491C10
 * Mangled: _ZN5Caver12GUIAlertView19HandleKeyboardEventERKNS_16GUIKeyboardEventE
 * Demangled: Caver::GUIAlertView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8060  Caver::AndroidQuitApplication(void)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000001FDB00  Caver::GUIAlertView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Referenced strings: 20
 *   insn=0x0000000000491C18 string=0x0000000000491C1C "("
 *   insn=0x0000000000491C20 string=0x0000000000491C24 "`"
 *   insn=0x0000000000491C24 string=0x0000000000491C30 ""
 *   insn=0x0000000000491C28 string=0x0000000000491C2C "A"
 *   insn=0x0000000000491C30 string=0x0000000000491C34 "\t"
 *   insn=0x0000000000491C34 string=0x0000000000491C38 "J"
 *   insn=0x0000000000491C38 string=0x0000000000491C3C "J"
 *   insn=0x0000000000491C3C string=0x0000000000491C40 "\t"
 *   insn=0x0000000000491C40 string=0x0000000000491C44 "?"
 *   insn=0x0000000000491C40 string=0x0000000000491C60 "_"
 *   insn=0x0000000000491C48 string=0x0000000000491C4C "?"
 *   insn=0x0000000000491C4C string=0x0000000000491C50 "*"
 *   insn=0x0000000000491C50 string=0x0000000000491C54 "\n"
 *   insn=0x0000000000491C54 string=0x0000000000491C58 "\n"
 *   insn=0x0000000000491C58 string=0x0000000000491C78 ")}|"
 *   insn=0x0000000000491C5C string=0x00000000001F8060 "0'"
 *   insn=0x0000000000491C68 string=0x0000000000491C6C "?"
 *   insn=0x0000000000491C6C string=0x0000000000491C70 "+"
 *   insn=0x0000000000491C74 string=0x00000000001FB420 "0'"
 *   insn=0x0000000000491C80 string=0x00000000001FDB00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIAlertView::HandleKeyboardEvent(__int64 a1, __int64 a2)
{
  int v2; // w8
  int v3; // w9
  __int64 v4; // x10

  if ( *(_DWORD *)(a2 + 12) == 1
    && ((v2 = *(_DWORD *)(a2 + 16), v2 == 33) || v2 == 27)
    && ((v3 = *(_DWORD *)(a1 + 416), v4 = (*(_QWORD *)(a1 + 352) - *(_QWORD *)(a1 + 344)) >> 4, (v3 & 0x80000000) == 0)
     && v3 < (int)v4
     || (_DWORD)v4 == 1) )
  {
    if ( *(_BYTE *)(a1 + 420) )
      Caver::AndroidQuitApplication((Caver *)a1);
    else
      Caver::GUIAlertView::ButtonPressed();
  }
  else
  {
    Caver::GUIResponder::HandleKeyboardEvent();
  }
}

