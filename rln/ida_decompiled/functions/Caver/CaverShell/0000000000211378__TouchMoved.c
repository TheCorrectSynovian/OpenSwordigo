/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211378
 * Mangled: _ZN5Caver10CaverShell10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::CaverShell::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC990  Caver::GUIWindow::MoveTouch(Caver::FWTouch const&)
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *   0x00000000001FE910  Caver::FWShell::TouchMoved(Caver::FWTouch const&)
 *   0x00000000001FF9D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *
 * Referenced strings: 16
 *   insn=0x0000000000211390 string=0x0000000000211394 "W"
 *   insn=0x00000000002113A4 string=0x00000000002113A8 "Z"
 *   insn=0x00000000002113A8 string=0x00000000002113AC " "
 *   insn=0x00000000002113C0 string=0x00000000002113C4 ""
 *   insn=0x00000000002113D0 string=0x00000000002113D4 "\t"
 *   insn=0x00000000002113E0 string=0x00000000001FD9E0 "0'"
 *   insn=0x00000000002113E4 string=0x00000000002113E8 "`"
 *   insn=0x00000000002113F8 string=0x00000000002113FC "!#"
 *   insn=0x0000000000211400 string=0x0000000000211404 "!"
 *   insn=0x0000000000211408 string=0x000000000021140C "`"
 *   insn=0x000000000021140C string=0x0000000000211410 "@ "
 *   insn=0x0000000000211410 string=0x0000000000211414 "a!"
 *   insn=0x0000000000211418 string=0x000000000021141C "!"
 *   insn=0x0000000000211420 string=0x0000000000211424 "["
 *   insn=0x0000000000211424 string=0x00000000001FC990 "0'"
 *   insn=0x0000000000211460 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CaverShell::TouchMoved(Caver::CaverShell *this, const Caver::FWTouch *a2)
{
  float v4; // s8
  float v5; // s9
  __int64 v6; // x8
  float v7; // s2
  float v8; // s3
  float v9; // s1
  float v10; // s1
  float v12[10]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v13; // [xsp+28h] [xbp-48h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (Caver::FWShell::TouchMoved(this, a2) & 1) == 0 )
    return 0;
  v4 = (float)(int)Caver::FWShellPreferences::Get();
  v5 = (float)(int)Caver::FWShellPreferences::Get();
  Caver::FWTouch::FWTouch((Caver::FWTouch *)v12, a2);
  v6 = *((_QWORD *)this + 17);
  v7 = *(float *)(v6 + 124);
  v8 = *(float *)(v6 + 128);
  v9 = (float)(*((float *)a2 + 3) * v8) / v5;
  v12[2] = (float)(*((float *)a2 + 2) * v7) / v4;
  v12[3] = v9;
  v10 = (float)(v8 * *((float *)a2 + 5)) / v5;
  v12[4] = (float)(v7 * *((float *)a2 + 4)) / v4;
  v12[5] = v10;
  Caver::GUIWindow::MoveTouch();
  return 1;
}

