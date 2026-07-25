/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8640
 * Mangled: ._ZN5boost5uuids6detail4sha110get_digestERA5_j
 * Demangled: boost::uuids::detail::sha1::get_digest(uint (&)[5])
 *
 * Callers: 1
 *   0x00000000004B73A0  boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *
 * Callees: 1
 *   0x00000000004B7A54  boost::uuids::detail::sha1::get_digest(uint (&)[5])
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8648 string=0x00000000001F864C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::uuids::detail::sha1::get_digest(boost::uuids::detail::sha1 *this, unsigned int (*a2)[5])
{
  return _ZN5boost5uuids6detail4sha110get_digestERA5_j(this, a2);
}

