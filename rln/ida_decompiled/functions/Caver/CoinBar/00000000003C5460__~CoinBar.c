/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C5460
 * Mangled: _ZN5Caver7CoinBarD2Ev
 * Demangled: Caver::CoinBar::~CoinBar()
 *
 * Callers: 1
 *   0x00000000001FD510  Caver::CoinBar::~CoinBar()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD510  Caver::CoinBar::~CoinBar()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003C5664  Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 52
 *   insn=0x00000000003C5470 string=0x00000000003C5474 ""
 *   insn=0x00000000003C5474 string=0x00000000003C5478 "t"
 *   insn=0x00000000003C5478 string=0x00000000003C547C ""
 *   insn=0x00000000003C547C string=0x00000000003C5480 "A"
 *   insn=0x00000000003C5480 string=0x00000000003C5484 "h"
 *   insn=0x00000000003C5484 string=0x00000000003C5488 "4"
 *   insn=0x00000000003C5488 string=0x00000000003C54CC "t"
 *   insn=0x00000000003C548C string=0x00000000003C5490 ""
 *   insn=0x00000000003C549C string=0x00000000003C54A0 "\t@"
 *   insn=0x00000000003C54AC string=0x00000000003C54B0 ""
 *   insn=0x00000000003C54BC string=0x00000000003C54C0 "@"
 *   insn=0x00000000003C54CC string=0x00000000003C54D0 "4"
 *   insn=0x00000000003C54D0 string=0x00000000003C5514 "`"
 *   insn=0x00000000003C54D4 string=0x00000000003C54D8 ""
 *   insn=0x00000000003C54E4 string=0x00000000003C54E8 "\t@"
 *   insn=0x00000000003C54F4 string=0x00000000003C54F8 ""
 *   insn=0x00000000003C5504 string=0x00000000003C5508 "@"
 *   insn=0x00000000003C5514 string=0x00000000003C5518 "@"
 *   insn=0x00000000003C5518 string=0x00000000003C5520 "`"
 *   insn=0x00000000003C551C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003C5520 string=0x00000000003C5524 "@"
 *   insn=0x00000000003C5524 string=0x00000000003C552C "`~@"
 *   insn=0x00000000003C5530 string=0x00000000003C5534 "@"
 *   insn=0x00000000003C5534 string=0x00000000003C5538 ""
 *   insn=0x00000000003C5538 string=0x00000000003C553C ""
 *   insn=0x00000000003C5540 string=0x00000000003C5544 ""
 *   insn=0x00000000003C5544 string=0x00000000003C5548 ""
 *   insn=0x00000000003C555C string=0x00000000003C5560 "4"
 *   insn=0x00000000003C5564 string=0x00000000003C5568 ","
 *   insn=0x00000000003C556C string=0x00000000003C5570 "`"
 *   insn=0x00000000003C5574 string=0x00000000003C5578 ""
 *   insn=0x00000000003C5574 string=0x00000000003C55D0 "`"
 *   insn=0x00000000003C5578 string=0x00000000003C55E4 "_"
 *   insn=0x00000000003C5580 string=0x00000000003C5584 "5"
 *   insn=0x00000000003C5584 string=0x00000000003C55C8 "`"
 *   insn=0x00000000003C5588 string=0x00000000003C558C ""
 *   insn=0x00000000003C5598 string=0x00000000003C559C "\t@"
 *   insn=0x00000000003C55A8 string=0x00000000003C55AC ""
 *   insn=0x00000000003C55B8 string=0x00000000003C55BC "@"
 *   insn=0x00000000003C55D4 string=0x00000000003C55D8 "`~@"
 *   insn=0x00000000003C55D4 string=0x00000000003C55F0 "\"
 *   insn=0x00000000003C55DC string=0x00000000003C55FC "@"
 *   insn=0x00000000003C55E4 string=0x00000000003C55E8 "`"
 *   insn=0x00000000003C55E8 string=0x00000000003C55EC "`"
 *   insn=0x00000000003C55F0 string=0x00000000003C55F4 "`~@"
 *   insn=0x00000000003C55FC string=0x00000000003C5600 ""
 *   insn=0x00000000003C5600 string=0x00000000003C5604 ""
 *   insn=0x00000000003C5608 string=0x00000000003C560C ""
 *   insn=0x00000000003C560C string=0x00000000003C5610 ""
 *   insn=0x00000000003C5624 string=0x00000000003C5628 "I#"
 *   insn=0x00000000003C563C string=0x00000000001FD510 "0'"
 *   insn=0x00000000003C564C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CoinBar::~CoinBar(Caver::CoinBar *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  void *v8; // x0
  void *v9; // x0
  _DWORD *v10; // x0
  int v11; // w8

  v2 = (_QWORD *)*((_QWORD *)this + 46);
  *(_QWORD *)this = off_6CF220;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 43);
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
  v8 = (void *)*((_QWORD *)this + 38);
  if ( v8 )
    operator delete[](v8);
  v9 = (void *)*((_QWORD *)this + 35);
  if ( v9 )
    operator delete[](v9);
  v10 = (_DWORD *)*((_QWORD *)this + 31);
  if ( v10 )
  {
    v11 = v10[2] - 1;
    v10[2] = v11;
    if ( !v11 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  Caver::GUIView::~GUIView(this);
}

