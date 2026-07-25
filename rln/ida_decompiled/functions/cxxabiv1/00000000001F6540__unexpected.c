/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6540
 * Mangled: ._ZN10__cxxabiv112__unexpectedEPFvvE
 * Demangled: __cxxabiv1::__unexpected(void (*)(void))
 *
 * Callers: 2
 *   0x000000000051DEF0  __cxa_call_unexpected
 *   0x000000000051E094  std::unexpected(void)
 *
 * Callees: 1
 *   0x000000000051E058  __cxxabiv1::__unexpected(void (*)(void))
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6548 string=0x00000000001F654C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall __noreturn __cxxabiv1::__unexpected(void (*a1)(void))
{
  _ZN10__cxxabiv112__unexpectedEPFvvE(a1);
}

