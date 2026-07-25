/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002025A0
 * Mangled: .syscall
 * Demangled: .syscall
 *
 * Callers: 3
 *   0x000000000051E27C  __cxa_guard_acquire
 *   0x000000000051E3F4  __cxa_guard_abort
 *   0x000000000051E468  __cxa_guard_release
 *
 * Callees: 1
 *   0x00000000006FEC28  syscall
 *
 * Referenced strings: 1
 *   insn=0x00000000002025A8 string=0x00000000002025AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 syscall(__int64 sysno, ...)
{
  return syscall(sysno);
}

