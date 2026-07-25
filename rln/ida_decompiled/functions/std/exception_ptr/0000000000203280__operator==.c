/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203280
 * Mangled: ._ZNSt15__exception_ptreqERKNS_13exception_ptrES2_
 * Demangled: std::__exception_ptr::operator==(std::__exception_ptr::exception_ptr const&,std::__exception_ptr::exception_ptr const&)
 *
 * Callers: 1
 *   0x000000000056FF00  std::__exception_ptr::operator!=(std::__exception_ptr::exception_ptr const&,std::__exception_ptr::exception_ptr const&)
 *
 * Callees: 1
 *   0x000000000056FEEC  std::__exception_ptr::operator==(std::__exception_ptr::exception_ptr const&,std::__exception_ptr::exception_ptr const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203288 string=0x000000000020328C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__exception_ptr::operator==()
{
  return _ZNSt15__exception_ptreqERKNS_13exception_ptrES2_();
}

