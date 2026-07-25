/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000357CB0
 * Mangled: _ZN5Caver18GameViewController46GameMenuViewControllerDidSetCoinDoublerEnabledEPNS_22GameMenuViewControllerEb
 * Demangled: Caver::GameViewController::GameMenuViewControllerDidSetCoinDoublerEnabled(Caver::GameMenuViewController *,bool)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000357CB0 string=0x0000000000357CB4 "I"
 *   insn=0x0000000000357CB8 string=0x0000000000357CBC "\t)9\n-9"
 *   insn=0x0000000000357CBC string=0x0000000000357CC0 "\n-9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameViewController::GameMenuViewControllerDidSetCoinDoublerEnabled(
        __int64 this,
        Caver::GameMenuViewController *a2,
        char a3)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)(this + 168);
  *(_BYTE *)(v3 + 458) = a3 & 1;
  *(_BYTE *)(v3 + 459) = 1;
  return this;
}

