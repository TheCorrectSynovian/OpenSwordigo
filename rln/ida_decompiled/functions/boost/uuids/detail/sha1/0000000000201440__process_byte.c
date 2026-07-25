/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201440
 * Mangled: ._ZN5boost5uuids6detail4sha112process_byteEh
 * Demangled: boost::uuids::detail::sha1::process_byte(uchar)
 *
 * Callers: 1
 *   0x00000000004B73A0  boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *
 * Callees: 1
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201448 string=0x000000000020144C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::uuids::detail::sha1::process_byte(boost::uuids::detail::sha1 *this, unsigned __int8 a2)
{
  return _ZN5boost5uuids6detail4sha112process_byteEh(this, a2);
}

