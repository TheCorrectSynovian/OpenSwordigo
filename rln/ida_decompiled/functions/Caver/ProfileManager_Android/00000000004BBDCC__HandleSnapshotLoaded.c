/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BBDCC
 * Mangled: _ZN5Caver22ProfileManager_Android20HandleSnapshotLoadedERKSsS2_
 * Demangled: Caver::ProfileManager_Android::HandleSnapshotLoaded(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000001FA670  Caver::ProfileManager_Android::HandleSnapshotLoaded(std::string const&,std::string const&)
 *
 * Callees: 2
 *   0x00000000001F5830  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 14
 *   insn=0x00000000004BBDD8 string=0x00000000004BBDDC "T"
 *   insn=0x00000000004BBDF0 string=0x00000000001F5830 "P'"
 *   insn=0x00000000004BBDF4 string=0x00000000004BBDF8 "3"
 *   insn=0x00000000004BBDF8 string=0x00000000004BBDFC "h"
 *   insn=0x00000000004BBDFC string=0x00000000004BBE00 ""
 *   insn=0x00000000004BBE00 string=0x00000000004BBE04 "h"
 *   insn=0x00000000004BBE08 string=0x00000000004BBE0C "h"
 *   insn=0x00000000004BBE10 string=0x00000000004BBE14 "\t@"
 *   insn=0x00000000004BBE18 string=0x00000000004BBE1C "h\n@"
 *   insn=0x00000000004BBE1C string=0x00000000004BBE20 ""
 *   insn=0x00000000004BBE20 string=0x00000000004BBE24 "h\n"
 *   insn=0x00000000004BBE28 string=0x00000000004BBE2C "h"
 *   insn=0x00000000004BBE30 string=0x00000000004BBE34 "@"
 *   insn=0x00000000004BBE5C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProfileManager_Android::HandleSnapshotLoaded()
{
  __int64 result; // x0
  __int64 v1; // x8
  __int64 v2; // x8
  _QWORD *v3; // [xsp+10h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  result = Caver::ProfileManager_Android::HandleDownloadedProfileData();
  if ( v3 )
  {
    v1 = v3[1] - 1LL;
    v3[1] = v1;
    if ( !v1 )
    {
      result = (*(__int64 (__fastcall **)())(*v3 + 16LL))();
      v2 = v3[2] - 1LL;
      v3[2] = v2;
      if ( !v2 )
        return (*(__int64 (__fastcall **)())(*v3 + 24LL))();
    }
  }
  return result;
}

