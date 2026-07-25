/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2D7C
 * Mangled: _ZN5Caver16UniqueIdentifierEv
 * Demangled: Caver::UniqueIdentifier(void)
 *
 * Callers: 1
 *   0x00000000001FA830  Caver::UniqueIdentifier(void)
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F88B0  boost::uniform_int<ulong>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>(boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>> &,ulong,ulong,ulong)
 *   0x00000000001FDDC0  .fclose
 *   0x00000000001FF7C0  boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *   0x0000000000200150  boost::detail::shared_count::shared_count<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>(boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *)
 *   0x0000000000200630  boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>)
 *   0x0000000000201180  .fopen
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002032F0  boost::uuids::to_string(boost::uuids::uuid const&)
 *   0x0000000000203680  boost::uuids::basic_random_generator<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>::basic_random_generator(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000567088  sub_567088
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 131
 *   insn=0x00000000004B2D90 string=0x00000000004B2D94 "U"
 *   insn=0x00000000004B2DA8 string=0x00000000004B2DAC "5B"
 *   insn=0x00000000004B2DC0 string=0x00000000001F88B0 "0'"
 *   insn=0x00000000004B2DD4 string=0x00000000004B2DEC "\tq"
 *   insn=0x00000000004B2DEC string=0x00000000004B2DF0 "\t$"
 *   insn=0x00000000004B2DFC string=0x00000000004B2E00 ""
 *   insn=0x00000000004B2E00 string=0x00000000004B2E04 "a"
 *   insn=0x00000000004B2E10 string=0x00000000004B2E14 "\t"
 *   insn=0x00000000004B2E20 string=0x00000000004B2E24 "\t"
 *   insn=0x00000000004B2E30 string=0x00000000004B2E34 "4"
 *   insn=0x00000000004B2E38 string=0x00000000004B2E3C ""
 *   insn=0x00000000004B2E4C string=0x00000000004B2E50 "\t@"
 *   insn=0x00000000004B2E58 string=0x00000000004B2E5C ""
 *   insn=0x00000000004B2E6C string=0x00000000004B2E70 "@"
 *   insn=0x00000000004B2E90 string=0x00000000004B2EAC "\t"
 *   insn=0x00000000004B2EAC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B2EB8 string=0x00000000004B2EBC "4"
 *   insn=0x00000000004B2EC0 string=0x00000000004B2EC4 ""
 *   insn=0x00000000004B2ED0 string=0x00000000004B2ED4 "\t@"
 *   insn=0x00000000004B2EE0 string=0x00000000004B2EE4 ""
 *   insn=0x00000000004B2EF0 string=0x00000000004B2EF4 "@"
 *   insn=0x00000000004B2F00 string=0x00000000004B2F04 "p:"
 *   insn=0x00000000004B2F1C string=0x00000000004B2F20 "U"
 *   insn=0x00000000004B2F34 string=0x00000000004B2F38 "("
 *   insn=0x00000000004B2F34 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B2F38 string=0x0000000000597360 "q"
 *   insn=0x00000000004B2F5C string=0x00000000004B2F60 "JyJJJ!\t"
 *   insn=0x00000000004B2F60 string=0x00000000004B2F64 "J!\t"
 *   insn=0x00000000004B2F6C string=0x00000000004B2F70 "H"
 *   insn=0x00000000004B2F70 string=0x00000000004B2F74 "_"
 *   insn=0x00000000004B2F78 string=0x00000000004B2F7C ""
 *   insn=0x00000000004B2F7C string=0x00000000004B2F80 "`""
 *   insn=0x00000000004B2F84 string=0x00000000004B2F88 "t"
 *   insn=0x00000000004B2F88 string=0x00000000004B2F8C "q4"
 *   insn=0x00000000004B2F98 string=0x00000000004B2F9C "m>"
 *   insn=0x00000000004B2F9C string=0x00000000004B2FA0 "t"
 *   insn=0x00000000004B2FA0 string=0x00000000004B2FA4 " "
 *   insn=0x00000000004B2FA4 string=0x00000000004B2FA8 "!"
 *   insn=0x00000000004B2FA4 string=0x000000000059747F "/dev/urandom"
 *   insn=0x00000000004B2FA8 string=0x00000000004B2FAC ""
 *   insn=0x00000000004B2FA8 string=0x00000000005969E5 "rb"
 *   insn=0x00000000004B2FB4 string=0x00000000004B2FB8 "!"
 *   insn=0x00000000004B2FB8 string=0x00000000004B2FBC "h""
 *   insn=0x00000000004B2FBC string=0x00000000004B2FC0 "t~"
 *   insn=0x00000000004B2FC4 string=0x00000000004B2FC8 "n8"
 *   insn=0x00000000004B3004 string=0x00000000004B3008 "@"
 *   insn=0x00000000004B3008 string=0x00000000004B300C "m+"
 *   insn=0x00000000004B300C string=0x00000000001FDDC0 "0'"
 *   insn=0x00000000004B3040 string=0x00000000004B3044 "@"
 *   insn=0x00000000004B3044 string=0x00000000004B3048 "^+"
 *   insn=0x00000000004B3044 string=0x00000000004B304C "s"
 *   insn=0x00000000004B304C string=0x00000000004B3050 "3"
 *   insn=0x00000000004B3050 string=0x00000000004B3054 "h"
 *   insn=0x00000000004B3054 string=0x00000000004B3058 ""
 *   insn=0x00000000004B3058 string=0x00000000004B305C "h"
 *   insn=0x00000000004B3060 string=0x00000000004B3064 "h"
 *   insn=0x00000000004B3064 string=0x00000000004B3068 "\t@"
 *   insn=0x00000000004B3070 string=0x00000000004B3074 "h\n@"
 *   insn=0x00000000004B3074 string=0x00000000004B3078 ""
 *   insn=0x00000000004B3078 string=0x00000000004B307C "h\n"
 *   insn=0x00000000004B3080 string=0x00000000004B3084 "h"
 *   insn=0x00000000004B3084 string=0x00000000004B3088 "@"
 *   insn=0x00000000004B3094 string=0x00000000004B3098 ":"
 *   insn=0x00000000004B30C0 string=0x00000000004B30C4 "H"
 *   insn=0x00000000004B30CC string=0x00000000004B30D0 ""
 *   insn=0x00000000004B30E0 string=0x00000000004B30E4 "i"
 *   insn=0x00000000004B3104 string=0x00000000004B3148 "h"
 *   insn=0x00000000004B3110 string=0x00000000004B3114 "h"
 *   insn=0x00000000004B3114 string=0x00000000004B3118 "\ta"
 *   insn=0x00000000004B3118 string=0x00000000004B311C "#"
 *   insn=0x00000000004B3130 string=0x00000000004B3134 "M"
 *   insn=0x00000000004B3140 string=0x00000000004B3144 "I"
 *   insn=0x00000000004B314C string=0x00000000004B3150 "\t"
 *   insn=0x00000000004B3154 string=0x00000000004B3158 "[3"
 *   insn=0x00000000004B3158 string=0x00000000004B315C "5"
 *   insn=0x00000000004B3164 string=0x00000000004B3168 "\n"
 *   insn=0x00000000004B3168 string=0x00000000004B316C "_"
 *   insn=0x00000000004B317C string=0x00000000004B3180 "h"
 *   insn=0x00000000004B3180 string=0x00000000004B3184 "\t"
 *   insn=0x00000000004B3188 string=0x00000000004B318C "j"
 *   insn=0x00000000004B318C string=0x00000000004B3190 "\ni)8h"
 *   insn=0x00000000004B3190 string=0x00000000004B3194 "h"
 *   insn=0x00000000004B3194 string=0x00000000004B3198 "\ta"
 *   insn=0x00000000004B3198 string=0x00000000004B319C "?"
 *   insn=0x00000000004B319C string=0x00000000004B31A0 "A"
 *   insn=0x00000000004B31A8 string=0x00000000004B31AC ")"
 *   insn=0x00000000004B31AC string=0x00000000004B31B0 ""
 *   insn=0x00000000004B31B0 string=0x00000000004B31B4 "W"
 *   insn=0x00000000004B31B4 string=0x00000000004B31B8 "5"
 *   insn=0x00000000004B31BC string=0x00000000004B31C0 "[3"
 *   insn=0x00000000004B31C8 string=0x00000000004B31CC "\n"
 *   insn=0x00000000004B31CC string=0x00000000004B31D0 "_"
 *   insn=0x00000000004B31D4 string=0x00000000004B31EC "j"
 *   insn=0x00000000004B31E0 string=0x00000000004B31E4 "h"
 *   insn=0x00000000004B31E4 string=0x00000000004B31E8 "\t"
 *   insn=0x00000000004B31EC string=0x00000000004B31F0 "\ni)8h"
 *   insn=0x00000000004B31F0 string=0x00000000004B31F4 "h"
 *   insn=0x00000000004B31F4 string=0x00000000004B31F8 "\ta"
 *   insn=0x00000000004B31F8 string=0x00000000004B31FC "?"
 *   insn=0x00000000004B3204 string=0x00000000004B3208 ""
 *   insn=0x00000000004B320C string=0x00000000004B3210 "!"
 *   insn=0x00000000004B3218 string=0x00000000004B321C "h"
 *   insn=0x00000000004B321C string=0x00000000004B3220 "\t"
 *   insn=0x00000000004B3220 string=0x00000000004B3224 "5"
 *   insn=0x00000000004B322C string=0x00000000004B3230 "\n"
 *   insn=0x00000000004B3230 string=0x00000000004B3234 "_"
 *   insn=0x00000000004B3244 string=0x00000000004B3248 "h"
 *   insn=0x00000000004B3248 string=0x00000000004B324C "\t"
 *   insn=0x00000000004B3250 string=0x00000000004B3254 "\ni)8h"
 *   insn=0x00000000004B3254 string=0x00000000004B3258 "h"
 *   insn=0x00000000004B3258 string=0x00000000004B325C "\ta"
 *   insn=0x00000000004B325C string=0x00000000004B3260 "?"
 *   insn=0x00000000004B3274 string=0x00000000004B3278 ""
 *   insn=0x00000000004B3280 string=0x00000000004B3284 "!"
 *   insn=0x00000000004B3284 string=0x00000000004B32A8 "\n"
 *   insn=0x00000000004B32AC string=0x00000000004B32B4 "h"
 *   insn=0x00000000004B32C8 string=0x00000000004B32CC ")=G"
 *   insn=0x00000000004B32CC string=0x00000000004B32D0 "!"
 *   insn=0x00000000004B32D0 string=0x00000000004B32D4 "i"
 *   insn=0x00000000004B32D4 string=0x00000000004B32D8 "\t"
 *   insn=0x00000000004B32D4 string=0x00000000004B3300 "\t"
 *   insn=0x00000000004B32D8 string=0x00000000004B32DC "*"
 *   insn=0x00000000004B32DC string=0x00000000004B32E0 "\n"
 *   insn=0x00000000004B32E4 string=0x00000000004B32E8 "?"
 *   insn=0x00000000004B32E8 string=0x00000000004B32EC "l"
 *   insn=0x00000000004B32F0 string=0x00000000004B32F4 ","
 *   insn=0x00000000004B32F8 string=0x00000000004B32FC "r9"
 *   insn=0x00000000004B3300 string=0x00000000004B3304 "*"
 *   insn=0x00000000004B3304 string=0x00000000004B3308 "\n"
 *   insn=0x00000000004B3308 string=0x00000000004B330C "?"
 *   insn=0x00000000004B330C string=0x00000000004B3310 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::UniqueIdentifier(Caver *this)
{
  unsigned __int64 v1; // x0
  __int64 v2; // x22
  int v3; // w8
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v6; // [xsp+F8h] [xbp-80h]
  __int64 v7; // [xsp+130h] [xbp-48h]
  __int64 v8; // [xsp+138h] [xbp-40h]
  __int64 v9; // [xsp+140h] [xbp-38h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  boost::uuids::basic_random_generator<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>::basic_random_generator();
  v1 = boost::uniform_int<unsigned long>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>();
  v2 = 0;
  v3 = 0;
  do
  {
    if ( v3 == 8 )
    {
      v1 = boost::uniform_int<unsigned long>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>();
      v3 = 0;
    }
    *((_BYTE *)&v7 + v2++) = v1 >> (8 * (unsigned __int8)v3++);
  }
  while ( v2 != 16 );
  LOBYTE(v8) = v8 & 0x3F | 0x80;
  BYTE6(v7) = BYTE6(v7) & 0xF | 0x40;
  if ( v6 )
  {
    v4 = v6[1] - 1LL;
    v6[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)())(*v6 + 16LL))();
      v5 = v6[2] - 1LL;
      v6[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)())(*v6 + 24LL))();
    }
  }
  boost::uuids::to_string();
}

