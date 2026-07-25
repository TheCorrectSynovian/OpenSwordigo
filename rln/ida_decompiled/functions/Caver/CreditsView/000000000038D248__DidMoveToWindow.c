/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038D248
 * Mangled: _ZN5Caver11CreditsView15DidMoveToWindowEv
 * Demangled: Caver::CreditsView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x000000000038D0E0  Caver::CreditsView::~CreditsView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000038D254 string=0x000000000038D258 "h"
 *   insn=0x000000000038D258 string=0x000000000038D25C "y@"
 *   insn=0x000000000038D264 string=0x000000000038D268 "h"
 *   insn=0x000000000038D278 string=0x000000000038D27C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CreditsView::DidMoveToWindow(Caver::CreditsView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::CreditsView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::CreditsView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}

