/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020E400
 * Mangled: _ZN5Caver10CaverShell14UpdateViewSizeEv
 * Demangled: Caver::CaverShell::UpdateViewSize(void)
 *
 * Callers: 1
 *   0x00000000002005A0  Caver::CaverShell::UpdateViewSize(void)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FF9D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *
 * Referenced strings: 26
 *   insn=0x000000000020E418 string=0x000000000020E41C "U"
 *   insn=0x000000000020E424 string=0x000000000020E428 "t"
 *   insn=0x000000000020E434 string=0x000000000020E438 "f"
 *   insn=0x000000000020E438 string=0x000000000020E43C ""
 *   insn=0x000000000020E444 string=0x000000000020E448 "b"
 *   insn=0x000000000020E448 string=0x000000000020E44C "\t"
 *   insn=0x000000000020E454 string=0x000000000020E458 "^"
 *   insn=0x000000000020E458 string=0x000000000020E45C "\n"
 *   insn=0x000000000020E464 string=0x000000000020E468 "Z"
 *   insn=0x000000000020E47C string=0x000000000020E480 "AY!"
 *   insn=0x000000000020E48C string=0x000000000020E490 "$(""
 *   insn=0x000000000020E4AC string=0x000000000020E4B0 "hF@"
 *   insn=0x000000000020E4B0 string=0x000000000020E4B4 "c(""
 *   insn=0x000000000020E4B4 string=0x000000000020E4B8 "'9#"
 *   insn=0x000000000020E4B8 string=0x000000000020E4BC "g('"
 *   insn=0x000000000020E4C0 string=0x000000000020E4C4 "FY&"
 *   insn=0x000000000020E4C8 string=0x000000000020E4CC "!8$"
 *   insn=0x000000000020E4DC string=0x000000000020E4E0 "09 "
 *   insn=0x000000000020E4E4 string=0x000000000020E4E8 "hF@"
 *   insn=0x000000000020E4EC string=0x000000000020E4F0 "A(!"
 *   insn=0x000000000020E4F4 string=0x000000000020E4F8 "!8&"
 *   insn=0x000000000020E4FC string=0x000000000020E500 "!8""
 *   insn=0x000000000020E508 string=0x000000000020E50C "`F@"
 *   insn=0x000000000020E514 string=0x00000000001FB170 "0'"
 *   insn=0x000000000020E524 string=0x000000000020E544 "c"
 *   insn=0x000000000020E544 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CaverShell::UpdateViewSize(Caver::CaverShell *this)
{
  float v2; // s8
  float v3; // s9
  float v4; // s10
  int v5; // w0
  float v6; // s1
  float v7; // s5
  float *v8; // x8
  float v9; // s3
  float v10; // s6
  float v11; // s0
  float *v12; // x8
  __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  float v15; // [xsp+10h] [xbp-40h]
  float v16; // [xsp+14h] [xbp-3Ch]
  __int64 v17; // [xsp+18h] [xbp-38h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (float)(int)Caver::FWShellPreferences::Get();
  v3 = (float)(int)Caver::FWShellPreferences::Get();
  v4 = (float)(int)Caver::FWShellPreferences::Get();
  v5 = Caver::FWShellPreferences::Get();
  v6 = fminf(v4, 30.0);
  v7 = fminf((float)v5, 0.0);
  v14 = 0;
  v15 = v2;
  v16 = v3;
  v8 = (float *)*((_QWORD *)this + 17);
  v9 = fminf((float)v5, 10.0) + 0.0;
  v10 = fminf(v4, 50.0);
  v8[12] = v6 + 0.0;
  v8[13] = v9;
  v11 = fminf((float)v5, 15.0) + 0.0;
  v8[14] = (float)((float)((float)(v6 + 0.0) + (float)(v2 - (float)(v6 + 0.0))) - v6) - (float)(v6 + 0.0);
  v8[15] = (float)((float)(v9 + (float)(v3 - v9)) - v7) - v9;
  v12 = (float *)*((_QWORD *)this + 17);
  v12[16] = v10 + 0.0;
  v12[17] = v11;
  v12[18] = (float)((float)((float)(v10 + 0.0) + (float)(v2 - (float)(v10 + 0.0))) - v10) - (float)(v10 + 0.0);
  v12[19] = (float)((float)(v11 + (float)(v3 - v11)) - v7) - v11;
  return Caver::GUIView::SetFrame(*((Caver::GUIView **)this + 17), (const Caver::Rectangle *)&v14);
}

