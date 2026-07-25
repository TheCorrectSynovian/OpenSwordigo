/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005660E4
 * Mangled: sub_5660E4
 * Demangled: sub_5660E4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9A30  std::__exception_ptr::exception_ptr::exception_ptr(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000005660EC string=0x00000000005660F0 "PN"
 *   insn=0x00000000005660F0 string=0x00000000001F9A30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5660E4(_QWORD *a1)
{
  *a1 = &off_6DB8D0;
  return std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)(a1 + 1));
}

