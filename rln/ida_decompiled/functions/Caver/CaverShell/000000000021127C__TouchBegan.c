/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021127C
 * Mangled: _ZN5Caver10CaverShell10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::CaverShell::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB100  Caver::FWShell::TouchBegan(Caver::FWTouch const&)
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *   0x00000000001FF9D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *   0x00000000001FFA90  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *
 * Referenced strings: 14
 *   insn=0x0000000000211294 string=0x0000000000211298 "W"
 *   insn=0x00000000002112BC string=0x00000000002112C0 " "
 *   insn=0x00000000002112BC string=0x00000000001FB100 "0'"
 *   insn=0x00000000002112D4 string=0x00000000002112D8 ""
 *   insn=0x00000000002112E4 string=0x00000000002112E8 "\t"
 *   insn=0x00000000002112F4 string=0x00000000001FD9E0 "0'"
 *   insn=0x00000000002112F8 string=0x00000000002112FC "`"
 *   insn=0x000000000021130C string=0x0000000000211310 "!#"
 *   insn=0x0000000000211314 string=0x0000000000211318 "!"
 *   insn=0x000000000021131C string=0x0000000000211320 "`"
 *   insn=0x0000000000211320 string=0x0000000000211324 "@ "
 *   insn=0x0000000000211324 string=0x0000000000211328 "a!"
 *   insn=0x000000000021132C string=0x0000000000211330 "!"
 *   insn=0x0000000000211374 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CaverShell::TouchBegan(Caver::CaverShell *this, const Caver::FWTouch *a2)
{
  Caver::GUIWindow *v4; // x21
  float v5; // s8
  float v6; // s9
  __int64 v7; // x8
  float v8; // s2
  float v9; // s3
  float v10; // s1
  float v11; // s1
  float v13[10]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v14; // [xsp+28h] [xbp-48h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 168) || (Caver::FWShell::TouchBegan(this, a2) & 1) == 0 )
    return 0;
  v4 = (Caver::GUIWindow *)*((_QWORD *)this + 17);
  v5 = (float)(int)Caver::FWShellPreferences::Get();
  v6 = (float)(int)Caver::FWShellPreferences::Get();
  Caver::FWTouch::FWTouch((Caver::FWTouch *)v13, a2);
  v7 = *((_QWORD *)this + 17);
  v8 = *(float *)(v7 + 124);
  v9 = *(float *)(v7 + 128);
  v10 = (float)(*((float *)a2 + 3) * v9) / v6;
  v13[2] = (float)(*((float *)a2 + 2) * v8) / v5;
  v13[3] = v10;
  v11 = (float)(v9 * *((float *)a2 + 5)) / v6;
  v13[4] = (float)(v8 * *((float *)a2 + 4)) / v5;
  v13[5] = v11;
  Caver::GUIWindow::BeginTouch(v4, (const Caver::FWTouch *)v13);
  return 1;
}

