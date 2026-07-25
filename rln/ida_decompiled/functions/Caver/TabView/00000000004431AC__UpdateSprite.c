/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004431AC
 * Mangled: _ZN5Caver7TabView12UpdateSpriteEv
 * Demangled: Caver::TabView::UpdateSprite(void)
 *
 * Callers: 1
 *   0x00000000001FD2F0  Caver::TabView::UpdateSprite(void)
 *
 * Callees: 13
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9830  Caver::Sprite::Clear(void)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x0000000000203290  Caver::GUIWindow::mainWindow(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000044353C  Caver::TabView::Update(float)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 81
 *   insn=0x00000000004431D8 string=0x00000000004431DC "W"
 *   insn=0x00000000004431E4 string=0x00000000004431E8 "t"
 *   insn=0x00000000004431F4 string=0x00000000004431F8 "h"
 *   insn=0x00000000004431F4 string=0x00000000001F9830 "0'"
 *   insn=0x0000000000443200 string=0x0000000000443204 "h"
 *   insn=0x0000000000443208 string=0x000000000044320C ""
 *   insn=0x000000000044320C string=0x0000000000443210 "(\n"
 *   insn=0x000000000044320C string=0x000000000044344C "h"
 *   insn=0x0000000000443210 string=0x0000000000443214 ""
 *   insn=0x0000000000443220 string=0x0000000000443224 "(\n"
 *   insn=0x0000000000443224 string=0x0000000000443228 ""
 *   insn=0x0000000000443228 string=0x000000000044322C "9"
 *   insn=0x000000000044322C string=0x0000000000443230 ""
 *   insn=0x0000000000443230 string=0x0000000000443234 "{?G"
 *   insn=0x0000000000443234 string=0x0000000000443238 "u\n"
 *   insn=0x0000000000443238 string=0x0000000000592AE8 "ui_tab_"
 *   insn=0x000000000044323C string=0x0000000000443240 "\t"
 *   insn=0x0000000000443248 string=0x000000000044324C "\n"
 *   insn=0x0000000000443260 string=0x0000000000443264 "\t"
 *   insn=0x0000000000443260 string=0x0000000000443278 "\t"
 *   insn=0x0000000000443264 string=0x0000000000443268 "*"
 *   insn=0x0000000000443268 string=0x000000000044326C "\n"
 *   insn=0x0000000000443274 string=0x0000000000443284 "?"
 *   insn=0x0000000000443278 string=0x000000000044327C "*"
 *   insn=0x000000000044327C string=0x0000000000443280 "\n"
 *   insn=0x0000000000443288 string=0x0000000000443378 "h~@"
 *   insn=0x000000000044328C string=0x0000000000443290 "E"
 *   insn=0x0000000000443290 string=0x0000000000443294 "9"
 *   insn=0x0000000000443298 string=0x000000000044329C "h~@"
 *   insn=0x00000000004432A0 string=0x00000000004432A4 "i\nB"
 *   insn=0x00000000004432AC string=0x00000000004432B0 "  +"
 *   insn=0x00000000004432B4 string=0x00000000004432B8 "!"
 *   insn=0x00000000004432C0 string=0x00000000004432C4 "(""
 *   insn=0x00000000004432C8 string=0x00000000004432CC "h"
 *   insn=0x00000000004432D8 string=0x00000000004432DC "\tAE"
 *   insn=0x00000000004432F0 string=0x00000000004432F4 "'"
 *   insn=0x0000000000443320 string=0x0000000000443324 ""
 *   insn=0x000000000044332C string=0x0000000000443330 " 8 "
 *   insn=0x0000000000443338 string=0x000000000044333C "h"
 *   insn=0x0000000000443338 string=0x00000000001FA350 "0'"
 *   insn=0x000000000044334C string=0x0000000000443350 "8["
 *   insn=0x0000000000443370 string=0x0000000000443374 "A"
 *   insn=0x0000000000443374 string=0x000000000044325C "!"
 *   insn=0x000000000044337C string=0x0000000000443380 "j\nB"
 *   insn=0x0000000000443384 string=0x0000000000443388 "<"
 *   insn=0x00000000004433A8 string=0x00000000004433AC "B-"
 *   insn=0x00000000004433AC string=0x00000000004433B0 "c-"
 *   insn=0x00000000004433B0 string=0x00000000004433B4 "\"
 *   insn=0x00000000004433B4 string=0x00000000004433B8 "v"
 *   insn=0x00000000004433BC string=0x00000000004433C0 "B."
 *   insn=0x00000000004433C0 string=0x00000000004433C4 "!(/"
 *   insn=0x00000000004433D8 string=0x00000000001FDA30 "0'"
 *   insn=0x00000000004433E8 string=0x00000000004433EC ""q"
 *   insn=0x00000000004433FC string=0x0000000000443400 "h~@"
 *   insn=0x000000000044341C string=0x0000000000443420 "@"
 *   insn=0x000000000044341C string=0x000000000044343C "h"
 *   insn=0x0000000000443420 string=0x0000000000443424 ""
 *   insn=0x0000000000443424 string=0x0000000000443428 ""
 *   insn=0x000000000044342C string=0x0000000000443430 ""
 *   insn=0x0000000000443430 string=0x0000000000443434 ""
 *   insn=0x0000000000443454 string=0x0000000000443458 "}@"
 *   insn=0x00000000004434A0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004434AC string=0x00000000004434B0 " "
 *   insn=0x00000000004434B0 string=0x00000000004434B4 "@"
 *   insn=0x00000000004434B4 string=0x00000000004434B8 ""
 *   insn=0x00000000004434B8 string=0x00000000004434BC ""
 *   insn=0x00000000004434C0 string=0x00000000004434C4 ""
 *   insn=0x00000000004434C4 string=0x00000000004434C8 ""
 *   insn=0x00000000004434DC string=0x00000000004434E0 "(a"
 *   insn=0x00000000004434E4 string=0x00000000004434E8 "`"
 *   insn=0x00000000004434E8 string=0x00000000004434EC ")!"
 *   insn=0x00000000004434F0 string=0x00000000004434F4 "*"
 *   insn=0x00000000004434F0 string=0x0000000000443520 "*"
 *   insn=0x00000000004434F4 string=0x00000000004434F8 "K"
 *   insn=0x00000000004434F8 string=0x00000000004434FC "+"
 *   insn=0x0000000000443500 string=0x0000000000443504 "_"
 *   insn=0x0000000000443504 string=0x0000000000443508 "l"
 *   insn=0x0000000000443520 string=0x0000000000443524 "K"
 *   insn=0x0000000000443524 string=0x0000000000443528 "+"
 *   insn=0x0000000000443528 string=0x000000000044352C "_"
 *   insn=0x0000000000443538 string=0x000000000044353C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TabView::UpdateSprite(Caver::TabView *this)
{
  Caver::Sprite *v2; // x20
  Caver::GUIWindow *v3; // x0
  float v4; // w8
  __int64 v5; // x24
  unsigned int *v6; // x8
  int v7; // w9
  __int64 v8; // x0
  float *v9; // x8
  float v10; // s2
  float v11; // s0
  float v12; // s1
  float v13; // s1
  float v14; // s8
  __int64 v15; // x8
  unsigned __int64 v16; // x9
  Caver::TextureLibrary *v17; // x0
  float v18; // w22
  void *v19; // x0
  float v20; // w22
  float v21; // w28
  float v22; // s2
  float v23; // s0
  int v24; // w8
  int v26; // [xsp+Ch] [xbp-D4h] BYREF
  float v27[2]; // [xsp+10h] [xbp-D0h] BYREF
  __int64 v28; // [xsp+18h] [xbp-C8h] BYREF
  float *v29; // [xsp+20h] [xbp-C0h] BYREF
  __int64 v30; // [xsp+28h] [xbp-B8h] BYREF
  unsigned __int64 v31; // [xsp+30h] [xbp-B0h]
  __int64 v32; // [xsp+38h] [xbp-A8h] BYREF
  float v33; // [xsp+40h] [xbp-A0h]
  float v34; // [xsp+44h] [xbp-9Ch]
  __int64 v35; // [xsp+48h] [xbp-98h]

  v2 = (Caver::TabView *)((char *)this + 432);
  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (Caver::GUIWindow *)Caver::Sprite::Clear((Caver::TabView *)((char *)this + 432));
  v4 = *((float *)this + 35);
  v32 = 0;
  v33 = v4;
  v34 = 0.0;
  if ( *((int *)this + 132) >= 1 )
  {
    v5 = 0;
    do
    {
      v8 = Caver::GUIWindow::mainWindow(v3);
      v9 = (float *)*((_QWORD *)this + 31);
      v10 = (float)(int)v5;
      v11 = v9[22];
      v12 = 6.0;
      if ( *(float *)(v8 + 144) >= 350.0 )
        v12 = 10.0;
      v13 = v11 + v12;
      v14 = v13 * v10;
      if ( v5 == *((_DWORD *)this + 130) )
      {
        v15 = *((_QWORD *)this + 32);
        v16 = *(_QWORD *)(v15 + 84);
        LODWORD(v30) = 0;
        *((float *)&v30 + 1) = v13 * v10;
        v31 = v16;
        LODWORD(v29) = -1;
        v17 = (Caver::TextureLibrary *)Caver::Sprite::AddRectangle(
                                         v2,
                                         (const Caver::Rectangle *)&v30,
                                         (const Caver::Rectangle *)(v15 + 92),
                                         (const Caver::Color *)&v29);
      }
      else
      {
        v18 = v9[21];
        LODWORD(v30) = 0;
        *((float *)&v30 + 1) = v13 * v10;
        v31 = __PAIR64__(LODWORD(v11), LODWORD(v18));
        LODWORD(v29) = -1;
        v17 = (Caver::TextureLibrary *)Caver::Sprite::AddRectangle(
                                         v2,
                                         (const Caver::Rectangle *)&v30,
                                         (const Caver::Rectangle *)(v9 + 23),
                                         (const Caver::Color *)&v29);
        v33 = v18 - *(float *)&v32;
      }
      Caver::TextureLibrary::sharedLibrary(v17);
      ((void (__fastcall *)(__int64 *__return_ptr, const char *, __int64))loc_25A030)(
        &v30,
        "ui_tab_",
        *((_QWORD *)this + 67) + 8 * v5);
      Caver::TextureLibrary::TextureForName();
      v19 = (void *)(v30 - 24);
      if ( (__int64 *)(v30 - 24) != &qword_6FD2E0 )
      {
        v6 = (unsigned int *)(v30 - 8);
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
          operator delete(v19);
      }
      v21 = v29[21];
      v20 = v29[22];
      v22 = v21;
      v23 = roundf(v14 + (float)(*(float *)(*((_QWORD *)this + 31) + 88LL) * 0.5));
      if ( v5 == *((_DWORD *)this + 130) )
      {
        v21 = v21 * 1.2;
        v20 = v20 * 1.2;
      }
      v27[0] = (float)(47.0 - v22) + 0.0;
      v27[1] = v23 + (float)(v20 * -0.5);
      Caver::Vector2::Rounded(&v28, (Caver::Vector2 *)v27);
      v31 = __PAIR64__(LODWORD(v20), LODWORD(v21));
      v26 = -1;
      v30 = v28;
      Caver::Sprite::AddRectangle(
        v2,
        (const Caver::Rectangle *)&v30,
        (const Caver::Rectangle *)(v29 + 23),
        (const Caver::Color *)&v26);
      v3 = (Caver::GUIWindow *)v29;
      v34 = (float)(v14 + *(float *)(*((_QWORD *)this + 31) + 88LL)) - *((float *)&v32 + 1);
      if ( v29 )
      {
        v24 = *((_DWORD *)v29 + 2) - 1;
        *((_DWORD *)v29 + 2) = v24;
        if ( !v24 )
          v3 = (Caver::GUIWindow *)(*(__int64 (__fastcall **)(Caver::GUIWindow *))(*(_QWORD *)v3 + 8LL))(v3);
      }
      ++v5;
    }
    while ( v5 < *((int *)this + 132) );
  }
  return (*(__int64 (__fastcall **)(Caver::TabView *, __int64 *))(*(_QWORD *)this + 248LL))(this, &v32);
}

