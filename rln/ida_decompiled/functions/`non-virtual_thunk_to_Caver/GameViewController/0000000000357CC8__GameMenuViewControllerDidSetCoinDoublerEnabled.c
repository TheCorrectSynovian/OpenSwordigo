/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000357CC8
 * Mangled: _ZThn88_N5Caver18GameViewController46GameMenuViewControllerDidSetCoinDoublerEnabledEPNS_22GameMenuViewControllerEb
 * Demangled: `non-virtual thunk to'Caver::GameViewController::GameMenuViewControllerDidSetCoinDoublerEnabled(Caver::GameMenuViewController *,bool)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000357CC8 string=0x0000000000357CCC "I"
 *   insn=0x0000000000357CD0 string=0x0000000000357CD4 "\t)9\n-9"
 *   insn=0x0000000000357CD4 string=0x0000000000357CD8 "\n-9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GameViewController::GameMenuViewControllerDidSetCoinDoublerEnabled(
        __int64 this,
        Caver::GameMenuViewController *a2,
        char a3)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)(this + 80);
  *(_BYTE *)(v3 + 458) = a3 & 1;
  *(_BYTE *)(v3 + 459) = 1;
  return this;
}

