/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570014
 * Mangled: _ZSt15set_new_handlerPFvvE
 * Demangled: std::set_new_handler(void (*)(void))
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000570018 string=0x000000000057001C "!"
 *   insn=0x000000000057001C string=0x0000000000570020 " "
 *   insn=0x0000000000570020 string=0x0000000000570024 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall std::set_new_handler(void (*a1)(void))
{
  unsigned __int64 result; // x0

  do
    result = __ldaxr((unsigned __int64 *)&qword_6FD320);
  while ( __stlxr((unsigned __int64)a1, (unsigned __int64 *)&qword_6FD320) );
  return result;
}

