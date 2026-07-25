/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036BE98
 * Mangled: _ZN5Caver22MainMenuViewController22GoogleSignInCompletionEbRKSs
 * Demangled: Caver::MainMenuViewController::GoogleSignInCompletion(bool,std::string const&)
 *
 * Callers: 1
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *   0x00000000001FF740  Caver::MainMenuView::SetGoogleSignInVisible(bool)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000200F50  Caver::ProfileManager::AddDelegate(Caver::IProfileManagerDelegate *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 138
 *   insn=0x000000000036BEA8 string=0x000000000036BEAC "T"
 *   insn=0x000000000036BEB8 string=0x000000000036BEBC "`:@"
 *   insn=0x000000000036BEBC string=0x000000000036BEC0 "("
 *   insn=0x000000000036BEC0 string=0x000000000036BEC4 "hb"
 *   insn=0x000000000036BEC4 string=0x000000000036BEC8 "!"
 *   insn=0x000000000036BED0 string=0x000000000036BED4 "hfD9"
 *   insn=0x000000000036BEDC string=0x00000000001FAE50 "0'"
 *   insn=0x000000000036BEE0 string=0x000000000036BEE4 "h"
 *   insn=0x000000000036BEE8 string=0x000000000036BEEC "!"
 *   insn=0x000000000036BEF8 string=0x000000000036BEFC "/"
 *   insn=0x000000000036BF14 string=0x000000000036BF18 ")"
 *   insn=0x000000000036BF28 string=0x000000000036BF2C ")=G"
 *   insn=0x000000000036BF2C string=0x000000000036BF30 "!"
 *   insn=0x000000000036BF30 string=0x000000000036BF34 ")"
 *   insn=0x000000000036BF34 string=0x000000000036BF38 "\t"
 *   insn=0x000000000036BF34 string=0x000000000036BF78 "\t"
 *   insn=0x000000000036BF38 string=0x000000000036BF3C "*"
 *   insn=0x000000000036BF3C string=0x000000000036BF40 "\n"
 *   insn=0x000000000036BF48 string=0x000000000036BF84 "?"
 *   insn=0x000000000036BF78 string=0x000000000036BF7C "*"
 *   insn=0x000000000036BF7C string=0x000000000036BF80 "\n"
 *   insn=0x000000000036BF84 string=0x000000000036BF88 "l"
 *   insn=0x000000000036BF98 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036BFA0 string=0x000000000036BFA4 "J"
 *   insn=0x000000000036BFA8 string=0x000000000036BFAC "(a"
 *   insn=0x000000000036BFB8 string=0x000000000036BFBC "J=G"
 *   insn=0x000000000036BFBC string=0x000000000036BFC0 ")!"
 *   insn=0x000000000036BFC4 string=0x000000000036BFC8 "*"
 *   insn=0x000000000036BFC4 string=0x000000000036BFF4 "*"
 *   insn=0x000000000036BFC8 string=0x000000000036BFCC "K"
 *   insn=0x000000000036BFCC string=0x000000000036BFD0 "+"
 *   insn=0x000000000036BFD4 string=0x000000000036BFD8 "_"
 *   insn=0x000000000036BFEC string=0x000000000036BFF0 "5V"
 *   insn=0x000000000036BFF4 string=0x000000000036BFF8 "K"
 *   insn=0x000000000036BFF8 string=0x000000000036BFFC "+"
 *   insn=0x000000000036BFFC string=0x000000000036C000 "_"
 *   insn=0x000000000036C024 string=0x000000000036C028 "X"
 *   insn=0x000000000036C028 string=0x000000000036C02C ""
 *   insn=0x000000000036C04C string=0x000000000036C050 "@"
 *   insn=0x000000000036C060 string=0x000000000036C064 "i"
 *   insn=0x000000000036C060 string=0x000000000036C070 "\t"
 *   insn=0x000000000036C064 string=0x000000000036C068 ")"
 *   insn=0x000000000036C068 string=0x000000000036C06C "i"
 *   insn=0x000000000036C070 string=0x000000000036C074 ")y@"
 *   insn=0x000000000036C078 string=0x000000000036C07C " "
 *   insn=0x000000000036C088 string=0x000000000036C08C "H"
 *   insn=0x000000000036C08C string=0x000000000036C090 ""
 *   insn=0x000000000036C090 string=0x000000000036C094 "\t"
 *   insn=0x000000000036C0A0 string=0x000000000036C0A4 "7"
 *   insn=0x000000000036C0A8 string=0x000000000036C0AC ""
 *   insn=0x000000000036C0B8 string=0x000000000036C0BC "\t@"
 *   insn=0x000000000036C0C8 string=0x000000000036C0CC ""
 *   insn=0x000000000036C0D8 string=0x000000000036C0DC "@"
 *   insn=0x000000000036C0E8 string=0x000000000036C0EC ""
 *   insn=0x000000000036C0F8 string=0x000000000036C0FC "\t@"
 *   insn=0x000000000036C108 string=0x000000000036C10C ""
 *   insn=0x000000000036C118 string=0x000000000036C11C "@"
 *   insn=0x000000000036C128 string=0x000000000036C12C ""
 *   insn=0x000000000036C134 string=0x000000000036C168 "3"
 *   insn=0x000000000036C138 string=0x000000000036C13C "\t@"
 *   insn=0x000000000036C148 string=0x000000000036C14C ""
 *   insn=0x000000000036C158 string=0x000000000036C15C "@"
 *   insn=0x000000000036C168 string=0x000000000036C16C "h"
 *   insn=0x000000000036C168 string=0x000000000036C1AC ");"
 *   insn=0x000000000036C16C string=0x000000000036C170 ""
 *   insn=0x000000000036C170 string=0x000000000036C174 "h"
 *   insn=0x000000000036C178 string=0x000000000036C17C "h"
 *   insn=0x000000000036C180 string=0x000000000036C184 "\t@"
 *   insn=0x000000000036C188 string=0x000000000036C18C "h\n@"
 *   insn=0x000000000036C18C string=0x000000000036C190 ""
 *   insn=0x000000000036C190 string=0x000000000036C194 "h\n"
 *   insn=0x000000000036C198 string=0x000000000036C19C "h"
 *   insn=0x000000000036C1A0 string=0x000000000036C1A4 "@"
 *   insn=0x000000000036C1B0 string=0x000000000036C1B4 "gS"
 *   insn=0x000000000036C1BC string=0x000000000036C1C0 ""
 *   insn=0x000000000036C1C0 string=0x000000000036C1C4 "\t"
 *   insn=0x000000000036C1C4 string=0x000000000036C1C8 "z4"
 *   insn=0x000000000036C1C8 string=0x000000000036C1CC ""
 *   insn=0x000000000036C1C8 string=0x00000000001F93B0 "0'"
 *   insn=0x000000000036C1CC string=0x000000000036C1D0 "u@"
 *   insn=0x000000000036C1D8 string=0x000000000036C228 ""
 *   insn=0x000000000036C1E0 string=0x000000000036C1E4 "h"
 *   insn=0x000000000036C1F8 string=0x000000000036C1FC "o"
 *   insn=0x000000000036C214 string=0x000000000036C218 ")"
 *   insn=0x000000000036C220 string=0x000000000036C224 "a"
 *   insn=0x000000000036C234 string=0x000000000036C2AC "\t("
 *   insn=0x000000000036C250 string=0x000000000036C254 ")=G"
 *   insn=0x000000000036C254 string=0x000000000036C258 "!"
 *   insn=0x000000000036C25C string=0x000000000036C260 "\t"
 *   insn=0x000000000036C25C string=0x000000000036C274 "\t"
 *   insn=0x000000000036C260 string=0x000000000036C264 "*"
 *   insn=0x000000000036C264 string=0x000000000036C268 "\n"
 *   insn=0x000000000036C270 string=0x000000000036C280 "?"
 *   insn=0x000000000036C274 string=0x000000000036C278 "*"
 *   insn=0x000000000036C278 string=0x000000000036C27C "\n"
 *   insn=0x000000000036C280 string=0x000000000036C284 ","
 *   insn=0x000000000036C288 string=0x000000000036C28C "F"
 *   insn=0x000000000036C294 string=0x000000000036C298 ""
 *   insn=0x000000000036C298 string=0x000000000036C29C "A"
 *   insn=0x000000000036C2A8 string=0x00000000001FA980 "0'"
 *   insn=0x000000000036C2B4 string=0x000000000036C2B8 "nO"
 *   insn=0x000000000036C2BC string=0x000000000036C2C0 "T"
 *   insn=0x000000000036C2BC string=0x000000000036C3D0 "h"
 *   insn=0x000000000036C2C8 string=0x000000000036C2CC ""
 *   insn=0x000000000036C2D8 string=0x000000000036C2DC "\t@"
 *   insn=0x000000000036C2E8 string=0x000000000036C2EC ""
 *   insn=0x000000000036C2F8 string=0x000000000036C2FC "@"
 *   insn=0x000000000036C310 string=0x000000000036C314 "J"
 *   insn=0x000000000036C318 string=0x000000000036C31C "(a"
 *   insn=0x000000000036C320 string=0x000000000036C324 "`"
 *   insn=0x000000000036C328 string=0x000000000036C32C "J=G"
 *   insn=0x000000000036C32C string=0x000000000036C330 ")!"
 *   insn=0x000000000036C334 string=0x000000000036C338 "*"
 *   insn=0x000000000036C334 string=0x000000000036C364 "*"
 *   insn=0x000000000036C338 string=0x000000000036C33C "K"
 *   insn=0x000000000036C33C string=0x000000000036C340 "+"
 *   insn=0x000000000036C344 string=0x000000000036C348 "_"
 *   insn=0x000000000036C348 string=0x000000000036C34C ","
 *   insn=0x000000000036C35C string=0x000000000036C360 "YU"
 *   insn=0x000000000036C364 string=0x000000000036C368 "K"
 *   insn=0x000000000036C368 string=0x000000000036C36C "+"
 *   insn=0x000000000036C36C string=0x000000000036C370 "_"
 *   insn=0x000000000036C374 string=0x000000000036C378 "&"
 *   insn=0x000000000036C384 string=0x000000000036C388 ""
 *   insn=0x000000000036C390 string=0x000000000036C3CC "3"
 *   insn=0x000000000036C394 string=0x000000000036C398 "\t@"
 *   insn=0x000000000036C3A4 string=0x000000000036C3A8 ""
 *   insn=0x000000000036C3B4 string=0x000000000036C3B8 "@"
 *   insn=0x000000000036C3D0 string=0x000000000036C3D4 ""
 *   insn=0x000000000036C3D4 string=0x000000000036C3D8 "h"
 *   insn=0x000000000036C3DC string=0x000000000036C3E0 "h"
 *   insn=0x000000000036C3E0 string=0x000000000036C3E4 "\t@"
 *   insn=0x000000000036C3EC string=0x000000000036C3F0 "h\n@"
 *   insn=0x000000000036C3F0 string=0x000000000036C3F4 ""
 *   insn=0x000000000036C3F4 string=0x000000000036C3F8 "h\n"
 *   insn=0x000000000036C3FC string=0x000000000036C400 "h"
 *   insn=0x000000000036C400 string=0x000000000036C404 "@"
 *   insn=0x000000000036C410 string=0x000000000036C414 ",U"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MainMenuViewController::GoogleSignInCompletion(__int64 a1, char a2)
{
  Caver::MainMenuView *v3; // x0
  Caver::ProfileManager *v4; // x0
  __int64 v5; // x19
  void (__fastcall *v6)(__int64, _QWORD *, double); // x21
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9
  _QWORD v10[3]; // [xsp+60h] [xbp-38h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(Caver::MainMenuView **)(a1 + 112);
  *(_BYTE *)(a1 + 280) = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    Caver::MainMenuView::SetGoogleSignInVisible(v3);
    if ( *(_BYTE *)(a1 + 281) )
    {
      v5 = Caver::ProfileManager::sharedManager(v4);
      v6 = *(void (__fastcall **)(__int64, _QWORD *, double))(*(_QWORD *)v5 + 16LL);
      sub_566BB8((int)v10, "");
      v6(v5, v10, 0.0);
      v7 = (void *)(v10[0] - 24LL);
      if ( (__int64 *)(v10[0] - 24LL) != &qword_6FD2E0 )
      {
        v8 = (unsigned int *)(v10[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v9 = __ldaxr(v8);
          while ( __stlxr(v9 - 1, v8) );
        }
        else
        {
          v9 = (*v8)--;
        }
        if ( v9 <= 0 )
          operator delete(v7);
      }
    }
  }
  else
  {
    Caver::MainMenuView::SetGoogleSignInVisible(v3);
  }
}

