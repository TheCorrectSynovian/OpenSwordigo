/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049248C
 * Mangled: _ZN5Caver12GUIAlertView15DidMoveToWindowEv
 * Demangled: Caver::GUIAlertView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x0000000000492454  Caver::GUIAlertView::~GUIAlertView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000492498 string=0x000000000049249C "h"
 *   insn=0x000000000049249C string=0x00000000004924A0 "y@"
 *   insn=0x00000000004924A8 string=0x00000000004924AC "h"
 *   insn=0x00000000004924BC string=0x00000000004924C0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::DidMoveToWindow(Caver::GUIAlertView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::GUIAlertView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::GUIAlertView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}

