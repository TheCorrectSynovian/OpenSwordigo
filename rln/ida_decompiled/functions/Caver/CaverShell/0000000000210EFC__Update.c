/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000210EFC
 * Mangled: _ZN5Caver10CaverShell6UpdateEf
 * Demangled: Caver::CaverShell::Update(float)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F38C0  Caver::GUIApplication::sharedApplication(void)
 *   0x00000000001F4180  Caver::FWShellPreferences::Get(Caver::FWShellFloatPrefsEnum)
 *   0x00000000001F4A40  Caver::AchievementsManager::Update(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA410  Caver::GUIApplication::DispatchEvents(void)
 *   0x00000000001FA4B0  Caver::AudioSystem::Update(float)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FD2D0  Caver::AchievementsManager::sharedManager(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FF9D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *
 * Referenced strings: 27
 *   insn=0x0000000000210F10 string=0x0000000000210F14 "U"
 *   insn=0x0000000000210F24 string=0x0000000000210F28 "h"
 *   insn=0x0000000000210F2C string=0x0000000000210F30 ""
 *   insn=0x0000000000210F34 string=0x00000000001FD2D0 "0'"
 *   insn=0x0000000000210F3C string=0x00000000001F4A40 "P'"
 *   insn=0x0000000000210F40 string=0x00000000001FDF30 "0'"
 *   insn=0x0000000000210F44 string=0x0000000000210F48 "Z"
 *   insn=0x0000000000210F48 string=0x0000000000210F4C "vF@"
 *   insn=0x0000000000210F48 string=0x00000000001FA4B0 "0'"
 *   insn=0x0000000000210F4C string=0x0000000000210F50 "t"
 *   insn=0x0000000000210F5C string=0x00000000001F4180 "P'"
 *   insn=0x0000000000210F6C string=0x0000000000210F70 "\t"
 *   insn=0x0000000000210F80 string=0x0000000000210F84 "`F@"
 *   insn=0x0000000000210F88 string=0x0000000000210F8C "!"
 *   insn=0x0000000000210FA8 string=0x0000000000210FAC "B8 "
 *   insn=0x0000000000210FAC string=0x0000000000210FB0 "B"
 *   insn=0x0000000000210FB0 string=0x0000000000210FB4 "@ !"
 *   insn=0x0000000000210FB8 string=0x0000000000210FD0 ""
 *   insn=0x0000000000210FC4 string=0x0000000000210FC8 "j"
 *   insn=0x0000000000210FC8 string=0x0000000000210FCC "`F@"
 *   insn=0x0000000000210FC8 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000210FD4 string=0x0000000000210FD8 "%@"
 *   insn=0x0000000000210FDC string=0x0000000000210FE0 "8"
 *   insn=0x0000000000210FE0 string=0x0000000000210FE4 ""
 *   insn=0x0000000000210FE0 string=0x00000000001F38C0 "P'"
 *   insn=0x0000000000210FE4 string=0x00000000001FA410 "0'"
 *   insn=0x0000000000211010 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CaverShell::Update(Caver::CaverShell *this, float a2)
{
  long double v2; // q8
  Caver::AchievementsManager *v4; // x0
  Caver::AudioSystem *v5; // x0
  Caver::AudioSystem *v6; // x0
  __int64 v7; // x22
  int v8; // s0
  float v9; // s9
  int v10; // w8
  float *v11; // x0
  Caver::GUIApplication *v12; // x0
  Caver::GUIApplication *v13; // x0
  __int64 v15; // [xsp+8h] [xbp-48h] BYREF
  float v16; // [xsp+10h] [xbp-40h]
  float v17; // [xsp+14h] [xbp-3Ch]
  __int64 v18; // [xsp+18h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 168) )
    *(float *)&v2 = 0.0;
  else
    *(float *)&v2 = a2;
  v4 = (Caver::AchievementsManager *)Caver::AchievementsManager::sharedManager(this);
  v5 = (Caver::AudioSystem *)Caver::AchievementsManager::Update(v4, *(float *)&v2);
  v6 = (Caver::AudioSystem *)Caver::AudioSystem::sharedSystem(v5);
  Caver::AudioSystem::Update(v6, *(float *)&v2);
  v7 = *((_QWORD *)this + 17);
  Caver::FWShellPreferences::Get();
  *(_DWORD *)(v7 + 512) = v8;
  v9 = (float)(int)Caver::FWShellPreferences::Get();
  v10 = Caver::FWShellPreferences::Get();
  v11 = (float *)*((_QWORD *)this + 17);
  if ( fabsf(v11[31] - v9) > 0.0001 || fabsf(v11[32] - (float)v10) > 0.0001 )
  {
    v15 = 0;
    v16 = v9;
    v17 = (float)v10;
    Caver::GUIView::SetFrame((Caver::GUIView *)v11, (const Caver::Rectangle *)&v15);
    v11 = (float *)*((_QWORD *)this + 17);
  }
  v12 = (Caver::GUIApplication *)(*(__int64 (__fastcall **)(float *, long double))(*(_QWORD *)v11 + 72LL))(v11, v2);
  Caver::GUIApplication::sharedApplication(v12);
  return Caver::GUIApplication::DispatchEvents(v13);
}

