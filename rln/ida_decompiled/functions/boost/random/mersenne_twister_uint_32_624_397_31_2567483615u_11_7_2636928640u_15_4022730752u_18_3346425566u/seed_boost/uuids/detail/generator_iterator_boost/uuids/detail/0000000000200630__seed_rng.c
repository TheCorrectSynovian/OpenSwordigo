/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200630
 * Mangled: ._ZN5boost6random16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EE4seedINS_5uuids6detail18generator_iteratorINS5_8seed_rngEEEEEvRT_S9_
 * Demangled: boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>)
 *
 * Callers: 1
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *
 * Callees: 1
 *   0x00000000004B71F4  boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200638 string=0x000000000020063C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>()
{
  return _ZN5boost6random16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EE4seedINS_5uuids6detail18generator_iteratorINS5_8seed_rngEEEEEvRT_S9_();
}

