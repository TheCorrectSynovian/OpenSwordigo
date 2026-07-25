/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C4F90
 * Mangled: _ZN5Caver7CoinBar10UpdateTextEv
 * Demangled: Caver::CoinBar::UpdateText(void)
 *
 * Callers: 2
 *   0x00000000001F7120  Caver::CoinBar::UpdateText(void)
 *   0x00000000003C4C84  Caver::CoinBar::Update(float)
 *
 * Callees: 12
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 103
 *   insn=0x00000000003C4FB0 string=0x00000000003C4FB4 "V"
 *   insn=0x00000000003C4FC8 string=0x00000000003C4FCC "x"
 *   insn=0x00000000003C4FD0 string=0x00000000003C4FD4 "4Q"
 *   insn=0x00000000003C4FF8 string=0x00000000003C4FFC "\t"
 *   insn=0x00000000003C5018 string=0x00000000003C501C "h"
 *   insn=0x00000000003C5024 string=0x00000000003C5028 "`"
 *   insn=0x00000000003C5024 string=0x00000000003C507C "`"
 *   insn=0x00000000003C5028 string=0x00000000005920A3 "x 0"
 *   insn=0x00000000003C5054 string=0x00000000003C50AC "t"
 *   insn=0x00000000003C5058 string=0x00000000003C505C ")=G"
 *   insn=0x00000000003C505C string=0x00000000003C5060 "!"
 *   insn=0x00000000003C5060 string=0x00000000003C5064 "\t"
 *   insn=0x00000000003C5064 string=0x00000000003C5068 "\t"
 *   insn=0x00000000003C5064 string=0x00000000003C51E4 "\t"
 *   insn=0x00000000003C5068 string=0x00000000003C506C "*"
 *   insn=0x00000000003C506C string=0x00000000003C5070 "\n"
 *   insn=0x00000000003C5074 string=0x00000000003C5078 "^"
 *   insn=0x00000000003C5078 string=0x00000000003C51F0 "?"
 *   insn=0x00000000003C507C string=0x00000000005944F3 "x "
 *   insn=0x00000000003C50B8 string=0x00000000003C50BC "("
 *   insn=0x00000000003C50BC string=0x00000000003C50C0 "_"
 *   insn=0x00000000003C50C0 string=0x00000000003C50C4 "a"
 *   insn=0x00000000003C50C4 string=0x00000000003C50C8 "2"
 *   insn=0x00000000003C50C8 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003C50CC string=0x00000000003C50E8 "j"
 *   insn=0x00000000003C50D4 string=0x00000000003C50D8 "t"
 *   insn=0x00000000003C50E0 string=0x00000000003C50E4 "t"
 *   insn=0x00000000003C50E0 string=0x00000000001F8510 "0'"
 *   insn=0x00000000003C50E8 string=0x00000000003C50EC "k\nA"
 *   insn=0x00000000003C50EC string=0x00000000003C50F0 "h"
 *   insn=0x00000000003C50F0 string=0x00000000003C50F4 "i"
 *   insn=0x00000000003C50FC string=0x00000000003C5100 ","
 *   insn=0x00000000003C5104 string=0x00000000003C5108 "`"
 *   insn=0x00000000003C510C string=0x00000000003C5110 "("
 *   insn=0x00000000003C5114 string=0x00000000003C5118 "B)+"
 *   insn=0x00000000003C511C string=0x00000000003C5120 "$\t "
 *   insn=0x00000000003C5128 string=0x00000000003C512C "B(#"
 *   insn=0x00000000003C5134 string=0x00000000003C5138 "`8 "
 *   insn=0x00000000003C5150 string=0x00000000003C5154 ""
 *   insn=0x00000000003C5154 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003C5174 string=0x00000000003C5224 "+"
 *   insn=0x00000000003C519C string=0x00000000003C51A0 ")=G"
 *   insn=0x00000000003C51A0 string=0x00000000003C51A4 "!"
 *   insn=0x00000000003C51A8 string=0x00000000003C51AC "\t"
 *   insn=0x00000000003C51A8 string=0x00000000003C5204 "\t"
 *   insn=0x00000000003C51AC string=0x00000000003C51B0 "*"
 *   insn=0x00000000003C51B0 string=0x00000000003C51B4 "\n"
 *   insn=0x00000000003C51BC string=0x00000000003C5210 "?"
 *   insn=0x00000000003C51C0 string=0x00000000003C51C4 ")=G"
 *   insn=0x00000000003C51C4 string=0x00000000003C51C8 "!"
 *   insn=0x00000000003C51CC string=0x00000000003C51D0 "\t"
 *   insn=0x00000000003C51D0 string=0x00000000003C51D4 "*"
 *   insn=0x00000000003C51D4 string=0x00000000003C51D8 "\n"
 *   insn=0x00000000003C51E4 string=0x00000000003C51E8 "*"
 *   insn=0x00000000003C51E8 string=0x00000000003C51EC "\n"
 *   insn=0x00000000003C51F8 string=0x00000000003C51FC "j"
 *   insn=0x00000000003C5204 string=0x00000000003C5208 "*"
 *   insn=0x00000000003C5208 string=0x00000000003C520C "\n"
 *   insn=0x00000000003C5218 string=0x00000000003C521C "b"
 *   insn=0x00000000003C5224 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C522C string=0x00000000003C5230 "(a"
 *   insn=0x00000000003C523C string=0x00000000003C5240 "J=G"
 *   insn=0x00000000003C5240 string=0x00000000003C5244 ")!"
 *   insn=0x00000000003C5248 string=0x00000000003C524C "*"
 *   insn=0x00000000003C5248 string=0x00000000003C5298 "*"
 *   insn=0x00000000003C524C string=0x00000000003C5250 "K"
 *   insn=0x00000000003C5250 string=0x00000000003C5254 "+"
 *   insn=0x00000000003C525C string=0x00000000003C52A4 "_"
 *   insn=0x00000000003C5264 string=0x00000000003C5268 "(a"
 *   insn=0x00000000003C5274 string=0x00000000003C5278 "J=G"
 *   insn=0x00000000003C5278 string=0x00000000003C527C ")!"
 *   insn=0x00000000003C5280 string=0x00000000003C5284 "*"
 *   insn=0x00000000003C5284 string=0x00000000003C5288 "K"
 *   insn=0x00000000003C5288 string=0x00000000003C528C "+"
 *   insn=0x00000000003C5298 string=0x00000000003C529C "K"
 *   insn=0x00000000003C529C string=0x00000000003C52A0 "+"
 *   insn=0x00000000003C52A4 string=0x00000000003C52A8 "L"
 *   insn=0x00000000003C52B0 string=0x00000000003C52B4 "<"
 *   insn=0x00000000003C52E0 string=0x00000000003C52E4 ")=G"
 *   insn=0x00000000003C52E4 string=0x00000000003C52E8 "!"
 *   insn=0x00000000003C52E8 string=0x00000000003C52EC ")"
 *   insn=0x00000000003C52EC string=0x00000000003C52F0 "\t"
 *   insn=0x00000000003C52EC string=0x00000000003C5310 "\t"
 *   insn=0x00000000003C52F0 string=0x00000000003C52F4 "*"
 *   insn=0x00000000003C52F4 string=0x00000000003C52F8 "\n"
 *   insn=0x00000000003C52FC string=0x00000000003C5300 "?"
 *   insn=0x00000000003C5300 string=0x00000000003C5304 "l"
 *   insn=0x00000000003C5310 string=0x00000000003C5314 "*"
 *   insn=0x00000000003C5314 string=0x00000000003C5318 "\n"
 *   insn=0x00000000003C5318 string=0x00000000003C531C "?"
 *   insn=0x00000000003C531C string=0x00000000003C5320 "M"
 *   insn=0x00000000003C532C string=0x00000000003C5330 "(a"
 *   insn=0x00000000003C533C string=0x00000000003C5340 "J=G"
 *   insn=0x00000000003C5340 string=0x00000000003C5344 ")!"
 *   insn=0x00000000003C5348 string=0x00000000003C534C "*"
 *   insn=0x00000000003C5348 string=0x00000000003C5378 "*"
 *   insn=0x00000000003C534C string=0x00000000003C5350 "K"
 *   insn=0x00000000003C5350 string=0x00000000003C5354 "+"
 *   insn=0x00000000003C5358 string=0x00000000003C535C "_"
 *   insn=0x00000000003C5370 string=0x00000000003C5374 "T"
 *   insn=0x00000000003C5378 string=0x00000000003C537C "K"
 *   insn=0x00000000003C537C string=0x00000000003C5380 "+"
 *   insn=0x00000000003C5380 string=0x00000000003C5384 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CoinBar::UpdateText(Caver::CoinBar *this)
{
  int v2; // w24
  char *v3; // x23
  __int64 v4; // x0
  __int64 v5; // x8
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  Caver::GUILabel *v9; // x20
  _QWORD *v10; // x1
  size_t v11; // x2
  float v12; // s10
  float v13; // s11
  float v14; // s8
  float v15; // s9
  float v16; // s12
  char *v17; // x0
  unsigned int *v18; // x8
  int v19; // w9
  __int64 v20; // [xsp+8h] [xbp-98h] BYREF
  __int64 v21; // [xsp+10h] [xbp-90h] BYREF
  void *v22; // [xsp+18h] [xbp-88h] BYREF
  _QWORD v23[2]; // [xsp+20h] [xbp-80h] BYREF
  _BYTE v24[12]; // [xsp+34h] [xbp-6Ch] BYREF

  *(_QWORD *)&v24[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_DWORD *)this + 60);
  v3 = &byte_6FD2F8;
  v22 = &byte_6FD2F8;
  v4 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
  v5 = v4;
  if ( v2 < 0 )
  {
    *(_BYTE *)(v4 - 1) = 45;
    v5 = v4 - 1;
    v3 = (char *)v22;
  }
  sub_569E1C(&v22, 0, *((_QWORD *)v3 - 3), v5, &v24[-v5]);
  if ( *((int *)this + 60) <= 9 )
  {
    ((void (__fastcall *)(_QWORD *__return_ptr, const char *, void **))loc_25A030)(v23, "x 0", &v22);
    sub_56A6A8(&v22);
    v6 = (void *)(v23[0] - 24LL);
    if ( (__int64 *)(v23[0] - 24LL) == &qword_6FD2E0 )
      goto LABEL_9;
    v7 = (unsigned int *)(v23[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
      goto LABEL_21;
    }
LABEL_20:
    v8 = (*v7)--;
    goto LABEL_21;
  }
  ((void (__fastcall *)(_QWORD *__return_ptr, char *, void **))loc_25A030)(v23, "x ", &v22);
  sub_56A6A8(&v22);
  v6 = (void *)(v23[0] - 24LL);
  if ( (__int64 *)(v23[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_9;
  v7 = (unsigned int *)(v23[0] - 8LL);
  if ( !&pthread_create )
    goto LABEL_20;
  do
    v8 = __ldaxr(v7);
  while ( __stlxr(v8 - 1, v7) );
LABEL_21:
  if ( v8 <= 0 )
    operator delete(v6);
LABEL_9:
  v9 = (Caver::GUILabel *)*((_QWORD *)this + 42);
  v10 = (_QWORD *)*((_QWORD *)v9 + 32);
  v11 = *((_QWORD *)v22 - 3);
  if ( v11 != *(v10 - 3) || memcmp(v22, v10, v11) )
  {
    sub_56A6A8((char *)v9 + 256);
    Caver::GUILabel::UpdateText(v9);
    v9 = (Caver::GUILabel *)*((_QWORD *)this + 42);
  }
  v12 = *((float *)this + 64);
  v13 = *((float *)this + 66);
  v14 = *((float *)this + 34);
  v15 = *((float *)this + 36);
  Caver::GUILabel::TextSize(&v21, v9);
  v16 = *((float *)&v21 + 1);
  Caver::GUILabel::TextSize(&v20, *((Caver::GUILabel **)this + 42));
  *(float *)v23 = (float)(v12 + v13) + 2.0;
  HIDWORD(v23[0]) = roundf((float)((float)(v14 + (float)(v15 * 0.5)) - (float)(v16 * 0.5)) + -1.0);
  v23[1] = v20;
  Caver::GUIView::SetFrame(v9, (const Caver::Rectangle *)v23);
  v17 = (char *)v22 - 24;
  if ( (char *)v22 - 24 != (char *)&qword_6FD2E0 )
  {
    v18 = (unsigned int *)((char *)v22 - 8);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v17);
  }
}

