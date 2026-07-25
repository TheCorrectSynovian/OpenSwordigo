/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570030
 * Mangled: _ZSt15get_new_handlerv
 * Demangled: std::get_new_handler(void)
 *
 * Callers: 1
 *   0x00000000001F6BC0  std::get_new_handler(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 std::get_new_handler(void)
{
  return atomic_load((unsigned __int64 *)&qword_6FD320);
}

