/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211464
 * Mangled: _ZN5Caver10CaverShell10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::CaverShell::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBA30  Caver::FWShell::TouchEnded(Caver::FWTouch const&)
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *   0x00000000001FF9D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *   0x0000000000202D90  Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *
 * Referenced strings: 20
 *   insn=0x000000000021147C string=0x0000000000211480 "W"
 *   insn=0x0000000000211490 string=0x0000000000211494 "g"
 *   insn=0x0000000000211494 string=0x0000000000211498 " "
 *   insn=0x0000000000211494 string=0x00000000001FBA30 "0'"
 *   insn=0x00000000002114A8 string=0x00000000002114AC "I"
 *   insn=0x00000000002114AC string=0x00000000002114B0 ""
 *   insn=0x00000000002114B8 string=0x00000000002114BC "E"
 *   insn=0x00000000002114BC string=0x00000000002114C0 "\t"
 *   insn=0x00000000002114C8 string=0x00000000002114CC "E"
 *   insn=0x00000000002114CC string=0x00000000001FD9E0 "0'"
 *   insn=0x00000000002114D0 string=0x00000000002114D4 "`"
 *   insn=0x00000000002114E4 string=0x00000000002114E8 "!#"
 *   insn=0x00000000002114EC string=0x00000000002114F0 "!"
 *   insn=0x00000000002114F4 string=0x00000000002114F8 "`"
 *   insn=0x00000000002114F8 string=0x00000000002114FC "@ "
 *   insn=0x00000000002114FC string=0x0000000000211500 "a!"
 *   insn=0x0000000000211504 string=0x0000000000211508 "!"
 *   insn=0x000000000021150C string=0x0000000000211510 " "
 *   insn=0x000000000021152C string=0x000000000021154C "a"
 *   insn=0x000000000021154C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CaverShell::TouchEnded(Caver::GUIWindow **this, const Caver::FWTouch *a2)
{
  Caver::GUIWindow *v4; // x21
  float v5; // s8
  float v6; // s9
  Caver::GUIWindow *v7; // x8
  float v8; // s2
  float v9; // s3
  float v10; // s1
  float v11; // s1
  float v13[10]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v14; // [xsp+28h] [xbp-48h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (Caver::FWShell::TouchEnded((Caver::FWShell *)this, a2) & 1) == 0 )
    return 0;
  v4 = this[17];
  v5 = (float)(int)Caver::FWShellPreferences::Get();
  v6 = (float)(int)Caver::FWShellPreferences::Get();
  Caver::FWTouch::FWTouch((Caver::FWTouch *)v13, a2);
  v7 = this[17];
  v8 = *((float *)v7 + 31);
  v9 = *((float *)v7 + 32);
  v10 = (float)(*((float *)a2 + 3) * v9) / v6;
  v13[2] = (float)(*((float *)a2 + 2) * v8) / v5;
  v13[3] = v10;
  v11 = (float)(v9 * *((float *)a2 + 5)) / v6;
  v13[4] = (float)(v8 * *((float *)a2 + 4)) / v5;
  v13[5] = v11;
  Caver::GUIWindow::EndTouch(v4, (const Caver::FWTouch *)v13);
  return 1;
}

