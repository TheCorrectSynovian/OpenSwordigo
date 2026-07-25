/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E8308
 * Mangled: _ZN5Caver22PurchaseViewControllerC2Ev
 * Demangled: Caver::PurchaseViewController::PurchaseViewController(void)
 *
 * Callers: 1
 *   0x00000000001FE330  Caver::PurchaseViewController::PurchaseViewController(void)
 *
 * Callees: 1
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *
 * Referenced strings: 7
 *   insn=0x00000000003E8314 string=0x00000000003E8318 "f/"
 *   insn=0x00000000003E8318 string=0x00000000001F40B0 "P'"
 *   insn=0x00000000003E831C string=0x00000000003E8320 ")A"
 *   insn=0x00000000003E8328 string=0x00000000003E832C ")"
 *   insn=0x00000000003E832C string=0x00000000003E8330 "A"
 *   insn=0x00000000003E8334 string=0x00000000003E8338 "h"
 *   insn=0x00000000003E8338 string=0x00000000003E833C ")a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PurchaseViewController::PurchaseViewController(Caver::PurchaseViewController *this)
{
  __int64 result; // x0

  result = Caver::GUIViewController::GUIViewController(this);
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *(_QWORD *)this = off_6D0A60;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = &byte_6FD2F8;
  *((_BYTE *)this + 120) = 0;
  return result;
}

