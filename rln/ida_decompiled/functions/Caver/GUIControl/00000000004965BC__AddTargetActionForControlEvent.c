/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004965BC
 * Mangled: _ZN5Caver10GUIControl30AddTargetActionForControlEventEPvRKN5boost8functionIFvS1_PNS_8GUIEventEEEENS0_5EventE
 * Demangled: Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *
 * Callers: 2
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x0000000000496510  Caver::GUIControl::~GUIControl()
 *
 * Callees: 10
 *   0x00000000001F38C0  Caver::GUIApplication::sharedApplication(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9810  Caver::GUIApplication::CancelEventsWithTargetAndSender(void *,void *)
 *   0x0000000000202B30  std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_create_node(std::pair<int const,Caver::GUIControl::TargetAction> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000054CA60  sub_54CA60
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 77
 *   insn=0x00000000004965D0 string=0x00000000004965D4 "W"
 *   insn=0x00000000004965E8 string=0x00000000004965EC "H"
 *   insn=0x00000000004965EC string=0x00000000004965F0 ""
 *   insn=0x00000000004965F4 string=0x00000000004965F8 "H"
 *   insn=0x00000000004965F8 string=0x00000000004965FC ""
 *   insn=0x00000000004965F8 string=0x0000000000496620 "I"
 *   insn=0x00000000004965FC string=0x0000000000496600 ""
 *   insn=0x0000000000496604 string=0x0000000000496608 "@ "
 *   insn=0x0000000000496608 string=0x000000000049660C "!A"
 *   insn=0x0000000000496624 string=0x0000000000496628 "@"
 *   insn=0x0000000000496634 string=0x0000000000496638 "H"
 *   insn=0x0000000000496640 string=0x0000000000496644 ""
 *   insn=0x0000000000496644 string=0x0000000000496648 ""
 *   insn=0x000000000049664C string=0x0000000000496650 " A"
 *   insn=0x0000000000496654 string=0x0000000000496658 "!a"
 *   insn=0x0000000000496684 string=0x0000000000496688 ""
 *   insn=0x0000000000496688 string=0x00000000004966C8 "i"
 *   insn=0x000000000049668C string=0x0000000000496690 "H"
 *   insn=0x0000000000496690 string=0x0000000000496694 ""
 *   insn=0x0000000000496694 string=0x0000000000496698 ""
 *   insn=0x000000000049669C string=0x00000000004966A0 " a"
 *   insn=0x00000000004966A4 string=0x00000000004966A8 "!a"
 *   insn=0x00000000004966C8 string=0x00000000004966CC "`"
 *   insn=0x00000000004966CC string=0x00000000004966D0 "t"
 *   insn=0x00000000004966D0 string=0x00000000004966D4 ")"
 *   insn=0x00000000004966EC string=0x00000000004966F0 "i"
 *   insn=0x00000000004966F0 string=0x00000000004966F4 ")"
 *   insn=0x00000000004966F4 string=0x00000000004966F8 ")"
 *   insn=0x00000000004966FC string=0x0000000000496700 " "
 *   insn=0x000000000049671C string=0x0000000000496720 "!"
 *   insn=0x000000000049673C string=0x0000000000496740 "X"
 *   insn=0x0000000000496740 string=0x0000000000496744 "h"
 *   insn=0x0000000000496744 string=0x0000000000496748 ""
 *   insn=0x0000000000496748 string=0x000000000049674C "h"
 *   insn=0x0000000000496750 string=0x0000000000496754 "h"
 *   insn=0x0000000000496754 string=0x0000000000496758 "("
 *   insn=0x0000000000496758 string=0x000000000049675C ""
 *   insn=0x000000000049675C string=0x0000000000496760 ""
 *   insn=0x0000000000496768 string=0x000000000049676C " a"
 *   insn=0x0000000000496780 string=0x0000000000496784 "h"
 *   insn=0x0000000000496784 string=0x0000000000496788 "("
 *   insn=0x0000000000496788 string=0x000000000049678C ""
 *   insn=0x000000000049678C string=0x0000000000496790 ""
 *   insn=0x0000000000496798 string=0x000000000049679C " a"
 *   insn=0x00000000004967B0 string=0x00000000004967B4 "h"
 *   insn=0x00000000004967B4 string=0x00000000004967B8 "("
 *   insn=0x00000000004967B8 string=0x00000000004967BC ""
 *   insn=0x00000000004967BC string=0x00000000004967C0 ""
 *   insn=0x00000000004967C8 string=0x00000000004967CC " A"
 *   insn=0x0000000000496808 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000496814 string=0x0000000000496868 "("
 *   insn=0x0000000000496824 string=0x0000000000496828 "&"
 *   insn=0x0000000000496824 string=0x0000000000496898 "("
 *   insn=0x0000000000496830 string=0x0000000000496834 "h"
 *   insn=0x0000000000496834 string=0x0000000000496838 "("
 *   insn=0x0000000000496838 string=0x000000000049683C ""
 *   insn=0x000000000049683C string=0x0000000000496840 ""
 *   insn=0x0000000000496848 string=0x000000000049684C " a"
 *   insn=0x0000000000496860 string=0x0000000000496864 "h"
 *   insn=0x0000000000496868 string=0x000000000049686C ""
 *   insn=0x000000000049686C string=0x0000000000496870 ""
 *   insn=0x0000000000496878 string=0x000000000049687C " a"
 *   insn=0x0000000000496890 string=0x0000000000496894 "h"
 *   insn=0x0000000000496898 string=0x000000000049689C ""
 *   insn=0x000000000049689C string=0x00000000004968A0 ""
 *   insn=0x00000000004968A8 string=0x00000000004968AC " A"
 *   insn=0x00000000004968E8 string=0x00000000001F38C0 "P'"
 *   insn=0x00000000004968F4 string=0x00000000001F9810 "0'"
 *   insn=0x0000000000496910 string=0x0000000000496914 "K"
 *   insn=0x0000000000496928 string=0x000000000049692C "M"
 *   insn=0x0000000000496934 string=0x0000000000496938 "("
 *   insn=0x0000000000496938 string=0x000000000049693C ""
 *   insn=0x000000000049693C string=0x0000000000496940 ""
 *   insn=0x0000000000496940 string=0x0000000000496944 ""
 *   insn=0x000000000049695C string=0x0000000000496960 "T"
 *   insn=0x0000000000496960 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000496964 string=0x0000000000496968 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIControl::AddTargetActionForControlEvent(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x21
  __int64 *v9; // x9
  _BOOL4 v10; // w22
  __int64 node; // x0
  __int64 result; // x0
  __int64 (__fastcall *v13)(__int128 *, __int128 *, __int64); // x8
  __int64 (__fastcall *v14)(__int128 *, __int128 *, __int64); // x8
  __int64 (__fastcall *v15)(__int128 *, __int128 *, __int64); // x8
  __int64 v16; // [xsp+40h] [xbp-C0h]
  __int64 v17; // [xsp+48h] [xbp-B8h]
  __int128 v18; // [xsp+50h] [xbp-B0h] BYREF
  __int64 v19; // [xsp+60h] [xbp-A0h]
  int v20; // [xsp+68h] [xbp-98h]
  __int64 v21; // [xsp+70h] [xbp-90h]
  __int64 v22; // [xsp+78h] [xbp-88h]
  __int128 v23; // [xsp+80h] [xbp-80h] BYREF
  __int64 v24; // [xsp+90h] [xbp-70h]
  int v25; // [xsp+98h] [xbp-68h]
  __int64 v26; // [xsp+A0h] [xbp-60h]
  __int64 v27; // [xsp+A8h] [xbp-58h]
  __int128 v28; // [xsp+B0h] [xbp-50h] BYREF
  __int64 v29; // [xsp+C0h] [xbp-40h]
  __int64 v30; // [xsp+C8h] [xbp-38h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v16 = a2;
  v17 = 0;
  v6 = *a3;
  if ( *a3 )
  {
    v17 = *a3;
    if ( (v6 & 1) != 0 )
    {
      v19 = a3[3];
      v18 = *(_OWORD *)(a3 + 1);
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD))(v6 & 0xFFFFFFFFFFFFFFFELL))(a3 + 1, &v18, 0);
      a2 = v16;
      v6 = v17;
    }
  }
  v20 = a4;
  v21 = a2;
  v22 = 0;
  if ( v6 )
  {
    v22 = v6;
    if ( (v6 & 1) != 0 )
    {
      v24 = v19;
      v23 = v18;
    }
    else
    {
      (*(void (__fastcall **)(__int128 *, __int128 *, _QWORD))(v6 & 0xFFFFFFFFFFFFFFFELL))(&v18, &v23, 0);
      a4 = v20;
      a2 = v21;
      v6 = v22;
    }
  }
  v25 = a4;
  v26 = a2;
  v27 = 0;
  if ( v6 )
  {
    v27 = v6;
    if ( (v6 & 1) != 0 )
    {
      v29 = v24;
      v28 = v23;
    }
    else
    {
      (*(void (__fastcall **)(__int128 *, __int128 *, _QWORD))(v6 & 0xFFFFFFFFFFFFFFFELL))(&v23, &v28, 0);
    }
  }
  v7 = *(_QWORD *)(a1 + 256);
  if ( v7 )
  {
    do
    {
      v8 = v7;
      if ( v25 >= *(_DWORD *)(v7 + 32) )
        v9 = (__int64 *)(v7 + 24);
      else
        v9 = (__int64 *)(v7 + 16);
      v7 = *v9;
    }
    while ( v7 );
    if ( a1 + 248 != v8 )
    {
      v10 = v25 < *(_DWORD *)(v8 + 32);
      goto LABEL_22;
    }
  }
  else
  {
    v8 = a1 + 248;
  }
  v10 = 1;
LABEL_22:
  node = std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_create_node();
  result = sub_54C8A0(v10, node, v8, a1 + 248);
  ++*(_QWORD *)(a1 + 280);
  if ( v27 )
  {
    if ( (v27 & 1) == 0 )
    {
      v13 = *(__int64 (__fastcall **)(__int128 *, __int128 *, __int64))(v27 & 0xFFFFFFFFFFFFFFFELL);
      if ( v13 )
        result = v13(&v28, &v28, 2);
    }
    v27 = 0;
  }
  if ( v22 )
  {
    if ( (v22 & 1) == 0 )
    {
      v14 = *(__int64 (__fastcall **)(__int128 *, __int128 *, __int64))(v22 & 0xFFFFFFFFFFFFFFFELL);
      if ( v14 )
        result = v14(&v23, &v23, 2);
    }
    v22 = 0;
  }
  if ( v17 && (v17 & 1) == 0 )
  {
    v15 = *(__int64 (__fastcall **)(__int128 *, __int128 *, __int64))(v17 & 0xFFFFFFFFFFFFFFFELL);
    if ( v15 )
      return v15(&v18, &v18, 2);
  }
  return result;
}

