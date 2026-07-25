/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000427E60
 * Mangled: _ZN5Caver7MapView14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::MapView::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200090  Caver::GUIResponder::TouchCancelled(Caver::FWTouch const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000427E60 string=0x0000000000427E64 "\t"
 *   insn=0x0000000000427E68 string=0x0000000000427E6C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapView::TouchCancelled(Caver::MapView *this, const Caver::FWTouch *a2)
{
  if ( *(_QWORD *)a2 == *((_QWORD *)this + 125) )
    *((_QWORD *)this + 125) = 0;
  return Caver::GUIResponder::TouchCancelled(this, a2);
}

