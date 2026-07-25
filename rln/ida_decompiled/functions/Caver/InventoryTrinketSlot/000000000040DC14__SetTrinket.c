/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040DC14
 * Mangled: _ZN5Caver20InventoryTrinketSlot10SetTrinketERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x00000000001FA2D0  Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000040D64C  Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&,float)
 *
 * Callees: 12
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001FAC60  Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x0000000000202710  Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 84
 *   insn=0x000000000040DC2C string=0x000000000040DC30 "W"
 *   insn=0x000000000040DC40 string=0x000000000040DC44 "`"
 *   insn=0x000000000040DC48 string=0x000000000040DC4C "h"
 *   insn=0x000000000040DC58 string=0x00000000001FAC60 "0'"
 *   insn=0x000000000040DC5C string=0x000000000040DC60 "`BA"
 *   insn=0x000000000040DC5C string=0x000000000058493C "fff?"
 *   insn=0x000000000040DC64 string=0x000000000040DC68 "t"
 *   insn=0x000000000040DCA4 string=0x000000000040DCB4 """
 *   insn=0x000000000040DCA8 string=0x000000000040DCAC "\t"
 *   insn=0x000000000040DCC4 string=0x000000000040DCC8 "Up"
 *   insn=0x000000000040DCC8 string=0x000000000040DCCC " "
 *   insn=0x000000000040DCCC string=0x00000000005945E3 "Level "
 *   insn=0x000000000040DCEC string=0x000000000040DCF0 "("
 *   insn=0x000000000040DCF0 string=0x000000000040DCF4 "_"
 *   insn=0x000000000040DCFC string=0x000000000040DD00 "$"
 *   insn=0x000000000040DD00 string=0x00000000001F5190 "P'"
 *   insn=0x000000000040DD0C string=0x000000000040DD10 "fr"
 *   insn=0x000000000040DD18 string=0x00000000001F8510 "0'"
 *   insn=0x000000000040DD34 string=0x000000000040DD38 "A"
 *   insn=0x000000000040DD38 string=0x000000000040DD3C "t"
 *   insn=0x000000000040DD58 string=0x000000000040DD5C "a"
 *   insn=0x000000000040DD5C string=0x000000000040DE08 "2"
 *   insn=0x000000000040DD7C string=0x000000000040DD80 ")=G"
 *   insn=0x000000000040DD88 string=0x000000000040DD8C "\t"
 *   insn=0x000000000040DD88 string=0x000000000040DDC4 "\t"
 *   insn=0x000000000040DD8C string=0x000000000040DD90 "*"
 *   insn=0x000000000040DD90 string=0x000000000040DD94 "\n"
 *   insn=0x000000000040DD98 string=0x000000000040DD9C ""
 *   insn=0x000000000040DD9C string=0x000000000040DDD0 "?"
 *   insn=0x000000000040DDA0 string=0x000000000040DDA4 ")=G"
 *   insn=0x000000000040DDA4 string=0x000000000040DDA8 "!"
 *   insn=0x000000000040DDAC string=0x000000000040DDB0 "\t"
 *   insn=0x000000000040DDAC string=0x000000000040DDE8 "\t"
 *   insn=0x000000000040DDB0 string=0x000000000040DDB4 "*"
 *   insn=0x000000000040DDB4 string=0x000000000040DDB8 "\n"
 *   insn=0x000000000040DDBC string=0x000000000040DDC0 ""
 *   insn=0x000000000040DDC0 string=0x000000000040DDF4 "?"
 *   insn=0x000000000040DDC4 string=0x000000000040DDC8 "*"
 *   insn=0x000000000040DDC8 string=0x000000000040DDCC "\n"
 *   insn=0x000000000040DDDC string=0x000000000040DDE0 "qq"
 *   insn=0x000000000040DDE8 string=0x000000000040DDEC "*"
 *   insn=0x000000000040DDEC string=0x000000000040DDF0 "\n"
 *   insn=0x000000000040DDF4 string=0x000000000040DDF8 ","
 *   insn=0x000000000040DDFC string=0x000000000040DE00 "iq"
 *   insn=0x000000000040DE08 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000040DE18 string=0x000000000040DE1C "(a"
 *   insn=0x000000000040DE20 string=0x000000000040DE24 "!"
 *   insn=0x000000000040DE38 string=0x000000000040DE3C ")=G"
 *   insn=0x000000000040DE3C string=0x000000000040DE40 "!"
 *   insn=0x000000000040DE40 string=0x000000000040DE44 "i"
 *   insn=0x000000000040DE44 string=0x000000000040DE48 "\t"
 *   insn=0x000000000040DE44 string=0x000000000040DEB0 "\t"
 *   insn=0x000000000040DE48 string=0x000000000040DE4C "*"
 *   insn=0x000000000040DE4C string=0x000000000040DE50 "\n"
 *   insn=0x000000000040DE54 string=0x000000000040DE58 "?"
 *   insn=0x000000000040DE60 string=0x000000000040DE64 "*"
 *   insn=0x000000000040DE64 string=0x000000000040DF0C "&q"
 *   insn=0x000000000040DE68 string=0x000000000040DE6C "J=G"
 *   insn=0x000000000040DE6C string=0x000000000040DE70 ")!"
 *   insn=0x000000000040DE74 string=0x000000000040DE78 "*"
 *   insn=0x000000000040DE74 string=0x000000000040DE8C "*"
 *   insn=0x000000000040DE78 string=0x000000000040DE7C "K"
 *   insn=0x000000000040DE7C string=0x000000000040DE80 "+"
 *   insn=0x000000000040DE88 string=0x000000000040DE98 "_"
 *   insn=0x000000000040DE8C string=0x000000000040DE90 "K"
 *   insn=0x000000000040DE90 string=0x000000000040DE94 "+"
 *   insn=0x000000000040DE98 string=0x000000000040DE9C "l"
 *   insn=0x000000000040DEA4 string=0x000000000040DEA8 "?q"
 *   insn=0x000000000040DEB0 string=0x000000000040DEB4 "*"
 *   insn=0x000000000040DEB4 string=0x000000000040DEB8 "\n"
 *   insn=0x000000000040DEB8 string=0x000000000040DEBC "?"
 *   insn=0x000000000040DEBC string=0x000000000040DEC0 ""
 *   insn=0x000000000040DECC string=0x000000000040DED0 "(a"
 *   insn=0x000000000040DEDC string=0x000000000040DEE0 "J=G"
 *   insn=0x000000000040DEE0 string=0x000000000040DEE4 ")!"
 *   insn=0x000000000040DEE8 string=0x000000000040DEEC "*"
 *   insn=0x000000000040DEE8 string=0x000000000040DF18 "*"
 *   insn=0x000000000040DEEC string=0x000000000040DEF0 "K"
 *   insn=0x000000000040DEF0 string=0x000000000040DEF4 "+"
 *   insn=0x000000000040DEF8 string=0x000000000040DEFC "_"
 *   insn=0x000000000040DF10 string=0x000000000040DF14 "l"
 *   insn=0x000000000040DF18 string=0x000000000040DF1C "K"
 *   insn=0x000000000040DF1C string=0x000000000040DF20 "+"
 *   insn=0x000000000040DF20 string=0x000000000040DF24 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::InventoryTrinketSlot::SetTrinket(__int64 a1)
{
  int v2; // w0
  __int64 v3; // x20
  int v4; // w22
  char *v5; // x25
  __int64 v6; // x0
  __int64 v7; // x8
  char *v8; // x22
  size_t v9; // x2
  __int64 *v10; // x21
  _QWORD *v11; // x1
  char *v12; // x0
  char v13; // w8
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  char *v18; // [xsp+8h] [xbp-78h] BYREF
  void *v19; // [xsp+10h] [xbp-70h] BYREF
  _BYTE v20[12]; // [xsp+34h] [xbp-4Ch] BYREF

  *(_QWORD *)&v20[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MenuItemSlot::SetItem();
  v2 = Caver::CharacterState::ItemCount();
  v3 = *(_QWORD *)(a1 + 288);
  v4 = v2;
  if ( *(float *)(a1 + 320) <= 0.9 )
  {
    v13 = 1;
  }
  else
  {
    v5 = &byte_6FD2F8;
    v18 = &byte_6FD2F8;
    v6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
    v7 = v6;
    if ( v4 < 0 )
    {
      *(_BYTE *)(v6 - 1) = 45;
      v7 = v6 - 1;
      v5 = v18;
    }
    sub_569E1C(&v18, 0, *((_QWORD *)v5 - 3), v7, &v20[-v7]);
    ((void (__fastcall *)(void **__return_ptr, char *, char **))loc_25A030)(&v19, "Level ", &v18);
    v8 = (char *)v19;
    v10 = (__int64 *)((char *)v19 - 24);
    v9 = *((_QWORD *)v19 - 3);
    v11 = *(_QWORD **)(v3 + 256);
    if ( v9 != *(v11 - 3) || memcmp(v19, v11, v9) )
    {
      sub_56A6A8(v3 + 256);
      Caver::GUILabel::UpdateText((Caver::GUILabel *)v3);
      v8 = (char *)v19;
      v10 = (__int64 *)((char *)v19 - 24);
    }
    if ( v10 != &qword_6FD2E0 )
    {
      v14 = (unsigned int *)(v8 - 8);
      if ( &pthread_create )
      {
        do
          v15 = __ldaxr(v14);
        while ( __stlxr(v15 - 1, v14) );
      }
      else
      {
        v15 = (*v14)--;
      }
      if ( v15 <= 0 )
        operator delete(v10);
    }
    v12 = v18 - 24;
    if ( v18 - 24 != (char *)&qword_6FD2E0 )
    {
      v16 = (unsigned int *)(v18 - 8);
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
        operator delete(v12);
    }
    v3 = *(_QWORD *)(a1 + 288);
    v13 = 0;
  }
  *(_BYTE *)(v3 + 228) = v13;
}

