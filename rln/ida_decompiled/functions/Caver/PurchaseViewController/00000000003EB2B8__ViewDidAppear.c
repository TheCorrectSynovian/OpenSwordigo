/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EB2B8
 * Mangled: _ZN5Caver22PurchaseViewController13ViewDidAppearEv
 * Demangled: Caver::PurchaseViewController::ViewDidAppear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200A80  Caver::PurchaseView::AnimateIn(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000003EB2C4 string=0x00000000003EB2C8 "`*@"
 *   insn=0x00000000003EB2C8 string=0x00000000003EB2CC ""
 *   insn=0x00000000003EB2CC string=0x00000000003EB2D0 "y@"
 *   insn=0x00000000003EB2D8 string=0x00000000003EB2E0 ""
 *   insn=0x00000000003EB2E0 string=0x00000000003EB2E4 "`*@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PurchaseViewController::ViewDidAppear(Caver::PurchaseViewController *this)
{
  *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 240LL))(*((_QWORD *)this + 10)) + 476) = 1064346583;
  return Caver::PurchaseView::AnimateIn(*((Caver::PurchaseView **)this + 10));
}

