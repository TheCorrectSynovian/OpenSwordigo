/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FEEC
 * Mangled: _ZNSt15__exception_ptreqERKNS_13exception_ptrES2_
 * Demangled: std::__exception_ptr::operator==(std::__exception_ptr::exception_ptr const&,std::__exception_ptr::exception_ptr const&)
 *
 * Callers: 1
 *   0x0000000000203280  std::__exception_ptr::operator==(std::__exception_ptr::exception_ptr const&,std::__exception_ptr::exception_ptr const&)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000056FEEC string=0x000000000056FEF0 " "
 *   insn=0x000000000056FEF0 string=0x000000000056FEF4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall std::__exception_ptr::operator==(_QWORD *a1, _QWORD *a2)
{
  return *a1 == *a2;
}

