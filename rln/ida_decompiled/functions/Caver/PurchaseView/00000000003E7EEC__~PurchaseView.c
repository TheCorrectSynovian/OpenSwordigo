/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E7EEC
 * Mangled: _ZN5Caver12PurchaseViewD2Ev
 * Demangled: Caver::PurchaseView::~PurchaseView()
 *
 * Callers: 1
 *   0x00000000001F81C0  Caver::PurchaseView::~PurchaseView()
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E8284  Caver::PurchaseView::~PurchaseView()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 77
 *   insn=0x00000000003E7F00 string=0x00000000003E7F04 ""
 *   insn=0x00000000003E7F04 string=0x00000000003E7F08 "t"
 *   insn=0x00000000003E7F08 string=0x00000000003E7F0C ""
 *   insn=0x00000000003E7F0C string=0x00000000003E7F10 "A"
 *   insn=0x00000000003E7F10 string=0x00000000003E7F14 "h"
 *   insn=0x00000000003E7F14 string=0x00000000003E7F18 "4"
 *   insn=0x00000000003E7F18 string=0x00000000003E7F5C "t"
 *   insn=0x00000000003E7F1C string=0x00000000003E7F20 ""
 *   insn=0x00000000003E7F2C string=0x00000000003E7F30 "\t@"
 *   insn=0x00000000003E7F3C string=0x00000000003E7F40 ""
 *   insn=0x00000000003E7F4C string=0x00000000003E7F50 "@"
 *   insn=0x00000000003E7F5C string=0x00000000003E7F60 "4"
 *   insn=0x00000000003E7F60 string=0x00000000003E7FA4 "t"
 *   insn=0x00000000003E7F64 string=0x00000000003E7F68 ""
 *   insn=0x00000000003E7F74 string=0x00000000003E7F78 "\t@"
 *   insn=0x00000000003E7F84 string=0x00000000003E7F88 ""
 *   insn=0x00000000003E7F94 string=0x00000000003E7F98 "@"
 *   insn=0x00000000003E7FA4 string=0x00000000003E7FA8 "4"
 *   insn=0x00000000003E7FA8 string=0x00000000003E7FEC "tZP"
 *   insn=0x00000000003E7FAC string=0x00000000003E7FB0 ""
 *   insn=0x00000000003E7FBC string=0x00000000003E7FC0 "\t@"
 *   insn=0x00000000003E7FCC string=0x00000000003E7FD0 ""
 *   insn=0x00000000003E7FDC string=0x00000000003E7FE0 "@"
 *   insn=0x00000000003E7FF4 string=0x00000000003E8050 "t"
 *   insn=0x00000000003E7FF8 string=0x00000000003E7FFC "5"
 *   insn=0x00000000003E8000 string=0x00000000003E8004 ""
 *   insn=0x00000000003E8010 string=0x00000000003E8014 "\t@"
 *   insn=0x00000000003E8020 string=0x00000000003E8024 ""
 *   insn=0x00000000003E8030 string=0x00000000003E8034 "@"
 *   insn=0x00000000003E8048 string=0x00000000003E804C "t"
 *   insn=0x00000000003E8050 string=0x00000000003E805C "t~@"
 *   insn=0x00000000003E8058 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E805C string=0x00000000003E8060 "4"
 *   insn=0x00000000003E8064 string=0x00000000003E8068 ""
 *   insn=0x00000000003E8074 string=0x00000000003E8078 "\t@"
 *   insn=0x00000000003E8084 string=0x00000000003E8088 ""
 *   insn=0x00000000003E8094 string=0x00000000003E8098 "@"
 *   insn=0x00000000003E80B4 string=0x00000000003E80B8 "^["
 *   insn=0x00000000003E80BC string=0x00000000003E80C0 "j"
 *   insn=0x00000000003E80C4 string=0x00000000003E80C8 "*"
 *   insn=0x00000000003E80C8 string=0x00000000003E8170 "h^P"
 *   insn=0x00000000003E80CC string=0x00000000003E80D0 "u"
 *   insn=0x00000000003E80D4 string=0x00000000003E80D8 "&"
 *   insn=0x00000000003E80E0 string=0x00000000003E80E4 "5"
 *   insn=0x00000000003E80E4 string=0x00000000003E8128 "u"
 *   insn=0x00000000003E80E8 string=0x00000000003E80EC ""
 *   insn=0x00000000003E80F8 string=0x00000000003E80FC "\t@"
 *   insn=0x00000000003E8108 string=0x00000000003E810C ""
 *   insn=0x00000000003E8118 string=0x00000000003E811C "@"
 *   insn=0x00000000003E8128 string=0x00000000003E812C "5"
 *   insn=0x00000000003E8130 string=0x00000000003E8134 ""
 *   insn=0x00000000003E8140 string=0x00000000003E8144 "\t@"
 *   insn=0x00000000003E8150 string=0x00000000003E8154 ""
 *   insn=0x00000000003E8160 string=0x00000000003E8164 "@"
 *   insn=0x00000000003E8178 string=0x00000000003E817C "`"
 *   insn=0x00000000003E8188 string=0x00000000003E81D8 "A"
 *   insn=0x00000000003E818C string=0x00000000003E8190 ")"
 *   insn=0x00000000003E819C string=0x00000000003E81A0 ")\t@"
 *   insn=0x00000000003E81A8 string=0x00000000003E81AC " "
 *   insn=0x00000000003E81B4 string=0x00000000003E81B8 ")"
 *   insn=0x00000000003E81C4 string=0x00000000003E81C8 "@"
 *   insn=0x00000000003E81DC string=0x00000000003E81E0 "!"
 *   insn=0x00000000003E81E0 string=0x00000000003E81E4 "`"
 *   insn=0x00000000003E81E8 string=0x00000000003E81EC ""
 *   insn=0x00000000003E81E8 string=0x00000000003E821C "%<"
 *   insn=0x00000000003E81EC string=0x00000000003E8220 "u~@"
 *   insn=0x00000000003E81F4 string=0x00000000003E81F8 "("
 *   insn=0x00000000003E81FC string=0x00000000003E8200 ",<"
 *   insn=0x00000000003E8204 string=0x00000000003E8208 "Q"
 *   insn=0x00000000003E8208 string=0x00000000003E820C "h"
 *   insn=0x00000000003E8210 string=0x00000000003E8214 "h"
 *   insn=0x00000000003E8220 string=0x00000000003E8224 "5"
 *   insn=0x00000000003E8228 string=0x00000000003E822C ""
 *   insn=0x00000000003E8238 string=0x00000000003E823C "\t@"
 *   insn=0x00000000003E8248 string=0x00000000003E824C ""
 *   insn=0x00000000003E8258 string=0x00000000003E825C "@"
 *   insn=0x00000000003E827C string=0x00000000003E8280 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PurchaseView::~PurchaseView(Caver::PurchaseView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  _QWORD *v12; // x22
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 40);
  *(_QWORD *)this = off_6D0900;
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
  v5 = (_QWORD *)*((_QWORD *)this + 38);
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
  v8 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)*((_QWORD *)this + 32);
  v12 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v11 != v12 )
  {
    do
    {
      v13 = (_QWORD *)v11[1];
      if ( v13 )
      {
        v14 = v13[1] - 1LL;
        v13[1] = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v15 = v13[2] - 1LL;
          v13[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
      }
      v11 += 2;
    }
    while ( v12 != v11 );
    v11 = (_QWORD *)*((_QWORD *)this + 32);
  }
  if ( v11 )
    operator delete(v11);
  v16 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v16 )
  {
    v17 = v16[1] - 1LL;
    v16[1] = v17;
    if ( !v17 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
      v18 = v16[2] - 1LL;
      v16[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
    }
  }
  Caver::GUIView::~GUIView(this);
}

