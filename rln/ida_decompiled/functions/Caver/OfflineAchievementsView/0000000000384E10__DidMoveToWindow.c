/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000384E10
 * Mangled: _ZN5Caver23OfflineAchievementsView15DidMoveToWindowEv
 * Demangled: Caver::OfflineAchievementsView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x0000000000384DD8  Caver::OfflineAchievementsView::~OfflineAchievementsView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000384E1C string=0x0000000000384E20 "h"
 *   insn=0x0000000000384E20 string=0x0000000000384E24 "y@"
 *   insn=0x0000000000384E2C string=0x0000000000384E30 "h"
 *   insn=0x0000000000384E40 string=0x0000000000384E44 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OfflineAchievementsView::DidMoveToWindow(Caver::OfflineAchievementsView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::OfflineAchievementsView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::OfflineAchievementsView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}

