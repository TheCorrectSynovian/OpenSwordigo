/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A1C00
 * Mangled: _ZN5Caver9GUIWindowC2Ev
 * Demangled: Caver::GUIWindow::GUIWindow(void)
 *
 * Callers: 1
 *   0x00000000002038A0  Caver::GUIWindow::GUIWindow(void)
 *
 * Callees: 1
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 32
 *   insn=0x00000000004A1C10 string=0x00000000004A1C14 "("
 *   insn=0x00000000004A1C14 string=0x00000000004A1C18 "eD"
 *   insn=0x00000000004A1C18 string=0x00000000004A1C1C "i"
 *   insn=0x00000000004A1C20 string=0x00000000004A1C24 "`"
 *   insn=0x00000000004A1C24 string=0x00000000004A1C28 "i"
 *   insn=0x00000000004A1C28 string=0x00000000004A1C2C "ib"
 *   insn=0x00000000004A1C2C string=0x00000000004A1C30 "`"
 *   insn=0x00000000004A1C30 string=0x00000000004A1C34 "i"
 *   insn=0x00000000004A1C38 string=0x00000000004A1C3C "!"
 *   insn=0x00000000004A1C3C string=0x00000000004A1C40 "\tA"
 *   insn=0x00000000004A1C40 string=0x00000000004A1C44 "i"
 *   insn=0x00000000004A1C44 string=0x00000000004A1C48 "\t!"
 *   insn=0x00000000004A1C48 string=0x00000000004A1C4C """
 *   insn=0x00000000004A1C4C string=0x00000000004A1C50 ""
 *   insn=0x00000000004A1C50 string=0x00000000004A1C54 "i""
 *   insn=0x00000000004A1C58 string=0x00000000004A1C5C "hb"
 *   insn=0x00000000004A1C64 string=0x00000000004A1C68 "`"
 *   insn=0x00000000004A1C68 string=0x00000000004A1C6C "b>"
 *   insn=0x00000000004A1C70 string=0x00000000004A1C74 "h"
 *   insn=0x00000000004A1C74 string=0x00000000004A1C78 " "
 *   insn=0x00000000004A1C78 string=0x00000000004A1C7C "i"
 *   insn=0x00000000004A1C7C string=0x00000000004A1C80 "i~"
 *   insn=0x00000000004A1C80 string=0x00000000004A1C84 "i"
 *   insn=0x00000000004A1C84 string=0x00000000004A1C88 "h""
 *   insn=0x00000000004A1C88 string=0x00000000004A1C8C "h"
 *   insn=0x00000000004A1C8C string=0x00000000004A1C90 "i&"
 *   insn=0x00000000004A1C90 string=0x00000000004A1C94 "i"
 *   insn=0x00000000004A1C94 string=0x00000000004A1C98 "a"
 *   insn=0x00000000004A1CA0 string=0x00000000004A1CA4 "!"
 *   insn=0x00000000004A1CA4 string=0x00000000004A1CA8 "i""
 *   insn=0x00000000004A1CB8 string=0x00000000004A1CBC " "
 *   insn=0x00000000004A1CBC string=0x00000000004A1CC0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::GUIWindow::GUIWindow(Caver::GUIWindow *this)
{
  long double result; // q0
  __int128 v3; // q2

  Caver::GUIView::GUIView(this);
  *(_OWORD *)&result = 0u;
  *((_OWORD *)this + 19) = 0u;
  *((_OWORD *)this + 20) = 0u;
  *((_QWORD *)this + 39) = (char *)this + 296;
  *((_QWORD *)this + 40) = (char *)this + 296;
  *((_OWORD *)this + 22) = 0u;
  *((_OWORD *)this + 23) = 0u;
  *((_QWORD *)this + 45) = (char *)this + 344;
  *((_QWORD *)this + 46) = (char *)this + 344;
  *(_QWORD *)this = off_6D69E0;
  *(_QWORD *)&v3 = &off_6D6B58;
  *((_QWORD *)&v3 + 1) = off_6D6B88;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 43) = 0;
  *((_OWORD *)this + 16) = 0u;
  *((_OWORD *)this + 17) = 0u;
  *((_OWORD *)this + 15) = v3;
  *(_OWORD *)((char *)this + 408) = 0u;
  *(_OWORD *)((char *)this + 392) = 0u;
  *((_QWORD *)this + 51) = (char *)this + 392;
  *((_QWORD *)this + 52) = (char *)this + 392;
  *((_QWORD *)this + 53) = 0;
  *((_QWORD *)this + 54) = (char *)this + 432;
  *((_QWORD *)this + 55) = (char *)this + 432;
  *((_QWORD *)this + 56) = (char *)this + 448;
  *((_QWORD *)this + 57) = (char *)this + 448;
  *((_QWORD *)this + 59) = 0x3F4CCCCD00000000LL;
  *((_QWORD *)this + 58) = 0;
  *(_QWORD *)((char *)this + 508) = 0;
  *(_OWORD *)((char *)this + 488) = 0u;
  *((_BYTE *)this + 504) = 0;
  *((_QWORD *)this + 67) = 0;
  *(_OWORD *)((char *)this + 520) = 0u;
  *((_BYTE *)this + 544) = 1;
  return result;
}

