/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035AC54
 * Mangled: _ZN5Caver18GameViewController19GameControlButtonUpENS_17GameControlButtonE
 * Demangled: Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *
 * Callers: 1
 *   0x00000000001FF550  Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *
 * Callees: 17
 *   0x00000000001F4D70  Caver::GameViewController::RemoveItemFromCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001F4F20  Caver::CharacterState::RemoveItem(Caver::Item *)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F5900  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7730  Caver::GameData::ItemForName(std::string const&)
 *   0x00000000001F80F0  Caver::CharacterState::ItemCount(std::string const&)
 *   0x00000000001FD4F0  Caver::GameSceneController::ConsumeItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FEA20  Caver::ItemOverlay::IsOverlayItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FF550  Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *   0x00000000001FF5F0  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 206
 *   insn=0x000000000035AC64 string=0x000000000035AC68 "U"
 *   insn=0x000000000035AC78 string=0x000000000035AC7C "`f@"
 *   insn=0x000000000035AC80 string=0x000000000035AC84 ""
 *   insn=0x000000000035AC88 string=0x000000000035AC8C ""
 *   insn=0x000000000035ACA0 string=0x000000000035ACA4 "tV@"
 *   insn=0x000000000035ACAC string=0x000000000035ACB0 ""
 *   insn=0x000000000035ACB4 string=0x000000000035ACB8 ")y"
 *   insn=0x000000000035ACB8 string=0x000000000035ACBC ")"
 *   insn=0x000000000035ACC0 string=0x000000000035ACC4 "j"
 *   insn=0x000000000035ACC8 string=0x000000000058EAA1 "healingpotion"
 *   insn=0x000000000035ACE4 string=0x00000000001F80F0 "0'"
 *   insn=0x000000000035ACEC string=0x000000000035ACF0 "V"
 *   insn=0x000000000035ACF4 string=0x000000000035ACF8 " a"
 *   insn=0x000000000035AD00 string=0x000000000035ADD4 "J"
 *   insn=0x000000000035AD04 string=0x000000000035AD08 "K"
 *   insn=0x000000000035AD08 string=0x000000000035AD0C "tN@"
 *   insn=0x000000000035AD30 string=0x00000000001F7730 "0'"
 *   insn=0x000000000035AD40 string=0x000000000035AD44 "`f@"
 *   insn=0x000000000035AD40 string=0x000000000035ADFC "I"
 *   insn=0x000000000035AD4C string=0x00000000001FD4F0 "0'"
 *   insn=0x000000000035AD58 string=0x00000000001F4D70 "P'"
 *   insn=0x000000000035AD60 string=0x000000000035AD64 "h"
 *   insn=0x000000000035AD64 string=0x000000000035AD68 ""
 *   insn=0x000000000035AD68 string=0x000000000035AD6C "h"
 *   insn=0x000000000035AD70 string=0x000000000035AD74 "h"
 *   insn=0x000000000035AD78 string=0x000000000035AD7C "\t@"
 *   insn=0x000000000035AD80 string=0x000000000035AD84 "h\n@"
 *   insn=0x000000000035AD84 string=0x000000000035AD88 ""
 *   insn=0x000000000035AD88 string=0x000000000035AD8C "h\n"
 *   insn=0x000000000035AD90 string=0x000000000035AD94 "h"
 *   insn=0x000000000035AD98 string=0x000000000035AD9C "@"
 *   insn=0x000000000035ADA8 string=0x000000000035ADAC "hB"
 *   insn=0x000000000035ADD4 string=0x000000000035ADD8 "J=G"
 *   insn=0x000000000035ADDC string=0x000000000035ADE0 "(!"
 *   insn=0x000000000035ADE4 string=0x000000000035ADE8 "\t"
 *   insn=0x000000000035ADE4 string=0x000000000035AE20 "\t"
 *   insn=0x000000000035ADE8 string=0x000000000035ADEC "*"
 *   insn=0x000000000035ADEC string=0x000000000035ADF0 "\n"
 *   insn=0x000000000035ADF4 string=0x000000000035ADF8 ""
 *   insn=0x000000000035ADF8 string=0x000000000035AE2C "?"
 *   insn=0x000000000035ADFC string=0x000000000035AE00 ")=G"
 *   insn=0x000000000035AE00 string=0x000000000035AE04 "!"
 *   insn=0x000000000035AE04 string=0x000000000035AE08 "I"
 *   insn=0x000000000035AE08 string=0x000000000035AE0C "\t"
 *   insn=0x000000000035AE08 string=0x000000000035AE50 "\t"
 *   insn=0x000000000035AE0C string=0x000000000035AE10 "*"
 *   insn=0x000000000035AE10 string=0x000000000035AE14 "\n"
 *   insn=0x000000000035AE1C string=0x000000000035AE5C "?"
 *   insn=0x000000000035AE20 string=0x000000000035AE24 "*"
 *   insn=0x000000000035AE24 string=0x000000000035AE28 "\n"
 *   insn=0x000000000035AE38 string=0x000000000035AE3C "Z="
 *   insn=0x000000000035AE44 string=0x000000000035AE48 "*"
 *   insn=0x000000000035AE50 string=0x000000000035AE54 "*"
 *   insn=0x000000000035AE54 string=0x000000000035AE58 "\n"
 *   insn=0x000000000035AE5C string=0x000000000035AE60 ","
 *   insn=0x000000000035AE64 string=0x000000000035AE68 "O="
 *   insn=0x000000000035AE70 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000035AE78 string=0x000000000035AE7C "(a"
 *   insn=0x000000000035AE84 string=0x000000000035AE88 "J"
 *   insn=0x000000000035AE88 string=0x000000000035AE8C "J=G"
 *   insn=0x000000000035AE8C string=0x000000000035AE90 ")!"
 *   insn=0x000000000035AE90 string=0x000000000035AE94 "*"
 *   insn=0x000000000035AE94 string=0x000000000035AE98 "*"
 *   insn=0x000000000035AE94 string=0x000000000035AEB8 "*"
 *   insn=0x000000000035AE98 string=0x000000000035AE9C "K"
 *   insn=0x000000000035AE9C string=0x000000000035AEA0 "+"
 *   insn=0x000000000035AEA4 string=0x000000000035AEA8 "_"
 *   insn=0x000000000035AEB8 string=0x000000000035AEBC "K"
 *   insn=0x000000000035AEBC string=0x000000000035AEC0 "+"
 *   insn=0x000000000035AEC0 string=0x000000000035AEC4 "_"
 *   insn=0x000000000035AEC4 string=0x000000000035AEC8 "M"
 *   insn=0x000000000035AEC8 string=0x000000000035AECC "4"
 *   insn=0x000000000035AED4 string=0x000000000035AED8 "J"
 *   insn=0x000000000035AED8 string=0x000000000035AEDC "J"
 *   insn=0x000000000035AEE0 string=0x000000000035AEE4 "(a"
 *   insn=0x000000000035AEEC string=0x000000000035AEF0 "J"
 *   insn=0x000000000035AEF0 string=0x000000000035AEF4 "J=G"
 *   insn=0x000000000035AEF4 string=0x000000000035AEF8 ")!"
 *   insn=0x000000000035AEFC string=0x000000000035AF00 "*"
 *   insn=0x000000000035AEFC string=0x000000000035AF2C "*"
 *   insn=0x000000000035AF00 string=0x000000000035AF04 "K"
 *   insn=0x000000000035AF04 string=0x000000000035AF08 "+"
 *   insn=0x000000000035AF0C string=0x000000000035AF10 "_"
 *   insn=0x000000000035AF10 string=0x000000000035AF14 "L"
 *   insn=0x000000000035AF1C string=0x000000000035AF20 "!="
 *   insn=0x000000000035AF24 string=0x000000000035AF28 "g"
 *   insn=0x000000000035AF2C string=0x000000000035AF30 "K"
 *   insn=0x000000000035AF30 string=0x000000000035AF34 "+"
 *   insn=0x000000000035AF34 string=0x000000000035AF38 "_"
 *   insn=0x000000000035AF48 string=0x000000000035AF4C "^"
 *   insn=0x000000000035AF54 string=0x000000000035AF58 "4"
 *   insn=0x000000000035AF5C string=0x000000000035AF60 ""
 *   insn=0x000000000035AF6C string=0x000000000035AF70 "\t@"
 *   insn=0x000000000035AF7C string=0x000000000035AF80 ""
 *   insn=0x000000000035AF8C string=0x000000000035AF90 "@"
 *   insn=0x000000000035AF9C string=0x000000000035AFA0 "I"
 *   insn=0x000000000035AFC0 string=0x000000000035AFC4 "W"
 *   insn=0x000000000035AFD4 string=0x000000000035AFD8 "h"
 *   insn=0x000000000035AFE0 string=0x000000000035AFE4 ")"
 *   insn=0x000000000035AFF4 string=0x000000000035AFF8 "4"
 *   insn=0x000000000035AFF4 string=0x00000000001F4F20 "P'"
 *   insn=0x000000000035AFFC string=0x000000000035B000 ""
 *   insn=0x000000000035B010 string=0x000000000035B014 "\t@"
 *   insn=0x000000000035B01C string=0x000000000035B020 ""
 *   insn=0x000000000035B030 string=0x000000000035B034 "@"
 *   insn=0x000000000035B03C string=0x000000000035B040 "\t"
 *   insn=0x000000000035B044 string=0x000000000035B048 "?"
 *   insn=0x000000000035B048 string=0x000000000035B04C "A"
 *   insn=0x000000000035B04C string=0x000000000035B050 "hn@"
 *   insn=0x000000000035B054 string=0x000000000035B058 ""
 *   insn=0x000000000035B05C string=0x000000000035B060 "p"
 *   insn=0x000000000035B064 string=0x000000000035B068 "hn@"
 *   insn=0x000000000035B06C string=0x000000000035B070 ""
 *   insn=0x000000000035B074 string=0x000000000035B078 "^"
 *   insn=0x000000000035B078 string=0x000000000035B07C "N"
 *   insn=0x000000000035B084 string=0x000000000035B088 "(="
 *   insn=0x000000000035B088 string=0x000000000035B08C "hn@"
 *   insn=0x000000000035B08C string=0x000000000035B090 ""
 *   insn=0x000000000035B090 string=0x000000000035B094 ""
 *   insn=0x000000000035B094 string=0x000000000035B098 "Q^"
 *   insn=0x000000000035B0A0 string=0x000000000035B0A4 ")"
 *   insn=0x000000000035B0C8 string=0x000000000035B0CC "_"
 *   insn=0x000000000035B0D4 string=0x000000000035B0D8 ".h"
 *   insn=0x000000000035B0D8 string=0x00000000001F5190 "P'"
 *   insn=0x000000000035B0E4 string=0x000000000035B0EC "Y"
 *   insn=0x000000000035B0EC string=0x000000000035B0F0 "9"
 *   insn=0x000000000035B0F4 string=0x000000000035B0F8 "A"
 *   insn=0x000000000035B0F8 string=0x000000000035B0FC "4"
 *   insn=0x000000000035B0F8 string=0x000000000035B1E0 "I"
 *   insn=0x000000000035B100 string=0x000000000035B104 ""
 *   insn=0x000000000035B110 string=0x000000000035B114 "\t@"
 *   insn=0x000000000035B120 string=0x000000000035B124 ""
 *   insn=0x000000000035B130 string=0x000000000035B134 "@"
 *   insn=0x000000000035B14C string=0x000000000035B150 "8"
 *   insn=0x000000000035B14C string=0x000000000035B204 "I"
 *   insn=0x000000000035B150 string=0x000000000035B154 "hn@"
 *   insn=0x000000000035B154 string=0x000000000035B158 ""
 *   insn=0x000000000035B168 string=0x00000000001F5900 "P'"
 *   insn=0x000000000035B16C string=0x000000000035B170 "3"
 *   insn=0x000000000035B170 string=0x000000000035B174 "h"
 *   insn=0x000000000035B174 string=0x000000000035B178 ""
 *   insn=0x000000000035B178 string=0x000000000035B17C "h"
 *   insn=0x000000000035B180 string=0x000000000035B184 "h"
 *   insn=0x000000000035B188 string=0x000000000035B18C "\t@"
 *   insn=0x000000000035B190 string=0x000000000035B194 "h\n@"
 *   insn=0x000000000035B194 string=0x000000000035B198 ""
 *   insn=0x000000000035B198 string=0x000000000035B19C "h\n"
 *   insn=0x000000000035B1A0 string=0x000000000035B1A4 "h"
 *   insn=0x000000000035B1A8 string=0x000000000035B1AC "@"
 *   insn=0x000000000035B1E0 string=0x000000000035B1E4 ")=G"
 *   insn=0x000000000035B1EC string=0x000000000035B1F0 "\t"
 *   insn=0x000000000035B1EC string=0x000000000035B228 "\t"
 *   insn=0x000000000035B1F0 string=0x000000000035B1F4 "*"
 *   insn=0x000000000035B1F4 string=0x000000000035B1F8 "\n"
 *   insn=0x000000000035B1FC string=0x000000000035B200 ""
 *   insn=0x000000000035B200 string=0x000000000035B234 "?"
 *   insn=0x000000000035B204 string=0x000000000035B208 ")=G"
 *   insn=0x000000000035B208 string=0x000000000035B20C "!"
 *   insn=0x000000000035B20C string=0x000000000035B210 "\t"
 *   insn=0x000000000035B210 string=0x000000000035B214 "\t"
 *   insn=0x000000000035B210 string=0x000000000035B250 "\t"
 *   insn=0x000000000035B214 string=0x000000000035B218 "*"
 *   insn=0x000000000035B218 string=0x000000000035B21C "\n"
 *   insn=0x000000000035B224 string=0x000000000035B25C "?"
 *   insn=0x000000000035B228 string=0x000000000035B22C "*"
 *   insn=0x000000000035B22C string=0x000000000035B230 "\n"
 *   insn=0x000000000035B234 string=0x000000000035B238 ","
 *   insn=0x000000000035B240 string=0x000000000035B244 "X<"
 *   insn=0x000000000035B250 string=0x000000000035B254 "*"
 *   insn=0x000000000035B254 string=0x000000000035B258 "\n"
 *   insn=0x000000000035B264 string=0x000000000035B268 "O<"
 *   insn=0x000000000035B268 string=0x000000000035B26C "X"
 *   insn=0x000000000035B278 string=0x000000000035B27C "'"
 *   insn=0x000000000035B28C string=0x000000000035B290 ""
 *   insn=0x000000000035B29C string=0x000000000035B2A0 "\t@"
 *   insn=0x000000000035B2AC string=0x000000000035B2B0 ""
 *   insn=0x000000000035B2BC string=0x000000000035B2C0 "@"
 *   insn=0x000000000035B2C8 string=0x000000000035B2CC "?"
 *   insn=0x000000000035B2D0 string=0x000000000035B2D4 "4"
 *   insn=0x000000000035B2D8 string=0x000000000035B2DC ""
 *   insn=0x000000000035B2E8 string=0x000000000035B2EC "\t@"
 *   insn=0x000000000035B2F8 string=0x000000000035B2FC ""
 *   insn=0x000000000035B308 string=0x000000000035B30C "@"
 *   insn=0x000000000035B318 string=0x000000000035B31C "I"
 *   insn=0x000000000035B31C string=0x000000000035B320 ")"
 *   insn=0x000000000035B32C string=0x000000000035B330 "I"
 *   insn=0x000000000035B330 string=0x000000000035B334 ")=G"
 *   insn=0x000000000035B334 string=0x000000000035B338 "!"
 *   insn=0x000000000035B338 string=0x000000000035B33C "i"
 *   insn=0x000000000035B33C string=0x000000000035B340 "\t"
 *   insn=0x000000000035B33C string=0x000000000035B368 "\t"
 *   insn=0x000000000035B340 string=0x000000000035B344 "*"
 *   insn=0x000000000035B344 string=0x000000000035B348 "\n"
 *   insn=0x000000000035B34C string=0x000000000035B350 "?"
 *   insn=0x000000000035B360 string=0x000000000035B364 "X"
 *   insn=0x000000000035B368 string=0x000000000035B36C "*"
 *   insn=0x000000000035B36C string=0x000000000035B370 "\n"
 *   insn=0x000000000035B370 string=0x000000000035B374 "?"
 *   insn=0x000000000035B374 string=0x000000000035B378 ""
 *   insn=0x000000000035B380 string=0x000000000035B384 "4"
 *   insn=0x000000000035B388 string=0x000000000035B38C ""
 *   insn=0x000000000035B398 string=0x000000000035B39C "\t@"
 *   insn=0x000000000035B3A8 string=0x000000000035B3AC ""
 *   insn=0x000000000035B3B8 string=0x000000000035B3BC "@"
 *   insn=0x000000000035B3C8 string=0x000000000035B3CC ">"
 *   insn=0x000000000035B3D4 string=0x000000000035B3D8 "^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameViewController::GameControlButtonUp(__int64 a1, unsigned int a2)
{
  __int64 v4; // x0
  __int64 v5; // x20
  int v6; // w8
  int v7; // w8
  void *v8; // x0
  void *v9; // x0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x8
  int v13; // w20
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  __int64 v18; // [xsp+80h] [xbp-48h] BYREF
  __int64 v19; // [xsp+88h] [xbp-40h] BYREF
  _QWORD *v20; // [xsp+90h] [xbp-38h]
  __int64 v21; // [xsp+A0h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 200);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 8LL))(v4, a2);
    if ( a2 == 13 )
    {
      *(_BYTE *)(a1 + 272) = 1;
      return;
    }
    if ( a2 == 9 )
    {
      v5 = *(_QWORD *)(a1 + 168);
      v6 = *(_DWORD *)(v5 + 168);
      if ( v6 >= 1 && v6 < 2 * *(_DWORD *)(v5 + 188) + 4 )
      {
        sub_566BB8((int)&v19, "healingpotion");
        v7 = Caver::CharacterState::ItemCount();
        v8 = (void *)(v19 - 24);
        if ( (__int64 *)(v19 - 24) == &qword_6FD2E0 )
          goto LABEL_7;
        v13 = v7;
        v14 = (unsigned int *)(v19 - 8);
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
        v7 = v13;
        if ( v15 > 0 )
        {
LABEL_7:
          if ( v7 < 1 )
            return;
        }
        else
        {
          operator delete(v8);
          if ( v13 < 1 )
            return;
        }
        sub_566BB8((int)&v18, "healingpotion");
        Caver::GameData::ItemForName();
        v9 = (void *)(v18 - 24);
        if ( (__int64 *)(v18 - 24) != &qword_6FD2E0 )
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
            operator delete(v9);
        }
        Caver::GameSceneController::ConsumeItem();
        Caver::GameViewController::RemoveItemFromCharacter();
        v10 = v20;
        if ( v20 )
        {
          v11 = v20[1] - 1LL;
          v20[1] = v11;
          if ( !v11 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
            v12 = v10[2] - 1LL;
            v10[2] = v12;
            if ( !v12 )
              (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
          }
        }
      }
    }
  }
}

