/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048EFC8
 * Mangled: _ZN5Caver12GUIAlertViewC2Ev
 * Demangled: Caver::GUIAlertView::GUIAlertView(void)
 *
 * Callers: 1
 *   0x00000000001F8970  Caver::GUIAlertView::GUIAlertView(void)
 *
 * Callees: 13
 *   0x00000000001F53C0  Caver::GUILabel::GUILabel(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC000  Caver::GUIFrameView::~GUIFrameView()
 *   0x00000000001FCEA0  Caver::GUIFrameView::GUIFrameView(void)
 *   0x0000000000200250  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(Caver::GUILabel *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000048F638  Caver::GUIAlertView::AddAnimations(bool)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 145
 *   insn=0x000000000048EFDC string=0x000000000048EFE0 "V"
 *   insn=0x000000000048EFF0 string=0x00000000001FCEA0 "0'"
 *   insn=0x000000000048EFF4 string=0x000000000048EFF8 ""
 *   insn=0x000000000048EFF8 string=0x000000000048EFFC "`b"
 *   insn=0x000000000048F004 string=0x000000000048F008 "\tA"
 *   insn=0x000000000048F008 string=0x000000000048F00C ""
 *   insn=0x000000000048F00C string=0x000000000048F010 "i"
 *   insn=0x000000000048F010 string=0x000000000048F014 "h"
 *   insn=0x000000000048F014 string=0x000000000048F018 "\n"
 *   insn=0x000000000048F018 string=0x000000000048F01C ""
 *   insn=0x000000000048F018 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000048F020 string=0x000000000048F024 "h"
 *   insn=0x000000000048F024 string=0x000000000048F028 "h"
 *   insn=0x000000000048F030 string=0x000000000048F034 "k"
 *   insn=0x000000000048F034 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000048F040 string=0x00000000001F53C0 "P'"
 *   insn=0x000000000048F04C string=0x000000000048F050 "hRR"
 *   insn=0x000000000048F05C string=0x000000000048F060 "i""
 *   insn=0x000000000048F064 string=0x000000000048F068 "4"
 *   insn=0x000000000048F068 string=0x000000000048F0AC "`"
 *   insn=0x000000000048F06C string=0x000000000048F070 ""
 *   insn=0x000000000048F07C string=0x000000000048F080 "\t@"
 *   insn=0x000000000048F08C string=0x000000000048F090 ""
 *   insn=0x000000000048F09C string=0x000000000048F0A0 "@"
 *   insn=0x000000000048F0B0 string=0x000000000048F0B4 ""
 *   insn=0x000000000048F0B8 string=0x000000000048F0BC "`"
 *   insn=0x000000000048F0B8 string=0x00000000001F8510 "0'"
 *   insn=0x000000000048F0C0 string=0x000000000048F0C4 "0"
 *   insn=0x000000000048F0C8 string=0x000000000048F0CC "h"
 *   insn=0x000000000048F0C8 string=0x00000000001F5840 "P'"
 *   insn=0x000000000048F0CC string=0x000000000048F0D0 "i"
 *   insn=0x000000000048F0D0 string=0x000000000048F0D4 "1@"
 *   insn=0x000000000048F0D8 string=0x000000000048F0DC "i"
 *   insn=0x000000000048F0E4 string=0x000000000048F0E8 "*"
 *   insn=0x000000000048F0E8 string=0x000000000048F0EC "J"
 *   insn=0x000000000048F0EC string=0x000000000048F0F0 "*"
 *   insn=0x000000000048F100 string=0x000000000048F104 "4"
 *   insn=0x000000000048F108 string=0x000000000048F10C ""
 *   insn=0x000000000048F118 string=0x000000000048F11C "\t@"
 *   insn=0x000000000048F128 string=0x000000000048F12C ""
 *   insn=0x000000000048F138 string=0x000000000048F13C "@"
 *   insn=0x000000000048F148 string=0x000000000048F14C "%"
 *   insn=0x000000000048F160 string=0x000000000048F164 ";"
 *   insn=0x000000000048F164 string=0x000000000048F168 "hRS"
 *   insn=0x000000000048F174 string=0x000000000048F178 "i""
 *   insn=0x000000000048F17C string=0x000000000048F180 "4"
 *   insn=0x000000000048F180 string=0x000000000048F1C4 "`"
 *   insn=0x000000000048F184 string=0x000000000048F188 ""
 *   insn=0x000000000048F194 string=0x000000000048F198 "\t@"
 *   insn=0x000000000048F1A4 string=0x000000000048F1A8 ""
 *   insn=0x000000000048F1B4 string=0x000000000048F1B8 "@"
 *   insn=0x000000000048F1C8 string=0x000000000048F1CC ""
 *   insn=0x000000000048F1D0 string=0x000000000048F1D4 "`"
 *   insn=0x000000000048F1D8 string=0x000000000048F1DC "0"
 *   insn=0x000000000048F1E0 string=0x000000000048F1E4 "h"
 *   insn=0x000000000048F1E4 string=0x000000000048F1E8 "i"
 *   insn=0x000000000048F1E8 string=0x000000000048F1EC "1@"
 *   insn=0x000000000048F1F0 string=0x000000000048F1F4 "i"
 *   insn=0x000000000048F1FC string=0x000000000048F200 "*"
 *   insn=0x000000000048F200 string=0x000000000048F204 "J"
 *   insn=0x000000000048F204 string=0x000000000048F208 "*"
 *   insn=0x000000000048F218 string=0x000000000048F21C "4"
 *   insn=0x000000000048F220 string=0x000000000048F224 ""
 *   insn=0x000000000048F230 string=0x000000000048F234 "\t@"
 *   insn=0x000000000048F240 string=0x000000000048F244 ""
 *   insn=0x000000000048F250 string=0x000000000048F254 "@"
 *   insn=0x000000000048F288 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000048F29C string=0x000000000048F34C "h"
 *   insn=0x000000000048F2A0 string=0x000000000048F2A4 ""
 *   insn=0x000000000048F2B0 string=0x000000000048F2B4 "\t@"
 *   insn=0x000000000048F2C0 string=0x000000000048F2C4 ""
 *   insn=0x000000000048F2D0 string=0x000000000048F2D4 "@"
 *   insn=0x000000000048F2DC string=0x000000000048F2E0 ""
 *   insn=0x000000000048F2F4 string=0x000000000048F2F8 ""
 *   insn=0x000000000048F2FC string=0x000000000048F300 "a"
 *   insn=0x000000000048F304 string=0x000000000048F308 "\t@"
 *   insn=0x000000000048F314 string=0x000000000048F318 ""
 *   insn=0x000000000048F31C string=0x000000000048F320 "a"
 *   insn=0x000000000048F324 string=0x000000000048F328 "@"
 *   insn=0x000000000048F340 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048F354 string=0x000000000048F358 "`"
 *   insn=0x000000000048F358 string=0x000000000048F3C4 "@"
 *   insn=0x000000000048F364 string=0x000000000048F3B4 "A"
 *   insn=0x000000000048F368 string=0x000000000048F36C ")"
 *   insn=0x000000000048F378 string=0x000000000048F37C ")\t@"
 *   insn=0x000000000048F384 string=0x000000000048F388 " "
 *   insn=0x000000000048F390 string=0x000000000048F394 ")"
 *   insn=0x000000000048F3A0 string=0x000000000048F3A4 "@"
 *   insn=0x000000000048F3B8 string=0x000000000048F3BC "!"
 *   insn=0x000000000048F3BC string=0x000000000048F3C0 "`"
 *   insn=0x000000000048F3C4 string=0x000000000048F3CC "hZW"
 *   insn=0x000000000048F3D4 string=0x000000000048F3D8 "`"
 *   insn=0x000000000048F3D8 string=0x000000000048F444 "@"
 *   insn=0x000000000048F3E4 string=0x000000000048F434 "A"
 *   insn=0x000000000048F3E8 string=0x000000000048F3EC ")"
 *   insn=0x000000000048F3F8 string=0x000000000048F3FC ")\t@"
 *   insn=0x000000000048F404 string=0x000000000048F408 " "
 *   insn=0x000000000048F410 string=0x000000000048F414 ")"
 *   insn=0x000000000048F420 string=0x000000000048F424 "@"
 *   insn=0x000000000048F438 string=0x000000000048F43C "!"
 *   insn=0x000000000048F43C string=0x000000000048F440 "`"
 *   insn=0x000000000048F444 string=0x000000000048F44C "h"
 *   insn=0x000000000048F454 string=0x000000000048F458 "`"
 *   insn=0x000000000048F458 string=0x000000000048F4C4 "@"
 *   insn=0x000000000048F464 string=0x000000000048F4B4 "A"
 *   insn=0x000000000048F468 string=0x000000000048F46C ")"
 *   insn=0x000000000048F478 string=0x000000000048F47C ")\t@"
 *   insn=0x000000000048F484 string=0x000000000048F488 " "
 *   insn=0x000000000048F490 string=0x000000000048F494 ")"
 *   insn=0x000000000048F4A0 string=0x000000000048F4A4 "@"
 *   insn=0x000000000048F4B8 string=0x000000000048F4BC "!"
 *   insn=0x000000000048F4BC string=0x000000000048F4C0 "`"
 *   insn=0x000000000048F4C4 string=0x000000000048F4C8 "z"
 *   insn=0x000000000048F4C4 string=0x000000000048F4CC "u^T"
 *   insn=0x000000000048F4D4 string=0x000000000048F530 "u"
 *   insn=0x000000000048F4D8 string=0x000000000048F4DC "6"
 *   insn=0x000000000048F4E0 string=0x000000000048F4E4 ""
 *   insn=0x000000000048F4F0 string=0x000000000048F4F4 "\t@"
 *   insn=0x000000000048F500 string=0x000000000048F504 ""
 *   insn=0x000000000048F510 string=0x000000000048F514 "@"
 *   insn=0x000000000048F528 string=0x000000000048F52C "u"
 *   insn=0x000000000048F530 string=0x000000000048F53C "u"
 *   insn=0x000000000048F534 string=0x000000000048F538 "^"
 *   insn=0x000000000048F53C string=0x000000000048F540 "5"
 *   insn=0x000000000048F540 string=0x000000000048F584 "u"
 *   insn=0x000000000048F544 string=0x000000000048F548 ""
 *   insn=0x000000000048F554 string=0x000000000048F558 "\t@"
 *   insn=0x000000000048F564 string=0x000000000048F568 ""
 *   insn=0x000000000048F574 string=0x000000000048F578 "@"
 *   insn=0x000000000048F584 string=0x000000000048F588 "5"
 *   insn=0x000000000048F58C string=0x000000000048F590 ""
 *   insn=0x000000000048F59C string=0x000000000048F5A0 "\t@"
 *   insn=0x000000000048F5AC string=0x000000000048F5B0 ""
 *   insn=0x000000000048F5BC string=0x000000000048F5C0 "@"
 *   insn=0x000000000048F5D0 string=0x00000000001FC000 "0'"
 *   insn=0x000000000048F5E0 string=0x000000000048F5E4 "Z"
 *   insn=0x000000000048F5E4 string=0x000000000048F5E8 "h"
 *   insn=0x000000000048F5EC string=0x000000000048F5F0 ""
 *   insn=0x000000000048F5F0 string=0x000000000048F5F4 ""
 *   insn=0x000000000048F60C string=0x000000000048F610 ""
 *   insn=0x000000000048F614 string=0x000000000048F618 "&"
 *   insn=0x000000000048F61C string=0x000000000048F620 "K"
 *   insn=0x000000000048F620 string=0x000000000048F624 "h"
 *   insn=0x000000000048F628 string=0x000000000048F62C "H"
 *   insn=0x000000000048F630 string=0x000000000048F634 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::GUIAlertView(Caver::GUILabel **this)
{
  Caver::GUILabel *v2; // x0
  Caver::GUILabel *v3; // x20
  Caver::GUILabel *v4; // x9
  Caver::GUILabel *v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  Caver::GUILabel *v8; // x0
  Caver::GUILabel *v9; // x0
  void (__fastcall *v10)(Caver::GUILabel **, Caver::GUILabel **); // x8
  Caver::GUILabel *v11; // x9
  Caver::GUILabel *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  Caver::GUILabel *v15; // x0
  Caver::GUILabel *v16; // x20
  Caver::GUILabel *v17; // x9
  Caver::GUILabel *v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  Caver::GUILabel *v21; // x0
  Caver::GUILabel *v22; // x0
  __int64 (__fastcall *v23)(Caver::GUILabel **, Caver::GUILabel **); // x8
  Caver::GUILabel *v24; // x9
  __int64 result; // x0
  Caver::GUILabel *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x8
  Caver::GUILabel *v29; // [xsp+8h] [xbp-48h] BYREF
  Caver::GUILabel *v30; // [xsp+10h] [xbp-40h]
  __int64 v31; // [xsp+18h] [xbp-38h]

  v31 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIFrameView::GUIFrameView((Caver::GUIFrameView *)this);
  *this = (Caver::GUILabel *)off_6D5610;
  this[34] = (Caver::GUILabel *)off_6D5760;
  memset(this + 35, 0, 0x88u);
  *((_BYTE *)this + 420) = 0;
  *((_DWORD *)this + 104) = -1;
  *((_DWORD *)this + 106) = -1;
  this[54] = 0;
  v2 = (Caver::GUILabel *)operator new(0x150u);
  Caver::GUILabel::GUILabel(v2);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
  v3 = this[37];
  v4 = v29;
  v29 = this[36];
  v5 = v30;
  this[36] = v4;
  this[37] = v5;
  v30 = v3;
  if ( v3 )
  {
    v6 = *((_QWORD *)v3 + 1) - 1LL;
    *((_QWORD *)v3 + 1) = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v3 + 16LL))(v3);
      v7 = *((_QWORD *)v3 + 2) - 1LL;
      *((_QWORD *)v3 + 2) = v7;
      if ( !v7 )
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v3 + 24LL))(v3);
    }
  }
  v8 = this[36];
  *((_BYTE *)v8 + 312) = 1;
  Caver::GUILabel::UpdateText(v8);
  v9 = this[36];
  *((_DWORD *)v9 + 76) = 4;
  Caver::GUILabel::UpdateBounds(v9);
  v10 = (void (__fastcall *)(Caver::GUILabel **, Caver::GUILabel **))*((_QWORD *)*this + 12);
  v29 = this[36];
  v11 = this[37];
  v30 = v11;
  if ( v11 )
    ++*((_QWORD *)v11 + 1);
  v10(this, &v29);
  v12 = v30;
  if ( v30 )
  {
    v13 = *((_QWORD *)v30 + 1) - 1LL;
    *((_QWORD *)v30 + 1) = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v12 + 16LL))(v12);
      v14 = *((_QWORD *)v12 + 2) - 1LL;
      *((_QWORD *)v12 + 2) = v14;
      if ( !v14 )
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v12 + 24LL))(v12);
    }
  }
  v15 = (Caver::GUILabel *)operator new(0x150u);
  Caver::GUILabel::GUILabel(v15);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
  v16 = this[39];
  v17 = v29;
  v29 = this[38];
  v18 = v30;
  this[38] = v17;
  this[39] = v18;
  v30 = v16;
  if ( v16 )
  {
    v19 = *((_QWORD *)v16 + 1) - 1LL;
    *((_QWORD *)v16 + 1) = v19;
    if ( !v19 )
    {
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v16 + 16LL))(v16);
      v20 = *((_QWORD *)v16 + 2) - 1LL;
      *((_QWORD *)v16 + 2) = v20;
      if ( !v20 )
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v16 + 24LL))(v16);
    }
  }
  v21 = this[38];
  *((_BYTE *)v21 + 312) = 1;
  Caver::GUILabel::UpdateText(v21);
  v22 = this[38];
  *((_DWORD *)v22 + 76) = 4;
  Caver::GUILabel::UpdateBounds(v22);
  v23 = (__int64 (__fastcall *)(Caver::GUILabel **, Caver::GUILabel **))*((_QWORD *)*this + 12);
  v29 = this[38];
  v24 = this[39];
  v30 = v24;
  if ( v24 )
    ++*((_QWORD *)v24 + 1);
  result = v23(this, &v29);
  v26 = v30;
  if ( v30 )
  {
    v27 = *((_QWORD *)v30 + 1) - 1LL;
    *((_QWORD *)v30 + 1) = v27;
    if ( !v27 )
    {
      result = (*(__int64 (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v26 + 16LL))(v26);
      v28 = *((_QWORD *)v26 + 2) - 1LL;
      *((_QWORD *)v26 + 2) = v28;
      if ( !v28 )
        return (*(__int64 (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v26 + 24LL))(v26);
    }
  }
  return result;
}

