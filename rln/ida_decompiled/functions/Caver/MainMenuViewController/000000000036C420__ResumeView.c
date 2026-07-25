/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036C420
 * Mangled: _ZN5Caver22MainMenuViewController10ResumeViewEv
 * Demangled: Caver::MainMenuViewController::ResumeView(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 32
 *   insn=0x000000000036C430 string=0x000000000036C434 "T"
 *   insn=0x000000000036C440 string=0x000000000036C444 ""
 *   insn=0x000000000036C440 string=0x00000000001F93B0 "0'"
 *   insn=0x000000000036C444 string=0x000000000036C448 "u@"
 *   insn=0x000000000036C454 string=0x00000000001FAE50 "0'"
 *   insn=0x000000000036C458 string=0x000000000036C45C "h"
 *   insn=0x000000000036C48C string=0x000000000036C490 ")"
 *   insn=0x000000000036C498 string=0x000000000036C49C "A"
 *   insn=0x000000000036C4AC string=0x000000000036C508 "r'"
 *   insn=0x000000000036C4C4 string=0x000000000036C4C8 ")=G"
 *   insn=0x000000000036C4C8 string=0x000000000036C4CC "!"
 *   insn=0x000000000036C4D0 string=0x000000000036C4D4 "\t"
 *   insn=0x000000000036C4D0 string=0x000000000036C4E8 "\t"
 *   insn=0x000000000036C4D4 string=0x000000000036C4D8 "*"
 *   insn=0x000000000036C4D8 string=0x000000000036C4DC "\n"
 *   insn=0x000000000036C4E4 string=0x000000000036C4F4 "?"
 *   insn=0x000000000036C4E8 string=0x000000000036C4EC "*"
 *   insn=0x000000000036C4EC string=0x000000000036C4F0 "\n"
 *   insn=0x000000000036C4F4 string=0x000000000036C4F8 "L"
 *   insn=0x000000000036C508 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036C510 string=0x000000000036C514 "J"
 *   insn=0x000000000036C518 string=0x000000000036C51C "(a"
 *   insn=0x000000000036C528 string=0x000000000036C52C "J=G"
 *   insn=0x000000000036C52C string=0x000000000036C530 ")!"
 *   insn=0x000000000036C534 string=0x000000000036C538 "*"
 *   insn=0x000000000036C534 string=0x000000000036C564 "*"
 *   insn=0x000000000036C538 string=0x000000000036C53C "K"
 *   insn=0x000000000036C53C string=0x000000000036C540 "+"
 *   insn=0x000000000036C544 string=0x000000000036C548 "_"
 *   insn=0x000000000036C564 string=0x000000000036C568 "K"
 *   insn=0x000000000036C568 string=0x000000000036C56C "+"
 *   insn=0x000000000036C56C string=0x000000000036C570 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MainMenuViewController::ResumeView(Caver::MainMenuViewController *this)
{
  __int64 v1; // x0
  Caver::ProfileManager *v2; // x0
  __int64 v3; // x19
  void (__fastcall *v4)(__int64, _QWORD *, double); // x21
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+8h] [xbp-38h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = Caver::OnlineController::SharedController(this);
  v2 = (Caver::ProfileManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 232LL))(v1);
  if ( ((unsigned __int8)v2 & 1) == 0 )
  {
    v3 = Caver::ProfileManager::sharedManager(v2);
    v4 = *(void (__fastcall **)(__int64, _QWORD *, double))(*(_QWORD *)v3 + 16LL);
    sub_566BB8((int)v8, "");
    v4(v3, v8, 1.0);
    v5 = (void *)(v8[0] - 24LL);
    if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
    {
      v6 = (unsigned int *)(v8[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v7 = __ldaxr(v6);
        while ( __stlxr(v7 - 1, v6) );
      }
      else
      {
        v7 = (*v6)--;
      }
      if ( v7 <= 0 )
        operator delete(v5);
    }
  }
}

