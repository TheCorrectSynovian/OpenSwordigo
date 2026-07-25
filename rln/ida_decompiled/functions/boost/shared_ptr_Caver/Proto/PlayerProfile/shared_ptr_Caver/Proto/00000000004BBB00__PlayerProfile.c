/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BBB00
 * Mangled: _ZN5boost10shared_ptrIN5Caver5Proto13PlayerProfileEEC2IS3_EEPT_
 * Demangled: boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile *)
 *
 * Callers: 1
 *   0x00000000001F9560  boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile *)
 *
 * Callees: 13
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4A70  Caver::AndroidSaveSnapshot(std::string const&,std::string const&,std::string const&,long long,long long)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FFE50  Caver::GameState::PercentCompleted(void)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 73
 *   insn=0x00000000004BBB1C string=0x00000000004BBB20 "I"
 *   insn=0x00000000004BBB1C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004BBB20 string=0x00000000004BBB24 ")"
 *   insn=0x00000000004BBB30 string=0x00000000004BBB34 "(A"
 *   insn=0x00000000004BBB38 string=0x00000000004BBB3C ""
 *   insn=0x00000000004BBB54 string=0x00000000004BBB58 "~"
 *   insn=0x00000000004BBB5C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004BBB60 string=0x00000000004BBB64 "h"
 *   insn=0x00000000004BBB64 string=0x00000000004BBB68 ""
 *   insn=0x00000000004BBB7C string=0x00000000001FD590 "0'"
 *   insn=0x00000000004BBB80 string=0x00000000004BBB84 "P"
 *   insn=0x00000000004BBBA0 string=0x00000000004BBBA4 "U"
 *   insn=0x00000000004BBBBC string=0x00000000004BBBC0 "Z"
 *   insn=0x00000000004BBBC8 string=0x00000000004BBBCC "W"
 *   insn=0x00000000004BBBEC string=0x00000000004BBBF0 "i"
 *   insn=0x00000000004BBBF4 string=0x00000000004BBBF8 ""yI"
 *   insn=0x00000000004BBC00 string=0x00000000004BBC04 "#"
 *   insn=0x00000000004BBC18 string=0x00000000001F4A70 "P'"
 *   insn=0x00000000004BBC1C string=0x00000000004BBC20 "S"
 *   insn=0x00000000004BBC20 string=0x00000000004BBC24 "s"
 *   insn=0x00000000004BBC30 string=0x00000000004BBC6C "I"
 *   insn=0x00000000004BBC40 string=0x00000000004BBC90 "I"
 *   insn=0x00000000004BBC4C string=0x00000000004BBC50 "!"
 *   insn=0x00000000004BBC50 string=0x00000000004BBCF4 "w"
 *   insn=0x00000000004BBC6C string=0x00000000004BBC70 ")=G"
 *   insn=0x00000000004BBC70 string=0x00000000004BBC74 "!"
 *   insn=0x00000000004BBC78 string=0x00000000004BBC7C "\t"
 *   insn=0x00000000004BBC78 string=0x00000000004BBCB4 "\t"
 *   insn=0x00000000004BBC7C string=0x00000000004BBC80 "*"
 *   insn=0x00000000004BBC80 string=0x00000000004BBC84 "\n"
 *   insn=0x00000000004BBC88 string=0x00000000004BBC8C ""
 *   insn=0x00000000004BBC8C string=0x00000000004BBCC0 "?"
 *   insn=0x00000000004BBC90 string=0x00000000004BBC94 ")=G"
 *   insn=0x00000000004BBC94 string=0x00000000004BBC98 "!"
 *   insn=0x00000000004BBC9C string=0x00000000004BBCA0 "\t"
 *   insn=0x00000000004BBC9C string=0x00000000004BBCD4 "\t"
 *   insn=0x00000000004BBCA0 string=0x00000000004BBCA4 "*"
 *   insn=0x00000000004BBCA4 string=0x00000000004BBCA8 "\n"
 *   insn=0x00000000004BBCB0 string=0x00000000004BBCE0 "?"
 *   insn=0x00000000004BBCB4 string=0x00000000004BBCB8 "*"
 *   insn=0x00000000004BBCB8 string=0x00000000004BBCBC "\n"
 *   insn=0x00000000004BBCD4 string=0x00000000004BBCD8 "*"
 *   insn=0x00000000004BBCD8 string=0x00000000004BBCDC "\n"
 *   insn=0x00000000004BBCF4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BBCF8 string=0x00000000004BBCFC ""
 *   insn=0x00000000004BBD00 string=0x00000000004BBD04 "J"
 *   insn=0x00000000004BBD04 string=0x00000000004BBD08 "J"
 *   insn=0x00000000004BBD0C string=0x00000000004BBD10 "(a"
 *   insn=0x00000000004BBD18 string=0x00000000004BBD6C "J"
 *   insn=0x00000000004BBD1C string=0x00000000004BBD20 "I"
 *   insn=0x00000000004BBD20 string=0x00000000004BBD24 ")"
 *   insn=0x00000000004BBD30 string=0x00000000004BBD34 "I"
 *   insn=0x00000000004BBD34 string=0x00000000004BBD38 ")=G"
 *   insn=0x00000000004BBD38 string=0x00000000004BBD3C "!"
 *   insn=0x00000000004BBD40 string=0x00000000004BBD44 "\t"
 *   insn=0x00000000004BBD40 string=0x00000000004BBDB4 "\t"
 *   insn=0x00000000004BBD44 string=0x00000000004BBD48 "*"
 *   insn=0x00000000004BBD48 string=0x00000000004BBD4C "\n"
 *   insn=0x00000000004BBD50 string=0x00000000004BBD54 "?"
 *   insn=0x00000000004BBD54 string=0x00000000004BBD58 "l"
 *   insn=0x00000000004BBD6C string=0x00000000004BBD70 "J=G"
 *   insn=0x00000000004BBD70 string=0x00000000004BBD74 ")!"
 *   insn=0x00000000004BBD78 string=0x00000000004BBD7C "*"
 *   insn=0x00000000004BBD78 string=0x00000000004BBD90 "*"
 *   insn=0x00000000004BBD7C string=0x00000000004BBD80 "K"
 *   insn=0x00000000004BBD80 string=0x00000000004BBD84 "+"
 *   insn=0x00000000004BBD8C string=0x00000000004BBD9C "_"
 *   insn=0x00000000004BBD90 string=0x00000000004BBD94 "K"
 *   insn=0x00000000004BBD94 string=0x00000000004BBD98 "+"
 *   insn=0x00000000004BBDA8 string=0x00000000004BBDAC "~"
 *   insn=0x00000000004BBDB4 string=0x00000000004BBDB8 "*"
 *   insn=0x00000000004BBDB8 string=0x00000000004BBDBC "\n"
 *   insn=0x00000000004BBDBC string=0x00000000004BBDC0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6D7AA8;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

