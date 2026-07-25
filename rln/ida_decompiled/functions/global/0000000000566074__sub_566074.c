/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566074
 * Mangled: sub_566074
 * Demangled: sub_566074
 *
 * Callers: 1
 *   0x0000000000565C40  sub_565C40
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x0000000000565DFC  sub_565DFC
 *
 * Referenced strings: 6
 *   insn=0x0000000000566080 string=0x0000000000566088 "`"
 *   insn=0x00000000005660AC string=0x00000000005660B0 " "
 *   insn=0x00000000005660AC string=0x00000000001FD6E0 "0'"
 *   insn=0x00000000005660B8 string=0x00000000001F7040 "0'"
 *   insn=0x00000000005660C4 string=0x00000000005660C8 "B"
 *   insn=0x00000000005660D0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **sub_566074())()
{
  unsigned __int8 v0; // w0

  v0 = atomic_load((unsigned __int8 *)&byte_6FD2D0);
  if ( (v0 & 1) != 0 || !__cxa_guard_acquire((__guard *)&byte_6FD2D0) )
    return off_6E8A30;
  __cxa_guard_release((__guard *)&byte_6FD2D0);
  __cxa_atexit((void (*)(void *))sub_565DFC, off_6E8A30, &off_6E8000);
  return off_6E8A30;
}

