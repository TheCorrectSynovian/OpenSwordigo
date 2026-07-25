/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000357CFC
 * Mangled: _ZThn104_N5Caver18GameViewController38PortalViewControllerDidSetGuideEnabledEPNS_20PortalViewControllerEb
 * Demangled: `non-virtual thunk to'Caver::GameViewController::PortalViewControllerDidSetGuideEnabled(Caver::PortalViewController *,bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9EA0  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Referenced strings: 5
 *   insn=0x0000000000357D00 string=0x0000000000357D04 "I"
 *   insn=0x0000000000357D0C string=0x0000000000357D10 "\t!9\n%9b"
 *   insn=0x0000000000357D10 string=0x0000000000357D14 "\n%9b"
 *   insn=0x0000000000357D14 string=0x0000000000357D18 "b"
 *   insn=0x0000000000357D18 string=0x00000000001F9EA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GameViewController::PortalViewControllerDidSetGuideEnabled(
        Caver::GameViewController *this,
        Caver::PortalViewController *a2,
        char a3)
{
  __int64 v3; // x8

  v3 = *((_QWORD *)this + 8);
  *(_BYTE *)(v3 + 456) = a3 & 1;
  *(_BYTE *)(v3 + 457) = 1;
  return Caver::GameViewController::UpdateGuideTarget((Caver::GameViewController *)((char *)this - 104), 0);
}

