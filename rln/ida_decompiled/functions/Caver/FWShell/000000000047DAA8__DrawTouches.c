/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047DAA8
 * Mangled: _ZN5Caver7FWShell11DrawTouchesEPNS_16RenderingContextE
 * Demangled: Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *
 * Callers: 0
 *
 * Callees: 22
 *   0x00000000001F4180  Caver::FWShellPreferences::Get(Caver::FWShellFloatPrefsEnum)
 *   0x00000000001F4D40  .glEnableClientState
 *   0x00000000001F5760  .glMatrixMode
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001F7F90  .glLoadIdentity
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FBBC0  .glTranslatef
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FBDA0  .glLoadMatrixf
 *   0x00000000001FC180  .glDisableClientState
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x00000000001FD930  .glScalef
 *   0x00000000001FDCE0  .glColor4f
 *   0x00000000001FEF10  .glDrawArrays
 *   0x00000000001FF9D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200510  .glPushMatrix
 *   0x0000000000200F10  Caver::Matrix4::Ortho(float,float,float,float,float,float)
 *   0x0000000000201850  .glVertexPointer
 *   0x0000000000201860  .glPopMatrix
 *   0x000000000054C6A0  sub_54C6A0
 *
 * Referenced strings: 61
 *   insn=0x000000000047DAC4 string=0x000000000047DAC8 "V"
 *   insn=0x000000000047DAD0 string=0x000000000047DAD4 "u"
 *   insn=0x000000000047DAE8 string=0x000000000047DAEC ""
 *   insn=0x000000000047DAF8 string=0x000000000047DAFC "\t"
 *   insn=0x000000000047DB08 string=0x000000000047DB0C "\n"
 *   insn=0x000000000047DB2C string=0x000000000047DB30 "!"
 *   insn=0x000000000047DB34 string=0x000000000047DB38 ""
 *   insn=0x000000000047DB40 string=0x000000000047DB44 "("
 *   insn=0x000000000047DB48 string=0x000000000047DB4C " \t "
 *   insn=0x000000000047DB50 string=0x000000000047DB54 "("
 *   insn=0x000000000047DB5C string=0x000000000047DB60 "("
 *   insn=0x000000000047DB94 string=0x000000000047DB98 "z"
 *   insn=0x000000000047DB98 string=0x00000000001F4180 "P'"
 *   insn=0x000000000047DB9C string=0x000000000047DBA0 "H"
 *   insn=0x000000000047DBA0 string=0x00000000001FBCC0 "0'"
 *   insn=0x000000000047DBB8 string=0x000000000047DBBC "q"
 *   insn=0x000000000047DBC4 string=0x000000000047DBC8 ""
 *   insn=0x000000000047DBC8 string=0x000000000047DBCC "m"
 *   insn=0x000000000047DC00 string=0x000000000047DC04 "A\t "
 *   insn=0x000000000047DC04 string=0x000000000047DC08 "`\t "
 *   insn=0x000000000047DC38 string=0x000000000047DC3C " "
 *   insn=0x000000000047DC40 string=0x000000000047DC44 "3\n"
 *   insn=0x000000000047DC40 string=0x00000000001F5760 "P'"
 *   insn=0x000000000047DC48 string=0x000000000047DC4C "U"
 *   insn=0x000000000047DC4C string=0x00000000001FBDA0 "0'"
 *   insn=0x000000000047DC58 string=0x00000000001F7F90 "0'"
 *   insn=0x000000000047DC68 string=0x000000000047DC6C "M"
 *   insn=0x000000000047DC6C string=0x00000000001FB1A0 "0'"
 *   insn=0x000000000047DC70 string=0x000000000047DC74 "3"
 *   insn=0x000000000047DC74 string=0x000000000047DC78 "u2@"
 *   insn=0x000000000047DC74 string=0x00000000001F4D40 "P'"
 *   insn=0x000000000047DC78 string=0x000000000047DC7C "wB"
 *   insn=0x000000000047DC84 string=0x000000000047DC88 "@"
 *   insn=0x000000000047DC94 string=0x000000000047DC98 "s"
 *   insn=0x000000000047DC98 string=0x000000000047DC9C "t"
 *   insn=0x000000000047DCA0 string=0x000000000047DCA4 " i"
 *   insn=0x000000000047DCA4 string=0x000000000047DCA8 ""
 *   insn=0x000000000047DCA8 string=0x000000000047DCAC "\t"
 *   insn=0x000000000047DCAC string=0x000000000047DCB0 "s"
 *   insn=0x000000000047DCB8 string=0x000000000047DCBC ""
 *   insn=0x000000000047DCBC string=0x000000000047DCE8 "\n\n"
 *   insn=0x000000000047DCC4 string=0x000000000047DCC8 "@"
 *   insn=0x000000000047DCC4 string=0x00000000001FD6E0 "0'"
 *   insn=0x000000000047DCE0 string=0x000000000047DCE4 ""
 *   insn=0x000000000047DCE0 string=0x00000000001F7040 "0'"
 *   insn=0x000000000047DCF4 string=0x00000000001FBBC0 "0'"
 *   insn=0x000000000047DCFC string=0x000000000047DD00 """
 *   insn=0x000000000047DD00 string=0x000000000047DD04 ""
 *   insn=0x000000000047DD04 string=0x000000000047DD08 "h"
 *   insn=0x000000000047DD04 string=0x00000000001FD930 "0'"
 *   insn=0x000000000047DD2C string=0x000000000047DD30 "x"
 *   insn=0x000000000047DD38 string=0x000000000047DD3C "Y:"
 *   insn=0x000000000047DD50 string=0x000000000047DD54 ""
 *   insn=0x000000000047DD54 string=0x00000000001FC180 "0'"
 *   insn=0x000000000047DD68 string=0x000000000047DD6C " "
 *   insn=0x000000000047DD68 string=0x00000000001FDCE0 "0'"
 *   insn=0x000000000047DD6C string=0x000000000047DD70 "|"
 *   insn=0x000000000047DD78 string=0x000000000047DD7C "y"
 *   insn=0x000000000047DD88 string=0x000000000047DD8C "!"
 *   insn=0x000000000047DD8C string=0x000000000047DDB0 "H"
 *   insn=0x000000000047DDB0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWShell::DrawTouches(Caver::FWShell *this, Caver::RenderingContext *a2)
{
  float v4; // s8
  float v5; // s9
  float v6; // s10
  Caver::Matrix4 *v7; // x0
  float v8; // s11
  Caver::Matrix4 *v9; // x0
  float v10; // s0
  int v11; // s0
  int v12; // s8
  int v13; // s0
  unsigned __int8 v14; // w8
  _BYTE v16[56]; // [xsp+30h] [xbp-E0h] BYREF
  __int64 v17; // [xsp+68h] [xbp-A8h]
  __int64 v18[9]; // [xsp+78h] [xbp-98h] BYREF

  v18[8] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (float)(int)Caver::FWShellPreferences::Get();
  v5 = (float)(int)Caver::FWShellPreferences::Get();
  v6 = (float)(int)Caver::FWShellPreferences::Get();
  v7 = (Caver::Matrix4 *)Caver::FWShellPreferences::Get();
  v8 = (float)(int)v7;
  Caver::Matrix4::Ortho(v18, v7, 0.0, v5, v4, 0.0, -1.0, 1.0);
  *(float *)&v16[48] = v4 * 0.5;
  *(float *)&v16[52] = v5 * 0.5;
  *(_OWORD *)v16 = xmmword_583490;
  v17 = 0x3F80000000000000LL;
  *(_OWORD *)&v16[16] = xmmword_5837E0;
  *(_OWORD *)&v16[32] = xmmword_5837F0;
  C_Matrix4Mul((const float *)v18, (const float *)v16, (float *)v18);
  v9 = (Caver::Matrix4 *)Caver::FWShellPreferences::Get();
  Caver::Matrix4::RotationZ((__int64 *)v16, v9, v10);
  C_Matrix4Mul((const float *)v18, (const float *)v16, (float *)v18);
  Caver::FWShellPreferences::Get();
  v12 = v11;
  Caver::FWShellPreferences::Get();
  *(_DWORD *)&v16[20] = v13;
  *(_OWORD *)&v16[4] = 0u;
  *(_OWORD *)&v16[24] = 0u;
  *(_DWORD *)v16 = v12;
  v17 = 0x3F80000000000000LL;
  *(_OWORD *)&v16[40] = xmmword_583490;
  C_Matrix4Mul((const float *)v18, (const float *)v16, (float *)v18);
  *(float *)&v16[48] = v6 * -0.5;
  *(float *)&v16[52] = v8 * -0.5;
  *(_OWORD *)v16 = xmmword_583490;
  v17 = 0x3F80000000000000LL;
  *(_OWORD *)&v16[16] = xmmword_5837E0;
  *(_OWORD *)&v16[32] = xmmword_5837F0;
  C_Matrix4Mul((const float *)v18, (const float *)v16, (float *)v18);
  glMatrixMode();
  glPushMatrix();
  glLoadMatrixf();
  glMatrixMode();
  glLoadIdentity();
  *(_DWORD *)v16 = -16776961;
  Caver::RenderingContext::SetColor(a2, (const Caver::Color *)v16);
  glEnableClientState();
  for ( *(_QWORD *)v16 = *((_QWORD *)this + 12);
        (Caver::FWShell *)((char *)this + 80) != *(Caver::FWShell **)v16;
        *(_QWORD *)v16 = sub_54C6A0(*(_QWORD *)v16) )
  {
    glPushMatrix();
    glTranslatef();
    glScalef();
    v14 = atomic_load((unsigned __int8 *)&byte_6E9D60);
    if ( (v14 & 1) == 0 && __cxa_guard_acquire((__guard *)&byte_6E9D60) )
    {
      xmmword_6E9D40 = xmmword_595800;
      xmmword_6E9D50 = xmmword_5965A0;
      __cxa_guard_release((__guard *)&byte_6E9D60);
    }
    glVertexPointer();
    glDrawArrays();
    glPopMatrix();
  }
  glDisableClientState();
  glColor4f();
  glMatrixMode();
  glPopMatrix();
  return glMatrixMode();
}

