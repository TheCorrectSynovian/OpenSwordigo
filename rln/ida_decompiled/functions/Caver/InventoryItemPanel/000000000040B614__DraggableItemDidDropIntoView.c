/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040B614
 * Mangled: _ZN5Caver18InventoryItemPanel28DraggableItemDidDropIntoViewEPNS_16GUIDraggableItemE
 * Demangled: Caver::InventoryItemPanel::DraggableItemDidDropIntoView(Caver::GUIDraggableItem *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F5920  Caver::MenuItemSlot::SetSelected(bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6670  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x00000000001F8EC0  Caver::InventoryItemPanel::InventoryTrinketSlotDidBeginDragging(Caver::InventoryTrinketSlot *)
 *   0x00000000001FA2D0  Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 151
 *   insn=0x000000000040B628 string=0x000000000040B62C "W"
 *   insn=0x000000000040B63C string=0x000000000040B640 "h"
 *   insn=0x000000000040B640 string=0x000000000040B644 "\tQP"
 *   insn=0x000000000040B64C string=0x000000000040B650 "J"
 *   insn=0x000000000040B658 string=0x000000000040B6A8 "YQ"
 *   insn=0x000000000040B664 string=0x000000000040B668 ""
 *   insn=0x000000000040B678 string=0x000000000040B67C "\t@"
 *   insn=0x000000000040B684 string=0x000000000040B688 ""
 *   insn=0x000000000040B698 string=0x000000000040B69C "@"
 *   insn=0x000000000040B6A8 string=0x000000000040B6AC "V"
 *   insn=0x000000000040B6B8 string=0x000000000040B6BC ")"
 *   insn=0x000000000040B6C0 string=0x000000000040B6C4 "\t@"
 *   insn=0x000000000040B6D0 string=0x000000000040B6D4 ""
 *   insn=0x000000000040B6D8 string=0x000000000040B6DC "!"
 *   insn=0x000000000040B6E0 string=0x000000000040B6E4 "@"
 *   insn=0x000000000040B6F8 string=0x000000000040B6FC "T"
 *   insn=0x000000000040B704 string=0x000000000040B708 ""
 *   insn=0x000000000040B708 string=0x000000000040B70C "("
 *   insn=0x000000000040B714 string=0x000000000040B718 "!"
 *   insn=0x000000000040B718 string=0x000000000040B71C "B"
 *   insn=0x000000000040B734 string=0x000000000040B738 "u"
 *   insn=0x000000000040B738 string=0x000000000040B784 ""
 *   insn=0x000000000040B74C string=0x000000000040B750 "\t@"
 *   insn=0x000000000040B758 string=0x000000000040B75C ""
 *   insn=0x000000000040B76C string=0x000000000040B770 "@"
 *   insn=0x000000000040B77C string=0x000000000040B790 "h"
 *   insn=0x000000000040B788 string=0x000000000040B78C "!"
 *   insn=0x000000000040B798 string=0x000000000040B79C "a"
 *   insn=0x000000000040B79C string=0x00000000001F5920 "P'"
 *   insn=0x000000000040B7A4 string=0x000000000040B7B4 "i"
 *   insn=0x000000000040B7A8 string=0x000000000040B7AC ")"
 *   insn=0x000000000040B7B4 string=0x000000000040B7B8 ")"
 *   insn=0x000000000040B7B8 string=0x000000000040B7BC ")YP"
 *   insn=0x000000000040B7BC string=0x000000000040B7C0 "V"
 *   insn=0x000000000040B7CC string=0x000000000040B7D0 "\n"
 *   insn=0x000000000040B7D0 string=0x000000000040B810 "5"
 *   insn=0x000000000040B7D4 string=0x000000000040B7D8 "\t@"
 *   insn=0x000000000040B7E4 string=0x000000000040B7E8 ""
 *   insn=0x000000000040B7F4 string=0x000000000040B7F8 "@"
 *   insn=0x000000000040B814 string=0x000000000040B818 ""
 *   insn=0x000000000040B828 string=0x000000000040B82C "\t@"
 *   insn=0x000000000040B834 string=0x000000000040B838 ""
 *   insn=0x000000000040B848 string=0x000000000040B84C "@"
 *   insn=0x000000000040B858 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000040B860 string=0x0000000000584965 "click"
 *   insn=0x000000000040B884 string=0x00000000001F5340 "P'"
 *   insn=0x000000000040B88C string=0x000000000040B890 "@"
 *   insn=0x000000000040B890 string=0x000000000040B894 ""
 *   insn=0x000000000040B894 string=0x000000000040B898 ""
 *   insn=0x000000000040B89C string=0x000000000040B8A0 ""
 *   insn=0x000000000040B8A0 string=0x000000000040B8A4 ""
 *   insn=0x000000000040B8B0 string=0x000000000040B8B4 ")"
 *   insn=0x000000000040B8D4 string=0x000000000040B8D8 "\t"
 *   insn=0x000000000040B8D4 string=0x000000000040B8E4 "h"
 *   insn=0x000000000040B8D8 string=0x000000000040B8DC ")"
 *   insn=0x000000000040B8DC string=0x000000000040B8E0 "\t"
 *   insn=0x000000000040B8E4 string=0x000000000040B8E8 ""
 *   insn=0x000000000040B8FC string=0x000000000040B900 "\t@"
 *   insn=0x000000000040B90C string=0x000000000040B910 ""
 *   insn=0x000000000040B91C string=0x000000000040B920 "@"
 *   insn=0x000000000040B930 string=0x000000000040B934 "`"
 *   insn=0x000000000040B938 string=0x000000000040B93C "e"
 *   insn=0x000000000040B93C string=0x00000000001FA2D0 "0'"
 *   insn=0x000000000040B940 string=0x000000000040B944 "K"
 *   insn=0x000000000040B944 string=0x00000000001F6670 "0'"
 *   insn=0x000000000040B948 string=0x000000000040B94C "4"
 *   insn=0x000000000040B94C string=0x000000000040B990 "`~@"
 *   insn=0x000000000040B950 string=0x000000000040B954 ""
 *   insn=0x000000000040B964 string=0x000000000040B968 "\t@"
 *   insn=0x000000000040B970 string=0x000000000040B974 ""
 *   insn=0x000000000040B984 string=0x000000000040B988 "@"
 *   insn=0x000000000040B994 string=0x000000000040B998 ""
 *   insn=0x000000000040B99C string=0x000000000040B9A0 ""
 *   insn=0x000000000040B9A8 string=0x000000000040B9AC "1"
 *   insn=0x000000000040B9BC string=0x000000000040BA1C "-"
 *   insn=0x000000000040B9D8 string=0x000000000040B9DC ")=G"
 *   insn=0x000000000040B9DC string=0x000000000040B9E0 "!"
 *   insn=0x000000000040B9E4 string=0x000000000040B9E8 "\t"
 *   insn=0x000000000040B9E4 string=0x000000000040B9FC "\t"
 *   insn=0x000000000040B9E8 string=0x000000000040B9EC "*"
 *   insn=0x000000000040B9EC string=0x000000000040B9F0 "\n"
 *   insn=0x000000000040B9F8 string=0x000000000040BA08 "?"
 *   insn=0x000000000040B9FC string=0x000000000040BA00 "*"
 *   insn=0x000000000040BA00 string=0x000000000040BA04 "\n"
 *   insn=0x000000000040BA10 string=0x000000000040BA14 "dz"
 *   insn=0x000000000040BA1C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000040BA28 string=0x000000000040BA2C ""
 *   insn=0x000000000040BA30 string=0x000000000040BA34 "!\n"
 *   insn=0x000000000040BA38 string=0x000000000040BA3C "\t@"
 *   insn=0x000000000040BA48 string=0x000000000040BA4C ""
 *   insn=0x000000000040BA50 string=0x000000000040BA54 "!\t"
 *   insn=0x000000000040BA58 string=0x000000000040BA5C "@"
 *   insn=0x000000000040BA64 string=0x000000000040BA68 "D"
 *   insn=0x000000000040BA74 string=0x000000000040BA78 "J"
 *   insn=0x000000000040BA7C string=0x000000000040BA80 "(a"
 *   insn=0x000000000040BA8C string=0x000000000040BA90 "J=G"
 *   insn=0x000000000040BA90 string=0x000000000040BA94 ")!"
 *   insn=0x000000000040BA98 string=0x000000000040BA9C "*"
 *   insn=0x000000000040BA98 string=0x000000000040BAC8 "*"
 *   insn=0x000000000040BA9C string=0x000000000040BAA0 "K"
 *   insn=0x000000000040BAA0 string=0x000000000040BAA4 "+"
 *   insn=0x000000000040BAA8 string=0x000000000040BAAC "_"
 *   insn=0x000000000040BAAC string=0x000000000040BAB0 "L"
 *   insn=0x000000000040BAB8 string=0x000000000040BABC ":z"
 *   insn=0x000000000040BAC8 string=0x000000000040BACC "K"
 *   insn=0x000000000040BACC string=0x000000000040BAD0 "+"
 *   insn=0x000000000040BAD0 string=0x000000000040BAD4 "_"
 *   insn=0x000000000040BAD8 string=0x000000000040BADC "'"
 *   insn=0x000000000040BAE8 string=0x000000000040BAEC ""
 *   insn=0x000000000040BAF0 string=0x000000000040BAF4 "!"
 *   insn=0x000000000040BAF8 string=0x000000000040BAFC "\t@"
 *   insn=0x000000000040BB08 string=0x000000000040BB0C ""
 *   insn=0x000000000040BB10 string=0x000000000040BB14 "!"
 *   insn=0x000000000040BB18 string=0x000000000040BB1C "@"
 *   insn=0x000000000040BB30 string=0x000000000040BB34 "4"
 *   insn=0x000000000040BB38 string=0x000000000040BB3C ""
 *   insn=0x000000000040BB48 string=0x000000000040BB4C "\t@"
 *   insn=0x000000000040BB58 string=0x000000000040BB5C ""
 *   insn=0x000000000040BB68 string=0x000000000040BB6C "@"
 *   insn=0x000000000040BB78 string=0x000000000040BB7C "R"
 *   insn=0x000000000040BB94 string=0x000000000040BB98 "U"
 *   insn=0x000000000040BBA4 string=0x000000000040BBA8 "h"
 *   insn=0x000000000040BBA8 string=0x000000000040BBAC ""
 *   insn=0x000000000040BBB0 string=0x000000000040BBB4 "t"
 *   insn=0x000000000040BBB8 string=0x000000000040BBBC "("
 *   insn=0x000000000040BBC4 string=0x000000000040BBC8 "\t@"
 *   insn=0x000000000040BBD0 string=0x000000000040BBD4 ""
 *   insn=0x000000000040BBE4 string=0x000000000040BBE8 "h"
 *   insn=0x000000000040BBE8 string=0x000000000040BBEC ""
 *   insn=0x000000000040BC00 string=0x000000000040BC04 "\t@"
 *   insn=0x000000000040BC10 string=0x000000000040BC14 ""
 *   insn=0x000000000040BC20 string=0x000000000040BC24 "@"
 *   insn=0x000000000040BC30 string=0x000000000040BC34 "`"
 *   insn=0x000000000040BC48 string=0x000000000040BC4C "4"
 *   insn=0x000000000040BC4C string=0x000000000040BC90 "`~@"
 *   insn=0x000000000040BC50 string=0x000000000040BC54 ""
 *   insn=0x000000000040BC64 string=0x000000000040BC68 "\t@"
 *   insn=0x000000000040BC70 string=0x000000000040BC74 ""
 *   insn=0x000000000040BC84 string=0x000000000040BC88 "@"
 *   insn=0x000000000040BC94 string=0x000000000040BC98 ""
 *   insn=0x000000000040BC9C string=0x000000000040BCA0 ""
 *   insn=0x000000000040BCA8 string=0x000000000040BCAC "q"
 *   insn=0x000000000040BCBC string=0x000000000040BCEC "y"
 *   insn=0x000000000040BCD8 string=0x000000000040BCDC "@"
 *   insn=0x000000000040BCF4 string=0x000000000040BCF8 "4"
 *   insn=0x000000000040BCFC string=0x000000000040BD00 ""
 *   insn=0x000000000040BD0C string=0x000000000040BD10 "\t@"
 *   insn=0x000000000040BD1C string=0x000000000040BD20 ""
 *   insn=0x000000000040BD2C string=0x000000000040BD30 "@"
 *   insn=0x000000000040BD48 string=0x000000000040BD4C "]"
 *   insn=0x000000000040BD4C string=0x00000000001F8EC0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::InventoryItemPanel *__fastcall Caver::InventoryItemPanel::DraggableItemDidDropIntoView(
        Caver::InventoryItemPanel *this,
        Caver::GUIDraggableItem *lpsrc)
{
  Caver::InventoryItemPanel *v2; // x19
  _QWORD *v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x20
  bool v7; // w24
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x22
  _QWORD *v12; // t2
  __int64 v13; // x8
  Caver::InventoryItemPanel *v14; // x20
  int *v15; // x8
  _QWORD *v16; // x21
  int v17; // w22
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x21
  __int64 v21; // x9
  _QWORD *v22; // x22
  _BOOL4 v23; // w24
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x0
  int v28; // w8
  void *v29; // x0
  __int64 v30; // x21
  _QWORD *v31; // x8
  __int64 v32; // x8
  _QWORD *v33; // x20
  __int64 v34; // x22
  __int64 v35; // x8
  _QWORD *v36; // x20
  __int64 v37; // x8
  __int64 v38; // x8
  void (__fastcall ***v39)(_QWORD, Caver::InventoryItemPanel *); // x0
  unsigned int *v40; // x8
  int v41; // w9
  __int64 v42; // [xsp+48h] [xbp-60h] BYREF
  _QWORD *v43; // [xsp+50h] [xbp-58h]
  __int64 v44; // [xsp+60h] [xbp-48h]
  __int64 v45; // [xsp+70h] [xbp-38h]

  v2 = this;
  v45 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (_QWORD *)*((_QWORD *)this + 36);
  v5 = v4[32];
  v6 = (_QWORD *)v4[33];
  if ( v6 )
    ++v6[1];
  if ( v5 )
  {
    v7 = 0;
    goto LABEL_5;
  }
  v12 = v4 + 34;
  v10 = v4[34];
  v11 = (_QWORD *)v12[1];
  if ( v11 )
  {
    v7 = v10 == 0;
    if ( !v11[1] )
    {
      this = (Caver::InventoryItemPanel *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        this = (Caver::InventoryItemPanel *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
LABEL_5:
    if ( !v6 )
      goto LABEL_14;
    goto LABEL_6;
  }
  v7 = v10 == 0;
  if ( !v6 )
    goto LABEL_14;
LABEL_6:
  v8 = v6[1] - 1LL;
  v6[1] = v8;
  if ( !v8 )
  {
    this = (Caver::InventoryItemPanel *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    v9 = v6[2] - 1LL;
    v6[2] = v9;
    if ( !v9 )
      this = (Caver::InventoryItemPanel *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
  }
LABEL_14:
  if ( lpsrc == 0 || v7 )
    return this;
  this = (Caver::InventoryItemPanel *)__dynamic_cast(
                                        lpsrc,
                                        (const struct __class_type_info *)&`typeinfo for'Caver::GUIDraggableItem,
                                        (const struct __class_type_info *)&`typeinfo for'Caver::DraggableMenuItem,
                                        0);
  v14 = this;
  if ( !this )
    return this;
  v15 = (int *)*((_QWORD *)this + 32);
  v16 = (_QWORD *)*((_QWORD *)this + 33);
  if ( !v16 )
  {
    if ( *v15 != 3 )
      return this;
    goto LABEL_23;
  }
  v17 = *v15;
  if ( !v16[1] )
  {
    this = (Caver::InventoryItemPanel *)(*(__int64 (__fastcall **)(_QWORD))(*v16 + 16LL))(*((_QWORD *)this + 33));
    v18 = v16[2] - 1LL;
    v16[2] = v18;
    if ( !v18 )
      this = (Caver::InventoryItemPanel *)(*(__int64 (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
  }
  if ( v17 == 3 )
  {
LABEL_23:
    this = (Caver::InventoryItemPanel *)Caver::MenuItemSlot::SetSelected(
                                          *(Caver::MenuItemSlot **)(*((_QWORD *)v2 + 38) + 272LL),
                                          0);
    v19 = *((_QWORD *)v14 + 32);
    v20 = (_QWORD *)*((_QWORD *)v14 + 33);
    if ( v20 )
      ++v20[1];
    v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 38) + 272LL) + 256LL);
    v22 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)v2 + 38) + 272LL) + 264LL);
    if ( v22 )
    {
      v23 = v19 != v21;
      if ( !v22[1] )
      {
        this = (Caver::InventoryItemPanel *)(*(__int64 (__fastcall **)(_QWORD))(*v22 + 16LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 38) + 272LL) + 264LL));
        v24 = v22[2] - 1LL;
        v22[2] = v24;
        if ( !v24 )
          this = (Caver::InventoryItemPanel *)(*(__int64 (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
      }
    }
    else
    {
      v23 = v19 != v21;
    }
    if ( v20 )
    {
      v25 = v20[1] - 1LL;
      v20[1] = v25;
      if ( !v25 )
      {
        this = (Caver::InventoryItemPanel *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
        v26 = v20[2] - 1LL;
        v20[2] = v26;
        if ( !v26 )
          this = (Caver::InventoryItemPanel *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
      }
    }
    if ( v23 )
    {
      Caver::AudioSystem::sharedSystem(this);
      sub_566BB8((int)&v42, "click");
      Caver::AudioSystem::PlaySoundEffectWithName();
      v27 = v44;
      if ( v44 )
      {
        v28 = *(_DWORD *)(v44 + 8) - 1;
        *(_DWORD *)(v44 + 8) = v28;
        if ( !v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      }
      v29 = (void *)(v42 - 24);
      if ( (__int64 *)(v42 - 24) != &qword_6FD2E0 )
      {
        v40 = (unsigned int *)(v42 - 8);
        if ( &pthread_create )
        {
          do
            v41 = __ldaxr(v40);
          while ( __stlxr(v41 - 1, v40) );
        }
        else
        {
          v41 = (*v40)--;
        }
        if ( v41 <= 0 )
          operator delete(v29);
      }
      v30 = *((_QWORD *)v14 + 32);
      v42 = v30;
      v31 = (_QWORD *)*((_QWORD *)v14 + 33);
      v43 = v31;
      if ( v31 )
        ++v31[1];
      v32 = *(_QWORD *)(*((_QWORD *)v2 + 38) + 272LL);
      v34 = *(_QWORD *)(v32 + 256);
      v33 = *(_QWORD **)(v32 + 264);
      if ( v33 )
      {
        if ( !v33[1] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
          v35 = v33[2] - 1LL;
          v33[2] = v35;
          if ( !v35 )
            (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
        }
      }
      if ( v30 != v34 )
      {
        Caver::InventoryTrinketSlot::SetTrinket();
        Caver::InventoryItemPanel::UpdateLabels(v2);
      }
      v36 = v43;
      if ( v43 )
      {
        v37 = v43[1] - 1LL;
        v43[1] = v37;
        if ( !v37 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
          v38 = v36[2] - 1LL;
          v36[2] = v38;
          if ( !v38 )
            (*(void (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
        }
      }
      v39 = (void (__fastcall ***)(_QWORD, Caver::InventoryItemPanel *))*((_QWORD *)v2 + 31);
      if ( v39 )
        (**v39)(v39, v2);
      return (Caver::InventoryItemPanel *)Caver::InventoryItemPanel::UpdateLabels(v2);
    }
  }
  return this;
}

