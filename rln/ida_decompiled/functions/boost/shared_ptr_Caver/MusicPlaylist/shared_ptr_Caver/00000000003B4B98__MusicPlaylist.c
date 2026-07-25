/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B4B98
 * Mangled: _ZN5boost10shared_ptrIN5Caver13MusicPlaylistEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *
 * Callers: 2
 *   0x00000000001FE810  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Callees: 16
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8830  Caver::AudioSystem::SetSoundEnabled(bool)
 *   0x00000000001F90E0  Caver::AudioSystem::SetMusicVolume(float)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FEBD0  Caver::AudioSystem::SetSoundVolume(float)
 *   0x0000000000202300  Caver::AudioSystem::SetMusicEnabled(bool)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 49
 *   insn=0x00000000003B4BAC string=0x00000000003B4BB0 "U"
 *   insn=0x00000000003B4BCC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B4BD0 string=0x00000000003B4BD4 ")qB"
 *   insn=0x00000000003B4BE0 string=0x00000000003B4BE4 "(A"
 *   insn=0x00000000003B4BE8 string=0x00000000003B4BEC ""
 *   insn=0x00000000003B4BFC string=0x00000000003B4C00 "T7"
 *   insn=0x00000000003B4C2C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B4C30 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B4C34 string=0x00000000003B4C38 "tVA"
 *   insn=0x00000000003B4C40 string=0x00000000003B4CB4 "t"
 *   insn=0x00000000003B4C5C string=0x00000000003B4C60 "\t"
 *   insn=0x00000000003B4C5C string=0x00000000003B4C74 "\t"
 *   insn=0x00000000003B4C60 string=0x00000000003B4C64 "*"
 *   insn=0x00000000003B4C64 string=0x00000000003B4C68 "\n"
 *   insn=0x00000000003B4C70 string=0x00000000003B4C80 "?"
 *   insn=0x00000000003B4C74 string=0x00000000003B4C78 "*"
 *   insn=0x00000000003B4C78 string=0x00000000003B4C7C "\n"
 *   insn=0x00000000003B4CA0 string=0x00000000003B4C58 "!"
 *   insn=0x00000000003B4CA8 string=0x00000000003B4CAC "A"
 *   insn=0x00000000003B4CAC string=0x00000000003B4CB0 "t\n@"
 *   insn=0x00000000003B4CB4 string=0x00000000003B4CC0 "h"
 *   insn=0x00000000003B4CB8 string=0x00000000003B4CBC "}\t"
 *   insn=0x00000000003B4CBC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B4CC4 string=0x00000000003B4CC8 ")"
 *   insn=0x00000000003B4CD8 string=0x00000000003B4CDC ")=G"
 *   insn=0x00000000003B4CDC string=0x00000000003B4CE0 "!"
 *   insn=0x00000000003B4CE4 string=0x00000000003B4CE8 "\t"
 *   insn=0x00000000003B4CE4 string=0x00000000003B4D14 "\t"
 *   insn=0x00000000003B4CE8 string=0x00000000003B4CEC "*"
 *   insn=0x00000000003B4CEC string=0x00000000003B4CF0 "\n"
 *   insn=0x00000000003B4CF4 string=0x00000000003B4CF8 "?"
 *   insn=0x00000000003B4CF8 string=0x00000000003B4CFC "l"
 *   insn=0x00000000003B4D08 string=0x00000000003B4D0C "i\t"
 *   insn=0x00000000003B4D14 string=0x00000000003B4D18 "*"
 *   insn=0x00000000003B4D18 string=0x00000000003B4D1C "\n"
 *   insn=0x00000000003B4D1C string=0x00000000003B4D20 "?"
 *   insn=0x00000000003B4D30 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B4D4C string=0x00000000003B4D50 "x$"
 *   insn=0x00000000003B4D50 string=0x00000000003B4D54 "a"
 *   insn=0x00000000003B4D50 string=0x00000000001FDF30 "0'"
 *   insn=0x00000000003B4D54 string=0x00000000003B4D58 "j5"
 *   insn=0x00000000003B4D58 string=0x00000000003B4D5C "u$"
 *   insn=0x00000000003B4D5C string=0x00000000003B4D60 "a"
 *   insn=0x00000000003B4D64 string=0x00000000003B4D68 "r$"
 *   insn=0x00000000003B4D64 string=0x00000000001F8830 "0'"
 *   insn=0x00000000003B4D68 string=0x00000000003B4D6C "`&@"
 *   insn=0x00000000003B4D70 string=0x00000000003B4D74 "o$"
 *   insn=0x00000000003B4D70 string=0x00000000001F90E0 "0'"
 *   insn=0x00000000003B4D74 string=0x00000000003B4D78 "`*@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0

  _ReadStatusReg(TPIDR_EL0);
  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6CEEF8;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

