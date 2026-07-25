/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033DE0C
 * Mangled: _ZN5Caver30ConfigureOverlayViewControllerC2Ev
 * Demangled: Caver::ConfigureOverlayViewController::ConfigureOverlayViewController(void)
 *
 * Callers: 1
 *   0x0000000000200A60  Caver::ConfigureOverlayViewController::ConfigureOverlayViewController(void)
 *
 * Callees: 1
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000033DE1C string=0x000000000033DE20 "H"
 *   insn=0x000000000033DE1C string=0x00000000001F40B0 "P'"
 *   insn=0x000000000033DE20 string=0x000000000033DE24 "-G"
 *   insn=0x000000000033DE2C string=0x000000000033DE30 "\tA"
 *   insn=0x000000000033DE30 string=0x000000000033DE34 "!"
 *   insn=0x000000000033DE34 string=0x000000000033DE38 "i"
 *   insn=0x000000000033DE38 string=0x000000000033DE3C "h&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ConfigureOverlayViewController::ConfigureOverlayViewController(
        Caver::ConfigureOverlayViewController *this)
{
  __int64 result; // x0

  result = Caver::GUIViewController::GUIViewController(this);
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *(_QWORD *)this = off_6CAA60;
  *((_QWORD *)this + 9) = off_6CAAD8;
  return result;
}

