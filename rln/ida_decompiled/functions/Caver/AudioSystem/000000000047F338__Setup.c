/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047F338
 * Mangled: _ZN5Caver11AudioSystem5SetupEv
 * Demangled: Caver::AudioSystem::Setup(void)
 *
 * Callers: 2
 *   0x00000000001F7DA0  Caver::AudioSystem::Setup(void)
 *   0x000000000047EFBC  Caver::AudioSystem::CreateDevice(void)
 *
 * Callees: 15
 *   0x00000000001F4EC0  Caver::AudioSystem::CreateDevice(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7910  InitAudioSession(boost::function<void ()(void)>,boost::function<void ()(void)>)
 *   0x00000000001FC3D0  Caver::MusicPlayer::MusicPlayer(void)
 *   0x00000000001FF1C0  boost::detail::shared_count::shared_count<Caver::MusicPlayer>(Caver::MusicPlayer *)
 *   0x00000000001FF5E0  Caver::MusicPlayer::SetEnabled(bool)
 *   0x0000000000200F40  SetAudioSessionActive(bool)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000047EB04  Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *   0x000000000047ED10  Caver::AudioSystem::AudioInterruptionDidEnd(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x000000000047F348 string=0x000000000047F34C "U"
 *   insn=0x000000000047F358 string=0x000000000047F35C "h6@"
 *   insn=0x000000000047F35C string=0x000000000047F360 "H"
 *   insn=0x000000000047F364 string=0x000000000047F368 "("
 *   insn=0x000000000047F368 string=0x000000000047F36C ""
 *   insn=0x000000000047F384 string=0x000000000047F388 "`"
 *   insn=0x000000000047F384 string=0x00000000001F6B70 "0'"
 *   insn=0x000000000047F38C string=0x000000000047F390 ""
 *   insn=0x000000000047F3A0 string=0x000000000047F3A4 "H"
 *   insn=0x000000000047F3A4 string=0x000000000047F3A8 "AB"
 *   insn=0x000000000047F3B0 string=0x000000000047F3B4 "("
 *   insn=0x000000000047F3B4 string=0x000000000047F3B8 ""
 *   insn=0x000000000047F3D0 string=0x000000000047F3D4 "`"
 *   insn=0x000000000047F3D8 string=0x000000000047F3DC ""
 *   insn=0x000000000047F3EC string=0x000000000047F3F0 "H"
 *   insn=0x000000000047F3F0 string=0x000000000047F3F4 "AB"
 *   insn=0x000000000047F400 string=0x000000000047F404 "C"
 *   insn=0x000000000047F404 string=0x00000000001F7910 "0'"
 *   insn=0x000000000047F408 string=0x000000000047F40C "h"
 *   insn=0x000000000047F40C string=0x000000000047F410 "("
 *   insn=0x000000000047F410 string=0x000000000047F414 ""
 *   insn=0x000000000047F414 string=0x000000000047F418 ""
 *   insn=0x000000000047F420 string=0x000000000047F424 " !"
 *   insn=0x000000000047F438 string=0x000000000047F43C "h"
 *   insn=0x000000000047F43C string=0x000000000047F440 "("
 *   insn=0x000000000047F440 string=0x000000000047F444 ""
 *   insn=0x000000000047F444 string=0x000000000047F448 ""
 *   insn=0x000000000047F450 string=0x000000000047F454 " !"
 *   insn=0x000000000047F470 string=0x000000000047F474 "["
 *   insn=0x000000000047F474 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047F47C string=0x00000000001FC3D0 "0'"
 *   insn=0x000000000047F48C string=0x000000000047F490 "L"
 *   insn=0x000000000047F49C string=0x000000000047F4A0 ","
 *   insn=0x000000000047F4A0 string=0x000000000047F4A4 "h"
 *   insn=0x000000000047F4B0 string=0x000000000047F4B4 "i"
 *   insn=0x000000000047F4B8 string=0x000000000047F4BC "4"
 *   insn=0x000000000047F4C0 string=0x000000000047F4C4 ""
 *   insn=0x000000000047F4D4 string=0x000000000047F4D8 "\t@"
 *   insn=0x000000000047F4E0 string=0x000000000047F4E4 ""
 *   insn=0x000000000047F4F4 string=0x000000000047F4F8 "@"
 *   insn=0x000000000047F500 string=0x000000000047F504 "o"
 *   insn=0x000000000047F504 string=0x00000000001F4EC0 "P'"
 *   insn=0x000000000047F514 string=0x000000000047F530 "h"
 *   insn=0x000000000047F530 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047F540 string=0x000000000047F59C "("
 *   insn=0x000000000047F548 string=0x000000000047F54C "Y"
 *   insn=0x000000000047F54C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047F55C string=0x000000000047F560 "h"
 *   insn=0x000000000047F560 string=0x000000000047F564 "("
 *   insn=0x000000000047F564 string=0x000000000047F568 ""
 *   insn=0x000000000047F568 string=0x000000000047F56C ""
 *   insn=0x000000000047F574 string=0x000000000047F578 " !"
 *   insn=0x000000000047F58C string=0x000000000047F590 "h"
 *   insn=0x000000000047F59C string=0x000000000047F5A0 ""
 *   insn=0x000000000047F5A0 string=0x000000000047F5A4 ""
 *   insn=0x000000000047F5AC string=0x000000000047F5B0 " !"
 *   insn=0x000000000047F5C8 string=0x000000000047F5CC "`;"
 *   insn=0x000000000047F5D0 string=0x000000000047F5D4 "`"
 *   insn=0x000000000047F5D4 string=0x000000000047F5D8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioSystem::Setup(Caver::AudioSystem *this)
{
  int64x2_t v2; // q0
  _UNKNOWN **v3; // x8
  int64x2_t v4; // q0
  _UNKNOWN **v5; // x8
  void (__fastcall *v6)(int64x2_t *, int64x2_t *, __int64); // x8
  void (__fastcall *v7)(int64x2_t *, int64x2_t *, __int64); // x8
  Caver::MusicPlayer *v8; // x20
  _QWORD *v9; // x20
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  unsigned __int64 v15; // [xsp+0h] [xbp-80h]
  int64x2_t v16; // [xsp+8h] [xbp-78h] BYREF
  Caver::AudioSystem *v17; // [xsp+18h] [xbp-68h]
  unsigned __int64 v18; // [xsp+20h] [xbp-60h]
  int64x2_t v19; // [xsp+28h] [xbp-58h] BYREF
  Caver::AudioSystem *v20; // [xsp+38h] [xbp-48h]
  int64x2_t v21; // [xsp+40h] [xbp-40h]
  Caver::AudioSystem *v22; // [xsp+50h] [xbp-30h]
  __int64 v23; // [xsp+58h] [xbp-28h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_QWORD *)this + 13) )
  {
    v18 = 0;
    v2 = vdupq_n_s64(0);
    v22 = this;
    v2.n128_u64[0] = (unsigned __int64)Caver::AudioSystem::AudioInterruptionDidBegin;
    v21 = v2;
    if ( (boost::detail::function::has_empty_target() & 1) != 0 )
    {
      v3 = 0;
    }
    else
    {
      v20 = v22;
      v19 = v21;
      v3 = &boost::function0<void>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf0<void,Caver::AudioSystem>,boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*>>>>(boost::_bi::bind_t<void,boost::_mfi::mf0<void,Caver::AudioSystem>,boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*>>>)::stored_vtable;
    }
    v18 = (unsigned __int64)v3;
    v4 = vdupq_n_s64(0);
    v22 = this;
    v4.n128_u64[0] = (unsigned __int64)Caver::AudioSystem::AudioInterruptionDidEnd;
    v21 = v4;
    if ( (boost::detail::function::has_empty_target() & 1) != 0 )
    {
      v5 = 0;
    }
    else
    {
      v17 = v22;
      v16 = v21;
      v5 = &boost::function0<void>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf0<void,Caver::AudioSystem>,boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*>>>>(boost::_bi::bind_t<void,boost::_mfi::mf0<void,Caver::AudioSystem>,boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*>>>)::stored_vtable;
    }
    v15 = (unsigned __int64)v5;
    InitAudioSession();
    if ( v15 )
    {
      if ( (v15 & 1) == 0 )
      {
        v6 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v15 & 0xFFFFFFFFFFFFFFFELL);
        if ( v6 )
          v6(&v16, &v16, 2);
      }
    }
    if ( v18 )
    {
      if ( (v18 & 1) == 0 )
      {
        v7 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v18 & 0xFFFFFFFFFFFFFFFELL);
        if ( v7 )
          v7(&v19, &v19, 2);
      }
      v18 = 0;
    }
    SetAudioSessionActive(1);
    v8 = (Caver::MusicPlayer *)operator new(0x88u);
    Caver::MusicPlayer::MusicPlayer(v8);
    v21.n128_u64[0] = (unsigned __int64)v8;
    boost::detail::shared_count::shared_count<Caver::MusicPlayer>();
    boost::detail::sp_enable_shared_from_this();
    v9 = (_QWORD *)*((_QWORD *)this + 14);
    v10 = v21.n128_u64[0];
    v21.n128_u64[0] = *((_QWORD *)this + 13);
    v11 = v21.n128_u64[1];
    *((_QWORD *)this + 13) = v10;
    *((_QWORD *)this + 14) = v11;
    v21.n128_u64[1] = (unsigned __int64)v9;
    if ( v9 )
    {
      v12 = v9[1] - 1LL;
      v9[1] = v12;
      if ( !v12 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v13 = v9[2] - 1LL;
        v9[2] = v13;
        if ( !v13 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
    Caver::AudioSystem::CreateDevice(this);
  }
  return 1;
}

