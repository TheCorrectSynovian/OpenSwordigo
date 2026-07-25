/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A7124
 * Mangled: _ZN5Caver14ProfileManager27DeleteProfileWithIdentifierERKSs
 * Demangled: Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&)
 *
 * Callers: 1
 *   0x0000000000203B20  Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9120  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::find(std::string const&)
 *   0x00000000001FC080  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>*)
 *   0x00000000001FE940  Caver::PlayerProfile::DeleteProfile(void)
 *   0x00000000002036B0  Caver::PlayerProfile::ProfileExists(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054CA60  sub_54CA60
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x00000000003A7138 string=0x00000000003A713C "X"
 *   insn=0x00000000003A713C string=0x00000000003A7140 ""
 *   insn=0x00000000003A7150 string=0x00000000001F9120 "0'"
 *   insn=0x00000000003A7160 string=0x00000000003A7200 ""
 *   insn=0x00000000003A7168 string=0x00000000003A716C "h"
 *   insn=0x00000000003A716C string=0x00000000003A7170 ""
 *   insn=0x00000000003A7170 string=0x00000000003A7174 "h"
 *   insn=0x00000000003A7178 string=0x00000000003A717C "Mq"
 *   insn=0x00000000003A717C string=0x00000000003A7180 "`"
 *   insn=0x00000000003A7190 string=0x00000000003A7194 "3"
 *   insn=0x00000000003A71A4 string=0x00000000001FC080 "0'"
 *   insn=0x00000000003A71A8 string=0x00000000003A71AC "A@"
 *   insn=0x00000000003A71AC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A71B0 string=0x00000000003A71B4 ""
 *   insn=0x00000000003A71B8 string=0x00000000003A71BC "3"
 *   insn=0x00000000003A71BC string=0x00000000003A71C0 "h"
 *   insn=0x00000000003A71C0 string=0x00000000003A71C4 ""
 *   insn=0x00000000003A71C4 string=0x00000000003A71C8 "h"
 *   insn=0x00000000003A71CC string=0x00000000003A71D0 "h"
 *   insn=0x00000000003A71D4 string=0x00000000003A71D8 "\t@"
 *   insn=0x00000000003A71DC string=0x00000000003A71E0 "h\n@"
 *   insn=0x00000000003A71E0 string=0x00000000003A71E4 ""
 *   insn=0x00000000003A71E4 string=0x00000000003A71E8 "h\n"
 *   insn=0x00000000003A71EC string=0x00000000003A71F0 "h"
 *   insn=0x00000000003A71F4 string=0x00000000003A71F8 "@"
 *   insn=0x00000000003A720C string=0x00000000003A7228 "*<"
 *   insn=0x00000000003A7228 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A722C string=0x00000000003A7230 "3"
 *   insn=0x00000000003A7230 string=0x00000000003A7234 "h"
 *   insn=0x00000000003A7234 string=0x00000000003A7238 ""
 *   insn=0x00000000003A7238 string=0x00000000003A723C "h"
 *   insn=0x00000000003A7240 string=0x00000000003A7244 "h"
 *   insn=0x00000000003A7244 string=0x00000000003A7248 "\t@"
 *   insn=0x00000000003A7250 string=0x00000000003A7254 "h\n@"
 *   insn=0x00000000003A7254 string=0x00000000003A7258 ""
 *   insn=0x00000000003A7258 string=0x00000000003A725C "h\n"
 *   insn=0x00000000003A7260 string=0x00000000003A7264 "h"
 *   insn=0x00000000003A7264 string=0x00000000003A7268 "@"
 *   insn=0x00000000003A7278 string=0x00000000003A727C "4"
 *   insn=0x00000000003A72AC string=0x00000000003A72B0 "@"
 *   insn=0x00000000003A72C8 string=0x00000000003A72CC "@"
 *   insn=0x00000000003A72CC string=0x00000000003A72D0 ""
 *   insn=0x00000000003A72D0 string=0x00000000003A72D4 "h"
 *   insn=0x00000000003A72D4 string=0x00000000003A72D8 ""
 *   insn=0x00000000003A72D8 string=0x00000000003A72DC "h"
 *   insn=0x00000000003A72E0 string=0x00000000003A72E4 "\t"
 *   insn=0x00000000003A72E4 string=0x00000000003A72E8 ")"
 *   insn=0x00000000003A72E8 string=0x00000000003A72EC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManager::DeleteProfileWithIdentifier(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x21
  _QWORD *v4; // x19
  Caver::PlayerProfile *v5; // x23
  void *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8

  _ReadStatusReg(TPIDR_EL0);
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::find();
  v3 = v2;
  if ( a1 + 80 != v2 )
  {
    v5 = *(Caver::PlayerProfile **)(v2 + 40);
    v4 = *(_QWORD **)(v2 + 48);
    if ( v4 )
      ++v4[1];
    if ( (Caver::PlayerProfile::ProfileExists(v5) & 1) != 0 )
      Caver::PlayerProfile::DeleteProfile(v5);
    v6 = (void *)sub_54CA60(v3, a1 + 80);
    __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>::destroy();
    operator delete(v6);
    --*(_QWORD *)(a1 + 112);
    if ( v4 )
    {
      v7 = v4[1] - 1LL;
      v4[1] = v7;
      if ( !v7 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
        v8 = v4[2] - 1LL;
        v4[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
      }
    }
  }
}

