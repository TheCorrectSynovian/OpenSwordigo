/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002111E0
 * Mangled: _ZN5Caver10CaverShell20ConvertTouchToWindowERKNS_7FWTouchE
 * Demangled: Caver::CaverShell::ConvertTouchToWindow(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *   0x00000000001FF9D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *
 * Referenced strings: 10
 *   insn=0x000000000021120C string=0x0000000000211210 ""
 *   insn=0x000000000021121C string=0x0000000000211220 "\t"
 *   insn=0x000000000021122C string=0x00000000001FD9E0 "0'"
 *   insn=0x0000000000211230 string=0x0000000000211234 "`"
 *   insn=0x0000000000211240 string=0x0000000000211244 "!#"
 *   insn=0x0000000000211248 string=0x000000000021124C "!"
 *   insn=0x0000000000211250 string=0x0000000000211254 "`"
 *   insn=0x0000000000211258 string=0x000000000021125C "@ "
 *   insn=0x000000000021125C string=0x0000000000211260 "a!"
 *   insn=0x0000000000211264 string=0x0000000000211268 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::CaverShell::ConvertTouchToWindow@<S0>(
        Caver::CaverShell *this@<X0>,
        const Caver::FWTouch *a2@<X1>,
        float *a3@<X8>)
{
  float v6; // s8
  float v7; // s9
  __int64 v8; // x8
  float v9; // s2
  float v10; // s3
  float v11; // s1
  float v12; // s1
  float result; // s0

  v6 = (float)(int)Caver::FWShellPreferences::Get();
  v7 = (float)(int)Caver::FWShellPreferences::Get();
  Caver::FWTouch::FWTouch((Caver::FWTouch *)a3, a2);
  v8 = *((_QWORD *)this + 17);
  v9 = *(float *)(v8 + 124);
  v10 = *(float *)(v8 + 128);
  v11 = (float)(*((float *)a2 + 3) * v10) / v7;
  a3[2] = (float)(*((float *)a2 + 2) * v9) / v6;
  a3[3] = v11;
  v12 = *((float *)a2 + 5);
  result = (float)(v9 * *((float *)a2 + 4)) / v6;
  a3[4] = result;
  a3[5] = (float)(v10 * v12) / v7;
  return result;
}

