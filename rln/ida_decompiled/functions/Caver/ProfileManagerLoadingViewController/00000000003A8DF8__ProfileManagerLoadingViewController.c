/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A8DF8
 * Mangled: _ZN5Caver35ProfileManagerLoadingViewControllerC2Ev
 * Demangled: Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(void)
 *
 * Callers: 2
 *   0x00000000001FD890  Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(void)
 *   0x00000000003A8C90  Caver::ProfileManagerLoadingView::~ProfileManagerLoadingView()
 *
 * Callees: 1
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000003A8E08 string=0x00000000001F40B0 "P'"
 *   insn=0x00000000003A8E0C string=0x00000000003A8E10 ""
 *   insn=0x00000000003A8E1C string=0x00000000003A8E20 "A"
 *   insn=0x00000000003A8E20 string=0x00000000003A8E24 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(
        Caver::ProfileManagerLoadingViewController *this)
{
  __int64 result; // x0

  result = Caver::GUIViewController::GUIViewController(this);
  *((_BYTE *)this + 72) = 0;
  *(_QWORD *)((char *)this + 84) = 0;
  *(_QWORD *)((char *)this + 76) = 0;
  *(_QWORD *)this = off_6CEB70;
  *((_DWORD *)this + 23) = 0;
  return result;
}

