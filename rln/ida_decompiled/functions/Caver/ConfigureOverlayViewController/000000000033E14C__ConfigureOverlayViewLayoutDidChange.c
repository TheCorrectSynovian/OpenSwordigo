/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033E14C
 * Mangled: _ZN5Caver30ConfigureOverlayViewController35ConfigureOverlayViewLayoutDidChangeEPNS_20ConfigureOverlayViewE
 * Demangled: Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView *)
 *
 * Callers: 1
 *   0x00000000001F94F0  Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView *)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9680  Caver::GameOptions::SetControlsLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x00000000001FCB50  Caver::CurrentDeviceType(void)
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 69
 *   insn=0x000000000033E158 string=0x000000000033E15C "T"
 *   insn=0x000000000033E170 string=0x000000000033E174 "h"
 *   insn=0x000000000033E170 string=0x00000000001FD940 "0'"
 *   insn=0x000000000033E17C string=0x000000000033E180 "h"
 *   insn=0x000000000033E188 string=0x000000000033E18C "\t"
 *   insn=0x000000000033E18C string=0x000000000033E190 ")"
 *   insn=0x000000000033E190 string=0x000000000033E194 "\t"
 *   insn=0x000000000033E198 string=0x000000000033E19C "9"
 *   insn=0x000000000033E19C string=0x00000000001F9680 "0'"
 *   insn=0x000000000033E1A0 string=0x000000000033E1A4 "3"
 *   insn=0x000000000033E1A4 string=0x000000000033E1A8 "h"
 *   insn=0x000000000033E1A8 string=0x000000000033E1AC ""
 *   insn=0x000000000033E1AC string=0x000000000033E1B0 "h"
 *   insn=0x000000000033E1B4 string=0x000000000033E1B8 "h"
 *   insn=0x000000000033E1B8 string=0x000000000033E1BC "\t@"
 *   insn=0x000000000033E1C4 string=0x000000000033E1C8 "h\n@"
 *   insn=0x000000000033E1C8 string=0x000000000033E1CC ""
 *   insn=0x000000000033E1CC string=0x000000000033E1D0 "h\n"
 *   insn=0x000000000033E1D4 string=0x000000000033E1D8 "h"
 *   insn=0x000000000033E1D8 string=0x000000000033E1DC "@"
 *   insn=0x000000000033E1E8 string=0x000000000033E1EC "3"
 *   insn=0x000000000033E1EC string=0x000000000033E1F0 "h"
 *   insn=0x000000000033E1F0 string=0x000000000033E1F4 ""
 *   insn=0x000000000033E1F4 string=0x000000000033E1F8 "h"
 *   insn=0x000000000033E1FC string=0x000000000033E200 "h"
 *   insn=0x000000000033E204 string=0x000000000033E208 "\t@"
 *   insn=0x000000000033E20C string=0x000000000033E210 "h\n@"
 *   insn=0x000000000033E210 string=0x000000000033E214 ""
 *   insn=0x000000000033E214 string=0x000000000033E218 "h\n"
 *   insn=0x000000000033E21C string=0x000000000033E220 "h"
 *   insn=0x000000000033E224 string=0x000000000033E228 "@"
 *   insn=0x000000000033E234 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033E240 string=0x000000000033E244 ""
 *   insn=0x000000000033E244 string=0x000000000033E248 "?"
 *   insn=0x000000000033E24C string=0x000000000033E250 "\t"
 *   insn=0x000000000033E250 string=0x000000000033E254 "_"
 *   insn=0x000000000033E258 string=0x000000000033E25C "\n"
 *   insn=0x000000000033E25C string=0x000000000033E260 "T"
 *   insn=0x000000000033E284 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033E290 string=0x000000000033E294 "&"
 *   insn=0x000000000033E29C string=0x000000000033E2A0 "4"
 *   insn=0x000000000033E2A4 string=0x000000000033E2A8 ""
 *   insn=0x000000000033E2B4 string=0x000000000033E2B8 "\t@"
 *   insn=0x000000000033E2C4 string=0x000000000033E2C8 ""
 *   insn=0x000000000033E2D4 string=0x000000000033E2D8 "@"
 *   insn=0x000000000033E2E4 string=0x000000000033E2E8 "4"
 *   insn=0x000000000033E2EC string=0x000000000033E2F0 ""
 *   insn=0x000000000033E2FC string=0x000000000033E300 "\t@"
 *   insn=0x000000000033E30C string=0x000000000033E310 ""
 *   insn=0x000000000033E31C string=0x000000000033E320 "@"
 *   insn=0x000000000033E32C string=0x000000000033E330 "e\t"
 *   insn=0x000000000033E34C string=0x00000000001FCB50 "0'"
 *   insn=0x000000000033E350 string=0x000000000033E354 "A"
 *   insn=0x000000000033E35C string=0x000000000033E360 "\n"
 *   insn=0x000000000033E35C string=0x000000000033E36C "t&@"
 *   insn=0x000000000033E360 string=0x000000000033E364 "J"
 *   insn=0x000000000033E364 string=0x000000000033E368 "\n"
 *   insn=0x000000000033E36C string=0x000000000033E370 "i""
 *   insn=0x000000000033E370 string=0x000000000033E374 "T"
 *   insn=0x000000000033E380 string=0x000000000033E384 "\n"
 *   insn=0x000000000033E380 string=0x000000000033E390 "t"
 *   insn=0x000000000033E384 string=0x000000000033E388 "J"
 *   insn=0x000000000033E388 string=0x000000000033E38C "\n"
 *   insn=0x000000000033E390 string=0x000000000033E394 "i""
 *   insn=0x000000000033E39C string=0x000000000033E3A0 ""
 *   insn=0x000000000033E3A4 string=0x000000000033E3A8 "!"
 *   insn=0x000000000033E3B0 string=0x000000000033E3B4 "\t@"
 *   insn=0x000000000033E3BC string=0x000000000033E3C0 ""
 *   insn=0x000000000033E3E8 string=0x000000000033E3EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(
        Caver::ConfigureOverlayViewController *this,
        Caver::ConfigureOverlayView *a2)
{
  _QWORD *v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::GameEvent *v9; // x0
  Caver::GameEvent *v10; // x1
  _QWORD *v11; // [xsp+30h] [xbp-30h]
  __int64 v12; // [xsp+38h] [xbp-28h] BYREF
  _QWORD *v13; // [xsp+40h] [xbp-20h]
  __int64 v14; // [xsp+48h] [xbp-18h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GameOptions::sharedOptions(&v12, this);
  v3 = (_QWORD *)*((_QWORD *)a2 + 40);
  v11 = v3;
  if ( v3 )
    ++v3[1];
  Caver::GameOptions::SetControlsLayout();
  if ( v11 )
  {
    v4 = v11[1] - 1LL;
    v11[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v5 = v11[2] - 1LL;
      v11[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v6 = v13;
  if ( v13 )
  {
    v7 = v13[1] - 1LL;
    v13[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = (Caver::GameEvent *)operator new(0x68u);
  *(_DWORD *)v9 = 16;
  *((_QWORD *)v9 + 2) = 0;
  *((_QWORD *)v9 + 3) = 0;
  *((_QWORD *)v9 + 4) = (char *)v9 + 16;
  *((_QWORD *)v9 + 5) = (char *)v9 + 16;
  *((_QWORD *)v9 + 6) = 0;
  *((_QWORD *)v9 + 8) = 0;
  *((_QWORD *)v9 + 9) = 0;
  *((_QWORD *)v9 + 10) = (char *)v9 + 64;
  *((_QWORD *)v9 + 11) = (char *)v9 + 64;
  *((_QWORD *)v9 + 12) = 0;
  Caver::GameEvent::SendEvent(v9, v10);
}

