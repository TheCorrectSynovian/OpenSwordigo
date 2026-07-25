/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566104
 * Mangled: sub_566104
 * Demangled: sub_566104
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203690  std::__exception_ptr::exception_ptr::~exception_ptr()
 *
 * Referenced strings: 4
 *   insn=0x0000000000566110 string=0x0000000000566114 "!@#"
 *   insn=0x000000000056611C string=0x0000000000566120 "\u"
 *   insn=0x000000000056612C string=0x0000000000566130 "`D"
 *   insn=0x0000000000566130 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_566104(_QWORD *a1)
{
  *a1 = &off_6DB8D0;
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)(a1 + 1));
  operator delete(a1);
}

