/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000491DB8
 * Mangled: _ZN5Caver12GUIAlertView14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::GUIAlertView::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000491DB8 string=0x0000000000491DBC ")"
 *   insn=0x0000000000491DC0 string=0x0000000000491DC4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::TouchCancelled(__int64 result, _QWORD *a2)
{
  if ( *(_QWORD *)(result + 432) == *a2 )
    *(_QWORD *)(result + 432) = 0;
  return result;
}

