/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CB89C
 * Mangled: _ZN5Caver16DebugInfoOverlay14SetNumVerticesEii
 * Demangled: Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *
 * Callers: 1
 *   0x00000000001FAF70  Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *
 * Callees: 13
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000567614  sub_567614
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 181
 *   insn=0x00000000003CB8B4 string=0x00000000003CB8B8 "X"
 *   insn=0x00000000003CB8B8 string=0x00000000003CB8BC ""
 *   insn=0x00000000003CB8C8 string=0x00000000003CB8CC "XA"
 *   insn=0x00000000003CB8D4 string=0x00000000003CB8D8 "\A"
 *   insn=0x00000000003CB8E0 string=0x00000000003CBA60 ""
 *   insn=0x00000000003CB91C string=0x00000000003CB92C """
 *   insn=0x00000000003CB920 string=0x00000000003CB924 "\t"
 *   insn=0x00000000003CB93C string=0x00000000003CB940 "7y"
 *   insn=0x00000000003CB940 string=0x00000000003CB944 " "
 *   insn=0x00000000003CB944 string=0x0000000000592301 "Static vertices: "
 *   insn=0x00000000003CB960 string=0x00000000003CB964 "!"
 *   insn=0x00000000003CB964 string=0x0000000000592313 ", Skinned vertices: "
 *   insn=0x00000000003CB988 string=0x00000000003CB98C "y"
 *   insn=0x00000000003CB998 string=0x00000000003CB99C "\t"
 *   insn=0x00000000003CB9DC string=0x00000000003CB9E0 "a"
 *   insn=0x00000000003CB9E0 string=0x00000000003CB9E4 "("
 *   insn=0x00000000003CB9E4 string=0x00000000003CB9E8 "_"
 *   insn=0x00000000003CB9EC string=0x00000000003CB9FC "`"
 *   insn=0x00000000003CB9F4 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003CBA00 string=0x00000000003CBA04 "){"
 *   insn=0x00000000003CBA0C string=0x00000000001F8510 "0'"
 *   insn=0x00000000003CBA28 string=0x00000000003CBA2C "!"
 *   insn=0x00000000003CBA48 string=0x00000000003CBA4C "a"
 *   insn=0x00000000003CBA8C string=0x00000000003CBA90 ")=G"
 *   insn=0x00000000003CBA94 string=0x00000000003CBA98 "I"
 *   insn=0x00000000003CBA98 string=0x00000000003CBA9C "\t"
 *   insn=0x00000000003CBA98 string=0x00000000003CBB40 "\t"
 *   insn=0x00000000003CBA9C string=0x00000000003CBAA0 "*"
 *   insn=0x00000000003CBAA0 string=0x00000000003CBAA4 "\n"
 *   insn=0x00000000003CBAA8 string=0x00000000003CBAAC "("
 *   insn=0x00000000003CBAAC string=0x00000000003CBB4C "?"
 *   insn=0x00000000003CBAB0 string=0x00000000003CBAB4 ")=G"
 *   insn=0x00000000003CBAB4 string=0x00000000003CBAB8 "!"
 *   insn=0x00000000003CBAB8 string=0x00000000003CBABC "I"
 *   insn=0x00000000003CBABC string=0x00000000003CBAC0 "\t"
 *   insn=0x00000000003CBABC string=0x00000000003CBB64 "\t"
 *   insn=0x00000000003CBAC0 string=0x00000000003CBAC4 "*"
 *   insn=0x00000000003CBAC4 string=0x00000000003CBAC8 "\n"
 *   insn=0x00000000003CBACC string=0x00000000003CBAD0 "("
 *   insn=0x00000000003CBAD0 string=0x00000000003CBB70 "?"
 *   insn=0x00000000003CBAD4 string=0x00000000003CBAD8 ")=G"
 *   insn=0x00000000003CBAD8 string=0x00000000003CBADC "!"
 *   insn=0x00000000003CBADC string=0x00000000003CBAE0 ")"
 *   insn=0x00000000003CBAE0 string=0x00000000003CBAE4 "\t"
 *   insn=0x00000000003CBAE0 string=0x00000000003CBB84 "\t"
 *   insn=0x00000000003CBAE4 string=0x00000000003CBAE8 "*"
 *   insn=0x00000000003CBAE8 string=0x00000000003CBAEC "\n"
 *   insn=0x00000000003CBAF0 string=0x00000000003CBAF4 "'"
 *   insn=0x00000000003CBAF4 string=0x00000000003CBB90 "?"
 *   insn=0x00000000003CBAF8 string=0x00000000003CBAFC ")=G"
 *   insn=0x00000000003CBAFC string=0x00000000003CBB00 "!"
 *   insn=0x00000000003CBB00 string=0x00000000003CBB04 "\t"
 *   insn=0x00000000003CBB04 string=0x00000000003CBB08 "\t"
 *   insn=0x00000000003CBB04 string=0x00000000003CBBA4 "\t"
 *   insn=0x00000000003CBB08 string=0x00000000003CBB0C "*"
 *   insn=0x00000000003CBB0C string=0x00000000003CBB10 "\n"
 *   insn=0x00000000003CBB14 string=0x00000000003CBB18 "&"
 *   insn=0x00000000003CBB18 string=0x00000000003CBBB0 "?"
 *   insn=0x00000000003CBB1C string=0x00000000003CBB20 ")=G"
 *   insn=0x00000000003CBB20 string=0x00000000003CBB24 "!"
 *   insn=0x00000000003CBB28 string=0x00000000003CBB2C "\t"
 *   insn=0x00000000003CBB28 string=0x00000000003CBBC4 "\t"
 *   insn=0x00000000003CBB2C string=0x00000000003CBB30 "*"
 *   insn=0x00000000003CBB30 string=0x00000000003CBB34 "\n"
 *   insn=0x00000000003CBB38 string=0x00000000003CBB3C "%"
 *   insn=0x00000000003CBB3C string=0x00000000003CBBD0 "?"
 *   insn=0x00000000003CBB40 string=0x00000000003CBB44 "*"
 *   insn=0x00000000003CBB44 string=0x00000000003CBB48 "\n"
 *   insn=0x00000000003CBB64 string=0x00000000003CBB68 "*"
 *   insn=0x00000000003CBB68 string=0x00000000003CBB6C "\n"
 *   insn=0x00000000003CBB78 string=0x00000000003CBB7C "\nz"
 *   insn=0x00000000003CBB84 string=0x00000000003CBB88 "*"
 *   insn=0x00000000003CBB88 string=0x00000000003CBB8C "\n"
 *   insn=0x00000000003CBB90 string=0x00000000003CBB94 "l"
 *   insn=0x00000000003CBBA4 string=0x00000000003CBBA8 "*"
 *   insn=0x00000000003CBBA8 string=0x00000000003CBBAC "\n"
 *   insn=0x00000000003CBBC4 string=0x00000000003CBBC8 "*"
 *   insn=0x00000000003CBBC8 string=0x00000000003CBBCC "\n"
 *   insn=0x00000000003CBBD0 string=0x00000000003CBBD4 "l"
 *   insn=0x00000000003CBBE4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003CBBEC string=0x00000000003CBBF0 "(a"
 *   insn=0x00000000003CBBF4 string=0x00000000003CBBF8 "`"
 *   insn=0x00000000003CBBFC string=0x00000000003CBC00 "J=G"
 *   insn=0x00000000003CBC00 string=0x00000000003CBC04 ")!"
 *   insn=0x00000000003CBC08 string=0x00000000003CBC0C "*"
 *   insn=0x00000000003CBC08 string=0x00000000003CBD18 "*"
 *   insn=0x00000000003CBC0C string=0x00000000003CBC10 "K"
 *   insn=0x00000000003CBC10 string=0x00000000003CBC14 "+"
 *   insn=0x00000000003CBC18 string=0x00000000003CBC1C "B"
 *   insn=0x00000000003CBC1C string=0x00000000003CBD24 "_"
 *   insn=0x00000000003CBC20 string=0x00000000003CBC24 " "
 *   insn=0x00000000003CBC2C string=0x00000000003CBC30 "(a"
 *   insn=0x00000000003CBC34 string=0x00000000003CBC38 "@\t"
 *   insn=0x00000000003CBC3C string=0x00000000003CBC40 "J=G"
 *   insn=0x00000000003CBC40 string=0x00000000003CBC44 ")!"
 *   insn=0x00000000003CBC48 string=0x00000000003CBC4C "*"
 *   insn=0x00000000003CBC48 string=0x00000000003CBC60 "*"
 *   insn=0x00000000003CBC4C string=0x00000000003CBC50 "K"
 *   insn=0x00000000003CBC50 string=0x00000000003CBC54 "+"
 *   insn=0x00000000003CBC5C string=0x00000000003CBC6C "_"
 *   insn=0x00000000003CBC60 string=0x00000000003CBC64 "K"
 *   insn=0x00000000003CBC64 string=0x00000000003CBC68 "+"
 *   insn=0x00000000003CBC78 string=0x00000000003CBC7C "o"
 *   insn=0x00000000003CBC7C string=0x00000000003CBE38 "[y"
 *   insn=0x00000000003CBC80 string=0x00000000003CBC84 "7"
 *   insn=0x00000000003CBC88 string=0x00000000003CBC8C "9"
 *   insn=0x00000000003CBC94 string=0x00000000003CBC98 "(a"
 *   insn=0x00000000003CBCB4 string=0x00000000003CBCB8 ")=G"
 *   insn=0x00000000003CBCB8 string=0x00000000003CBCBC "!"
 *   insn=0x00000000003CBCC0 string=0x00000000003CBCC4 "\t"
 *   insn=0x00000000003CBCC0 string=0x00000000003CBCD8 "\t"
 *   insn=0x00000000003CBCC4 string=0x00000000003CBCC8 "*"
 *   insn=0x00000000003CBCC8 string=0x00000000003CBCCC "\n"
 *   insn=0x00000000003CBCD4 string=0x00000000003CBCE4 "?"
 *   insn=0x00000000003CBCD8 string=0x00000000003CBCDC "*"
 *   insn=0x00000000003CBCDC string=0x00000000003CBCE0 "\n"
 *   insn=0x00000000003CBCE4 string=0x00000000003CBCE8 "L"
 *   insn=0x00000000003CBCEC string=0x00000000003CBCF0 "d"
 *   insn=0x00000000003CBCF0 string=0x00000000003CBE80 "Iy"
 *   insn=0x00000000003CBCF4 string=0x00000000003CBCF8 "J=G"
 *   insn=0x00000000003CBCF8 string=0x00000000003CBCFC ")!"
 *   insn=0x00000000003CBD00 string=0x00000000003CBD04 "*"
 *   insn=0x00000000003CBD04 string=0x00000000003CBD08 "K"
 *   insn=0x00000000003CBD08 string=0x00000000003CBD0C "+"
 *   insn=0x00000000003CBD18 string=0x00000000003CBD1C "K"
 *   insn=0x00000000003CBD1C string=0x00000000003CBD20 "+"
 *   insn=0x00000000003CBD40 string=0x00000000003CBD44 "(a"
 *   insn=0x00000000003CBD68 string=0x00000000003CBD6C "a"
 *   insn=0x00000000003CBD80 string=0x00000000003CBD84 ")=G"
 *   insn=0x00000000003CBD84 string=0x00000000003CBD88 "!"
 *   insn=0x00000000003CBD8C string=0x00000000003CBD90 "\t"
 *   insn=0x00000000003CBD8C string=0x00000000003CBE88 "\t"
 *   insn=0x00000000003CBD90 string=0x00000000003CBD94 "*"
 *   insn=0x00000000003CBD94 string=0x00000000003CBD98 "\n"
 *   insn=0x00000000003CBD9C string=0x00000000003CBDA0 "?"
 *   insn=0x00000000003CBDA0 string=0x00000000003CBDA4 "l"
 *   insn=0x00000000003CBDA8 string=0x00000000003CBDAC "~y"
 *   insn=0x00000000003CBDB8 string=0x00000000003CBDBC ")=G"
 *   insn=0x00000000003CBDBC string=0x00000000003CBDC0 "!"
 *   insn=0x00000000003CBDC4 string=0x00000000003CBDC8 "\t"
 *   insn=0x00000000003CBDC4 string=0x00000000003CBE00 "\t"
 *   insn=0x00000000003CBDC8 string=0x00000000003CBDCC "*"
 *   insn=0x00000000003CBDCC string=0x00000000003CBDD0 "\n"
 *   insn=0x00000000003CBDD4 string=0x00000000003CBDD8 ""
 *   insn=0x00000000003CBDD8 string=0x00000000003CBE0C "?"
 *   insn=0x00000000003CBDDC string=0x00000000003CBDE0 ")=G"
 *   insn=0x00000000003CBDE0 string=0x00000000003CBDE4 "!"
 *   insn=0x00000000003CBDE8 string=0x00000000003CBDEC "\t"
 *   insn=0x00000000003CBDE8 string=0x00000000003CBE20 "\t"
 *   insn=0x00000000003CBDEC string=0x00000000003CBDF0 "*"
 *   insn=0x00000000003CBDF0 string=0x00000000003CBDF4 "\n"
 *   insn=0x00000000003CBDFC string=0x00000000003CBE2C "?"
 *   insn=0x00000000003CBE00 string=0x00000000003CBE04 "*"
 *   insn=0x00000000003CBE04 string=0x00000000003CBE08 "\n"
 *   insn=0x00000000003CBE14 string=0x00000000003CBE18 "cy"
 *   insn=0x00000000003CBE20 string=0x00000000003CBE24 "*"
 *   insn=0x00000000003CBE24 string=0x00000000003CBE28 "\n"
 *   insn=0x00000000003CBE40 string=0x00000000003CBE44 "J=G"
 *   insn=0x00000000003CBE44 string=0x00000000003CBE48 ")!"
 *   insn=0x00000000003CBE4C string=0x00000000003CBE50 "*"
 *   insn=0x00000000003CBE4C string=0x00000000003CBE64 "*"
 *   insn=0x00000000003CBE50 string=0x00000000003CBE54 "K"
 *   insn=0x00000000003CBE54 string=0x00000000003CBE58 "+"
 *   insn=0x00000000003CBE60 string=0x00000000003CBE70 "_"
 *   insn=0x00000000003CBE64 string=0x00000000003CBE68 "K"
 *   insn=0x00000000003CBE68 string=0x00000000003CBE6C "+"
 *   insn=0x00000000003CBE88 string=0x00000000003CBE8C "*"
 *   insn=0x00000000003CBE8C string=0x00000000003CBE90 "\n"
 *   insn=0x00000000003CBE90 string=0x00000000003CBE94 "?"
 *   insn=0x00000000003CBEA4 string=0x00000000003CBEA8 "(a"
 *   insn=0x00000000003CBEB4 string=0x00000000003CBEB8 "J=G"
 *   insn=0x00000000003CBEB8 string=0x00000000003CBEBC ")!"
 *   insn=0x00000000003CBEBC string=0x00000000003CBEC0 "J"
 *   insn=0x00000000003CBEC0 string=0x00000000003CBEC4 "*"
 *   insn=0x00000000003CBEC0 string=0x00000000003CBEE8 "*"
 *   insn=0x00000000003CBEC4 string=0x00000000003CBEC8 "K"
 *   insn=0x00000000003CBEC8 string=0x00000000003CBECC "+"
 *   insn=0x00000000003CBED0 string=0x00000000003CBED4 "_"
 *   insn=0x00000000003CBEE8 string=0x00000000003CBEEC "K"
 *   insn=0x00000000003CBEEC string=0x00000000003CBEF0 "+"
 *   insn=0x00000000003CBEF0 string=0x00000000003CBEF4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DebugInfoOverlay::SetNumVertices(Caver::DebugInfoOverlay *this, int a2, int a3)
{
  Caver::GUILabel *v5; // x19
  char *v6; // x25
  __int64 v7; // x0
  __int64 v8; // x8
  char *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x8
  char *v12; // x21
  size_t v13; // x2
  __int64 *v14; // x20
  _QWORD *v15; // x1
  char *v16; // x0
  void *v17; // x0
  void *v18; // x0
  char *v19; // x0
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  unsigned int *v24; // x8
  int v25; // w9
  unsigned int *v26; // x8
  int v27; // w9
  unsigned int *v28; // x8
  int v29; // w9
  char *v30; // [xsp+0h] [xbp-90h] BYREF
  char *v31; // [xsp+8h] [xbp-88h] BYREF
  __int64 v32; // [xsp+10h] [xbp-80h] BYREF
  __int64 v33; // [xsp+18h] [xbp-78h] BYREF
  void *v34; // [xsp+20h] [xbp-70h] BYREF
  _BYTE v35[12]; // [xsp+44h] [xbp-4Ch] BYREF

  *(_QWORD *)&v35[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_DWORD *)this + 86) != a2 || *((_DWORD *)this + 87) != a3 )
  {
    *((_DWORD *)this + 86) = a2;
    *((_DWORD *)this + 87) = a3;
    v5 = (Caver::GUILabel *)*((_QWORD *)this + 34);
    v6 = &byte_6FD2F8;
    v31 = &byte_6FD2F8;
    v7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
    v8 = v7;
    if ( a2 < 0 )
    {
      *(_BYTE *)(v7 - 1) = 45;
      v8 = v7 - 1;
      v6 = v31;
    }
    sub_569E1C(&v31, 0, *((_QWORD *)v6 - 3), v8, &v35[-v8]);
    ((void (__fastcall *)(__int64 *__return_ptr, const char *, char **))loc_25A030)(&v32, "Static vertices: ", &v31);
    sub_56A528(&v33, &v32);
    sub_5677D4(&v33, ", Skinned vertices: ", 20);
    v9 = &byte_6FD2F8;
    v30 = &byte_6FD2F8;
    v10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
    v11 = v10;
    if ( a3 < 0 )
    {
      *(_BYTE *)(v10 - 1) = 45;
      v11 = v10 - 1;
      v9 = v30;
    }
    sub_569E1C(&v30, 0, *((_QWORD *)v9 - 3), v11, &v35[-v11]);
    sub_56A528(&v34, &v33);
    sub_567614(&v34, &v30);
    v12 = (char *)v34;
    v14 = (__int64 *)((char *)v34 - 24);
    v13 = *((_QWORD *)v34 - 3);
    v15 = (_QWORD *)*((_QWORD *)v5 + 32);
    if ( v13 != *(v15 - 3) || memcmp(v34, v15, v13) )
    {
      sub_56A6A8((char *)v5 + 256);
      Caver::GUILabel::UpdateText(v5);
      v12 = (char *)v34;
      v14 = (__int64 *)((char *)v34 - 24);
    }
    if ( v14 != &qword_6FD2E0 )
    {
      v20 = (unsigned int *)(v12 - 8);
      if ( &pthread_create )
      {
        do
          v21 = __ldaxr(v20);
        while ( __stlxr(v21 - 1, v20) );
      }
      else
      {
        v21 = (*v20)--;
      }
      if ( v21 <= 0 )
        operator delete(v14);
    }
    v16 = v30 - 24;
    if ( v30 - 24 != (char *)&qword_6FD2E0 )
    {
      v22 = (unsigned int *)(v30 - 8);
      if ( &pthread_create )
      {
        do
          v23 = __ldaxr(v22);
        while ( __stlxr(v23 - 1, v22) );
      }
      else
      {
        v23 = (*v22)--;
      }
      if ( v23 <= 0 )
        operator delete(v16);
    }
    v17 = (void *)(v33 - 24);
    if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
    {
      v24 = (unsigned int *)(v33 - 8);
      if ( &pthread_create )
      {
        do
          v25 = __ldaxr(v24);
        while ( __stlxr(v25 - 1, v24) );
      }
      else
      {
        v25 = (*v24)--;
      }
      if ( v25 <= 0 )
        operator delete(v17);
    }
    v18 = (void *)(v32 - 24);
    if ( (__int64 *)(v32 - 24) != &qword_6FD2E0 )
    {
      v26 = (unsigned int *)(v32 - 8);
      if ( &pthread_create )
      {
        do
          v27 = __ldaxr(v26);
        while ( __stlxr(v27 - 1, v26) );
      }
      else
      {
        v27 = (*v26)--;
      }
      if ( v27 <= 0 )
        operator delete(v18);
    }
    v19 = v31 - 24;
    if ( v31 - 24 != (char *)&qword_6FD2E0 )
    {
      v28 = (unsigned int *)(v31 - 8);
      if ( &pthread_create )
      {
        do
          v29 = __ldaxr(v28);
        while ( __stlxr(v29 - 1, v28) );
      }
      else
      {
        v29 = (*v28)--;
      }
      if ( v29 <= 0 )
        operator delete(v19);
    }
  }
}

