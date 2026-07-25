/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F83F0
 * Mangled: ._ZN5boost15throw_exceptionISt13runtime_errorEEvRKT_
 * Demangled: boost::throw_exception<std::runtime_error>(std::runtime_error const&)
 *
 * Callers: 1
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *
 * Callees: 1
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F83F8 string=0x00000000001F83FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::throw_exception<std::runtime_error>()
{
  JUMPOUT(0x4B91E0);
}

