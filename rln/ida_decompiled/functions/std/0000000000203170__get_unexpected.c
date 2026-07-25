/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203170
 * Mangled: ._ZSt14get_unexpectedv
 * Demangled: std::get_unexpected(void)
 *
 * Callers: 3
 *   0x000000000051E094  std::unexpected(void)
 *   0x000000000051E108  __cxa_throw
 *   0x000000000056FF98  std::rethrow_exception(std::__exception_ptr::exception_ptr)
 *
 * Callees: 1
 *   0x000000000051E084  std::get_unexpected(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203174 string=0x000000000051E084 " "
 *   insn=0x0000000000203178 string=0x000000000020317C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::get_unexpected(void)
{
  return _ZSt14get_unexpectedv();
}

