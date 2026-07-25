/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049E304
 * Mangled: _ZN5Caver7GUIViewD2Ev
 * Demangled: Caver::GUIView::~GUIView()
 *
 * Callers: 1
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000049E55C  Caver::GUIView::Update(float)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x000000000049E314 string=0x000000000049E318 "("
 *   insn=0x000000000049E318 string=0x000000000049E31C ""
 *   insn=0x000000000049E324 string=0x000000000049E328 "A"
 *   insn=0x000000000049E328 string=0x000000000049E32C "h"
 *   insn=0x000000000049E33C string=0x000000000049E340 "\t\t@"
 *   insn=0x000000000049E340 string=0x000000000049E344 "?-"
 *   insn=0x000000000049E344 string=0x000000000049E348 ""
 *   insn=0x000000000049E35C string=0x000000000049E360 "@"
 *   insn=0x000000000049E368 string=0x000000000049E36C "4"
 *   insn=0x000000000049E370 string=0x000000000049E374 ""
 *   insn=0x000000000049E380 string=0x000000000049E384 "\t@"
 *   insn=0x000000000049E390 string=0x000000000049E394 ""
 *   insn=0x000000000049E3A0 string=0x000000000049E3A4 "@"
 *   insn=0x000000000049E3B4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049E3BC string=0x000000000049E3C0 "!"
 *   insn=0x000000000049E3C8 string=0x000000000049E3CC " "
 *   insn=0x000000000049E3CC string=0x000000000049E430 "`\n@"
 *   insn=0x000000000049E3D4 string=0x000000000049E3D8 "5"
 *   insn=0x000000000049E3DC string=0x000000000049E3E0 ""
 *   insn=0x000000000049E3EC string=0x000000000049E3F0 "\t@"
 *   insn=0x000000000049E3FC string=0x000000000049E400 ""
 *   insn=0x000000000049E40C string=0x000000000049E410 "@"
 *   insn=0x000000000049E428 string=0x000000000049E42C "!"
 *   insn=0x000000000049E434 string=0x000000000049E438 "@"
 *   insn=0x000000000049E438 string=0x000000000049E43C ""
 *   insn=0x000000000049E43C string=0x000000000049E440 ""
 *   insn=0x000000000049E444 string=0x000000000049E45C ""
 *   insn=0x000000000049E470 string=0x000000000049E474 " "
 *   insn=0x000000000049E478 string=0x000000000049E47C "`\n@"
 *   insn=0x000000000049E480 string=0x000000000049E484 "@"
 *   insn=0x000000000049E484 string=0x000000000049E488 ""
 *   insn=0x000000000049E488 string=0x000000000049E48C ""
 *   insn=0x000000000049E490 string=0x000000000049E494 ""
 *   insn=0x000000000049E494 string=0x000000000049E498 "@"
 *   insn=0x000000000049E4A0 string=0x000000000049E4A4 ""
 *   insn=0x000000000049E4B4 string=0x000000000049E4B8 " "
 *   insn=0x000000000049E4C0 string=0x000000000049E4C4 "6"
 *   insn=0x000000000049E4C8 string=0x000000000049E4CC ""
 *   insn=0x000000000049E4D8 string=0x000000000049E4DC "\t@"
 *   insn=0x000000000049E4E8 string=0x000000000049E4EC ""
 *   insn=0x000000000049E4F8 string=0x000000000049E4FC "@"
 *   insn=0x000000000049E508 string=0x000000000049E50C "ic"
 *   insn=0x000000000049E514 string=0x000000000049E518 "!"
 *   insn=0x000000000049E530 string=0x000000000049E534 "?"
 *   insn=0x000000000049E540 string=0x000000000049E544 "[c"
 *   insn=0x000000000049E54C string=0x000000000049E550 "Xc"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIView::~GUIView(Caver::GUIView *this)
{
  _QWORD *v2; // x20
  _QWORD **v3; // x23
  _QWORD *v4; // x8
  char *v5; // x21
  char *v6; // x22
  _QWORD *v7; // x20
  char *v8; // x24
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x21
  _QWORD *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x0
  __int64 v16; // x8

  *(_QWORD *)this = off_6D67D0;
  v3 = (_QWORD **)((char *)this + 32);
  v2 = (_QWORD *)*((_QWORD *)this + 4);
  if ( (_QWORD *)((char *)this + 32) != v2 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 4);
    do
    {
      *(_QWORD *)(v4[2] + 88LL) = 0;
      v4 = (_QWORD *)*v4;
    }
    while ( v3 != v4 );
  }
  v6 = (char *)this + 96;
  v5 = (char *)*((_QWORD *)this + 12);
  if ( v5 != (char *)this + 96 )
  {
    do
    {
      v7 = (_QWORD *)*((_QWORD *)v5 + 3);
      v8 = *(char **)v5;
      if ( v7 )
      {
        v9 = v7[1] - 1LL;
        v7[1] = v9;
        if ( !v9 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
          v10 = v7[2] - 1LL;
          v7[2] = v10;
          if ( !v10 )
            (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        }
      }
      operator delete(v5);
      v5 = v8;
    }
    while ( v8 != v6 );
    v2 = *v3;
  }
  if ( v2 != v3 )
  {
    do
    {
      v11 = (_QWORD *)v2[3];
      v12 = (_QWORD *)*v2;
      if ( v11 )
      {
        v13 = v11[1] - 1LL;
        v11[1] = v13;
        if ( !v13 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v14 = v11[2] - 1LL;
          v11[2] = v14;
          if ( !v14 )
            (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      operator delete(v2);
      v2 = v12;
    }
    while ( v12 != v3 );
  }
  v15 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v15 )
  {
    v16 = v15[2] - 1LL;
    v15[2] = v16;
    if ( !v16 )
      (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
  }
}

