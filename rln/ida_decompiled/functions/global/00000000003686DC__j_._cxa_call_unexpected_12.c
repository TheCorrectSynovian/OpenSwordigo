/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003686DC
 * Mangled: j_.__cxa_call_unexpected_12
 * Demangled: j_.__cxa_call_unexpected_12
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8280  .__cxa_call_unexpected
 *
 * Referenced strings: 1
 *   insn=0x00000000003686DC string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn j____cxa_call_unexpected_12(void *a1)
{
  __cxa_call_unexpected(a1);
}

