/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB3CC
 * Mangled: _ZN5Caver10FWKeyboard14sharedKeyboardEv
 * Demangled: Caver::FWKeyboard::sharedKeyboard(void)
 *
 * Callers: 1
 *   0x00000000001FEF70  Caver::FWKeyboard::sharedKeyboard(void)
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x00000000004AB438  Caver::FWKeyboard::~FWKeyboard()
 *
 * Referenced strings: 8
 *   insn=0x00000000004AB3D4 string=0x00000000004AB3DC ""
 *   insn=0x00000000004AB3FC string=0x00000000004AB400 " "
 *   insn=0x00000000004AB3FC string=0x00000000001FD6E0 "0'"
 *   insn=0x00000000004AB404 string=0x00000000004AB40C " "
 *   insn=0x00000000004AB40C string=0x00000000004AB410 " "
 *   insn=0x00000000004AB41C string=0x00000000004AB424 "&"
 *   insn=0x00000000004AB424 string=0x00000000001F4C40 "P'"
 *   insn=0x00000000004AB430 string=0x00000000001F7040 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int128 *__fastcall Caver::FWKeyboard::sharedKeyboard(Caver::FWKeyboard *this)
{
  unsigned __int8 v1; // w8

  v1 = atomic_load((unsigned __int8 *)&byte_6E9EA0);
  if ( (v1 & 1) == 0 && __cxa_guard_acquire((__guard *)&byte_6E9EA0) )
  {
    xmmword_6E9E90 = (__int128)vdupq_n_s64((unsigned __int64)&xmmword_6E9E90);
    __cxa_atexit((void (*)(void *))Caver::FWKeyboard::~FWKeyboard, &xmmword_6E9E90, &off_6E8000);
    __cxa_guard_release((__guard *)&byte_6E9EA0);
  }
  return &xmmword_6E9E90;
}

