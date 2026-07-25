/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B71F4
 * Mangled: _ZN5boost6random16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EE4seedINS_5uuids6detail18generator_iteratorINS5_8seed_rngEEEEEvRT_S9_
 * Demangled: boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>)
 *
 * Callers: 1
 *   0x0000000000200630  boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>)
 *
 * Callees: 11
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000001FF7C0  boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *   0x000000000054A254  sub_54A254
 *   0x000000000054AA44  sub_54AA44
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x00000000004B720C string=0x00000000004B7210 "X"
 *   insn=0x00000000004B7210 string=0x00000000004B7214 ""
 *   insn=0x00000000004B7234 string=0x00000000004B7238 "`"
 *   insn=0x00000000004B7240 string=0x00000000004B7250 "hz9"
 *   insn=0x00000000004B724C string=0x00000000004B72C4 "N"
 *   insn=0x00000000004B7254 string=0x00000000004B7258 "9"
 *   insn=0x00000000004B7260 string=0x00000000004B7274 "\t"
 *   insn=0x00000000004B7264 string=0x00000000004B7268 "V!"
 *   insn=0x00000000004B727C string=0x00000000004B7280 ")"
 *   insn=0x00000000004B7280 string=0x00000000004B7284 "?"
 *   insn=0x00000000004B7288 string=0x00000000004B728C "#"
 *   insn=0x00000000004B728C string=0x00000000004B7290 "N"
 *   insn=0x00000000004B7290 string=0x00000000004B7294 "h"
 *   insn=0x00000000004B7294 string=0x00000000004B7298 ""
 *   insn=0x00000000004B72C8 string=0x00000000004B72CC "h"
 *   insn=0x00000000004B72CC string=0x00000000004B72D0 "d"
 *   insn=0x00000000004B72D0 string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B72D8 string=0x0000000000597512 "mersenne_twister::seed"
 *   insn=0x00000000004B72E4 string=0x00000000004B72E8 "4"
 *   insn=0x00000000004B72FC string=0x00000000004B7300 "b"
 *   insn=0x00000000004B7300 string=0x00000000004B7304 "!(F"
 *   insn=0x00000000004B7304 string=0x00000000004B7308 "B"
 *   insn=0x00000000004B7310 string=0x00000000004B7314 "c"
 *   insn=0x00000000004B7314 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B7318 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B7324 string=0x00000000004B7328 "j"
 *   insn=0x00000000004B7328 string=0x00000000004B732C "J"
 *   insn=0x00000000004B7330 string=0x00000000004B7334 "(a"
 *   insn=0x00000000004B733C string=0x00000000004B7340 "j"
 *   insn=0x00000000004B733C string=0x00000000004B7374 "u"
 *   insn=0x00000000004B7340 string=0x00000000004B7344 "J=G"
 *   insn=0x00000000004B7344 string=0x00000000004B7348 ")!"
 *   insn=0x00000000004B734C string=0x00000000004B7350 "*"
 *   insn=0x00000000004B734C string=0x00000000004B7388 "*"
 *   insn=0x00000000004B7350 string=0x00000000004B7354 "K"
 *   insn=0x00000000004B7354 string=0x00000000004B7358 "+"
 *   insn=0x00000000004B735C string=0x00000000004B7360 "_"
 *   insn=0x00000000004B736C string=0x00000000004B7370 ""
 *   insn=0x00000000004B737C string=0x00000000001F41F0 "P'"
 *   insn=0x00000000004B7380 string=0x00000000004B7384 "P)"
 *   insn=0x00000000004B7388 string=0x00000000004B738C "K"
 *   insn=0x00000000004B738C string=0x00000000004B7390 "+"
 *   insn=0x00000000004B7390 string=0x00000000004B7394 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(
        __int64 result,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v7; // x19
  __int64 v8; // x25
  boost::uuids::detail::seed_rng *v9; // x23
  int v10; // w8
  int v11; // w8
  void *exception; // x19
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF

  v7 = result;
  v8 = 0;
  v13[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  do
  {
    v9 = *(boost::uuids::detail::seed_rng **)a2;
    if ( *(_QWORD *)a2 == a3 )
    {
      v10 = *(_DWORD *)(a2 + 8);
      if ( v10 == a4 )
      {
        *(_DWORD *)(v7 + 4992) = 624;
        exception = __cxa_allocate_exception(0x10u);
        sub_566BB8((int)v13, "mersenne_twister::seed");
        sub_54AA44(exception, v13);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::invalid_argument, (void (*)(void *))sub_54A254);
      }
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 8);
    }
    *(_DWORD *)(v7 + 4 * v8) = v10;
    v11 = *((_DWORD *)v9 + 5);
    ++v8;
    if ( v11 >= 5 )
    {
      result = boost::uuids::detail::seed_rng::sha1_random_digest_(v9);
      v11 = 0;
      *((_DWORD *)v9 + 5) = 0;
    }
    *((_DWORD *)v9 + 5) = v11 + 1;
    *(_DWORD *)(a2 + 8) = *((_DWORD *)v9 + v11);
  }
  while ( (unsigned __int64)(v8 - 1) < 0x26F );
  *(_DWORD *)(v7 + 4992) = 624;
  return result;
}

