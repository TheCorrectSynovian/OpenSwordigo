/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211014
 * Mangled: _ZN5Caver10CaverShell6RenderEPNS_16RenderingContextE
 * Demangled: Caver::CaverShell::Render(Caver::RenderingContext *)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F3F30  Caver::RenderingContext::Clear(bool,bool,bool)
 *   0x00000000001F4180  Caver::FWShellPreferences::Get(Caver::FWShellFloatPrefsEnum)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F79A0  Caver::RenderingContext::SetClearColor(Caver::Color const&)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FF9D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 22
 *   insn=0x000000000021102C string=0x0000000000211030 "V"
 *   insn=0x0000000000211050 string=0x0000000000211054 "S"
 *   insn=0x0000000000211054 string=0x00000000001F79A0 "0'"
 *   insn=0x0000000000211068 string=0x00000000001F3F30 "P'"
 *   insn=0x000000000021106C string=0x0000000000211070 "eB"
 *   insn=0x000000000021108C string=0x0000000000211090 "P"
 *   insn=0x0000000000211094 string=0x0000000000211098 ""
 *   insn=0x00000000002110A0 string=0x00000000002110A4 "\t"
 *   insn=0x00000000002110A4 string=0x00000000002110A8 "J"
 *   insn=0x00000000002110E8 string=0x00000000002110EC "i"
 *   insn=0x00000000002110FC string=0x00000000001FBCC0 "0'"
 *   insn=0x0000000000211108 string=0x000000000021110C "a"
 *   insn=0x000000000021111C string=0x0000000000211120 "\t"
 *   insn=0x0000000000211140 string=0x0000000000211144 "S"
 *   insn=0x0000000000211150 string=0x00000000001F4180 "P'"
 *   insn=0x0000000000211158 string=0x000000000021115C ""
 *   insn=0x000000000021115C string=0x0000000000211160 ""
 *   insn=0x000000000021118C string=0x0000000000211190 "@"
 *   insn=0x00000000002111A0 string=0x00000000002111A4 "HDH"
 *   insn=0x00000000002111A4 string=0x00000000002111A8 ")@"
 *   insn=0x00000000002111BC string=0x00000000002111DC "="
 *   insn=0x00000000002111DC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CaverShell::Render(Caver::CaverShell *this, Caver::RenderingContext *a2)
{
  float v4; // s9
  Caver::Matrix4 *v5; // x0
  __int64 v6; // x8
  float v7; // w9
  float v8; // s0
  float v9; // s8
  float v10; // s0
  float v12; // [xsp+10h] [xbp-D0h] BYREF
  __int128 v13; // [xsp+14h] [xbp-CCh]
  float v14; // [xsp+24h] [xbp-BCh]
  __int128 v15; // [xsp+28h] [xbp-B8h]
  __int128 v16; // [xsp+38h] [xbp-A8h]
  __int64 v17; // [xsp+48h] [xbp-98h]
  _OWORD v18[4]; // [xsp+50h] [xbp-90h] BYREF
  __int64 v19; // [xsp+98h] [xbp-48h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  LODWORD(v18[0]) = -16777216;
  Caver::RenderingContext::SetClearColor(a2, (const Caver::Color *)v18);
  Caver::RenderingContext::Clear(a2, 1, 1, 0);
  v18[2] = xmmword_6E9F10;
  v18[3] = xmmword_6E9F20;
  v18[0] = Caver::Matrix4::identityMatrix;
  v18[1] = xmmword_6E9F00;
  v4 = 1.0 / (float)(int)Caver::FWShellPreferences::Get();
  v14 = 1.0 / (float)(int)Caver::FWShellPreferences::Get();
  v12 = v4;
  v17 = 0x3F80000000000000LL;
  v13 = 0u;
  v15 = 0u;
  v16 = xmmword_583490;
  v5 = (Caver::Matrix4 *)C_Matrix4Mul((const float *)v18, &v12, (float *)v18);
  Caver::Matrix4::RotationZ((__int64 *)&v12, v5, *(float *)(*((_QWORD *)this + 17) + 512LL));
  C_Matrix4Mul((const float *)v18, &v12, (float *)v18);
  v6 = *((_QWORD *)this + 17);
  v7 = *(float *)(v6 + 124);
  LODWORD(v6) = *(_DWORD *)(v6 + 128);
  v13 = 0u;
  v15 = 0u;
  v12 = v7;
  v14 = *(float *)&v6;
  v17 = 0x3F80000000000000LL;
  v16 = xmmword_583490;
  C_Matrix4Mul((const float *)v18, &v12, (float *)v18);
  Caver::FWShellPreferences::Get();
  v9 = v8;
  Caver::FWShellPreferences::Get();
  v14 = v10;
  v13 = 0u;
  v15 = 0u;
  v12 = v9;
  v17 = 0x3F80000000000000LL;
  v16 = xmmword_583490;
  C_Matrix4Mul((const float *)v18, &v12, (float *)v18);
  return (*(__int64 (__fastcall **)(_QWORD, Caver::RenderingContext *, __int64, _OWORD *))(**((_QWORD **)this + 17)
                                                                                         + 80LL))(
           *((_QWORD *)this + 17),
           a2,
           *((_QWORD *)this + 17) + 132LL,
           v18);
}

