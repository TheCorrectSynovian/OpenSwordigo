/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BB7B8
 * Mangled: _ZN5Caver22ProfileManager_Android27DeleteProfileWithIdentifierERKSs
 * Demangled: Caver::ProfileManager_Android::DeleteProfileWithIdentifier(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA920  Caver::AndroidDeleteSnapshot(std::string const&)
 *   0x00000000001FC010  Caver::ProfileManager::ProfileWithIdentifier(std::string const&)
 *   0x0000000000203B20  Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x00000000004BB7C8 string=0x00000000004BB7CC "U"
 *   insn=0x00000000004BB7E0 string=0x00000000004BB7E4 ""
 *   insn=0x00000000004BB7E4 string=0x00000000001FC010 "0'"
 *   insn=0x00000000004BB7E8 string=0x00000000004BB7EC "h"
 *   insn=0x00000000004BB7F0 string=0x00000000004BB7F4 "K"
 *   insn=0x00000000004BB7F4 string=0x00000000001FA920 "0'"
 *   insn=0x00000000004BB804 string=0x00000000004BB808 "3"
 *   insn=0x00000000004BB808 string=0x00000000004BB80C "h"
 *   insn=0x00000000004BB80C string=0x00000000004BB810 ""
 *   insn=0x00000000004BB810 string=0x00000000004BB814 "h"
 *   insn=0x00000000004BB818 string=0x00000000004BB81C "h"
 *   insn=0x00000000004BB820 string=0x00000000004BB824 "\t@"
 *   insn=0x00000000004BB828 string=0x00000000004BB82C "h\n@"
 *   insn=0x00000000004BB82C string=0x00000000004BB830 ""
 *   insn=0x00000000004BB830 string=0x00000000004BB834 "h\n"
 *   insn=0x00000000004BB838 string=0x00000000004BB83C "h"
 *   insn=0x00000000004BB840 string=0x00000000004BB844 "@"
 *   insn=0x00000000004BB870 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BB878 string=0x00000000004BB87C "4"
 *   insn=0x00000000004BB880 string=0x00000000004BB884 ""
 *   insn=0x00000000004BB890 string=0x00000000004BB894 "\t@"
 *   insn=0x00000000004BB8A0 string=0x00000000004BB8A4 ""
 *   insn=0x00000000004BB8B0 string=0x00000000004BB8B4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProfileManager_Android::DeleteProfileWithIdentifier()
{
  __int64 result; // x0
  __int64 v1; // x8
  __int64 v2; // x8
  __int64 v3; // [xsp+8h] [xbp-38h]
  _QWORD *v4; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::ProfileManager::ProfileWithIdentifier();
  if ( v3 )
    Caver::AndroidDeleteSnapshot();
  result = Caver::ProfileManager::DeleteProfileWithIdentifier();
  if ( v4 )
  {
    v1 = v4[1] - 1LL;
    v4[1] = v1;
    if ( !v1 )
    {
      result = (*(__int64 (__fastcall **)())(*v4 + 16LL))();
      v2 = v4[2] - 1LL;
      v4[2] = v2;
      if ( !v2 )
        return (*(__int64 (__fastcall **)())(*v4 + 24LL))();
    }
  }
  return result;
}

