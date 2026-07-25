/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005660F4
 * Mangled: sub_5660F4
 * Demangled: sub_5660F4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203690  std::__exception_ptr::exception_ptr::~exception_ptr()
 *
 * Referenced strings: 1
 *   insn=0x00000000005660FC string=0x0000000000566100 "du"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_5660F4(_QWORD *a1)
{
  *a1 = &off_6DB8D0;
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)(a1 + 1));
}

