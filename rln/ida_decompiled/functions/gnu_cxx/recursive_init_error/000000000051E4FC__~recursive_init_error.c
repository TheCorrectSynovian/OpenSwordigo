/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E4FC
 * Mangled: _ZN9__gnu_cxx20recursive_init_errorD0Ev
 * Demangled: __gnu_cxx::recursive_init_error::~recursive_init_error()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6260  __gnu_cxx::recursive_init_error::~recursive_init_error()
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 4
 *   insn=0x000000000051E508 string=0x000000000051E50C "U_"
 *   insn=0x000000000051E50C string=0x00000000001F6260 "0'"
 *   insn=0x000000000051E518 string=0x000000000051E51C "ec"
 *   insn=0x000000000051E51C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::recursive_init_error::~recursive_init_error(__gnu_cxx::recursive_init_error *this)
{
  __gnu_cxx::recursive_init_error::~recursive_init_error(this);
  operator delete(this);
}

