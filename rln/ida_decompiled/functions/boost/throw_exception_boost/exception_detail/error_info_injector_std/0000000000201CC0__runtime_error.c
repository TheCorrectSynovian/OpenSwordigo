/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201CC0
 * Mangled: ._ZN5boost15throw_exceptionINS_16exception_detail19error_info_injectorISt13runtime_errorEEEEvRKT_
 * Demangled: boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *
 * Callers: 1
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *
 * Callees: 1
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201CC8 string=0x0000000000201CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>()
{
  JUMPOUT(0x4B7F10);
}

