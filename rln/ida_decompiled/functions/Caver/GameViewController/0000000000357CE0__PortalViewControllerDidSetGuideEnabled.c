/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000357CE0
 * Mangled: _ZN5Caver18GameViewController38PortalViewControllerDidSetGuideEnabledEPNS_20PortalViewControllerEb
 * Demangled: Caver::GameViewController::PortalViewControllerDidSetGuideEnabled(Caver::PortalViewController *,bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9EA0  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Referenced strings: 5
 *   insn=0x0000000000357CE0 string=0x0000000000357CE4 "I"
 *   insn=0x0000000000357CEC string=0x0000000000357CF0 "\t!9\n%9j"
 *   insn=0x0000000000357CF0 string=0x0000000000357CF4 "\n%9j"
 *   insn=0x0000000000357CF4 string=0x0000000000357CF8 "j"
 *   insn=0x0000000000357CF8 string=0x00000000001F9EA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameViewController::PortalViewControllerDidSetGuideEnabled(
        Caver::GameViewController *this,
        Caver::PortalViewController *a2,
        char a3)
{
  __int64 v3; // x8

  v3 = *((_QWORD *)this + 21);
  *(_BYTE *)(v3 + 456) = a3 & 1;
  *(_BYTE *)(v3 + 457) = 1;
  return Caver::GameViewController::UpdateGuideTarget(this, 0);
}

