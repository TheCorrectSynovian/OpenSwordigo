/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035B3DC
 * Mangled: _ZN5Caver18GameViewController25ScheduleGuideTargetUpdateEv
 * Demangled: Caver::GameViewController::ScheduleGuideTargetUpdate(void)
 *
 * Callers: 1
 *   0x00000000002017A0  Caver::GameViewController::ScheduleGuideTargetUpdate(void)
 *
 * Callees: 1
 *   0x0000000000202680  Caver::GameState::GuideTargetCompleted(boost::shared_ptr<Caver::GuideTarget> const&)
 *
 * Referenced strings: 19
 *   insn=0x000000000035B3EC string=0x000000000035B3F0 "h"
 *   insn=0x000000000035B3F4 string=0x000000000035B3F8 "`V@"
 *   insn=0x000000000035B3F8 string=0x000000000035B3FC "tb"
 *   insn=0x000000000035B408 string=0x000000000035B40C "`"
 *   insn=0x000000000035B40C string=0x000000000035B410 "`"
 *   insn=0x000000000035B410 string=0x000000000035B43C "u"
 *   insn=0x000000000035B414 string=0x000000000035B418 ""
 *   insn=0x000000000035B41C string=0x000000000035B420 "@"
 *   insn=0x000000000035B420 string=0x000000000035B424 ""
 *   insn=0x000000000035B424 string=0x000000000035B428 ""
 *   insn=0x000000000035B42C string=0x000000000035B430 ""
 *   insn=0x000000000035B430 string=0x000000000035B434 ""
 *   insn=0x000000000035B440 string=0x000000000035B444 "5"
 *   insn=0x000000000035B448 string=0x000000000035B44C ""
 *   insn=0x000000000035B45C string=0x000000000035B460 "\t@"
 *   insn=0x000000000035B468 string=0x000000000035B46C ""
 *   insn=0x000000000035B47C string=0x000000000035B480 "@"
 *   insn=0x000000000035B488 string=0x000000000035B48C "h"
 *   insn=0x000000000035B490 string=0x000000000035B494 "h2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameViewController::ScheduleGuideTargetUpdate(Caver::GameViewController *this)
{
  _QWORD *v2; // x20
  char v3; // w0
  __int64 v4; // x0
  int v5; // w8
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8

  if ( !*((_QWORD *)this + 35) )
    goto LABEL_11;
  v2 = (_QWORD *)((char *)this + 280);
  Caver::GameState::GuideTargetCompleted();
  if ( (v3 & 1) != 0 )
  {
    v4 = *((_QWORD *)this + 37);
    if ( v4 )
    {
      *(_BYTE *)(v4 + 232) = 1;
      *((_QWORD *)this + 37) = 0;
      v5 = *(_DWORD *)(v4 + 8) - 1;
      *(_DWORD *)(v4 + 8) = v5;
      if ( !v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
    v6 = (_QWORD *)*((_QWORD *)this + 36);
    *v2 = 0;
    *((_QWORD *)this + 36) = 0;
    if ( v6 )
    {
      v7 = v6[1] - 1LL;
      v6[1] = v7;
      if ( !v7 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
        v8 = v6[2] - 1LL;
        v6[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
      }
    }
  }
  if ( !*v2 )
LABEL_11:
    *((_DWORD *)this + 76) = 1069547520;
}

