/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAB24
 * Mangled: _ZN5Caver24OnlineController_Android17OpenPrivacyPolicyEv
 * Demangled: Caver::OnlineController_Android::OpenPrivacyPolicy(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6660  Caver::AndroidHasPrivacyConsent(void)
 *   0x00000000001FFAD0  Caver::AndroidOpenURL(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x00000000004BAB30 string=0x00000000004BAB34 "S"
 *   insn=0x00000000004BAB34 string=0x00000000004BAB38 "h"
 *   insn=0x00000000004BAB40 string=0x0000000000597A2A "http://privacy.touchfoo.com/"
 *   insn=0x00000000004BAB5C string=0x00000000004BAB60 "I"
 *   insn=0x00000000004BAB60 string=0x00000000004BAB64 ")"
 *   insn=0x00000000004BAB6C string=0x00000000004BAB70 "!"
 *   insn=0x00000000004BAB70 string=0x00000000004BAB74 "h"
 *   insn=0x00000000004BAB70 string=0x00000000004BAB94 "I"
 *   insn=0x00000000004BAB94 string=0x00000000004BAB98 ")=G"
 *   insn=0x00000000004BAB98 string=0x00000000004BAB9C "!"
 *   insn=0x00000000004BABA0 string=0x00000000004BABA4 "\t"
 *   insn=0x00000000004BABA0 string=0x00000000004BABB8 "\t"
 *   insn=0x00000000004BABA4 string=0x00000000004BABA8 "*"
 *   insn=0x00000000004BABA8 string=0x00000000004BABAC "\n"
 *   insn=0x00000000004BABB4 string=0x00000000004BABC4 "?"
 *   insn=0x00000000004BABB8 string=0x00000000004BABBC "*"
 *   insn=0x00000000004BABBC string=0x00000000004BABC0 "\n"
 *   insn=0x00000000004BABC4 string=0x00000000004BABC8 "l"
 *   insn=0x00000000004BABD8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BABDC string=0x00000000004BABE0 "J"
 *   insn=0x00000000004BABE0 string=0x00000000004BABE4 "J"
 *   insn=0x00000000004BABE8 string=0x00000000004BABEC "(a"
 *   insn=0x00000000004BABF4 string=0x00000000004BABF8 "J"
 *   insn=0x00000000004BABF8 string=0x00000000004BABFC "J=G"
 *   insn=0x00000000004BABFC string=0x00000000004BAC00 ")!"
 *   insn=0x00000000004BAC04 string=0x00000000004BAC08 "*"
 *   insn=0x00000000004BAC04 string=0x00000000004BAC34 "*"
 *   insn=0x00000000004BAC08 string=0x00000000004BAC0C "K"
 *   insn=0x00000000004BAC0C string=0x00000000004BAC10 "+"
 *   insn=0x00000000004BAC14 string=0x00000000004BAC18 "_"
 *   insn=0x00000000004BAC2C string=0x00000000004BAC30 "%"
 *   insn=0x00000000004BAC34 string=0x00000000004BAC38 "K"
 *   insn=0x00000000004BAC38 string=0x00000000004BAC3C "+"
 *   insn=0x00000000004BAC3C string=0x00000000004BAC40 "_"
 *   insn=0x00000000004BAC50 string=0x00000000001F6660 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OnlineController_Android::OpenPrivacyPolicy(Caver::OnlineController_Android *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "http://privacy.touchfoo.com/");
  Caver::AndroidOpenURL();
  v1 = (void *)(v4[0] - 24LL);
  if ( (__int64 *)(v4[0] - 24LL) != &qword_6FD2E0 )
  {
    v2 = (unsigned int *)(v4[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v3 = __ldaxr(v2);
      while ( __stlxr(v3 - 1, v2) );
    }
    else
    {
      v3 = (*v2)--;
    }
    if ( v3 <= 0 )
      operator delete(v1);
  }
}

