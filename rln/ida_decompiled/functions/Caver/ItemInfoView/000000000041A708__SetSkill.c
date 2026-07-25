/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041A708
 * Mangled: _ZN5Caver12ItemInfoView8SetSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::ItemInfoView::SetSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F9C80  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x000000000041A71C string=0x000000000041A720 "X"
 *   insn=0x000000000041A720 string=0x000000000041A724 ""
 *   insn=0x000000000041A734 string=0x000000000041A738 "`"
 *   insn=0x000000000041A738 string=0x000000000041A73C "Q}"
 *   insn=0x000000000041A73C string=0x00000000001F9C80 "0'"
 *   insn=0x000000000041A740 string=0x000000000041A744 "v"
 *   insn=0x000000000041A74C string=0x000000000041A750 "v?"
 *   insn=0x000000000041A760 string=0x000000000041A764 "("
 *   insn=0x000000000041A764 string=0x000000000041A768 "_"
 *   insn=0x000000000041A774 string=0x00000000001F5190 "P'"
 *   insn=0x000000000041A778 string=0x000000000041A798 "V"
 *   insn=0x000000000041A788 string=0x000000000041A78C "aw"
 *   insn=0x000000000041A78C string=0x00000000001F8510 "0'"
 *   insn=0x000000000041A7A0 string=0x000000000041A7A4 "a"
 *   insn=0x000000000041A7A4 string=0x000000000041A830 "I"
 *   insn=0x000000000041A7A8 string=0x000000000041A7AC "t"
 *   insn=0x000000000041A7B4 string=0x000000000041A7B8 "\?"
 *   insn=0x000000000041A7C0 string=0x000000000041A7C4 "b"
 *   insn=0x000000000041A7C8 string=0x000000000041A7CC "("
 *   insn=0x000000000041A7CC string=0x000000000041A7D0 "_"
 *   insn=0x000000000041A7D8 string=0x000000000041A7DC "mj"
 *   insn=0x000000000041A7F0 string=0x000000000041A7F4 "Gw"
 *   insn=0x000000000041A804 string=0x000000000041A808 ""
 *   insn=0x000000000041A804 string=0x000000000041A854 "I"
 *   insn=0x000000000041A810 string=0x000000000041A814 "a"
 *   insn=0x000000000041A830 string=0x000000000041A834 ")=G"
 *   insn=0x000000000041A83C string=0x000000000041A840 "\t"
 *   insn=0x000000000041A83C string=0x000000000041A878 "\t"
 *   insn=0x000000000041A840 string=0x000000000041A844 "*"
 *   insn=0x000000000041A844 string=0x000000000041A848 "\n"
 *   insn=0x000000000041A84C string=0x000000000041A850 ""
 *   insn=0x000000000041A850 string=0x000000000041A884 "?"
 *   insn=0x000000000041A854 string=0x000000000041A858 ")=G"
 *   insn=0x000000000041A860 string=0x000000000041A864 "\t"
 *   insn=0x000000000041A860 string=0x000000000041A89C "\t"
 *   insn=0x000000000041A864 string=0x000000000041A868 "*"
 *   insn=0x000000000041A868 string=0x000000000041A86C "\n"
 *   insn=0x000000000041A870 string=0x000000000041A874 ""
 *   insn=0x000000000041A874 string=0x000000000041A8A8 "?"
 *   insn=0x000000000041A878 string=0x000000000041A87C "*"
 *   insn=0x000000000041A87C string=0x000000000041A880 "\n"
 *   insn=0x000000000041A89C string=0x000000000041A8A0 "*"
 *   insn=0x000000000041A8A0 string=0x000000000041A8A4 "\n"
 *   insn=0x000000000041A8C0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000041A8C8 string=0x000000000041A8CC "(a"
 *   insn=0x000000000041A8D4 string=0x000000000041A8D8 "J"
 *   insn=0x000000000041A8D8 string=0x000000000041A8DC "J=G"
 *   insn=0x000000000041A8DC string=0x000000000041A8E0 ")!"
 *   insn=0x000000000041A8E4 string=0x000000000041A8E8 "*"
 *   insn=0x000000000041A8E4 string=0x000000000041A954 "*"
 *   insn=0x000000000041A8E8 string=0x000000000041A8EC "K"
 *   insn=0x000000000041A8EC string=0x000000000041A8F0 "+"
 *   insn=0x000000000041A8F8 string=0x000000000041A938 "_"
 *   insn=0x000000000041A8FC string=0x000000000041A900 "J"
 *   insn=0x000000000041A900 string=0x000000000041A904 "J"
 *   insn=0x000000000041A908 string=0x000000000041A90C "(a"
 *   insn=0x000000000041A914 string=0x000000000041A918 "J"
 *   insn=0x000000000041A918 string=0x000000000041A91C "J=G"
 *   insn=0x000000000041A91C string=0x000000000041A920 ")!"
 *   insn=0x000000000041A924 string=0x000000000041A928 "*"
 *   insn=0x000000000041A928 string=0x000000000041A92C "K"
 *   insn=0x000000000041A92C string=0x000000000041A930 "+"
 *   insn=0x000000000041A954 string=0x000000000041A958 "K"
 *   insn=0x000000000041A958 string=0x000000000041A95C "+"
 *   insn=0x000000000041A95C string=0x000000000041A960 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemInfoView::SetSkill(__int64 a1, __int64 *a2)
{
  Caver::GUILabel *v4; // x22
  char *v5; // x23
  size_t v6; // x2
  __int64 *v7; // x21
  _QWORD *v8; // x1
  __int64 v9; // x8
  Caver::GUILabel *v10; // x20
  char *v11; // x21
  size_t v12; // x2
  __int64 *v13; // x19
  _QWORD *v14; // x1
  unsigned int *v15; // x8
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9
  void *v19[3]; // [xsp+8h] [xbp-48h] BYREF

  v19[2] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MenuItemSlot::SetSkill();
  v4 = *(Caver::GUILabel **)(a1 + 304);
  sub_56A528(v19, *a2 + 8);
  v5 = (char *)v19[0];
  v7 = (__int64 *)((char *)v19[0] - 24);
  v6 = *((_QWORD *)v19[0] - 3);
  v8 = (_QWORD *)*((_QWORD *)v4 + 32);
  if ( v6 != *(v8 - 3) || memcmp(v19[0], v8, v6) )
  {
    sub_56A6A8((char *)v4 + 256);
    Caver::GUILabel::UpdateText(v4);
    v5 = (char *)v19[0];
    v7 = (__int64 *)((char *)v19[0] - 24);
  }
  if ( v7 != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v5 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v7);
  }
  v9 = *a2;
  v10 = *(Caver::GUILabel **)(a1 + 320);
  sub_56A528(v19, v9 + 16);
  v11 = (char *)v19[0];
  v13 = (__int64 *)((char *)v19[0] - 24);
  v12 = *((_QWORD *)v19[0] - 3);
  v14 = (_QWORD *)*((_QWORD *)v10 + 32);
  if ( v12 != *(v14 - 3) || memcmp(v19[0], v14, v12) )
  {
    sub_56A6A8((char *)v10 + 256);
    Caver::GUILabel::UpdateText(v10);
    v11 = (char *)v19[0];
    v13 = (__int64 *)((char *)v19[0] - 24);
  }
  if ( v13 != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(v11 - 8);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v13);
  }
}

