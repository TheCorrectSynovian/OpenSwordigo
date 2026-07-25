/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F88B0
 * Mangled: ._ZN5boost11uniform_intImE8generateINS_6random6detail19pass_through_engineINS5_IPNS3_16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EEEEEEEEEmRT_mmm
 * Demangled: boost::uniform_int<ulong>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>(boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>> &,ulong,ulong,ulong)
 *
 * Callers: 2
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *   0x00000000004B8B54  boost::uniform_int<ulong>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>(boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>> &,ulong,ulong,ulong)
 *
 * Callees: 1
 *   0x00000000004B8B54  boost::uniform_int<ulong>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>(boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>> &,ulong,ulong,ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F88B8 string=0x00000000001F88BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::uniform_int<unsigned long>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>()
{
  return _ZN5boost11uniform_intImE8generateINS_6random6detail19pass_through_engineINS5_IPNS3_16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EEEEEEEEEmRT_mmm();
}

