/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000357C74
 * Mangled: _ZN5Caver18GameViewController40GameMenuViewControllerDidSetGuideEnabledEPNS_22GameMenuViewControllerEb
 * Demangled: Caver::GameViewController::GameMenuViewControllerDidSetGuideEnabled(Caver::GameMenuViewController *,bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9EA0  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Referenced strings: 4
 *   insn=0x0000000000357C74 string=0x0000000000357C78 "I"
 *   insn=0x0000000000357C80 string=0x0000000000357C84 "\t!9\n%9"
 *   insn=0x0000000000357C84 string=0x0000000000357C88 "\n%9"
 *   insn=0x0000000000357C8C string=0x00000000001F9EA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameViewController::GameMenuViewControllerDidSetGuideEnabled(
        Caver::GameViewController *this,
        Caver::GameMenuViewController *a2,
        char a3)
{
  __int64 v3; // x8

  v3 = *((_QWORD *)this + 21);
  *(_BYTE *)(v3 + 456) = a3 & 1;
  *(_BYTE *)(v3 + 457) = 1;
  return Caver::GameViewController::UpdateGuideTarget(this, 0);
}

