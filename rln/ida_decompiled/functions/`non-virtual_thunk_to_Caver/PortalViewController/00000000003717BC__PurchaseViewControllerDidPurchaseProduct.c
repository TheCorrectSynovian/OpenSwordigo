/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003717BC
 * Mangled: _ZThn88_N5Caver20PortalViewController40PurchaseViewControllerDidPurchaseProductEPNS_22PurchaseViewControllerE
 * Demangled: `non-virtual thunk to'Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6E70  Caver::GUISwitch::UpdateFrameTexture(void)
 *
 * Referenced strings: 11
 *   insn=0x00000000003717BC string=0x00000000003717C0 "\t"
 *   insn=0x00000000003717C0 string=0x00000000003717C4 ")"
 *   insn=0x00000000003717C4 string=0x00000000003717C8 " "
 *   insn=0x00000000003717C8 string=0x00000000003717CC "\t E9I"
 *   insn=0x00000000003717CC string=0x00000000003717D0 "I"
 *   insn=0x00000000003717E8 string=0x00000000003717EC " "
 *   insn=0x00000000003717F0 string=0x00000000003717F4 "h"
 *   insn=0x00000000003717F0 string=0x00000000001F6E70 "0'"
 *   insn=0x00000000003717F4 string=0x00000000003717F8 "iB@"
 *   insn=0x0000000000371804 string=0x0000000000371808 "!"
 *   insn=0x000000000037180C string=0x0000000000371810 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUISwitch *__fastcall `non-virtual thunk to'Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct(
        Caver::PortalViewController *this,
        Caver::PurchaseViewController *a2)
{
  Caver::GUISwitch *result; // x0
  _QWORD *v4; // x19

  result = *(Caver::GUISwitch **)(*(_QWORD *)(*((_QWORD *)this + 5) + 368LL) + 264LL);
  if ( !*((_BYTE *)result + 328) )
  {
    v4 = (_QWORD *)((char *)this - 88);
    *((_BYTE *)result + 328) = 1;
    Caver::GUISwitch::UpdateFrameTexture(result);
    return (Caver::GUISwitch *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v4 + 112LL))(
                                 v4,
                                 *(_QWORD *)(v4[16] + 368LL));
  }
  return result;
}

