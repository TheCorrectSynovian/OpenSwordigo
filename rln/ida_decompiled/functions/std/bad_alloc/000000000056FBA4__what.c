/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FBA4
 * Mangled: _ZNKSt9bad_alloc4whatEv
 * Demangled: std::bad_alloc::what(void)
 *
 * Callers: 1
 *   0x000000000056F934  sub_56F934
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000056FBA4 string=0x000000000059FBA0 "std::bad_alloc"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall std::bad_alloc::what(std::bad_alloc *this)
{
  return "std::bad_alloc";
}

