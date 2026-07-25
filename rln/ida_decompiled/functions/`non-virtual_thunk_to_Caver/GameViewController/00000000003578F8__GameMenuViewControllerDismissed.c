/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003578F8
 * Mangled: _ZThn88_N5Caver18GameViewController31GameMenuViewControllerDismissedEPNS_22GameMenuViewControllerE
 * Demangled: `non-virtual thunk to'Caver::GameViewController::GameMenuViewControllerDismissed(Caver::GameMenuViewController *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4650  Caver::GameViewController::GameMenuViewControllerDismissed(Caver::GameMenuViewController *)
 *
 * Referenced strings: 2
 *   insn=0x00000000003578F8 string=0x00000000003578FC "Us"
 *   insn=0x00000000003578FC string=0x00000000001F4650 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GameViewController::GameMenuViewControllerDismissed(
        Caver::GameViewController *this,
        Caver::GameMenuViewController *a2)
{
  return Caver::GameViewController::GameMenuViewControllerDismissed(
           (Caver::GameViewController *)((char *)this - 88),
           a2);
}

