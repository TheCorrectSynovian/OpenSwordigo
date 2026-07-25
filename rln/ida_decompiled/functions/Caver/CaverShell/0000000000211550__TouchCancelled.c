/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211550
 * Mangled: _ZN5Caver10CaverShell14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::CaverShell::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F3E80  Caver::GUIWindow::CancelTouch(Caver::FWTouch const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6990  Caver::FWShell::TouchCancelled(Caver::FWTouch const&)
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *   0x00000000001FF9D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *
 * Referenced strings: 19
 *   insn=0x0000000000211568 string=0x000000000021156C "W"
 *   insn=0x0000000000211580 string=0x0000000000211584 " "
 *   insn=0x0000000000211580 string=0x00000000001F6990 "0'"
 *   insn=0x0000000000211598 string=0x000000000021159C ""
 *   insn=0x00000000002115A4 string=0x00000000002115A8 "\n"
 *   insn=0x00000000002115A8 string=0x00000000002115AC "\t"
 *   insn=0x00000000002115B4 string=0x00000000002115B8 "\n"
 *   insn=0x00000000002115B8 string=0x00000000001FD9E0 "0'"
 *   insn=0x00000000002115BC string=0x00000000002115C0 "`"
 *   insn=0x00000000002115D0 string=0x00000000002115D4 "!#"
 *   insn=0x00000000002115D8 string=0x00000000002115DC "!"
 *   insn=0x00000000002115E0 string=0x00000000002115E4 "`"
 *   insn=0x00000000002115E4 string=0x00000000002115E8 "@ "
 *   insn=0x00000000002115E8 string=0x00000000002115EC "a!"
 *   insn=0x00000000002115F0 string=0x00000000002115F4 "!"
 *   insn=0x00000000002115F8 string=0x00000000002115FC "!"
 *   insn=0x00000000002115FC string=0x00000000001F3E80 "P'"
 *   insn=0x0000000000211618 string=0x0000000000211638 "&"
 *   insn=0x0000000000211638 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CaverShell::TouchCancelled(Caver::CaverShell *this, const Caver::FWTouch *a2)
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
  if ( (Caver::FWShell::TouchCancelled(this, a2) & 1) == 0 )
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
  Caver::GUIWindow::CancelTouch();
  return 1;
}

