/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E084
 * Mangled: _ZSt14get_unexpectedv
 * Demangled: std::get_unexpected(void)
 *
 * Callers: 1
 *   0x0000000000203170  std::get_unexpected(void)
 *
 * Callees: 1
 *   0x000000000051E048  std::terminate(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 std::get_unexpected(void)
{
  return atomic_load((unsigned __int64 *)&__cxxabiv1::__unexpected_handler);
}

