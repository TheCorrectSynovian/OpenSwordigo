/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201950
 * Mangled: ._ZSt13get_terminatev
 * Demangled: std::get_terminate(void)
 *
 * Callers: 3
 *   0x000000000051E048  std::terminate(void)
 *   0x000000000051E108  __cxa_throw
 *   0x000000000056FF98  std::rethrow_exception(std::__exception_ptr::exception_ptr)
 *
 * Callees: 1
 *   0x000000000051E038  std::get_terminate(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201954 string=0x000000000051E038 " "
 *   insn=0x0000000000201958 string=0x000000000020195C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::get_terminate(void)
{
  return _ZSt13get_terminatev();
}

