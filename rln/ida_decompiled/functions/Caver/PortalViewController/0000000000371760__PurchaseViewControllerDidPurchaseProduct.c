/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000371760
 * Mangled: _ZN5Caver20PortalViewController40PurchaseViewControllerDidPurchaseProductEPNS_22PurchaseViewControllerE
 * Demangled: Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6E70  Caver::GUISwitch::UpdateFrameTexture(void)
 *
 * Referenced strings: 9
 *   insn=0x000000000037176C string=0x0000000000371770 "hB@"
 *   insn=0x0000000000371770 string=0x0000000000371774 ""
 *   insn=0x0000000000371778 string=0x000000000037177C " E9"
 *   insn=0x0000000000371790 string=0x0000000000371794 " "
 *   insn=0x0000000000371798 string=0x000000000037179C "h"
 *   insn=0x0000000000371798 string=0x00000000001F6E70 "0'"
 *   insn=0x000000000037179C string=0x00000000003717A0 "iB@"
 *   insn=0x00000000003717AC string=0x00000000003717B0 "!"
 *   insn=0x00000000003717B4 string=0x00000000003717B8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUISwitch *__fastcall Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct(
        Caver::PortalViewController *this,
        Caver::PurchaseViewController *a2)
{
  Caver::GUISwitch *result; // x0

  result = *(Caver::GUISwitch **)(*(_QWORD *)(*((_QWORD *)this + 16) + 368LL) + 264LL);
  if ( !*((_BYTE *)result + 328) )
  {
    *((_BYTE *)result + 328) = 1;
    Caver::GUISwitch::UpdateFrameTexture(result);
    return (Caver::GUISwitch *)(*(__int64 (__fastcall **)(Caver::PortalViewController *, _QWORD))(*(_QWORD *)this + 112LL))(
                                 this,
                                 *(_QWORD *)(*((_QWORD *)this + 16) + 368LL));
  }
  return result;
}

