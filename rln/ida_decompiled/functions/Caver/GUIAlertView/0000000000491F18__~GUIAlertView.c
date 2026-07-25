/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000491F18
 * Mangled: _ZN5Caver12GUIAlertViewD2Ev
 * Demangled: Caver::GUIAlertView::~GUIAlertView()
 *
 * Callers: 1
 *   0x00000000001F6760  Caver::GUIAlertView::~GUIAlertView()
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC000  Caver::GUIFrameView::~GUIFrameView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000492454  Caver::GUIAlertView::~GUIAlertView()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 104
 *   insn=0x0000000000491F30 string=0x0000000000491F34 ""
 *   insn=0x0000000000491F34 string=0x0000000000491F38 "t"
 *   insn=0x0000000000491F38 string=0x0000000000491F3C "\tA"
 *   insn=0x0000000000491F3C string=0x0000000000491F40 ""
 *   insn=0x0000000000491F44 string=0x0000000000491F48 "i"
 *   insn=0x0000000000491F48 string=0x0000000000491F4C "h"
 *   insn=0x0000000000491F50 string=0x0000000000491FAC "t"
 *   insn=0x0000000000491F54 string=0x0000000000491F58 "5"
 *   insn=0x0000000000491F5C string=0x0000000000491F60 ""
 *   insn=0x0000000000491F6C string=0x0000000000491F70 "\t@"
 *   insn=0x0000000000491F7C string=0x0000000000491F80 ""
 *   insn=0x0000000000491F8C string=0x0000000000491F90 "@"
 *   insn=0x0000000000491FA4 string=0x0000000000491FA8 "t"
 *   insn=0x0000000000491FAC string=0x0000000000491FB8 "tZW"
 *   insn=0x0000000000491FB4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000491FC0 string=0x000000000049201C "t"
 *   insn=0x0000000000491FC4 string=0x0000000000491FC8 "5"
 *   insn=0x0000000000491FCC string=0x0000000000491FD0 ""
 *   insn=0x0000000000491FDC string=0x0000000000491FE0 "\t@"
 *   insn=0x0000000000491FEC string=0x0000000000491FF0 ""
 *   insn=0x0000000000491FFC string=0x0000000000492000 "@"
 *   insn=0x0000000000492014 string=0x0000000000492018 "t"
 *   insn=0x000000000049201C string=0x0000000000492028 "t"
 *   insn=0x0000000000492030 string=0x000000000049208C "t"
 *   insn=0x0000000000492034 string=0x0000000000492038 "5"
 *   insn=0x000000000049203C string=0x0000000000492040 ""
 *   insn=0x000000000049204C string=0x0000000000492050 "\t@"
 *   insn=0x000000000049205C string=0x0000000000492060 ""
 *   insn=0x000000000049206C string=0x0000000000492070 "@"
 *   insn=0x0000000000492084 string=0x0000000000492088 "t"
 *   insn=0x000000000049208C string=0x0000000000492098 "tZT"
 *   insn=0x00000000004920A0 string=0x00000000004920FC "t"
 *   insn=0x00000000004920A4 string=0x00000000004920A8 "5"
 *   insn=0x00000000004920AC string=0x00000000004920B0 ""
 *   insn=0x00000000004920BC string=0x00000000004920C0 "\t@"
 *   insn=0x00000000004920CC string=0x00000000004920D0 ""
 *   insn=0x00000000004920DC string=0x00000000004920E0 "@"
 *   insn=0x00000000004920F4 string=0x00000000004920F8 "t"
 *   insn=0x00000000004920FC string=0x0000000000492108 "t"
 *   insn=0x0000000000492100 string=0x0000000000492104 "k"
 *   insn=0x0000000000492108 string=0x000000000049210C "4"
 *   insn=0x000000000049210C string=0x0000000000492150 "t"
 *   insn=0x0000000000492110 string=0x0000000000492114 ""
 *   insn=0x0000000000492120 string=0x0000000000492124 "\t@"
 *   insn=0x0000000000492130 string=0x0000000000492134 ""
 *   insn=0x0000000000492140 string=0x0000000000492144 "@"
 *   insn=0x0000000000492150 string=0x0000000000492154 "4"
 *   insn=0x0000000000492158 string=0x000000000049215C ""
 *   insn=0x0000000000492168 string=0x000000000049216C "\t@"
 *   insn=0x0000000000492178 string=0x000000000049217C ""
 *   insn=0x0000000000492188 string=0x000000000049218C "@"
 *   insn=0x00000000004921AC string=0x00000000001FC000 "0'"
 *   insn=0x00000000004921B0 string=0x00000000004921B4 "."
 *   insn=0x00000000004921B8 string=0x00000000004921BC "u"
 *   insn=0x00000000004921BC string=0x00000000004921C0 "u"
 *   insn=0x00000000004921C0 string=0x00000000004921C4 "*"
 *   insn=0x00000000004921CC string=0x00000000004921D0 "h"
 *   insn=0x00000000004921D0 string=0x00000000004921DC "u"
 *   insn=0x00000000004921D4 string=0x00000000004921D8 "6"
 *   insn=0x00000000004921DC string=0x00000000004921E0 "5"
 *   insn=0x00000000004921E0 string=0x0000000000492224 "u"
 *   insn=0x00000000004921E4 string=0x00000000004921E8 ""
 *   insn=0x00000000004921F4 string=0x00000000004921F8 "\t@"
 *   insn=0x0000000000492204 string=0x0000000000492208 ""
 *   insn=0x0000000000492214 string=0x0000000000492218 "@"
 *   insn=0x0000000000492224 string=0x0000000000492228 "5"
 *   insn=0x000000000049222C string=0x0000000000492230 ""
 *   insn=0x000000000049223C string=0x0000000000492240 "\t@"
 *   insn=0x000000000049224C string=0x0000000000492250 ""
 *   insn=0x000000000049225C string=0x0000000000492260 "@"
 *   insn=0x000000000049226C string=0x0000000000492270 "d"
 *   insn=0x0000000000492280 string=0x0000000000492284 "2"
 *   insn=0x0000000000492284 string=0x0000000000492288 "h"
 *   insn=0x0000000000492290 string=0x00000000004923A4 "u^T"
 *   insn=0x0000000000492294 string=0x0000000000492298 "B"
 *   insn=0x00000000004922A4 string=0x0000000000492334 "u"
 *   insn=0x00000000004922A8 string=0x00000000004922AC "!"
 *   insn=0x00000000004922B4 string=0x00000000004922B8 "h"
 *   insn=0x00000000004922B8 string=0x00000000004922C4 "u^W"
 *   insn=0x00000000004922CC string=0x0000000000492328 "u"
 *   insn=0x00000000004922D0 string=0x00000000004922D4 "6"
 *   insn=0x00000000004922D8 string=0x00000000004922DC ""
 *   insn=0x00000000004922E8 string=0x00000000004922EC "\t@"
 *   insn=0x00000000004922F8 string=0x00000000004922FC ""
 *   insn=0x0000000000492308 string=0x000000000049230C "@"
 *   insn=0x0000000000492320 string=0x0000000000492324 "u"
 *   insn=0x000000000049233C string=0x0000000000492398 "u"
 *   insn=0x0000000000492340 string=0x0000000000492344 "6"
 *   insn=0x0000000000492348 string=0x000000000049234C ""
 *   insn=0x0000000000492358 string=0x000000000049235C "\t@"
 *   insn=0x0000000000492368 string=0x000000000049236C ""
 *   insn=0x0000000000492378 string=0x000000000049237C "@"
 *   insn=0x0000000000492390 string=0x0000000000492394 "u"
 *   insn=0x00000000004923B0 string=0x00000000004923B4 "6"
 *   insn=0x00000000004923B8 string=0x00000000004923BC ""
 *   insn=0x00000000004923C8 string=0x00000000004923CC "\t@"
 *   insn=0x00000000004923D8 string=0x00000000004923DC ""
 *   insn=0x00000000004923E8 string=0x00000000004923EC "@"
 *   insn=0x0000000000492400 string=0x0000000000492404 "u"
 *   insn=0x000000000049240C string=0x0000000000492410 "r"
 *   insn=0x000000000049241C string=0x0000000000492420 ""
 *   insn=0x0000000000492428 string=0x000000000049242C ""
 *   insn=0x000000000049243C string=0x0000000000492440 "h"
 *   insn=0x0000000000492444 string=0x0000000000492448 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIAlertView::~GUIAlertView(Caver::GUIAlertView *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  _QWORD *v8; // x22
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x20
  _QWORD *v13; // x22
  _QWORD *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // x20
  _QWORD *v18; // x22
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 49);
  v3 = (_QWORD *)*((_QWORD *)this + 50);
  *(_QWORD *)this = off_6D5610;
  *((_QWORD *)this + 34) = off_6D5760;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[1];
      if ( v4 )
      {
        v5 = v4[1] - 1LL;
        v4[1] = v5;
        if ( !v5 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v6 = v4[2] - 1LL;
          v4[2] = v6;
          if ( !v6 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      v2 += 2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)*((_QWORD *)this + 49);
  }
  if ( v2 )
    operator delete(v2);
  v7 = (_QWORD *)*((_QWORD *)this + 46);
  v8 = (_QWORD *)*((_QWORD *)this + 47);
  if ( v7 != v8 )
  {
    do
    {
      v9 = (_QWORD *)v7[1];
      if ( v9 )
      {
        v10 = v9[1] - 1LL;
        v9[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v11 = v9[2] - 1LL;
          v9[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
      v7 += 2;
    }
    while ( v8 != v7 );
    v7 = (_QWORD *)*((_QWORD *)this + 46);
  }
  if ( v7 )
    operator delete(v7);
  v12 = (_QWORD *)*((_QWORD *)this + 43);
  v13 = (_QWORD *)*((_QWORD *)this + 44);
  if ( v12 != v13 )
  {
    do
    {
      v14 = (_QWORD *)v12[1];
      if ( v14 )
      {
        v15 = v14[1] - 1LL;
        v14[1] = v15;
        if ( !v15 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
          v16 = v14[2] - 1LL;
          v14[2] = v16;
          if ( !v16 )
            (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
        }
      }
      v12 += 2;
    }
    while ( v13 != v12 );
    v12 = (_QWORD *)*((_QWORD *)this + 43);
  }
  if ( v12 )
    operator delete(v12);
  v17 = (_QWORD *)*((_QWORD *)this + 40);
  v18 = (_QWORD *)*((_QWORD *)this + 41);
  if ( v17 != v18 )
  {
    do
    {
      v19 = (_QWORD *)v17[1];
      if ( v19 )
      {
        v20 = v19[1] - 1LL;
        v19[1] = v20;
        if ( !v20 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
          v21 = v19[2] - 1LL;
          v19[2] = v21;
          if ( !v21 )
            (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
        }
      }
      v17 += 2;
    }
    while ( v18 != v17 );
    v17 = (_QWORD *)*((_QWORD *)this + 40);
  }
  if ( v17 )
    operator delete(v17);
  v22 = (_QWORD *)*((_QWORD *)this + 39);
  if ( v22 )
  {
    v23 = v22[1] - 1LL;
    v22[1] = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
  v25 = (_QWORD *)*((_QWORD *)this + 37);
  if ( v25 )
  {
    v26 = v25[1] - 1LL;
    v25[1] = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
  }
  Caver::GUIFrameView::~GUIFrameView(this);
}

