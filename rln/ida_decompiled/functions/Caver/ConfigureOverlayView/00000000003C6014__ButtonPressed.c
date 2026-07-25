/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C6014
 * Mangled: _ZN5Caver20ConfigureOverlayView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::ConfigureOverlayView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 2
 *   0x00000000001FF4A0  Caver::ConfigureOverlayView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003C5664  Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *
 * Callees: 9
 *   0x00000000001F4080  Caver::GameInterfaceBuilder::AlertView(std::string const&,std::string const&,int,std::string const*,int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDDF0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 147
 *   insn=0x00000000003C6024 string=0x00000000003C6028 "U"
 *   insn=0x00000000003C6034 string=0x00000000003C6038 "h"
 *   insn=0x00000000003C603C string=0x00000000003C6040 "@"
 *   insn=0x00000000003C6040 string=0x00000000003C6044 "h"
 *   insn=0x00000000003C6040 string=0x00000000003C61E8 "`"
 *   insn=0x00000000003C604C string=0x00000000003C6050 "a"
 *   insn=0x00000000003C6050 string=0x00000000005920DD "Reset"
 *   insn=0x00000000003C606C string=0x000000000058459D "Cancel"
 *   insn=0x00000000003C6078 string=0x00000000003C607C "a"
 *   insn=0x00000000003C607C string=0x0000000000592102 "RESET CONTROLS?"
 *   insn=0x00000000003C608C string=0x00000000003C6090 "a"
 *   insn=0x00000000003C6090 string=0x0000000000592112 "Are you sure you want to reset controls to default positions?"
 *   insn=0x00000000003C60BC string=0x00000000001F4080 "P'"
 *   insn=0x00000000003C60C4 string=0x00000000003C60C8 "\n"
 *   insn=0x00000000003C60C4 string=0x00000000003C60D4 "t"
 *   insn=0x00000000003C60C8 string=0x00000000003C60CC "J"
 *   insn=0x00000000003C60CC string=0x00000000003C60D0 "\n"
 *   insn=0x00000000003C60D4 string=0x00000000003C60D8 "i""
 *   insn=0x00000000003C60D8 string=0x00000000003C60DC "4"
 *   insn=0x00000000003C60E0 string=0x00000000003C60E4 ""
 *   insn=0x00000000003C60F0 string=0x00000000003C60F4 "\t@"
 *   insn=0x00000000003C6100 string=0x00000000003C6104 ""
 *   insn=0x00000000003C6110 string=0x00000000003C6114 "@"
 *   insn=0x00000000003C6120 string=0x00000000003C6124 "4"
 *   insn=0x00000000003C6128 string=0x00000000003C612C ""
 *   insn=0x00000000003C6138 string=0x00000000003C613C "\t@"
 *   insn=0x00000000003C6148 string=0x00000000003C614C ""
 *   insn=0x00000000003C6158 string=0x00000000003C615C "@"
 *   insn=0x00000000003C6178 string=0x00000000003C617C "A"
 *   insn=0x00000000003C618C string=0x00000000003C6190 "`"
 *   insn=0x00000000003C6190 string=0x00000000003C6194 "h"
 *   insn=0x00000000003C6194 string=0x00000000003C6198 ""
 *   insn=0x00000000003C61A0 string=0x00000000001FDDF0 "0'"
 *   insn=0x00000000003C61C4 string=0x00000000003C61C8 ")=G"
 *   insn=0x00000000003C61C8 string=0x00000000003C61CC "!"
 *   insn=0x00000000003C61CC string=0x00000000003C61D0 "\t"
 *   insn=0x00000000003C61D0 string=0x00000000003C61D4 "\t"
 *   insn=0x00000000003C61D0 string=0x00000000003C62D0 "\t"
 *   insn=0x00000000003C61D4 string=0x00000000003C61D8 "*"
 *   insn=0x00000000003C61D8 string=0x00000000003C61DC "\n"
 *   insn=0x00000000003C61E0 string=0x00000000003C61E4 ">"
 *   insn=0x00000000003C61E4 string=0x00000000003C62DC "?"
 *   insn=0x00000000003C61EC string=0x00000000003C61F0 ""
 *   insn=0x00000000003C61F4 string=0x00000000003C61F8 ""
 *   insn=0x00000000003C6208 string=0x00000000003C620C "!"
 *   insn=0x00000000003C6224 string=0x00000000003C6228 ")=G"
 *   insn=0x00000000003C6228 string=0x00000000003C622C "!"
 *   insn=0x00000000003C622C string=0x00000000003C6230 "\t"
 *   insn=0x00000000003C6230 string=0x00000000003C6234 "\t"
 *   insn=0x00000000003C6230 string=0x00000000003C6290 "\t"
 *   insn=0x00000000003C6234 string=0x00000000003C6238 "*"
 *   insn=0x00000000003C6238 string=0x00000000003C623C "\n"
 *   insn=0x00000000003C6244 string=0x00000000003C629C "?"
 *   insn=0x00000000003C6248 string=0x00000000003C624C ")=G"
 *   insn=0x00000000003C624C string=0x00000000003C6250 "!"
 *   insn=0x00000000003C6254 string=0x00000000003C6258 "\t"
 *   insn=0x00000000003C6254 string=0x00000000003C62B0 "\t"
 *   insn=0x00000000003C6258 string=0x00000000003C625C "*"
 *   insn=0x00000000003C625C string=0x00000000003C6260 "\n"
 *   insn=0x00000000003C6268 string=0x00000000003C62BC "?"
 *   insn=0x00000000003C626C string=0x00000000003C6270 ")=G"
 *   insn=0x00000000003C6270 string=0x00000000003C6274 "!"
 *   insn=0x00000000003C6278 string=0x00000000003C627C "\t"
 *   insn=0x00000000003C6278 string=0x00000000003C62F0 "\t"
 *   insn=0x00000000003C627C string=0x00000000003C6280 "*"
 *   insn=0x00000000003C6280 string=0x00000000003C6284 "\n"
 *   insn=0x00000000003C628C string=0x00000000003C62FC "?"
 *   insn=0x00000000003C6290 string=0x00000000003C6294 "*"
 *   insn=0x00000000003C6294 string=0x00000000003C6298 "\n"
 *   insn=0x00000000003C62A4 string=0x00000000003C62A8 "?"
 *   insn=0x00000000003C62B0 string=0x00000000003C62B4 "*"
 *   insn=0x00000000003C62B4 string=0x00000000003C62B8 "\n"
 *   insn=0x00000000003C62C4 string=0x00000000003C62C8 "7"
 *   insn=0x00000000003C62D0 string=0x00000000003C62D4 "*"
 *   insn=0x00000000003C62D4 string=0x00000000003C62D8 "\n"
 *   insn=0x00000000003C62E4 string=0x00000000003C62E8 "/"
 *   insn=0x00000000003C62F0 string=0x00000000003C62F4 "*"
 *   insn=0x00000000003C62F4 string=0x00000000003C62F8 "\n"
 *   insn=0x00000000003C6304 string=0x00000000003C6308 "'"
 *   insn=0x00000000003C6310 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C6320 string=0x00000000003C6324 ""
 *   insn=0x00000000003C6330 string=0x00000000003C6334 "\t@"
 *   insn=0x00000000003C6340 string=0x00000000003C6344 ""
 *   insn=0x00000000003C6350 string=0x00000000003C6354 "@"
 *   insn=0x00000000003C635C string=0x00000000003C6360 "'"
 *   insn=0x00000000003C636C string=0x00000000003C6370 ")"
 *   insn=0x00000000003C6374 string=0x00000000003C6378 "-"
 *   insn=0x00000000003C6380 string=0x00000000003C6384 "J"
 *   insn=0x00000000003C6388 string=0x00000000003C638C "(a"
 *   insn=0x00000000003C6398 string=0x00000000003C639C "J=G"
 *   insn=0x00000000003C639C string=0x00000000003C63A0 ")!"
 *   insn=0x00000000003C63A4 string=0x00000000003C63A8 "*"
 *   insn=0x00000000003C63A4 string=0x00000000003C63D4 "*"
 *   insn=0x00000000003C63A8 string=0x00000000003C63AC "K"
 *   insn=0x00000000003C63AC string=0x00000000003C63B0 "+"
 *   insn=0x00000000003C63B4 string=0x00000000003C63B8 "_"
 *   insn=0x00000000003C63CC string=0x00000000003C63D0 "="
 *   insn=0x00000000003C63D4 string=0x00000000003C63D8 "K"
 *   insn=0x00000000003C63D8 string=0x00000000003C63DC "+"
 *   insn=0x00000000003C63DC string=0x00000000003C63E0 "_"
 *   insn=0x00000000003C63E4 string=0x00000000003C63E8 "a"
 *   insn=0x00000000003C63F0 string=0x00000000003C63F4 "4"
 *   insn=0x00000000003C6400 string=0x00000000003C6404 ")"
 *   insn=0x00000000003C640C string=0x00000000003C6410 "!"
 *   insn=0x00000000003C6418 string=0x00000000003C641C ")"
 *   insn=0x00000000003C6424 string=0x00000000003C6428 "A"
 *   insn=0x00000000003C643C string=0x00000000003C6440 "a"
 *   insn=0x00000000003C6454 string=0x00000000003C6458 ")=G"
 *   insn=0x00000000003C6458 string=0x00000000003C645C "!"
 *   insn=0x00000000003C6460 string=0x00000000003C6464 "\t"
 *   insn=0x00000000003C6460 string=0x00000000003C6558 "\t"
 *   insn=0x00000000003C6464 string=0x00000000003C6468 "*"
 *   insn=0x00000000003C6468 string=0x00000000003C646C "\n"
 *   insn=0x00000000003C6470 string=0x00000000003C6474 "?"
 *   insn=0x00000000003C648C string=0x00000000003C6490 ")=G"
 *   insn=0x00000000003C6490 string=0x00000000003C6494 "!"
 *   insn=0x00000000003C6498 string=0x00000000003C649C "\t"
 *   insn=0x00000000003C6498 string=0x00000000003C64D4 "\t"
 *   insn=0x00000000003C649C string=0x00000000003C64A0 "*"
 *   insn=0x00000000003C64A0 string=0x00000000003C64A4 "\n"
 *   insn=0x00000000003C64A8 string=0x00000000003C64AC ""
 *   insn=0x00000000003C64AC string=0x00000000003C64E0 "?"
 *   insn=0x00000000003C64B0 string=0x00000000003C64B4 ")=G"
 *   insn=0x00000000003C64B4 string=0x00000000003C64B8 "!"
 *   insn=0x00000000003C64BC string=0x00000000003C64C0 "\t"
 *   insn=0x00000000003C64BC string=0x00000000003C6518 "\t"
 *   insn=0x00000000003C64C0 string=0x00000000003C64C4 "*"
 *   insn=0x00000000003C64C4 string=0x00000000003C64C8 "\n"
 *   insn=0x00000000003C64D0 string=0x00000000003C6524 "?"
 *   insn=0x00000000003C64D4 string=0x00000000003C64D8 "*"
 *   insn=0x00000000003C64D8 string=0x00000000003C64DC "\n"
 *   insn=0x00000000003C64F4 string=0x00000000003C64F8 ")=G"
 *   insn=0x00000000003C64F8 string=0x00000000003C64FC "!"
 *   insn=0x00000000003C6500 string=0x00000000003C6504 "\t"
 *   insn=0x00000000003C6500 string=0x00000000003C6538 "\t"
 *   insn=0x00000000003C6504 string=0x00000000003C6508 "*"
 *   insn=0x00000000003C6508 string=0x00000000003C650C "\n"
 *   insn=0x00000000003C6514 string=0x00000000003C6544 "?"
 *   insn=0x00000000003C6518 string=0x00000000003C651C "*"
 *   insn=0x00000000003C651C string=0x00000000003C6520 "\n"
 *   insn=0x00000000003C6524 string=0x00000000003C6528 ","
 *   insn=0x00000000003C6538 string=0x00000000003C653C "*"
 *   insn=0x00000000003C653C string=0x00000000003C6540 "\n"
 *   insn=0x00000000003C6544 string=0x00000000003C6548 "l"
 *   insn=0x00000000003C6558 string=0x00000000003C655C "*"
 *   insn=0x00000000003C655C string=0x00000000003C6560 "\n"
 *   insn=0x00000000003C6560 string=0x00000000003C6564 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ConfigureOverlayView::ButtonPressed(Caver::GUIView *a1, __int64 a2)
{
  _QWORD *v3; // x8
  __int64 v4; // x9
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  void *v11; // x0
  void *v12; // x0
  Caver::GUIAlertView *v13; // x0
  void *v14; // x0
  void *v15; // x0
  unsigned int *v16; // x8
  int v17; // w9
  __int64 v18; // x0
  unsigned int *v19; // x8
  int v20; // w9
  unsigned int *v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  int v24; // w9
  __int64 v25; // [xsp+8h] [xbp-68h] BYREF
  _QWORD v26[2]; // [xsp+18h] [xbp-58h] BYREF
  _QWORD *v27; // [xsp+28h] [xbp-48h]
  __int64 v28; // [xsp+38h] [xbp-38h] BYREF
  _QWORD v29[2]; // [xsp+40h] [xbp-30h] BYREF

  v29[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_QWORD *)a1 + 33) == a2 )
  {
    v18 = *((_QWORD *)a1 + 32);
    if ( v18 )
      (*(void (__fastcall **)(__int64, Caver::GUIView *))(*(_QWORD *)v18 + 8LL))(v18, a1);
  }
  else if ( *((_QWORD *)a1 + 35) == a2 )
  {
    sub_566BB8((int)&v28, "Reset");
    sub_566BB8((int)v29, "Cancel");
    sub_566BB8((int)v26, "RESET CONTROLS?");
    sub_566BB8((int)&v25, "Are you sure you want to reset controls to default positions?");
    Caver::GameInterfaceBuilder::AlertView();
    v4 = v26[1];
    v3 = v27;
    if ( v27 )
      ++v27[1];
    v5 = (_QWORD *)*((_QWORD *)a1 + 45);
    *((_QWORD *)a1 + 44) = v4;
    *((_QWORD *)a1 + 45) = v3;
    if ( v5 )
    {
      v6 = v5[1] - 1LL;
      v5[1] = v6;
      if ( !v6 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v7 = v5[2] - 1LL;
        v5[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
    v8 = v27;
    if ( v27 )
    {
      v9 = v27[1] - 1LL;
      v27[1] = v9;
      if ( !v9 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        v10 = v8[2] - 1LL;
        v8[2] = v10;
        if ( !v10 )
          (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
      }
    }
    v11 = (void *)(v25 - 24);
    if ( (__int64 *)(v25 - 24) != &qword_6FD2E0 )
    {
      v19 = (unsigned int *)(v25 - 8);
      if ( &pthread_create )
      {
        do
          v20 = __ldaxr(v19);
        while ( __stlxr(v20 - 1, v19) );
      }
      else
      {
        v20 = (*v19)--;
      }
      if ( v20 <= 0 )
        operator delete(v11);
    }
    v12 = (void *)(v26[0] - 24LL);
    if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
    {
      v21 = (unsigned int *)(v26[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v22 = __ldaxr(v21);
        while ( __stlxr(v22 - 1, v21) );
      }
      else
      {
        v22 = (*v21)--;
      }
      if ( v22 <= 0 )
        operator delete(v12);
    }
    v13 = (Caver::GUIAlertView *)*((_QWORD *)a1 + 44);
    *((_QWORD *)v13 + 35) = (char *)a1 + 248;
    Caver::GUIAlertView::PresentFromView(v13, a1);
    v14 = (void *)(v29[0] - 24LL);
    if ( (__int64 *)(v29[0] - 24LL) != &qword_6FD2E0 )
    {
      v23 = (unsigned int *)(v29[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v24 = __ldaxr(v23);
        while ( __stlxr(v24 - 1, v23) );
      }
      else
      {
        v24 = (*v23)--;
      }
      if ( v24 <= 0 )
        operator delete(v14);
    }
    v15 = (void *)(v28 - 24);
    if ( (__int64 *)(v28 - 24) != &qword_6FD2E0 )
    {
      v16 = (unsigned int *)(v28 - 8);
      if ( &pthread_create )
      {
        do
          v17 = __ldaxr(v16);
        while ( __stlxr(v17 - 1, v16) );
      }
      else
      {
        v17 = (*v16)--;
      }
      if ( v17 <= 0 )
        operator delete(v15);
    }
  }
}

