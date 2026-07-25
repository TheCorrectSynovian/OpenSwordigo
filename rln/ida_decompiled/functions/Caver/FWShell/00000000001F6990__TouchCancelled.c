/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6990
 * Mangled: ._ZN5Caver7FWShell14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::FWShell::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000211550  Caver::CaverShell::TouchCancelled(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000047DF04  Caver::FWShell::TouchCancelled(Caver::FWTouch const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6994 string=0x000000000047DF04 "\n,@"
 *   insn=0x00000000001F6998 string=0x00000000001F699C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWShell::TouchCancelled(Caver::FWShell *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver7FWShell14TouchCancelledERKNS_7FWTouchE(this, a2);
}

