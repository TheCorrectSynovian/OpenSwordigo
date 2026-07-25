/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB680
 * Mangled: _ZN5Caver7FWMouse11sharedMouseEv
 * Demangled: Caver::FWMouse::sharedMouse(void)
 *
 * Callers: 1
 *   0x00000000002016A0  Caver::FWMouse::sharedMouse(void)
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x00000000004AB6F0  Caver::FWMouse::~FWMouse()
 *
 * Referenced strings: 10
 *   insn=0x00000000004AB688 string=0x00000000004AB690 ""
 *   insn=0x00000000004AB6B0 string=0x00000000004AB6B4 " "
 *   insn=0x00000000004AB6B0 string=0x00000000001FD6E0 "0'"
 *   insn=0x00000000004AB6B8 string=0x00000000004AB6C0 " "
 *   insn=0x00000000004AB6C0 string=0x00000000004AB6C4 " "
 *   insn=0x00000000004AB6C4 string=0x00000000004AB6C8 "?@"
 *   insn=0x00000000004AB6D4 string=0x00000000004AB6DC "Y%"
 *   insn=0x00000000004AB6DC string=0x00000000001F4C40 "P'"
 *   insn=0x00000000004AB6E0 string=0x00000000004AB6E8 "V."
 *   insn=0x00000000004AB6E8 string=0x00000000001F7040 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int128 *__fastcall Caver::FWMouse::sharedMouse(Caver::FWMouse *this)
{
  unsigned __int8 v1; // w8

  v1 = atomic_load((unsigned __int8 *)&byte_6E9EE0);
  if ( (v1 & 1) == 0 && __cxa_guard_acquire((__guard *)&byte_6E9EE0) )
  {
    xmmword_6E9EC0 = (__int128)vdupq_n_s64((unsigned __int64)&xmmword_6E9EC0);
    byte_6E9ED0 = 0;
    __cxa_atexit((void (*)(void *))Caver::FWMouse::~FWMouse, &xmmword_6E9EC0, &off_6E8000);
    __cxa_guard_release((__guard *)&byte_6E9EE0);
  }
  return &xmmword_6E9EC0;
}

