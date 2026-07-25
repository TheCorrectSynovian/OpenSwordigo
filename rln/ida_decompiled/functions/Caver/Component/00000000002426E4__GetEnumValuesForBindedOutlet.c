/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002426E4
 * Mangled: _ZNK5Caver9Component28GetEnumValuesForBindedOutletElPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001F5090  Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F95A0  Caver::SceneObject::GetComponentsWithInterface(long,std::vector<Caver::Component *,std::allocator<Caver::Component *>> *)
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FF970  Caver::Component::ValueForBindedOutlet(boost::intrusive_ptr<Caver::Component> const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000242CC4  `non-virtual thunk to'Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 120
 *   insn=0x00000000002426FC string=0x0000000000242700 "X"
 *   insn=0x0000000000242700 string=0x0000000000242704 ""
 *   insn=0x0000000000242724 string=0x00000000001F95A0 "0'"
 *   insn=0x0000000000242730 string=0x0000000000242734 "a"
 *   insn=0x0000000000242730 string=0x00000000001FB2C0 "0'"
 *   insn=0x0000000000242734 string=0x0000000000242738 "?"
 *   insn=0x0000000000242740 string=0x0000000000242744 "("
 *   insn=0x0000000000242748 string=0x000000000024274C "("
 *   insn=0x0000000000242750 string=0x0000000000242754 "("
 *   insn=0x0000000000242758 string=0x000000000024275C "\t"
 *   insn=0x000000000024275C string=0x0000000000242760 ")"
 *   insn=0x0000000000242760 string=0x0000000000242764 "\t"
 *   insn=0x0000000000242768 string=0x000000000024276C "("
 *   insn=0x0000000000242770 string=0x0000000000242774 "("
 *   insn=0x0000000000242778 string=0x000000000024277C "\t"
 *   insn=0x0000000000242778 string=0x0000000000242788 "("
 *   insn=0x000000000024277C string=0x0000000000242780 ")"
 *   insn=0x0000000000242780 string=0x0000000000242784 "\t"
 *   insn=0x0000000000242788 string=0x000000000024278C "h"
 *   insn=0x00000000002427A0 string=0x00000000002427A4 "K"
 *   insn=0x00000000002427A8 string=0x00000000002427AC "5"
 *   insn=0x00000000002427B0 string=0x00000000002427B4 ""
 *   insn=0x00000000002427C0 string=0x00000000002427C4 "\t@"
 *   insn=0x00000000002427D0 string=0x00000000002427D4 ""
 *   insn=0x00000000002427E0 string=0x00000000002427E4 "@"
 *   insn=0x00000000002427F0 string=0x00000000002427F4 "5"
 *   insn=0x00000000002427F8 string=0x00000000002427FC ""
 *   insn=0x0000000000242808 string=0x000000000024280C "\t@"
 *   insn=0x0000000000242818 string=0x000000000024281C ""
 *   insn=0x0000000000242828 string=0x000000000024282C "@"
 *   insn=0x000000000024283C string=0x0000000000242840 "@"
 *   insn=0x0000000000242840 string=0x00000000002429A8 "v"
 *   insn=0x0000000000242848 string=0x000000000024284C "`\n"
 *   insn=0x0000000000242858 string=0x000000000024285C ""
 *   insn=0x0000000000242868 string=0x000000000024286C "A"
 *   insn=0x000000000024286C string=0x0000000000242870 "a"
 *   insn=0x0000000000242870 string=0x0000000000242874 "?"
 *   insn=0x000000000024287C string=0x0000000000242880 "("
 *   insn=0x0000000000242884 string=0x0000000000242888 "("
 *   insn=0x000000000024288C string=0x0000000000242890 "("
 *   insn=0x0000000000242894 string=0x0000000000242898 "\t"
 *   insn=0x0000000000242898 string=0x000000000024289C ")"
 *   insn=0x000000000024289C string=0x00000000002428A0 "\t"
 *   insn=0x00000000002428A4 string=0x00000000002428A8 "("
 *   insn=0x00000000002428AC string=0x00000000002428B0 "("
 *   insn=0x00000000002428B4 string=0x00000000002428B8 "\t"
 *   insn=0x00000000002428B4 string=0x00000000002428C4 "("
 *   insn=0x00000000002428B8 string=0x00000000002428BC ")"
 *   insn=0x00000000002428BC string=0x00000000002428C0 "\t"
 *   insn=0x00000000002428C4 string=0x00000000002428C8 "h"
 *   insn=0x00000000002428E4 string=0x00000000002428E8 "7"
 *   insn=0x00000000002428EC string=0x00000000002428F0 ""
 *   insn=0x00000000002428FC string=0x0000000000242900 "\t@"
 *   insn=0x000000000024290C string=0x0000000000242910 ""
 *   insn=0x000000000024291C string=0x0000000000242920 "@"
 *   insn=0x000000000024292C string=0x0000000000242930 "7"
 *   insn=0x0000000000242930 string=0x0000000000242974 "5"
 *   insn=0x0000000000242934 string=0x0000000000242938 ""
 *   insn=0x0000000000242944 string=0x0000000000242948 "\t@"
 *   insn=0x0000000000242954 string=0x0000000000242958 ""
 *   insn=0x0000000000242964 string=0x0000000000242968 "@"
 *   insn=0x0000000000242978 string=0x000000000024297C ""
 *   insn=0x0000000000242988 string=0x000000000024298C ""
 *   insn=0x0000000000242998 string=0x000000000024299C "?"
 *   insn=0x000000000024299C string=0x00000000002429A0 "!"
 *   insn=0x00000000002429A8 string=0x00000000002429B4 ""
 *   insn=0x00000000002429AC string=0x00000000002429B0 "@"
 *   insn=0x00000000002429B0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002429C0 string=0x00000000002429E0 "<"
 *   insn=0x00000000002429E0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002429F0 string=0x00000000002429F4 ""
 *   insn=0x00000000002429F8 string=0x00000000002429FC "A"
 *   insn=0x0000000000242A00 string=0x0000000000242A04 "\t@"
 *   insn=0x0000000000242A10 string=0x0000000000242A14 ""
 *   insn=0x0000000000242A18 string=0x0000000000242A1C "A"
 *   insn=0x0000000000242A20 string=0x0000000000242A24 "@"
 *   insn=0x0000000000242A3C string=0x0000000000242A40 "4"
 *   insn=0x0000000000242A44 string=0x0000000000242A48 ""
 *   insn=0x0000000000242A54 string=0x0000000000242A58 "\t@"
 *   insn=0x0000000000242A64 string=0x0000000000242A68 ""
 *   insn=0x0000000000242A74 string=0x0000000000242A78 "@"
 *   insn=0x0000000000242A8C string=0x0000000000242A90 ""
 *   insn=0x0000000000242A94 string=0x0000000000242A98 "a"
 *   insn=0x0000000000242A9C string=0x0000000000242AA0 "\t@"
 *   insn=0x0000000000242AAC string=0x0000000000242AB0 ""
 *   insn=0x0000000000242AB4 string=0x0000000000242AB8 "a"
 *   insn=0x0000000000242ABC string=0x0000000000242AC0 "@"
 *   insn=0x0000000000242AC8 string=0x0000000000242ACC "v"
 *   insn=0x0000000000242AD4 string=0x0000000000242AD8 "4"
 *   insn=0x0000000000242ADC string=0x0000000000242AE0 ""
 *   insn=0x0000000000242AEC string=0x0000000000242AF0 "\t@"
 *   insn=0x0000000000242AFC string=0x0000000000242B00 ""
 *   insn=0x0000000000242B0C string=0x0000000000242B10 "@"
 *   insn=0x0000000000242B18 string=0x0000000000242B1C "h"
 *   insn=0x0000000000242B34 string=0x0000000000242B38 "^"
 *   insn=0x0000000000242B44 string=0x0000000000242C80 "5"
 *   insn=0x0000000000242B48 string=0x0000000000242B4C ""
 *   insn=0x0000000000242B50 string=0x0000000000242B54 "a\t"
 *   insn=0x0000000000242B58 string=0x0000000000242B5C "\t@"
 *   insn=0x0000000000242B68 string=0x0000000000242B6C ""
 *   insn=0x0000000000242B70 string=0x0000000000242B74 "a"
 *   insn=0x0000000000242B78 string=0x0000000000242B7C "@"
 *   insn=0x0000000000242B84 string=0x0000000000242B88 ">"
 *   insn=0x0000000000242B94 string=0x0000000000242B98 "4"
 *   insn=0x0000000000242B9C string=0x0000000000242BA0 ""
 *   insn=0x0000000000242BAC string=0x0000000000242BB0 "\t@"
 *   insn=0x0000000000242BBC string=0x0000000000242BC0 ""
 *   insn=0x0000000000242BCC string=0x0000000000242BD0 "@"
 *   insn=0x0000000000242BE4 string=0x0000000000242BE8 ""
 *   insn=0x0000000000242BF4 string=0x0000000000242BF8 "\t@"
 *   insn=0x0000000000242C04 string=0x0000000000242C08 ""
 *   insn=0x0000000000242C14 string=0x0000000000242C18 "@"
 *   insn=0x0000000000242C2C string=0x0000000000242C30 "t"
 *   insn=0x0000000000242C34 string=0x0000000000242C38 ""
 *   insn=0x0000000000242C44 string=0x0000000000242C48 "\t@"
 *   insn=0x0000000000242C54 string=0x0000000000242C58 ""
 *   insn=0x0000000000242C64 string=0x0000000000242C68 "@"
 *   insn=0x0000000000242C84 string=0x0000000000242C88 ""
 *   insn=0x0000000000242C94 string=0x0000000000242C98 ""
 *   insn=0x0000000000242CA4 string=0x0000000000242CA8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Component::GetEnumValuesForBindedOutlet(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // w1
  __int64 v6; // x1
  _QWORD *v7; // x8
  _QWORD *v8; // x8
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x22
  _QWORD *v16; // x25
  _DWORD *v17; // x21
  __int64 v18; // x1
  _QWORD *v19; // x8
  _QWORD *v20; // x8
  _QWORD *v21; // x23
  __int64 v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x23
  __int64 v25; // x8
  __int64 v26; // x8
  int v27; // w8
  __int64 v28; // [xsp+8h] [xbp-88h] BYREF
  __int64 v29; // [xsp+10h] [xbp-80h]
  _QWORD *v30; // [xsp+18h] [xbp-78h]
  __int64 v31; // [xsp+20h] [xbp-70h]
  _QWORD *v32; // [xsp+28h] [xbp-68h]
  void *p; // [xsp+30h] [xbp-60h]
  _QWORD *v34; // [xsp+38h] [xbp-58h]
  __int64 v35; // [xsp+40h] [xbp-50h]
  __int64 v36; // [xsp+48h] [xbp-48h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v34 = 0;
  v35 = 0;
  p = 0;
  Caver::SceneObject::GetComponentsWithInterface();
  Caver::BindingValue::ValueWithInt(&v28, 0, v5);
  v6 = *(_QWORD *)(a3 + 8);
  if ( v6 == *(_QWORD *)(a3 + 16) )
  {
    std::vector<Caver::BindingValue>::_M_insert_aux();
    v9 = v32;
    if ( !v32 )
      goto LABEL_12;
    goto LABEL_9;
  }
  *(_DWORD *)v6 = v28;
  *(_QWORD *)(v6 + 8) = v29;
  v7 = v30;
  *(_QWORD *)(v6 + 16) = v30;
  if ( v7 )
    ++v7[1];
  *(_QWORD *)(v6 + 24) = v31;
  v8 = v32;
  *(_QWORD *)(v6 + 32) = v32;
  if ( v8 )
    ++v8[1];
  *(_QWORD *)(a3 + 8) = v6 + 40;
  v9 = v32;
  if ( v32 )
  {
LABEL_9:
    v10 = v9[1] - 1LL;
    v9[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
LABEL_12:
  v12 = v30;
  if ( v30 )
  {
    v13 = v30[1] - 1LL;
    v30[1] = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  v15 = p;
  v16 = v34;
  if ( p != v34 )
  {
    while ( 1 )
    {
      v17 = (_DWORD *)*v15;
      if ( *v15 != a1 )
        break;
LABEL_38:
      if ( v16 == ++v15 )
      {
        v15 = p;
        goto LABEL_40;
      }
    }
    if ( v17 )
      ++v17[2];
    Caver::Component::ValueForBindedOutlet();
    v18 = *(_QWORD *)(a3 + 8);
    if ( v18 == *(_QWORD *)(a3 + 16) )
    {
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v21 = v32;
      if ( !v32 )
      {
LABEL_31:
        v24 = v30;
        if ( v30 )
        {
          v25 = v30[1] - 1LL;
          v30[1] = v25;
          if ( !v25 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
            v26 = v24[2] - 1LL;
            v24[2] = v26;
            if ( !v26 )
              (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
          }
        }
        if ( v17 )
        {
          v27 = v17[2] - 1;
          v17[2] = v27;
          if ( !v27 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
        }
        goto LABEL_38;
      }
    }
    else
    {
      *(_DWORD *)v18 = v28;
      *(_QWORD *)(v18 + 8) = v29;
      v19 = v30;
      *(_QWORD *)(v18 + 16) = v30;
      if ( v19 )
        ++v19[1];
      *(_QWORD *)(v18 + 24) = v31;
      v20 = v32;
      *(_QWORD *)(v18 + 32) = v32;
      if ( v20 )
        ++v20[1];
      *(_QWORD *)(a3 + 8) = v18 + 40;
      v21 = v32;
      if ( !v32 )
        goto LABEL_31;
    }
    v22 = v21[1] - 1LL;
    v21[1] = v22;
    if ( !v22 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
      v23 = v21[2] - 1LL;
      v21[2] = v23;
      if ( !v23 )
        (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
    }
    goto LABEL_31;
  }
LABEL_40:
  if ( v15 )
    operator delete(v15);
}

