/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AA44
 * Mangled: sub_54AA44
 * Demangled: sub_54AA44
 *
 * Callers: 3
 *   0x00000000004B71F4  boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>)
 *   0x000000000054A9F8  sub_54A9F8
 *   0x0000000000565498  sub_565498
 *
 * Callees: 4
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054AA90  sub_54AA90
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000054AA44 string=0x000000000054AA48 "b"
 *   insn=0x000000000054AA50 string=0x000000000054AA54 "B"
 *   insn=0x000000000054AA60 string=0x000000000054AA64 "`"
 *   insn=0x000000000054AA64 string=0x000000000054AA6C "`"
 *   insn=0x000000000054AA80 string=0x000000000054AA84 "{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_54AA44(_QWORD *a1, __int64 a2))(std::exception *this)
{
  __int64 (__fastcall **result)(std::exception *); // x0

  *a1 = off_6B7560;
  sub_56A528(a1 + 1, a2);
  result = off_6B75C0;
  *a1 = off_6B75C0;
  return result;
}

