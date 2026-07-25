/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF7C0
 * Mangled: ._ZN5boost5uuids6detail8seed_rng19sha1_random_digest_Ev
 * Demangled: boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *
 * Callers: 2
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *   0x00000000004B71F4  boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>)
 *
 * Callees: 1
 *   0x00000000004B73A0  boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF7C8 string=0x00000000001FF7CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::uuids::detail::seed_rng::sha1_random_digest_(boost::uuids::detail::seed_rng *this)
{
  return _ZN5boost5uuids6detail8seed_rng19sha1_random_digest_Ev(this);
}

