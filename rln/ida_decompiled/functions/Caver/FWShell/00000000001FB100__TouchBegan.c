/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB100
 * Mangled: ._ZN5Caver7FWShell10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::FWShell::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x000000000021127C  Caver::CaverShell::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000047DDB4  Caver::FWShell::TouchBegan(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB108 string=0x00000000001FB10C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWShell::TouchBegan(Caver::FWShell *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver7FWShell10TouchBeganERKNS_7FWTouchE(this, a2);
}

