/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A35D8
 * Mangled: _ZN5Caver9GUIWindow24DragAndDropItemWithTouchERKNS_7FWTouchERKN5boost10shared_ptrINS_16GUIDraggableItemEEE
 * Demangled: Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F59C0  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<ulong const,Caver::FWTouch>>,ulong const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6C60  Caver::FWTouch::operator=(Caver::FWTouch const&)
 *   0x00000000001F6E10  std::map<ulong,boost::shared_ptr<Caver::GUIView>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::operator[](ulong const&)
 *   0x00000000001F7710  Caver::GUIDraggableItem::SetLocationInSuperview(Caver::Vector2 const&)
 *   0x00000000001F8680  std::map<ulong,Caver::FWTouch,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::operator[](ulong const&)
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x0000000000200480  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,ulong const&)
 *   0x00000000002025C0  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_create_node(std::pair<ulong const,Caver::FWTouch> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 102
 *   insn=0x00000000004A35EC string=0x00000000004A35F0 "X"
 *   insn=0x00000000004A35F0 string=0x00000000004A35F4 ""
 *   insn=0x00000000004A35FC string=0x00000000004A3600 "v"
 *   insn=0x00000000004A361C string=0x00000000001F6E10 "0'"
 *   insn=0x00000000004A3624 string=0x00000000004A3628 ""
 *   insn=0x00000000004A3628 string=0x00000000004A362C "@"
 *   insn=0x00000000004A3630 string=0x00000000004A3634 "h"
 *   insn=0x00000000004A3638 string=0x00000000004A363C "1@"
 *   insn=0x00000000004A364C string=0x00000000004A3650 "*"
 *   insn=0x00000000004A3650 string=0x00000000004A3654 "J"
 *   insn=0x00000000004A3654 string=0x00000000004A3658 "*"
 *   insn=0x00000000004A3668 string=0x00000000004A366C "7"
 *   insn=0x00000000004A3670 string=0x00000000004A3674 ""
 *   insn=0x00000000004A3684 string=0x00000000004A3688 "\t@"
 *   insn=0x00000000004A3690 string=0x00000000004A3694 ""
 *   insn=0x00000000004A36A4 string=0x00000000004A36A8 "@"
 *   insn=0x00000000004A36B0 string=0x00000000004A36B4 "`B"
 *   insn=0x00000000004A36C0 string=0x00000000001F8680 "0'"
 *   insn=0x00000000004A36C4 string=0x00000000004A36C8 "fM"
 *   insn=0x00000000004A36C8 string=0x00000000001F6C60 "0'"
 *   insn=0x00000000004A36E4 string=0x00000000004A36E8 "\n"
 *   insn=0x00000000004A36E8 string=0x00000000004A36EC "J"
 *   insn=0x00000000004A36EC string=0x00000000004A36F0 "\n"
 *   insn=0x00000000004A36F4 string=0x00000000004A36F8 "\t "
 *   insn=0x00000000004A36F8 string=0x00000000004A36FC "6"
 *   insn=0x00000000004A3700 string=0x00000000004A3704 ""
 *   insn=0x00000000004A3714 string=0x00000000004A3718 "\t@"
 *   insn=0x00000000004A3720 string=0x00000000004A3724 ""
 *   insn=0x00000000004A3734 string=0x00000000004A3738 "@"
 *   insn=0x00000000004A374C string=0x00000000004A3750 "|r"
 *   insn=0x00000000004A375C string=0x00000000004A3760 ""
 *   insn=0x00000000004A375C string=0x00000000001F7710 "0'"
 *   insn=0x00000000004A3788 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A3790 string=0x00000000004A3794 "4"
 *   insn=0x00000000004A3798 string=0x00000000004A379C ""
 *   insn=0x00000000004A37A8 string=0x00000000004A37AC "\t@"
 *   insn=0x00000000004A37B8 string=0x00000000004A37BC ""
 *   insn=0x00000000004A37C8 string=0x00000000004A37CC "@"
 *   insn=0x00000000004A37D8 string=0x00000000004A37DC ":x"
 *   insn=0x00000000004A37F8 string=0x00000000004A37FC "X"
 *   insn=0x00000000004A37FC string=0x00000000004A3800 ""
 *   insn=0x00000000004A3810 string=0x00000000004A3814 "H"
 *   insn=0x00000000004A3814 string=0x00000000004A3818 ")"
 *   insn=0x00000000004A381C string=0x00000000004A3820 "\n"
 *   insn=0x00000000004A3820 string=0x00000000004A3824 "a"
 *   insn=0x00000000004A3828 string=0x00000000004A382C "_"
 *   insn=0x00000000004A382C string=0x00000000004A3830 "j1"
 *   insn=0x00000000004A3830 string=0x00000000004A3834 "s2"
 *   insn=0x00000000004A3834 string=0x00000000004A3838 "H"
 *   insn=0x00000000004A3838 string=0x00000000004A383C "("
 *   insn=0x00000000004A3840 string=0x00000000004A3844 " "
 *   insn=0x00000000004A3844 string=0x00000000004A3848 "("
 *   insn=0x00000000004A3844 string=0x00000000004A3868 "("
 *   insn=0x00000000004A3848 string=0x00000000004A384C "i"
 *   insn=0x00000000004A3854 string=0x00000000004A3858 ";"
 *   insn=0x00000000004A3858 string=0x00000000004A3944 ""
 *   insn=0x00000000004A3860 string=0x00000000004A3864 "!"
 *   insn=0x00000000004A38B0 string=0x00000000004A38B4 "KG"
 *   insn=0x00000000004A38B4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A38C0 string=0x00000000004A38C4 "`\n"
 *   insn=0x00000000004A38C4 string=0x00000000004A38C8 "h"
 *   insn=0x00000000004A38CC string=0x00000000004A38D0 "\t"
 *   insn=0x00000000004A38D0 string=0x00000000004A38D4 ")"
 *   insn=0x00000000004A38D4 string=0x00000000004A38D8 "\t"
 *   insn=0x00000000004A38F0 string=0x00000000004A38F4 ""
 *   insn=0x00000000004A38FC string=0x00000000004A3900 "4"
 *   insn=0x00000000004A3904 string=0x00000000004A3908 ""
 *   insn=0x00000000004A3914 string=0x00000000004A3918 "\t@"
 *   insn=0x00000000004A3924 string=0x00000000004A3928 ""
 *   insn=0x00000000004A3934 string=0x00000000004A3938 "@"
 *   insn=0x00000000004A3950 string=0x00000000004A3954 "`"
 *   insn=0x00000000004A3950 string=0x00000000004A3970 "XJ"
 *   insn=0x00000000004A397C string=0x00000000004A3980 "4"
 *   insn=0x00000000004A3984 string=0x00000000004A3988 ""
 *   insn=0x00000000004A3994 string=0x00000000004A3998 "\t@"
 *   insn=0x00000000004A39A4 string=0x00000000004A39A8 ""
 *   insn=0x00000000004A39B4 string=0x00000000004A39B8 "@"
 *   insn=0x00000000004A39C8 string=0x00000000004A39CC "`"
 *   insn=0x00000000004A39E4 string=0x00000000004A39E8 "X"
 *   insn=0x00000000004A39E8 string=0x00000000004A39EC ""
 *   insn=0x00000000004A39F0 string=0x00000000004A39F4 "t""
 *   insn=0x00000000004A39F8 string=0x00000000004A39FC "h\n@"
 *   insn=0x00000000004A39FC string=0x00000000004A3A00 "H"
 *   insn=0x00000000004A3A00 string=0x00000000004A3A04 ")"
 *   insn=0x00000000004A3A08 string=0x00000000004A3A0C "\n"
 *   insn=0x00000000004A3A0C string=0x00000000004A3A10 "a"
 *   insn=0x00000000004A3A14 string=0x00000000004A3A18 "_"
 *   insn=0x00000000004A3A18 string=0x00000000004A3A1C "j1"
 *   insn=0x00000000004A3A20 string=0x00000000004A3A24 "H"
 *   insn=0x00000000004A3A24 string=0x00000000004A3A28 "("
 *   insn=0x00000000004A3A2C string=0x00000000004A3A30 " "
 *   insn=0x00000000004A3A30 string=0x00000000004A3A34 "("
 *   insn=0x00000000004A3A30 string=0x00000000004A3A54 "("
 *   insn=0x00000000004A3A40 string=0x00000000004A3A44 "%"
 *   insn=0x00000000004A3A44 string=0x00000000004A3AD8 ""
 *   insn=0x00000000004A3A4C string=0x00000000004A3A50 "!"
 *   insn=0x00000000004A3A68 string=0x00000000001FD9E0 "0'"
 *   insn=0x00000000004A3A78 string=0x00000000001F59C0 "P'"
 *   insn=0x00000000004A3AC4 string=0x00000000004A3AC8 "v"
 *   insn=0x00000000004A3AC8 string=0x00000000004A3ACC "h"
 *   insn=0x00000000004A3ACC string=0x00000000004A3AD0 ""
 *   insn=0x00000000004A3AD0 string=0x00000000004A3AD4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::DragAndDropItemWithTouch(
        const Caver::GUIView *a1,
        Caver::FWTouch *a2,
        __int64 *a3)
{
  _QWORD *v6; // x0
  void (__fastcall *v7)(const Caver::GUIView *, __int64 *); // x8
  __int64 v8; // x9
  _QWORD *v9; // x23
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 *v12; // x0
  __int64 v13; // x8
  __int64 v14; // x9
  _QWORD *v15; // x22
  __int64 v16; // x8
  __int64 v17; // x8
  Caver::GUIDraggableItem *v18; // x21
  __int64 v20; // [xsp+E8h] [xbp-48h] BYREF
  _QWORD *v21; // [xsp+F0h] [xbp-40h]
  __int64 v22; // [xsp+F8h] [xbp-38h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v20 = *(_QWORD *)a2;
  std::map<unsigned long,boost::shared_ptr<Caver::GUIView>>::operator[]();
  (*(void (__fastcall **)(_QWORD, Caver::FWTouch *))(*(_QWORD *)*v6 + 24LL))(*v6, a2);
  v7 = *(void (__fastcall **)(const Caver::GUIView *, __int64 *))(*(_QWORD *)a1 + 96LL);
  v20 = *a3;
  v8 = a3[1];
  v21 = (_QWORD *)v8;
  if ( v8 )
    ++*(_QWORD *)(v8 + 8);
  v7(a1, &v20);
  v9 = v21;
  if ( v21 )
  {
    v10 = v21[1] - 1LL;
    v21[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  v20 = *(_QWORD *)a2;
  std::map<unsigned long,Caver::FWTouch>::operator[]();
  Caver::FWTouch::operator=();
  v20 = *(_QWORD *)a2;
  std::map<unsigned long,boost::shared_ptr<Caver::GUIView>>::operator[]();
  v14 = *a3;
  v13 = a3[1];
  if ( v13 )
    ++*(_QWORD *)(v13 + 8);
  v15 = (_QWORD *)v12[1];
  *v12 = v14;
  v12[1] = v13;
  if ( v15 )
  {
    v16 = v15[1] - 1LL;
    v15[1] = v16;
    if ( !v16 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v17 = v15[2] - 1LL;
      v15[2] = v17;
      if ( !v17 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  v18 = (Caver::GUIDraggableItem *)*a3;
  Caver::FWTouch::LocationInView(&v20, a2, a1);
  return Caver::GUIDraggableItem::SetLocationInSuperview(v18, (const Caver::Vector2 *)&v20);
}

