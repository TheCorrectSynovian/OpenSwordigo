/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040D64C
 * Mangled: _ZN5Caver20InventoryTrinketSlot4InitERKN5boost10shared_ptrINS_9GameStateEEEf
 * Demangled: Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&,float)
 *
 * Callers: 1
 *   0x00000000002026B0  Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&,float)
 *
 * Callees: 16
 *   0x00000000001F53C0  Caver::GUILabel::GUILabel(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5660  Caver::MenuItemSlot::Init(float)
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6C10  boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>(Caver::MenuItemSlot *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB580  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x00000000001FD9B0  Caver::FontLibrary::DefaultFont(void)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x0000000000200250  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(Caver::GUILabel *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000040DC14  Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 129
 *   insn=0x000000000040D660 string=0x000000000040D664 "V"
 *   insn=0x000000000040D668 string=0x000000000040D66C ""
 *   insn=0x000000000040D674 string=0x000000000040D678 ") @"
 *   insn=0x000000000040D67C string=0x000000000040D680 "\n"
 *   insn=0x000000000040D67C string=0x000000000040D68C "t"
 *   insn=0x000000000040D680 string=0x000000000040D684 "J"
 *   insn=0x000000000040D684 string=0x000000000040D688 "\n"
 *   insn=0x000000000040D68C string=0x000000000040D690 "i""
 *   insn=0x000000000040D690 string=0x000000000040D694 "4"
 *   insn=0x000000000040D698 string=0x000000000040D69C ""
 *   insn=0x000000000040D6AC string=0x000000000040D6B0 "\t@"
 *   insn=0x000000000040D6B8 string=0x000000000040D6BC ""
 *   insn=0x000000000040D6CC string=0x000000000040D6D0 "@"
 *   insn=0x000000000040D6D8 string=0x000000000040D6DC "hB"
 *   insn=0x000000000040D6E0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000040D6E8 string=0x00000000001FB580 "0'"
 *   insn=0x000000000040D6F0 string=0x000000000040D6F4 "G"
 *   insn=0x000000000040D6F4 string=0x000000000040D6F8 "hRQ"
 *   insn=0x000000000040D6F4 string=0x00000000001F6C10 "0'"
 *   insn=0x000000000040D704 string=0x000000000040D708 "i""
 *   insn=0x000000000040D70C string=0x000000000040D710 "4"
 *   insn=0x000000000040D710 string=0x000000000040D754 "`"
 *   insn=0x000000000040D714 string=0x000000000040D718 ""
 *   insn=0x000000000040D728 string=0x000000000040D72C "\t@"
 *   insn=0x000000000040D734 string=0x000000000040D738 ""
 *   insn=0x000000000040D748 string=0x000000000040D74C "@"
 *   insn=0x000000000040D754 string=0x000000000040D758 "h"
 *   insn=0x000000000040D75C string=0x000000000040D760 "x"
 *   insn=0x000000000040D764 string=0x000000000040D768 "i"
 *   insn=0x000000000040D764 string=0x00000000001F5660 "P'"
 *   insn=0x000000000040D768 string=0x000000000040D76C "?"
 *   insn=0x000000000040D76C string=0x000000000040D770 "h"
 *   insn=0x000000000040D770 string=0x000000000040D774 "1@"
 *   insn=0x000000000040D778 string=0x000000000040D77C "i"
 *   insn=0x000000000040D784 string=0x000000000040D788 "*"
 *   insn=0x000000000040D788 string=0x000000000040D78C "J"
 *   insn=0x000000000040D78C string=0x000000000040D790 "*"
 *   insn=0x000000000040D7A0 string=0x000000000040D7A4 "4"
 *   insn=0x000000000040D7A8 string=0x000000000040D7AC ""
 *   insn=0x000000000040D7BC string=0x000000000040D7C0 "\t@"
 *   insn=0x000000000040D7C8 string=0x000000000040D7CC ""
 *   insn=0x000000000040D7DC string=0x000000000040D7E0 "@"
 *   insn=0x000000000040D7E8 string=0x000000000040D7EC "}"
 *   insn=0x000000000040D7F4 string=0x00000000001F53C0 "P'"
 *   insn=0x000000000040D800 string=0x000000000040D804 "hRR"
 *   insn=0x000000000040D810 string=0x000000000040D814 "i""
 *   insn=0x000000000040D818 string=0x000000000040D81C "4"
 *   insn=0x000000000040D81C string=0x000000000040D860 "t"
 *   insn=0x000000000040D820 string=0x000000000040D824 ""
 *   insn=0x000000000040D834 string=0x000000000040D838 "\t@"
 *   insn=0x000000000040D840 string=0x000000000040D844 ""
 *   insn=0x000000000040D854 string=0x000000000040D858 "@"
 *   insn=0x000000000040D868 string=0x000000000040D86C "Q"
 *   insn=0x000000000040D86C string=0x00000000001FD9B0 "0'"
 *   insn=0x000000000040D878 string=0x000000000040D87C "`"
 *   insn=0x000000000040D884 string=0x000000000040D888 "*"
 *   insn=0x000000000040D888 string=0x000000000040D88C "J"
 *   insn=0x000000000040D88C string=0x000000000040D890 "*"
 *   insn=0x000000000040D898 string=0x000000000040D89C "5"
 *   insn=0x000000000040D8A0 string=0x000000000040D8A4 ""
 *   insn=0x000000000040D8B0 string=0x000000000040D8B4 "\t@"
 *   insn=0x000000000040D8C0 string=0x000000000040D8C4 ""
 *   insn=0x000000000040D8D0 string=0x000000000040D8D4 "@"
 *   insn=0x000000000040D8E0 string=0x000000000040D8E4 ""
 *   insn=0x000000000040D8E4 string=0x00000000001F8510 "0'"
 *   insn=0x000000000040D8E8 string=0x000000000040D8EC "4"
 *   insn=0x000000000040D8EC string=0x000000000040D930 "t"
 *   insn=0x000000000040D8F0 string=0x000000000040D8F4 ""
 *   insn=0x000000000040D904 string=0x000000000040D908 "\t@"
 *   insn=0x000000000040D910 string=0x000000000040D914 ""
 *   insn=0x000000000040D924 string=0x000000000040D928 "@"
 *   insn=0x000000000040D938 string=0x000000000040D93C "A"
 *   insn=0x000000000040D95C string=0x000000000040D960 " "
 *   insn=0x000000000040D964 string=0x000000000040D968 ""
 *   insn=0x000000000040D970 string=0x000000000040D974 "5"
 *   insn=0x000000000040D978 string=0x000000000040D97C ""
 *   insn=0x000000000040D98C string=0x000000000040D990 "\t@"
 *   insn=0x000000000040D998 string=0x000000000040D99C ""
 *   insn=0x000000000040D9AC string=0x000000000040D9B0 "@"
 *   insn=0x000000000040D9BC string=0x000000000040D9C0 "t"
 *   insn=0x000000000040D9C4 string=0x000000000040D9C8 " "
 *   insn=0x000000000040D9DC string=0x000000000040D9E0 "\t"
 *   insn=0x000000000040D9E8 string=0x000000000040D9EC "`"
 *   insn=0x000000000040D9F0 string=0x000000000040D9F4 "0"
 *   insn=0x000000000040D9F8 string=0x000000000040D9FC "h"
 *   insn=0x000000000040D9F8 string=0x00000000001F5840 "P'"
 *   insn=0x000000000040D9FC string=0x000000000040DA00 "i"
 *   insn=0x000000000040DA00 string=0x000000000040DA04 "1@"
 *   insn=0x000000000040DA08 string=0x000000000040DA0C "i"
 *   insn=0x000000000040DA14 string=0x000000000040DA18 "*"
 *   insn=0x000000000040DA18 string=0x000000000040DA1C "J"
 *   insn=0x000000000040DA1C string=0x000000000040DA20 "*"
 *   insn=0x000000000040DA30 string=0x000000000040DA34 "4"
 *   insn=0x000000000040DA34 string=0x000000000040DA78 "`"
 *   insn=0x000000000040DA38 string=0x000000000040DA3C ""
 *   insn=0x000000000040DA4C string=0x000000000040DA50 "\t@"
 *   insn=0x000000000040DA58 string=0x000000000040DA5C ""
 *   insn=0x000000000040DA6C string=0x000000000040DA70 "@"
 *   insn=0x000000000040DA78 string=0x000000000040DA7C "h"
 *   insn=0x000000000040DA80 string=0x000000000040DA84 "\tx@"
 *   insn=0x000000000040DA8C string=0x000000000040DA90 ""I@"
 *   insn=0x000000000040DA90 string=0x000000000040DA94 "\tu@"
 *   insn=0x000000000040DA94 string=0x000000000040DA98 "}@"
 *   insn=0x000000000040DABC string=0x000000000040DAC0 "h"
 *   insn=0x000000000040DABC string=0x00000000001FB170 "0'"
 *   insn=0x000000000040DAC0 string=0x000000000040DAC4 "i"
 *   insn=0x000000000040DAC8 string=0x000000000040DACC "}@"
 *   insn=0x000000000040DACC string=0x000000000040DAD0 "!"
 *   insn=0x000000000040DB00 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000040DB08 string=0x000000000040DB0C "T"
 *   insn=0x000000000040DB10 string=0x000000000040DB14 ""
 *   insn=0x000000000040DB20 string=0x000000000040DB24 "\t@"
 *   insn=0x000000000040DB30 string=0x000000000040DB34 ""
 *   insn=0x000000000040DB40 string=0x000000000040DB44 "@"
 *   insn=0x000000000040DB4C string=0x000000000040DB50 ")"
 *   insn=0x000000000040DB60 string=0x000000000040DB64 ""
 *   insn=0x000000000040DB68 string=0x000000000040DB6C "A"
 *   insn=0x000000000040DB70 string=0x000000000040DB74 "\t@"
 *   insn=0x000000000040DB80 string=0x000000000040DB84 ""
 *   insn=0x000000000040DB88 string=0x000000000040DB8C "A"
 *   insn=0x000000000040DB90 string=0x000000000040DB94 "@"
 *   insn=0x000000000040DBAC string=0x000000000040DBB0 "4"
 *   insn=0x000000000040DBB4 string=0x000000000040DBB8 ""
 *   insn=0x000000000040DBC4 string=0x000000000040DBC8 "\t@"
 *   insn=0x000000000040DBD4 string=0x000000000040DBD8 ""
 *   insn=0x000000000040DBE4 string=0x000000000040DBE8 "@"
 *   insn=0x000000000040DBF4 string=0x000000000040DBF8 "3"
 *   insn=0x000000000040DC08 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000040DC0C string=0x000000000040DC10 "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::InventoryTrinketSlot::Init(__int64 a1, __int64 *a2, float a3)
{
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  Caver::MenuItemSlot *v10; // x0
  _QWORD *v11; // x20
  __int64 v12; // x9
  unsigned __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  Caver::MenuItemSlot *v16; // x0
  __int64 v17; // x9
  void (__fastcall *v18)(__int64, __int64 *); // x8
  unsigned __int64 v19; // x9
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  Caver::GUILabel *v23; // x0
  Caver::FontLibrary *v24; // x0
  _QWORD *v25; // x20
  __int64 v26; // x9
  unsigned __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x8
  Caver::GUILabel *v30; // x20
  Caver::FontLibrary *v31; // x0
  __int64 v32; // x8
  unsigned __int64 v33; // x9
  _QWORD *v34; // x21
  __int64 v35; // x8
  __int64 v36; // x8
  _QWORD *v37; // x20
  __int64 v38; // x8
  __int64 v39; // x8
  __int64 v40; // x20
  _QWORD *v41; // x21
  __int64 v42; // x8
  __int64 v43; // x8
  Caver::GUILabel *v44; // x0
  void (__fastcall *v45)(__int64, __int64 *); // x8
  unsigned __int64 v46; // x9
  _QWORD *v47; // x20
  __int64 v48; // x8
  __int64 v49; // x8
  Caver::GUIView *v50; // x0
  __int64 v51; // x8
  float v52; // s0
  float v53; // s1
  float v54; // s2
  int v55; // w9
  __int64 v57; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v58; // [xsp+10h] [xbp-40h]
  __int64 v59; // [xsp+18h] [xbp-38h]

  v59 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *a2;
  v5 = a2[1];
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = *(_QWORD **)(a1 + 264);
  *(_QWORD *)(a1 + 256) = v6;
  *(_QWORD *)(a1 + 264) = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  *(float *)(a1 + 320) = a3;
  v10 = (Caver::MenuItemSlot *)operator new(0x280u);
  Caver::MenuItemSlot::MenuItemSlot(v10);
  boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>();
  v11 = *(_QWORD **)(a1 + 280);
  v12 = v57;
  v57 = *(_QWORD *)(a1 + 272);
  v13 = v58;
  *(_QWORD *)(a1 + 272) = v12;
  *(_QWORD *)(a1 + 280) = v13;
  v58 = (unsigned __int64)v11;
  if ( v11 )
  {
    v14 = v11[1] - 1LL;
    v11[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v15 = v11[2] - 1LL;
      v11[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v16 = *(Caver::MenuItemSlot **)(a1 + 272);
  *((_QWORD *)v16 + 30) = a1 + 240;
  Caver::MenuItemSlot::Init(v16, a3);
  v17 = *(_QWORD *)(a1 + 272);
  *(_BYTE *)(v17 + 288) = 0;
  v18 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 96LL);
  v57 = v17;
  v19 = *(_QWORD *)(a1 + 280);
  v58 = v19;
  if ( v19 )
    ++*(_QWORD *)(v19 + 8);
  v18(a1, &v57);
  v20 = (_QWORD *)v58;
  if ( v58 )
  {
    v21 = *(_QWORD *)(v58 + 8) - 1LL;
    *(_QWORD *)(v58 + 8) = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v23 = (Caver::GUILabel *)operator new(0x150u);
  Caver::GUILabel::GUILabel(v23);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
  v25 = *(_QWORD **)(a1 + 296);
  v26 = v57;
  v57 = *(_QWORD *)(a1 + 288);
  v27 = v58;
  *(_QWORD *)(a1 + 288) = v26;
  *(_QWORD *)(a1 + 296) = v27;
  v58 = (unsigned __int64)v25;
  if ( v25 )
  {
    v28 = v25[1] - 1LL;
    v25[1] = v28;
    if ( !v28 )
    {
      v24 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v29 = v25[2] - 1LL;
      v25[2] = v29;
      if ( !v29 )
        v24 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
  }
  v30 = *(Caver::GUILabel **)(a1 + 288);
  v31 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v24);
  Caver::FontLibrary::DefaultFont(v31);
  v32 = v57;
  if ( v57 != *((_QWORD *)v30 + 30) )
  {
    v33 = v58;
    if ( v58 )
      ++*(_QWORD *)(v58 + 8);
    v34 = (_QWORD *)*((_QWORD *)v30 + 31);
    *((_QWORD *)v30 + 30) = v32;
    *((_QWORD *)v30 + 31) = v33;
    if ( v34 )
    {
      v35 = v34[1] - 1LL;
      v34[1] = v35;
      if ( !v35 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
        v36 = v34[2] - 1LL;
        v34[2] = v36;
        if ( !v36 )
          (*(void (__fastcall **)(_QWORD *))(*v34 + 24LL))(v34);
      }
    }
    Caver::GUILabel::UpdateText(v30);
  }
  v37 = (_QWORD *)v58;
  if ( v58 )
  {
    v38 = *(_QWORD *)(v58 + 8) - 1LL;
    *(_QWORD *)(v58 + 8) = v38;
    if ( !v38 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v37 + 16LL))(v37);
      v39 = v37[2] - 1LL;
      v37[2] = v39;
      if ( !v39 )
        (*(void (__fastcall **)(_QWORD *))(*v37 + 24LL))(v37);
    }
  }
  v40 = *(_QWORD *)(a1 + 288);
  if ( *(unsigned __int8 *)(v40 + 264) != 255
    || *(unsigned __int8 *)(v40 + 265) != 255
    || *(unsigned __int8 *)(v40 + 266) != 255
    || *(unsigned __int8 *)(v40 + 267) != 255 )
  {
    v41 = *(_QWORD **)(v40 + 280);
    *(_DWORD *)(v40 + 264) = -1;
    *(_QWORD *)(v40 + 272) = 0;
    *(_QWORD *)(v40 + 280) = 0;
    if ( v41 )
    {
      v42 = v41[1] - 1LL;
      v41[1] = v42;
      if ( !v42 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
        v43 = v41[2] - 1LL;
        v41[2] = v43;
        if ( !v43 )
          (*(void (__fastcall **)(_QWORD *))(*v41 + 24LL))(v41);
      }
    }
    Caver::GUILabel::UpdateText((Caver::GUILabel *)v40);
    v40 = *(_QWORD *)(a1 + 288);
  }
  *(_BYTE *)(v40 + 320) = 1;
  *(_DWORD *)(v40 + 321) = -16777216;
  *(_QWORD *)(v40 + 328) = 0xBF8000003F800000LL;
  Caver::GUILabel::UpdateText((Caver::GUILabel *)v40);
  v44 = *(Caver::GUILabel **)(a1 + 288);
  *((_DWORD *)v44 + 76) = 4;
  Caver::GUILabel::UpdateBounds(v44);
  v45 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 96LL);
  v57 = *(_QWORD *)(a1 + 288);
  v46 = *(_QWORD *)(a1 + 296);
  v58 = v46;
  if ( v46 )
    ++*(_QWORD *)(v46 + 8);
  v45(a1, &v57);
  v47 = (_QWORD *)v58;
  if ( v58 )
  {
    v48 = *(_QWORD *)(v58 + 8) - 1LL;
    *(_QWORD *)(v58 + 8) = v48;
    if ( !v48 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v47 + 16LL))(v47);
      v49 = v47[2] - 1LL;
      v47[2] = v49;
      if ( !v49 )
        (*(void (__fastcall **)(_QWORD *))(*v47 + 24LL))(v47);
    }
  }
  v50 = *(Caver::GUIView **)(a1 + 288);
  v51 = *(_QWORD *)(a1 + 272);
  v52 = *(float *)(v51 + 120);
  v53 = *(float *)(v51 + 128);
  v54 = *(float *)(*((_QWORD *)v50 + 30) + 72LL);
  v55 = *(_DWORD *)(v51 + 116);
  LODWORD(v51) = *(_DWORD *)(v51 + 124);
  LODWORD(v57) = v55;
  *((float *)&v57 + 1) = (float)((float)(v52 + v53) + -6.0) - v54;
  v58 = __PAIR64__(LODWORD(v54), v51);
  Caver::GUIView::SetFrame(v50, (const Caver::Rectangle *)&v57);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 248LL))(a1, *(_QWORD *)(a1 + 272) + 116LL);
}

