/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004005D0
 * Mangled: _ZN5Caver17DraggableMenuItem12InitWithItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x00000000001F8BA0  Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000400394  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>(boost::shared_ptr<Caver::MenuItemSlot> const*,Caver::MenuItemSlot *)
 *
 * Callees: 13
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6360  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,bool)
 *   0x00000000001F95E0  Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&,bool)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 136
 *   insn=0x00000000004005E4 string=0x00000000004005E8 "V"
 *   insn=0x0000000000400600 string=0x0000000000400604 "\n"
 *   insn=0x0000000000400600 string=0x0000000000400610 "t"
 *   insn=0x0000000000400604 string=0x0000000000400608 "J"
 *   insn=0x0000000000400608 string=0x000000000040060C "\n"
 *   insn=0x0000000000400610 string=0x0000000000400614 "i""
 *   insn=0x0000000000400614 string=0x0000000000400618 "4"
 *   insn=0x0000000000400618 string=0x000000000040065C "="
 *   insn=0x000000000040061C string=0x0000000000400620 ""
 *   insn=0x0000000000400630 string=0x0000000000400634 "\t@"
 *   insn=0x000000000040063C string=0x0000000000400640 ""
 *   insn=0x0000000000400650 string=0x0000000000400654 "@"
 *   insn=0x000000000040065C string=0x00000000001FA350 "0'"
 *   insn=0x0000000000400674 string=0x00000000005922AF "item_"
 *   insn=0x0000000000400680 string=0x0000000000400684 "kf"
 *   insn=0x0000000000400694 string=0x0000000000593C4B "_nobg"
 *   insn=0x00000000004006A0 string=0x00000000004006A4 "L"
 *   insn=0x00000000004006B8 string=0x00000000004006BC "tB"
 *   insn=0x00000000004006D0 string=0x00000000004006D4 "#"
 *   insn=0x00000000004006D4 string=0x00000000001F6360 "0'"
 *   insn=0x00000000004006DC string=0x00000000004006E0 "@"
 *   insn=0x00000000004006E0 string=0x00000000004006E4 ""
 *   insn=0x00000000004006E4 string=0x00000000004006E8 ""
 *   insn=0x00000000004006EC string=0x00000000004006F0 ""
 *   insn=0x00000000004006F0 string=0x00000000004006F4 ""
 *   insn=0x00000000004006FC string=0x0000000000400700 "5"
 *   insn=0x000000000040070C string=0x0000000000400710 "A"
 *   insn=0x0000000000400710 string=0x0000000000400758 ")"
 *   insn=0x0000000000400720 string=0x000000000040077C ")"
 *   insn=0x0000000000400730 string=0x00000000004007A0 ")"
 *   insn=0x0000000000400738 string=0x000000000040073C "@"
 *   insn=0x0000000000400744 string=0x0000000000400748 ""
 *   insn=0x0000000000400748 string=0x000000000040074C ""
 *   insn=0x0000000000400750 string=0x0000000000400754 "9"
 *   insn=0x0000000000400758 string=0x000000000040075C ")=G"
 *   insn=0x000000000040075C string=0x0000000000400760 "!"
 *   insn=0x0000000000400760 string=0x0000000000400764 "\t"
 *   insn=0x0000000000400764 string=0x0000000000400768 "\t"
 *   insn=0x0000000000400764 string=0x00000000004007C4 "\t"
 *   insn=0x0000000000400768 string=0x000000000040076C "*"
 *   insn=0x000000000040076C string=0x0000000000400770 "\n"
 *   insn=0x0000000000400778 string=0x00000000004007D0 "?"
 *   insn=0x000000000040077C string=0x0000000000400780 ")=G"
 *   insn=0x0000000000400780 string=0x0000000000400784 "!"
 *   insn=0x0000000000400788 string=0x000000000040078C "\t"
 *   insn=0x0000000000400788 string=0x00000000004007E4 "\t"
 *   insn=0x000000000040078C string=0x0000000000400790 "*"
 *   insn=0x0000000000400790 string=0x0000000000400794 "\n"
 *   insn=0x000000000040079C string=0x00000000004007F0 "?"
 *   insn=0x00000000004007A0 string=0x00000000004007A4 ")=G"
 *   insn=0x00000000004007A4 string=0x00000000004007A8 "!"
 *   insn=0x00000000004007AC string=0x00000000004007B0 "\t"
 *   insn=0x00000000004007AC string=0x0000000000400804 "\t"
 *   insn=0x00000000004007B0 string=0x00000000004007B4 "*"
 *   insn=0x00000000004007B4 string=0x00000000004007B8 "\n"
 *   insn=0x00000000004007C0 string=0x0000000000400810 "?"
 *   insn=0x00000000004007C4 string=0x00000000004007C8 "*"
 *   insn=0x00000000004007C8 string=0x00000000004007CC "\n"
 *   insn=0x00000000004007E4 string=0x00000000004007E8 "*"
 *   insn=0x00000000004007E8 string=0x00000000004007EC "\n"
 *   insn=0x0000000000400804 string=0x0000000000400808 "*"
 *   insn=0x0000000000400808 string=0x000000000040080C "\n"
 *   insn=0x0000000000400828 string=0x000000000040082C "\t"
 *   insn=0x0000000000400830 string=0x0000000000400834 "7"
 *   insn=0x000000000040083C string=0x0000000000400840 "$"
 *   insn=0x0000000000400854 string=0x0000000000400858 "v"
 *   insn=0x0000000000400858 string=0x00000000001FDA30 "0'"
 *   insn=0x0000000000400870 string=0x0000000000400874 "["
 *   insn=0x0000000000400874 string=0x0000000000400878 "h"
 *   insn=0x0000000000400874 string=0x00000000001F95E0 "0'"
 *   insn=0x0000000000400880 string=0x0000000000400884 "}@"
 *   insn=0x00000000004008B4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004008BC string=0x00000000004008C0 ""
 *   insn=0x00000000004008C0 string=0x00000000004008C4 "\t\t@"
 *   insn=0x00000000004008C4 string=0x00000000004008C8 ")"
 *   insn=0x00000000004008C8 string=0x00000000004008CC "\t\t"
 *   insn=0x00000000004008D0 string=0x00000000004008D4 "\t"
 *   insn=0x00000000004008D4 string=0x00000000004008D8 ")"
 *   insn=0x00000000004008DC string=0x00000000004008E0 " "
 *   insn=0x00000000004008EC string=0x00000000004008F0 "*"
 *   insn=0x00000000004008F0 string=0x00000000004008F4 "J"
 *   insn=0x00000000004008F8 string=0x00000000004008FC "(a"
 *   insn=0x0000000000400904 string=0x0000000000400908 "*"
 *   insn=0x0000000000400908 string=0x000000000040090C "J=G"
 *   insn=0x000000000040090C string=0x0000000000400910 ")!"
 *   insn=0x0000000000400914 string=0x0000000000400918 "*"
 *   insn=0x0000000000400914 string=0x000000000040092C "*"
 *   insn=0x0000000000400918 string=0x000000000040091C "K"
 *   insn=0x000000000040091C string=0x0000000000400920 "+"
 *   insn=0x0000000000400928 string=0x0000000000400938 "_"
 *   insn=0x000000000040092C string=0x0000000000400930 "K"
 *   insn=0x0000000000400930 string=0x0000000000400934 "+"
 *   insn=0x0000000000400944 string=0x0000000000400948 "F"
 *   insn=0x0000000000400948 string=0x0000000000400A60 "Q"
 *   insn=0x000000000040094C string=0x0000000000400950 "\n"
 *   insn=0x0000000000400960 string=0x0000000000400964 ")"
 *   insn=0x0000000000400964 string=0x0000000000400968 ")"
 *   insn=0x0000000000400974 string=0x0000000000400A04 ")"
 *   insn=0x0000000000400978 string=0x000000000040097C ")"
 *   insn=0x000000000040097C string=0x0000000000400980 ")"
 *   insn=0x000000000040098C string=0x00000000004009E0 ")"
 *   insn=0x0000000000400990 string=0x0000000000400994 ")"
 *   insn=0x0000000000400994 string=0x0000000000400998 ")"
 *   insn=0x00000000004009A4 string=0x00000000004009A8 ")"
 *   insn=0x00000000004009A8 string=0x00000000004009AC ")=G"
 *   insn=0x00000000004009AC string=0x00000000004009B0 "!"
 *   insn=0x00000000004009B4 string=0x00000000004009B8 "\t"
 *   insn=0x00000000004009B4 string=0x0000000000400A68 "\t"
 *   insn=0x00000000004009B8 string=0x00000000004009BC "*"
 *   insn=0x00000000004009BC string=0x00000000004009C0 "\n"
 *   insn=0x00000000004009C4 string=0x00000000004009C8 "?"
 *   insn=0x00000000004009C8 string=0x00000000004009CC "l"
 *   insn=0x00000000004009D0 string=0x00000000004009D4 "t"
 *   insn=0x00000000004009E0 string=0x00000000004009E4 ")=G"
 *   insn=0x00000000004009E4 string=0x00000000004009E8 "!"
 *   insn=0x00000000004009EC string=0x00000000004009F0 "\t"
 *   insn=0x00000000004009EC string=0x0000000000400A28 "\t"
 *   insn=0x00000000004009F0 string=0x00000000004009F4 "*"
 *   insn=0x00000000004009F4 string=0x00000000004009F8 "\n"
 *   insn=0x00000000004009FC string=0x0000000000400A00 ""
 *   insn=0x0000000000400A00 string=0x0000000000400A34 "?"
 *   insn=0x0000000000400A04 string=0x0000000000400A08 ")=G"
 *   insn=0x0000000000400A08 string=0x0000000000400A0C "!"
 *   insn=0x0000000000400A10 string=0x0000000000400A14 "\t"
 *   insn=0x0000000000400A10 string=0x0000000000400A48 "\t"
 *   insn=0x0000000000400A14 string=0x0000000000400A18 "*"
 *   insn=0x0000000000400A18 string=0x0000000000400A1C "\n"
 *   insn=0x0000000000400A24 string=0x0000000000400A54 "?"
 *   insn=0x0000000000400A28 string=0x0000000000400A2C "*"
 *   insn=0x0000000000400A2C string=0x0000000000400A30 "\n"
 *   insn=0x0000000000400A3C string=0x0000000000400A40 "Y"
 *   insn=0x0000000000400A48 string=0x0000000000400A4C "*"
 *   insn=0x0000000000400A4C string=0x0000000000400A50 "\n"
 *   insn=0x0000000000400A68 string=0x0000000000400A6C "*"
 *   insn=0x0000000000400A6C string=0x0000000000400A70 "\n"
 *   insn=0x0000000000400A70 string=0x0000000000400A74 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DraggableMenuItem::InitWithItem(Caver::TextureLibrary *a1, __int64 *a2)
{
  Caver::TextureLibrary *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  float **v9; // x20
  __int64 v10; // x0
  int v11; // w8
  void *v12; // x0
  void *v13; // x0
  void *v14; // x0
  float *v15; // x0
  float v16; // w21
  unsigned int v17; // w23
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  float v25[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v26; // [xsp+8h] [xbp-68h] BYREF
  unsigned __int64 v27; // [xsp+10h] [xbp-60h]
  __int64 v28; // [xsp+18h] [xbp-58h] BYREF
  __int64 v29; // [xsp+20h] [xbp-50h] BYREF
  __int64 v30; // [xsp+28h] [xbp-48h] BYREF
  __int64 v31[2]; // [xsp+30h] [xbp-40h] BYREF

  v3 = a1;
  v31[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a2;
  v4 = a2[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)*((_QWORD *)a1 + 33);
  *((_QWORD *)a1 + 32) = v5;
  *((_QWORD *)a1 + 33) = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      a1 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        a1 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  Caver::TextureLibrary::sharedLibrary(a1);
  sub_56A528(&v28, *a2 + 8);
  ((void (__fastcall *)(__int64 *__return_ptr, char *, __int64 *))loc_25A030)(&v29, "item_", &v28);
  sub_56A528(&v30, &v29);
  sub_5677D4(&v30, "_nobg", 5);
  Caver::TextureLibrary::TextureForName();
  v9 = (float **)((char *)v3 + 272);
  v26 = 0;
  v27 = 0;
  Caver::GUITexturedRect::InitWithTexture();
  v10 = v31[0];
  if ( v31[0] )
  {
    v11 = *(_DWORD *)(v31[0] + 8) - 1;
    *(_DWORD *)(v31[0] + 8) = v11;
    if ( !v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  v12 = (void *)(v30 - 24);
  if ( (__int64 *)(v30 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v30 - 8);
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
      operator delete(v12);
  }
  v13 = (void *)(v29 - 24);
  if ( (__int64 *)(v29 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v29 - 8);
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
      operator delete(v13);
  }
  v14 = (void *)(v28 - 24);
  if ( (__int64 *)(v28 - 24) == &qword_6FD2E0 )
    goto LABEL_13;
  v22 = (unsigned int *)(v28 - 8);
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
  if ( v23 > 0 )
  {
LABEL_13:
    v15 = *v9;
    if ( !*v9 )
    {
LABEL_34:
      v16 = 0.0;
      v17 = 0;
      goto LABEL_35;
    }
  }
  else
  {
    operator delete(v14);
    v15 = *v9;
    if ( !*v9 )
      goto LABEL_34;
  }
  v16 = v15[21];
  v17 = *((_DWORD *)v15 + 22);
  if ( !*((_DWORD *)v15 + 2) )
    (*(void (__fastcall **)(float *))(*(_QWORD *)v15 + 8LL))(v15);
LABEL_35:
  v25[1] = -10.0;
  v25[0] = v16 * -0.5;
  Caver::Vector2::Rounded(v31, (Caver::Vector2 *)v25);
  v26 = v31[0];
  v27 = __PAIR64__(v17, LODWORD(v16));
  Caver::GUITexturedRect::CreateWithBounds(
    (Caver::TextureLibrary *)((char *)v3 + 272),
    (const Caver::Rectangle *)&v26,
    0);
  return (*(__int64 (__fastcall **)(Caver::TextureLibrary *, __int64 *))(*(_QWORD *)v3 + 248LL))(v3, &v26);
}

