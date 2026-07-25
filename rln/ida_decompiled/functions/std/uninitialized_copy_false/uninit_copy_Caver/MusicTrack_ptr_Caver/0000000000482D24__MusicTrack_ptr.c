/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000482D24
 * Mangled: _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver10MusicTrackES4_EET0_T_S6_S5_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack *,Caver::MusicTrack *>(Caver::MusicTrack *,Caver::MusicTrack *,Caver::MusicTrack *)
 *
 * Callers: 1
 *   0x00000000001F5A40  std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack *,Caver::MusicTrack *>(Caver::MusicTrack *,Caver::MusicTrack *,Caver::MusicTrack *)
 *
 * Callees: 13
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE0D0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 53
 *   insn=0x0000000000482D38 string=0x0000000000482D3C "W"
 *   insn=0x0000000000482D98 string=0x0000000000482DB8 "F"
 *   insn=0x0000000000482DB8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000482DBC string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000482DC4 string=0x0000000000482E3C "M"
 *   insn=0x0000000000482DD8 string=0x0000000000482E20 "h"
 *   insn=0x0000000000482DE0 string=0x0000000000482DE4 "\t"
 *   insn=0x0000000000482DE0 string=0x0000000000482E00 "\t"
 *   insn=0x0000000000482DE4 string=0x0000000000482DE8 "*"
 *   insn=0x0000000000482DE8 string=0x0000000000482DEC "\n"
 *   insn=0x0000000000482DF0 string=0x0000000000482DF4 "?"
 *   insn=0x0000000000482DF8 string=0x0000000000482E30 "sB"
 *   insn=0x0000000000482E00 string=0x0000000000482E04 "*"
 *   insn=0x0000000000482E04 string=0x0000000000482E08 "\n"
 *   insn=0x0000000000482E08 string=0x0000000000482E0C "?"
 *   insn=0x0000000000482E14 string=0x0000000000482E18 "c"
 *   insn=0x0000000000482E2C string=0x0000000000482DDC "!"
 *   insn=0x0000000000482E34 string=0x0000000000482E38 "A"
 *   insn=0x0000000000482E44 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000482E4C string=0x0000000000482E50 "?-"
 *   insn=0x0000000000482E7C string=0x0000000000482E80 "`"
 *   insn=0x0000000000482E84 string=0x0000000000482E88 "w"
 *   insn=0x0000000000482E9C string=0x0000000000482EA0 """
 *   insn=0x0000000000482EA4 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000482EAC string=0x0000000000482F40 ":"
 *   insn=0x0000000000482ECC string=0x0000000000482ED0 ""
 *   insn=0x0000000000482EE4 string=0x0000000000482EE8 "c"
 *   insn=0x0000000000482EFC string=0x0000000000482F00 ")"
 *   insn=0x0000000000482F00 string=0x0000000000482F04 ""
 *   insn=0x0000000000482F08 string=0x0000000000482F0C """
 *   insn=0x0000000000482F14 string=0x0000000000482F18 "@\t"
 *   insn=0x0000000000482F18 string=0x0000000000482F1C "="
 *   insn=0x0000000000482F20 string=0x0000000000482F24 "_"
 *   insn=0x0000000000482F2C string=0x0000000000482F30 "_"
 *   insn=0x0000000000482F34 string=0x0000000000482F38 "@"
 *   insn=0x0000000000482F60 string=0x0000000000482F64 "`"
 *   insn=0x0000000000482F78 string=0x0000000000482F7C "("
 *   insn=0x0000000000482F90 string=0x0000000000482F94 "?"
 *   insn=0x0000000000482F94 string=0x0000000000482F98 "L"
 *   insn=0x0000000000482F9C string=0x0000000000482FA0 "?"
 *   insn=0x0000000000482FA4 string=0x0000000000482FA8 " "
 *   insn=0x0000000000482FAC string=0x0000000000482FB0 "h"
 *   insn=0x0000000000482FB8 string=0x0000000000482FBC "w"
 *   insn=0x0000000000482FC0 string=0x0000000000482FC4 "$"
 *   insn=0x0000000000482FC8 string=0x0000000000482FCC "_"
 *   insn=0x0000000000482FD4 string=0x0000000000482FD8 "_"
 *   insn=0x0000000000482FDC string=0x0000000000482FE0 "@"
 *   insn=0x0000000000482FF4 string=0x0000000000482FF8 "L"
 *   insn=0x0000000000483004 string=0x0000000000483008 "`"
 *   insn=0x0000000000483020 string=0x0000000000483024 "?"
 *   insn=0x000000000048302C string=0x0000000000483030 "?"
 *   insn=0x0000000000483034 string=0x0000000000483038 " "
 *   insn=0x0000000000483044 string=0x0000000000483048 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack *,Caver::MusicTrack *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x22
  __int64 v5; // x20
  int v6; // w8

  v4 = a1;
  _ReadStatusReg(TPIDR_EL0);
  if ( a1 == a2 )
    return a3;
  v5 = a3;
  do
  {
    sub_56A528(v5, v4);
    v6 = *(_DWORD *)(v4 + 8);
    v4 += 16;
    *(_DWORD *)(v5 + 8) = v6;
    v5 += 16;
  }
  while ( v4 != a2 );
  return v5;
}

