/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBA30
 * Mangled: ._ZN5Caver7FWShell10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::FWShell::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000211464  Caver::CaverShell::TouchEnded(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000047DE78  Caver::FWShell::TouchEnded(Caver::FWTouch const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FBA34 string=0x000000000047DE78 "\n,@"
 *   insn=0x00000000001FBA38 string=0x00000000001FBA3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWShell::TouchEnded(Caver::FWShell *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver7FWShell10TouchEndedERKNS_7FWTouchE(this, a2);
}

