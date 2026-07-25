/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000357C90
 * Mangled: _ZThn88_N5Caver18GameViewController40GameMenuViewControllerDidSetGuideEnabledEPNS_22GameMenuViewControllerEb
 * Demangled: `non-virtual thunk to'Caver::GameViewController::GameMenuViewControllerDidSetGuideEnabled(Caver::GameMenuViewController *,bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9EA0  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Referenced strings: 5
 *   insn=0x0000000000357C94 string=0x0000000000357C98 "I"
 *   insn=0x0000000000357CA0 string=0x0000000000357CA4 "\t!9\n%9}"
 *   insn=0x0000000000357CA4 string=0x0000000000357CA8 "\n%9}"
 *   insn=0x0000000000357CA8 string=0x0000000000357CAC "}"
 *   insn=0x0000000000357CAC string=0x00000000001F9EA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GameViewController::GameMenuViewControllerDidSetGuideEnabled(
        Caver::GameViewController *this,
        Caver::GameMenuViewController *a2,
        char a3)
{
  __int64 v3; // x8

  v3 = *((_QWORD *)this + 10);
  *(_BYTE *)(v3 + 456) = a3 & 1;
  *(_BYTE *)(v3 + 457) = 1;
  return Caver::GameViewController::UpdateGuideTarget((Caver::GameViewController *)((char *)this - 88), 0);
}

