/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BCD98
 * Mangled: _ZN5Caver22ProfileManager_Android20HideCloudLoadingViewEv
 * Demangled: Caver::ProfileManager_Android::HideCloudLoadingView(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF410  Caver::ProfileManagerLoadingViewController::DismissAfterMinimumDelay(float)
 *
 * Referenced strings: 12
 *   insn=0x00000000004BCDA8 string=0x00000000004BCDAC "@"
 *   insn=0x00000000004BCDC0 string=0x00000000004BCDC4 "h"
 *   insn=0x00000000004BCDC4 string=0x00000000004BCDC8 ""
 *   insn=0x00000000004BCDC8 string=0x00000000004BCDCC "h"
 *   insn=0x00000000004BCDCC string=0x00000000004BCDD0 "!"
 *   insn=0x00000000004BCDD0 string=0x00000000004BCDD4 "h"
 *   insn=0x00000000004BCDD8 string=0x00000000004BCDDC "\t@"
 *   insn=0x00000000004BCDE0 string=0x00000000004BCDE4 "h\n@"
 *   insn=0x00000000004BCDE4 string=0x00000000004BCDE8 ""
 *   insn=0x00000000004BCDE8 string=0x00000000004BCDEC "h\n"
 *   insn=0x00000000004BCDF0 string=0x00000000004BCE00 "h"
 *   insn=0x00000000004BCE10 string=0x00000000004BCE14 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManager_Android::HideCloudLoadingView(Caver::ProfileManager_Android *this)
{
  Caver::ProfileManagerLoadingViewController *v2; // x0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = (Caver::ProfileManagerLoadingViewController *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    Caver::ProfileManagerLoadingViewController::DismissAfterMinimumDelay(v2, 1.0);
    v3 = (_QWORD *)*((_QWORD *)this + 19);
    *((_QWORD *)this + 18) = 0;
    *((_QWORD *)this + 19) = 0;
    if ( v3 )
    {
      v4 = v3[1] - 1LL;
      v3[1] = v4;
      if ( !v4 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
        v5 = v3[2] - 1LL;
        v3[2] = v5;
        if ( !v5 )
          (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
      }
    }
  }
}

