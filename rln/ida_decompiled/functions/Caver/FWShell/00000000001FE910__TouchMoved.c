/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE910
 * Mangled: ._ZN5Caver7FWShell10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::FWShell::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000211378  Caver::CaverShell::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000047DDD0  Caver::FWShell::TouchMoved(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE918 string=0x00000000001FE91C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWShell::TouchMoved(Caver::FWShell *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver7FWShell10TouchMovedERKNS_7FWTouchE(this, a2);
}

