/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BB8D0
 * Mangled: _ZN5Caver22ProfileManager_Android21PlayerProfileWasSavedEPNS_13PlayerProfileEb
 * Demangled: Caver::ProfileManager_Android::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001F9560  boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile *)
 *   0x00000000001FA610  Caver::ProfileManager_Android::SaveSnapshot(Caver::PlayerProfile *,std::string const&)
 *   0x00000000001FB9E0  google::protobuf::MessageLite::ParseFromString(std::string const&)
 *   0x00000000001FEDE0  Caver::Proto::PlayerProfile::PlayerProfile(void)
 *   0x0000000000200AE0  Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566A7C  sub_566A7C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 69
 *   insn=0x00000000004BB8E0 string=0x00000000004BB8E4 "U"
 *   insn=0x00000000004BB8E8 string=0x00000000004BB8EC "B"
 *   insn=0x00000000004BB8F4 string=0x00000000004BB8F8 "z"
 *   insn=0x00000000004BB8FC string=0x00000000004BB900 ""
 *   insn=0x00000000004BB8FC string=0x00000000001F93B0 "0'"
 *   insn=0x00000000004BB900 string=0x00000000004BB904 "y@"
 *   insn=0x00000000004BB90C string=0x00000000004BB910 "a"
 *   insn=0x00000000004BB910 string=0x00000000004BB914 "b"
 *   insn=0x00000000004BB91C string=0x00000000004BB920 "W"
 *   insn=0x00000000004BB924 string=0x00000000004BB928 "."
 *   insn=0x00000000004BB928 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004BB930 string=0x00000000004BB934 "+"
 *   insn=0x00000000004BB93C string=0x00000000004BB940 ""
 *   insn=0x00000000004BB940 string=0x00000000001F9560 "0'"
 *   insn=0x00000000004BB948 string=0x00000000004BB94C "%"
 *   insn=0x00000000004BB94C string=0x00000000001FB9E0 "0'"
 *   insn=0x00000000004BB958 string=0x00000000004BB95C "-"
 *   insn=0x00000000004BB95C string=0x00000000001FA610 "0'"
 *   insn=0x00000000004BB960 string=0x00000000004BB964 "3"
 *   insn=0x00000000004BB964 string=0x00000000004BB968 "h"
 *   insn=0x00000000004BB968 string=0x00000000004BB96C ""
 *   insn=0x00000000004BB96C string=0x00000000004BB970 "h"
 *   insn=0x00000000004BB974 string=0x00000000004BB978 "h"
 *   insn=0x00000000004BB978 string=0x00000000004BB97C "\t@"
 *   insn=0x00000000004BB984 string=0x00000000004BB988 "h\n@"
 *   insn=0x00000000004BB988 string=0x00000000004BB98C ""
 *   insn=0x00000000004BB98C string=0x00000000004BB990 "h\n"
 *   insn=0x00000000004BB994 string=0x00000000004BB998 "h"
 *   insn=0x00000000004BB998 string=0x00000000004BB99C "@"
 *   insn=0x00000000004BB9A8 string=0x00000000004BB9AC "I"
 *   insn=0x00000000004BB9AC string=0x00000000004BB9B0 ")"
 *   insn=0x00000000004BB9B8 string=0x00000000004BB9BC "A"
 *   insn=0x00000000004BB9BC string=0x00000000004BB9E4 "I"
 *   insn=0x00000000004BB9CC string=0x00000000004BBA28 "*"
 *   insn=0x00000000004BB9E4 string=0x00000000004BB9E8 ")=G"
 *   insn=0x00000000004BB9E8 string=0x00000000004BB9EC "!"
 *   insn=0x00000000004BB9F0 string=0x00000000004BB9F4 "\t"
 *   insn=0x00000000004BB9F0 string=0x00000000004BBA08 "\t"
 *   insn=0x00000000004BB9F4 string=0x00000000004BB9F8 "*"
 *   insn=0x00000000004BB9F8 string=0x00000000004BB9FC "\n"
 *   insn=0x00000000004BBA04 string=0x00000000004BBA14 "?"
 *   insn=0x00000000004BBA08 string=0x00000000004BBA0C "*"
 *   insn=0x00000000004BBA0C string=0x00000000004BBA10 "\n"
 *   insn=0x00000000004BBA14 string=0x00000000004BBA18 "L"
 *   insn=0x00000000004BBA1C string=0x00000000004BBA20 "a"
 *   insn=0x00000000004BBA28 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BBA34 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BBA4C string=0x00000000004BBA50 ""
 *   insn=0x00000000004BBA5C string=0x00000000004BBA60 "\t@"
 *   insn=0x00000000004BBA6C string=0x00000000004BBA70 ""
 *   insn=0x00000000004BBA7C string=0x00000000004BBA80 "@"
 *   insn=0x00000000004BBA98 string=0x00000000004BBA9C "I"
 *   insn=0x00000000004BBA9C string=0x00000000004BBAA0 ")"
 *   insn=0x00000000004BBAAC string=0x00000000004BBAB0 "I"
 *   insn=0x00000000004BBAB0 string=0x00000000004BBAB4 ")=G"
 *   insn=0x00000000004BBAB4 string=0x00000000004BBAB8 "!"
 *   insn=0x00000000004BBAB8 string=0x00000000004BBABC "i"
 *   insn=0x00000000004BBABC string=0x00000000004BBAC0 "\t"
 *   insn=0x00000000004BBABC string=0x00000000004BBAE8 "\t"
 *   insn=0x00000000004BBAC0 string=0x00000000004BBAC4 "*"
 *   insn=0x00000000004BBAC4 string=0x00000000004BBAC8 "\n"
 *   insn=0x00000000004BBACC string=0x00000000004BBAD0 "?"
 *   insn=0x00000000004BBAD0 string=0x00000000004BBAD4 "l"
 *   insn=0x00000000004BBAD8 string=0x00000000004BBADC "2"
 *   insn=0x00000000004BBAE0 string=0x00000000004BBAE4 "x"
 *   insn=0x00000000004BBAE8 string=0x00000000004BBAEC "*"
 *   insn=0x00000000004BBAEC string=0x00000000004BBAF0 "\n"
 *   insn=0x00000000004BBAF0 string=0x00000000004BBAF4 "?"
 *   insn=0x00000000004BBAF4 string=0x00000000004BBAF8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManager_Android::PlayerProfileWasSaved(
        Caver::ProfileManager_Android *this,
        Caver::PlayerProfile *a2,
        char a3)
{
  Caver::OnlineController *v4; // x0
  __int64 v5; // x0
  Caver::Proto::PlayerProfile *v6; // x0
  char v7; // w0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x8
  void *v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  __int64 v14; // [xsp+0h] [xbp-40h] BYREF
  _QWORD *v15; // [xsp+8h] [xbp-38h]
  _QWORD v16[2]; // [xsp+10h] [xbp-30h] BYREF

  v16[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (Caver::OnlineController *)Caver::ProfileManager::PlayerProfileWasSaved(this, a2, a3 & 1);
  v5 = Caver::OnlineController::SharedController(v4);
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 240LL))(v5) & 1) != 0 )
  {
    sub_566A7C(v16, *((_QWORD *)a2 + 1), *((unsigned int *)a2 + 4), &v14);
    v6 = (Caver::Proto::PlayerProfile *)operator new(0xB0u);
    Caver::Proto::PlayerProfile::PlayerProfile(v6);
    boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>();
    google::protobuf::MessageLite::ParseFromString();
    if ( (v7 & 1) != 0 )
      Caver::ProfileManager_Android::SaveSnapshot();
    v8 = v15;
    if ( v15 )
    {
      v9 = v15[1] - 1LL;
      v15[1] = v9;
      if ( !v9 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        v10 = v8[2] - 1LL;
        v8[2] = v10;
        if ( !v10 )
          (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
      }
    }
    v11 = (void *)(v16[0] - 24LL);
    if ( (__int64 *)(v16[0] - 24LL) != &qword_6FD2E0 )
    {
      v12 = (unsigned int *)(v16[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v13 = __ldaxr(v12);
        while ( __stlxr(v13 - 1, v12) );
      }
      else
      {
        v13 = (*v12)--;
      }
      if ( v13 <= 0 )
        operator delete(v11);
    }
  }
}

