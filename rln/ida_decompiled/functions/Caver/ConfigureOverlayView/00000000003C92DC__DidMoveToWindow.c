/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C92DC
 * Mangled: _ZN5Caver20ConfigureOverlayView15DidMoveToWindowEv
 * Demangled: Caver::ConfigureOverlayView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x00000000003C92A4  Caver::ConfigureOverlayView::~ConfigureOverlayView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000003C92E8 string=0x00000000003C92EC "h"
 *   insn=0x00000000003C92EC string=0x00000000003C92F0 "y@"
 *   insn=0x00000000003C92F8 string=0x00000000003C92FC "h"
 *   insn=0x00000000003C930C string=0x00000000003C9310 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ConfigureOverlayView::DidMoveToWindow(Caver::ConfigureOverlayView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::ConfigureOverlayView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::ConfigureOverlayView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}

