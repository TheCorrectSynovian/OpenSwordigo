/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D7B64
 * Mangled: _ZN5Caver15GameOverlayView16ControlForButtonEPNS_9GUIButtonE
 * Demangled: Caver::GameOverlayView::ControlForButton(Caver::GUIButton *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000003D7B68 string=0x00000000003D7B6C "`"
 *   insn=0x00000000003D7B6C string=0x00000000003D7B70 ""
 *   insn=0x00000000003D7B74 string=0x00000000003D7B78 "@"
 *   insn=0x00000000003D7B78 string=0x00000000003D7B7C ""
 *   insn=0x00000000003D7B80 string=0x00000000003D7B84 " "
 *   insn=0x00000000003D7B84 string=0x00000000003D7B88 ""
 *   insn=0x00000000003D7B90 string=0x00000000003D7B94 ""
 *   insn=0x00000000003D7B9C string=0x00000000003D7BA0 ""
 *   insn=0x00000000003D7BA8 string=0x00000000003D7BAC ""
 *   insn=0x00000000003D7BB4 string=0x00000000003D7BB8 ""
 *   insn=0x00000000003D7BC0 string=0x00000000003D7BC4 ""
 *   insn=0x00000000003D7BC8 string=0x00000000003D7BCC "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::ControlForButton(Caver::GUIButton **this, Caver::GUIButton *a2)
{
  if ( this[40] == a2 )
    return 1;
  if ( this[42] == a2 )
    return 2;
  if ( this[44] == a2 )
    return 3;
  if ( this[46] == a2 )
    return 4;
  if ( this[48] == a2 )
    return 5;
  if ( this[50] == a2 )
    return 6;
  if ( this[55] == a2 )
    return 7;
  if ( this[57] == a2 )
    return 8;
  if ( this[59] == a2 )
    return 9;
  return 0;
}

