/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6BC0
 * Mangled: ._ZSt15get_new_handlerv
 * Demangled: std::get_new_handler(void)
 *
 * Callers: 1
 *   0x000000000051E520  operator new(ulong)
 *
 * Callees: 1
 *   0x0000000000570030  std::get_new_handler(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6BC4 string=0x0000000000570030 "`"
 *   insn=0x00000000001F6BC8 string=0x00000000001F6BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::get_new_handler(void)
{
  return _ZSt15get_new_handlerv();
}

