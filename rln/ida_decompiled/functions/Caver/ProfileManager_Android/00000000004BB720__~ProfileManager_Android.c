/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BB720
 * Mangled: _ZN5Caver22ProfileManager_AndroidD2Ev
 * Demangled: Caver::ProfileManager_Android::~ProfileManager_Android()
 *
 * Callers: 1
 *   0x00000000001FB410  Caver::ProfileManager_Android::~ProfileManager_Android()
 *
 * Callees: 4
 *   0x00000000001F5F20  Caver::AndroidLoadSnapshot(std::string const&,double)
 *   0x00000000001FB790  Caver::ProfileManager::~ProfileManager()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000004BB72C string=0x00000000004BB730 "h"
 *   insn=0x00000000004BB730 string=0x00000000004BB734 "tN@"
 *   insn=0x00000000004BB734 string=0x00000000004BB738 ""
 *   insn=0x00000000004BB738 string=0x00000000004BB73C "A"
 *   insn=0x00000000004BB73C string=0x00000000004BB740 "h"
 *   insn=0x00000000004BB740 string=0x00000000004BB744 "4"
 *   insn=0x00000000004BB748 string=0x00000000004BB74C ""
 *   insn=0x00000000004BB758 string=0x00000000004BB75C "\t@"
 *   insn=0x00000000004BB768 string=0x00000000004BB76C ""
 *   insn=0x00000000004BB778 string=0x00000000004BB77C "@"
 *   insn=0x00000000004BB794 string=0x00000000001FB790 "0'"
 *   insn=0x00000000004BB7A4 string=0x00000000004BB7A8 "G"
 *   insn=0x00000000004BB7B4 string=0x00000000001F5F20 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManager_Android::~ProfileManager_Android(Caver::ProfileManager_Android *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 19);
  *(_QWORD *)this = &off_6D7A50;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  Caver::ProfileManager::~ProfileManager(this);
}

