/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E058
 * Mangled: _ZN10__cxxabiv112__unexpectedEPFvvE
 * Demangled: __cxxabiv1::__unexpected(void (*)(void))
 *
 * Callers: 1
 *   0x00000000001F6540  __cxxabiv1::__unexpected(void (*)(void))
 *
 * Callees: 1
 *   0x0000000000203770  std::terminate(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn __cxxabiv1::__unexpected(void (*a1)(void))
{
  a1();
  std::terminate();
}

