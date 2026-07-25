/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E4E8
 * Mangled: _ZN9__gnu_cxx20recursive_init_errorD2Ev
 * Demangled: __gnu_cxx::recursive_init_error::~recursive_init_error()
 *
 * Callers: 2
 *   0x00000000001F6260  __gnu_cxx::recursive_init_error::~recursive_init_error()
 *   0x000000000051E27C  __cxa_guard_acquire
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 2
 *   insn=0x000000000051E4E8 string=0x000000000051E4EC "!"
 *   insn=0x000000000051E4EC string=0x000000000051E4F0 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::recursive_init_error::~recursive_init_error(__gnu_cxx::recursive_init_error *this)
{
  *(_QWORD *)this = off_6D9920;
  std::exception::~exception(this);
}

