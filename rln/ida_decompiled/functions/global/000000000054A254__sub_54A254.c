/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A254
 * Mangled: sub_54A254
 * Demangled: sub_54A254
 *
 * Callers: 2
 *   0x00000000004B71F4  boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>)
 *   0x0000000000565498  sub_565498
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 18
 *   insn=0x000000000054A264 string=0x000000000054A268 "`"
 *   insn=0x000000000054A268 string=0x000000000054A270 "`"
 *   insn=0x000000000054A270 string=0x000000000054A274 "b"
 *   insn=0x000000000054A274 string=0x000000000054A278 "!"
 *   insn=0x000000000054A278 string=0x000000000054A27C "@`"
 *   insn=0x000000000054A288 string=0x000000000054A28C "y"
 *   insn=0x000000000054A29C string=0x000000000054A2A0 "!<G"
 *   insn=0x000000000054A2A0 string=0x000000000054A2A4 "a"
 *   insn=0x000000000054A2A4 string=0x000000000054A2A8 "B "
 *   insn=0x000000000054A2A4 string=0x000000000054A2D0 "A"
 *   insn=0x000000000054A2A8 string=0x000000000054A2AC "A"
 *   insn=0x000000000054A2AC string=0x000000000054A2B0 "#"
 *   insn=0x000000000054A2B0 string=0x000000000054A2B4 "C"
 *   insn=0x000000000054A2B8 string=0x000000000054A2BC "?"
 *   insn=0x000000000054A2BC string=0x000000000054A2C0 "L"
 *   insn=0x000000000054A2C4 string=0x000000000054A2C8 "7"
 *   insn=0x000000000054A2D0 string=0x000000000054A2D4 "#"
 *   insn=0x000000000054A2D4 string=0x000000000054A2D8 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A254(std::exception *this)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)this = off_6B7560;
  v2 = *((_QWORD *)this + 1);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v4 = (unsigned int *)(v2 - 8);
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
  std::exception::~exception(this);
}

