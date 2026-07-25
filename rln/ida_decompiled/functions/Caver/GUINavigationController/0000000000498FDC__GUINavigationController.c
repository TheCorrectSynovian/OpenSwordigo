/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000498FDC
 * Mangled: _ZN5Caver23GUINavigationControllerC2Ev
 * Demangled: Caver::GUINavigationController::GUINavigationController(void)
 *
 * Callers: 2
 *   0x00000000001F4E10  Caver::GUINavigationController::GUINavigationController(void)
 *   0x0000000000498FA4  Caver::GUILoadingView::~GUILoadingView()
 *
 * Callees: 1
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *
 * Referenced strings: 8
 *   insn=0x0000000000498FE8 string=0x0000000000498FEC "1l"
 *   insn=0x0000000000498FEC string=0x0000000000498FF0 "h"
 *   insn=0x0000000000498FEC string=0x00000000001F40B0 "P'"
 *   insn=0x0000000000498FF0 string=0x0000000000498FF4 ""
 *   insn=0x0000000000498FFC string=0x0000000000499000 "\tA"
 *   insn=0x0000000000499000 string=0x0000000000499004 "!"
 *   insn=0x0000000000499004 string=0x0000000000499008 "i"
 *   insn=0x0000000000499008 string=0x000000000049900C "h&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUINavigationController::GUINavigationController(Caver::GUINavigationController *this)
{
  __int64 result; // x0

  result = Caver::GUIViewController::GUIViewController(this);
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *(_QWORD *)this = off_6D61F0;
  *((_QWORD *)this + 9) = &off_6D6268;
  return result;
}

