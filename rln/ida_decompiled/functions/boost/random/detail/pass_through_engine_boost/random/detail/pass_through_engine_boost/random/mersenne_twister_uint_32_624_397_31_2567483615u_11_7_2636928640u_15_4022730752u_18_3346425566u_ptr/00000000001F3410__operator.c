/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3410
 * Mangled: ._ZN5boost6random6detail19pass_through_engineINS2_IPNS0_16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EEEEEEclEv
 * Demangled: boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>::operator()(void)
 *
 * Callers: 1
 *   0x00000000004B8B54  boost::uniform_int<ulong>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>(boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>> &,ulong,ulong,ulong)
 *
 * Callees: 1
 *   0x00000000004B8CD0  boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>::operator()(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3414 string=0x00000000004B8CD0 ""
 *   insn=0x00000000001F3418 string=0x00000000001F341C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>::operator()()
{
  return _ZN5boost6random6detail19pass_through_engineINS2_IPNS0_16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EEEEEEclEv();
}

