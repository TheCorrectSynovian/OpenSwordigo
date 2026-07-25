/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D64EC
 * Mangled: _ZN5Caver15GameOverlayView11CancelInputEv
 * Demangled: Caver::GameOverlayView::CancelInput(void)
 *
 * Callers: 2
 *   0x00000000001F71C0  Caver::GameOverlayView::CancelInput(void)
 *   0x00000000003D4C10  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callees: 1
 *   0x00000000001FF930  Caver::GUIButton::CancelPress(void)
 *
 * Referenced strings: 10
 *   insn=0x00000000003D64F8 string=0x00000000003D64FC "`"
 *   insn=0x00000000003D6500 string=0x00000000003D6504 "`"
 *   insn=0x00000000003D6504 string=0x00000000003D6508 "\n"
 *   insn=0x00000000003D6508 string=0x00000000003D650C "`"
 *   insn=0x00000000003D650C string=0x00000000003D6510 ""
 *   insn=0x00000000003D6510 string=0x00000000003D6514 "`"
 *   insn=0x00000000003D6518 string=0x00000000003D651C "`"
 *   insn=0x00000000003D6520 string=0x00000000003D6524 "`"
 *   insn=0x00000000003D6528 string=0x00000000003D652C "`"
 *   insn=0x00000000003D6530 string=0x00000000003D6534 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::CancelInput(Caver::GUIButton **this)
{
  Caver::GUIButton::CancelPress(this[40]);
  Caver::GUIButton::CancelPress(this[42]);
  Caver::GUIButton::CancelPress(this[44]);
  Caver::GUIButton::CancelPress(this[46]);
  Caver::GUIButton::CancelPress(this[48]);
  Caver::GUIButton::CancelPress(this[50]);
  Caver::GUIButton::CancelPress(this[55]);
  return Caver::GUIButton::CancelPress(this[57]);
}

