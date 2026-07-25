/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000347EFC
 * Mangled: _ZN5Caver22GameOverViewController11ShowAdMaybeEv
 * Demangled: Caver::GameOverViewController::ShowAdMaybe(void)
 *
 * Callers: 1
 *   0x0000000000203640  Caver::GameOverViewController::ShowAdMaybe(void)
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7B00  Caver::GameOverViewController::GameOverViewDidContinue(Caver::GameOverView *)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001FB8B0  boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>(Caver::GameViewController *)
 *   0x00000000001FD150  Caver::GameViewController::GameViewController(void)
 *   0x0000000000203640  Caver::GameOverViewController::ShowAdMaybe(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 95
 *   insn=0x0000000000347F0C string=0x0000000000347F10 "T"
 *   insn=0x0000000000347F18 string=0x0000000000347F1C "@A9"
 *   insn=0x0000000000347F1C string=0x0000000000347F20 ""
 *   insn=0x0000000000347F24 string=0x0000000000347F28 "@"
 *   insn=0x0000000000347F28 string=0x0000000000347F2C "!"
 *   insn=0x0000000000347F2C string=0x00000000001F93B0 "0'"
 *   insn=0x0000000000347F30 string=0x0000000000347F34 "h"
 *   insn=0x0000000000347F38 string=0x0000000000347F3C "!"
 *   insn=0x0000000000347F3C string=0x000000000058E972 "game_over"
 *   insn=0x0000000000347F48 string=0x0000000000347F4C "{"
 *   insn=0x0000000000347F6C string=0x0000000000347F70 ")"
 *   insn=0x0000000000347F78 string=0x0000000000347F7C "A"
 *   insn=0x0000000000347FA4 string=0x0000000000347FA8 ")=G"
 *   insn=0x0000000000347FA8 string=0x0000000000347FAC "!"
 *   insn=0x0000000000347FB0 string=0x0000000000347FB4 "\t"
 *   insn=0x0000000000347FB0 string=0x0000000000347FC8 "\t"
 *   insn=0x0000000000347FB4 string=0x0000000000347FB8 "*"
 *   insn=0x0000000000347FB8 string=0x0000000000347FBC "\n"
 *   insn=0x0000000000347FC4 string=0x0000000000347FD4 "?"
 *   insn=0x0000000000347FC8 string=0x0000000000347FCC "*"
 *   insn=0x0000000000347FCC string=0x0000000000347FD0 "\n"
 *   insn=0x0000000000347FD4 string=0x0000000000347FD8 "L"
 *   insn=0x0000000000347FE8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000347FF0 string=0x0000000000347FF4 "J"
 *   insn=0x0000000000347FF8 string=0x0000000000347FFC "(a"
 *   insn=0x0000000000348008 string=0x000000000034800C "J=G"
 *   insn=0x000000000034800C string=0x0000000000348010 ")!"
 *   insn=0x0000000000348014 string=0x0000000000348018 "*"
 *   insn=0x0000000000348014 string=0x0000000000348044 "*"
 *   insn=0x0000000000348018 string=0x000000000034801C "K"
 *   insn=0x000000000034801C string=0x0000000000348020 "+"
 *   insn=0x0000000000348024 string=0x0000000000348028 "_"
 *   insn=0x000000000034803C string=0x0000000000348040 "!"
 *   insn=0x0000000000348044 string=0x0000000000348048 "K"
 *   insn=0x0000000000348048 string=0x000000000034804C "+"
 *   insn=0x000000000034804C string=0x0000000000348050 "_"
 *   insn=0x0000000000348070 string=0x0000000000348074 "U"
 *   insn=0x0000000000348080 string=0x0000000000348084 "h"
 *   insn=0x0000000000348084 string=0x0000000000348088 "H"
 *   insn=0x0000000000348098 string=0x0000000000348214 "/"
 *   insn=0x00000000003480B4 string=0x00000000003480B8 "h"
 *   insn=0x00000000003480B8 string=0x00000000003480BC "?x"
 *   insn=0x00000000003480BC string=0x00000000003480C0 "H"
 *   insn=0x00000000003480C0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003480C4 string=0x00000000003480C8 """
 *   insn=0x00000000003480C8 string=0x00000000001FD150 "0'"
 *   insn=0x00000000003480D4 string=0x00000000003480D8 "h"
 *   insn=0x00000000003480D4 string=0x00000000001FB8B0 "0'"
 *   insn=0x00000000003480E0 string=0x00000000003480E4 "+"
 *   insn=0x00000000003480E0 string=0x00000000003480F0 "TI@"
 *   insn=0x00000000003480E4 string=0x00000000003480E8 "k"
 *   insn=0x00000000003480E8 string=0x00000000003480EC "+"
 *   insn=0x00000000003480F0 string=0x00000000003480F4 "H"
 *   insn=0x00000000003480F4 string=0x00000000003480F8 "4"
 *   insn=0x00000000003480F8 string=0x000000000034813C "`"@"
 *   insn=0x00000000003480FC string=0x0000000000348100 ""
 *   insn=0x000000000034810C string=0x0000000000348110 "\t@"
 *   insn=0x000000000034811C string=0x0000000000348120 ""
 *   insn=0x000000000034812C string=0x0000000000348130 "@"
 *   insn=0x0000000000348140 string=0x0000000000348144 ""
 *   insn=0x0000000000348144 string=0x0000000000348148 ""
 *   insn=0x0000000000348150 string=0x0000000000348154 "*"
 *   insn=0x0000000000348154 string=0x0000000000348158 "J"
 *   insn=0x0000000000348158 string=0x000000000034815C "*"
 *   insn=0x0000000000348160 string=0x0000000000348164 " "
 *   insn=0x0000000000348178 string=0x000000000034817C "4"
 *   insn=0x0000000000348180 string=0x0000000000348184 ""
 *   insn=0x0000000000348190 string=0x0000000000348194 "\t@"
 *   insn=0x00000000003481A0 string=0x00000000003481A4 ""
 *   insn=0x00000000003481B0 string=0x00000000003481B4 "@"
 *   insn=0x00000000003481CC string=0x00000000003481D0 "h"
 *   insn=0x00000000003481D0 string=0x00000000003481D4 ""
 *   insn=0x00000000003481D4 string=0x00000000003481D8 "h"
 *   insn=0x00000000003481DC string=0x00000000003481E0 "h"
 *   insn=0x00000000003481E4 string=0x00000000003481E8 "\t@"
 *   insn=0x00000000003481EC string=0x00000000003481F0 "h\n@"
 *   insn=0x00000000003481F0 string=0x00000000003481F4 ""
 *   insn=0x00000000003481F4 string=0x00000000003481F8 "h\n"
 *   insn=0x00000000003481FC string=0x0000000000348200 "h"
 *   insn=0x0000000000348204 string=0x0000000000348208 "@"
 *   insn=0x0000000000348220 string=0x0000000000348224 "-"
 *   insn=0x0000000000348234 string=0x0000000000348238 ""
 *   insn=0x0000000000348244 string=0x0000000000348248 "\t@"
 *   insn=0x0000000000348254 string=0x0000000000348258 ""
 *   insn=0x0000000000348264 string=0x0000000000348268 "@"
 *   insn=0x0000000000348270 string=0x0000000000348274 ""
 *   insn=0x0000000000348280 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000348290 string=0x0000000000348294 "4"
 *   insn=0x0000000000348298 string=0x000000000034829C ""
 *   insn=0x00000000003482A8 string=0x00000000003482AC "\t@"
 *   insn=0x00000000003482B8 string=0x00000000003482BC ""
 *   insn=0x00000000003482C8 string=0x00000000003482CC "@"
 *   insn=0x00000000003482D8 string=0x00000000003482DC "z"
 *   insn=0x00000000003482DC string=0x00000000003482E0 ""
 *   insn=0x00000000003482E8 string=0x00000000001F7B00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameOverViewController::ShowAdMaybe(Caver::GameOverViewController *this)
{
  __int64 v1; // x19
  void (__fastcall *v2)(__int64, _QWORD *, __int64, float); // x21
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  _QWORD v6[3]; // [xsp+60h] [xbp-38h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_BYTE *)this + 80) )
  {
    *((_BYTE *)this + 80) = 1;
    v1 = Caver::OnlineController::SharedController(this);
    v2 = *(void (__fastcall **)(__int64, _QWORD *, __int64, float))(*(_QWORD *)v1 + 264LL);
    sub_566BB8((int)v6, "game_over");
    v2(v1, v6, 60, 0.4);
    v3 = (void *)(v6[0] - 24LL);
    if ( (__int64 *)(v6[0] - 24LL) != &qword_6FD2E0 )
    {
      v4 = (unsigned int *)(v6[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v5 = __ldaxr(v4);
        while ( __stlxr(v5 - 1, v4) );
      }
      else
      {
        v5 = (*v4)--;
      }
      if ( v5 <= 0 )
        operator delete(v3);
    }
  }
}

