/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020E358
 * Mangled: _ZN5Caver10CaverShell15InitApplicationEv
 * Demangled: Caver::CaverShell::InitApplication(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002014E0  Caver::FWShellPreferences::Set(Caver::FWShellFloatPrefsEnum,float)
 *   0x00000000005689E0  sub_5689E0
 *
 * Referenced strings: 13
 *   insn=0x000000000020E370 string=0x000000000020E374 "h"
 *   insn=0x000000000020E378 string=0x000000000020E37C "j"
 *   insn=0x000000000020E37C string=0x000000000020E380 ")"
 *   insn=0x000000000020E380 string=0x000000000020E384 ")"
 *   insn=0x000000000020E384 string=0x000000000020E388 "?"
 *   insn=0x000000000020E390 string=0x00000000005834A0 "--slow"
 *   insn=0x000000000020E398 string=0x000000000020E39C "t"
 *   insn=0x000000000020E3A0 string=0x000000000020E3A4 ""
 *   insn=0x000000000020E3B4 string=0x000000000020E3C8 "h"
 *   insn=0x000000000020E3C0 string=0x000000000020E3C4 "G"
 *   insn=0x000000000020E3D0 string=0x000000000020E3D4 ")"
 *   insn=0x000000000020E3D4 string=0x000000000020E3D8 ")"
 *   insn=0x000000000020E3DC string=0x000000000020E3E0 "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CaverShell::InitApplication(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x8
  __int64 v3; // x9
  int v4; // w22
  __int64 v5; // x23

  v1 = this;
  v2 = *(_QWORD *)(this + 8);
  v3 = *(_QWORD *)(this + 16);
  *(_BYTE *)(this + 120) = 1;
  if ( (int)((unsigned __int64)(v3 - v2) >> 3) >= 1 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      this = sub_5689E0((int)v2 + v4, "--slow");
      if ( !(_DWORD)this )
        this = Caver::FWShellPreferences::Set();
      v2 = *(_QWORD *)(v1 + 8);
      ++v5;
      v4 += 8;
    }
    while ( v5 < (int)((unsigned __int64)(*(_QWORD *)(v1 + 16) - v2) >> 3) );
  }
  return this;
}

