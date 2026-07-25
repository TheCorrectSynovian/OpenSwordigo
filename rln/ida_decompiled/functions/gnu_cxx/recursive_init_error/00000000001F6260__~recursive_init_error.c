/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6260
 * Mangled: ._ZN9__gnu_cxx20recursive_init_errorD2Ev
 * Demangled: __gnu_cxx::recursive_init_error::~recursive_init_error()
 *
 * Callers: 1
 *   0x000000000051E4FC  __gnu_cxx::recursive_init_error::~recursive_init_error()
 *
 * Callees: 1
 *   0x000000000051E4E8  __gnu_cxx::recursive_init_error::~recursive_init_error()
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6264 string=0x000000000051E4E8 "A"
 *   insn=0x00000000001F6268 string=0x00000000001F626C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall __gnu_cxx::recursive_init_error::~recursive_init_error(__gnu_cxx::recursive_init_error *this)
{
  _ZN9__gnu_cxx20recursive_init_errorD2Ev(this);
}

