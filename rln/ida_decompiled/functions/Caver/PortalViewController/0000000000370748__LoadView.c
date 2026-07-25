/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000370748
 * Mangled: _ZN5Caver20PortalViewController8LoadViewEv
 * Demangled: Caver::PortalViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F4DD0  Caver::PortalView::SetHelpButtonVisible(bool)
 *   0x00000000001F5290  Caver::PortalView::PortalView(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8DF0  Caver::PortalView::SetDescription(std::string const&)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FB900  Caver::PortalView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *   0x00000000001FCAA0  Caver::MapNode::Title(void)
 *   0x0000000000202D80  boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>(Caver::PortalView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 155
 *   insn=0x0000000000370758 string=0x000000000037075C "V"
 *   insn=0x0000000000370770 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000370778 string=0x00000000001F5290 "P'"
 *   insn=0x0000000000370784 string=0x0000000000370788 "hRH"
 *   insn=0x0000000000370794 string=0x0000000000370798 "i""
 *   insn=0x000000000037079C string=0x00000000003707A0 "4"
 *   insn=0x00000000003707A0 string=0x00000000003707E4 "`B@"
 *   insn=0x00000000003707A4 string=0x00000000003707A8 ""
 *   insn=0x00000000003707B8 string=0x00000000003707BC "\t@"
 *   insn=0x00000000003707C4 string=0x00000000003707C8 ""
 *   insn=0x00000000003707D8 string=0x00000000003707DC "@"
 *   insn=0x00000000003707E4 string=0x00000000003707E8 "p@"
 *   insn=0x00000000003707F0 string=0x00000000003707F4 ",@"
 *   insn=0x00000000003707F0 string=0x000000000037082C "h:@"
 *   insn=0x00000000003707F4 string=0x00000000003707F8 "I"
 *   insn=0x00000000003707F8 string=0x00000000003707FC "\tp"
 *   insn=0x00000000003707FC string=0x0000000000370800 "h"
 *   insn=0x0000000000370804 string=0x0000000000583734 "o"
 *   insn=0x0000000000370808 string=0x000000000037080C "!5G"
 *   insn=0x0000000000370814 string=0x0000000000370818 "\t"
 *   insn=0x000000000037081C string=0x0000000000370820 ")-@"
 *   insn=0x0000000000370820 string=0x0000000000370824 " "
 *   insn=0x0000000000370824 string=0x0000000000370828 "`B@"
 *   insn=0x000000000037082C string=0x0000000000370830 "\tA@"
 *   insn=0x0000000000370834 string=0x0000000000370838 "\tE@"
 *   insn=0x0000000000370840 string=0x0000000000370844 "*"
 *   insn=0x0000000000370844 string=0x0000000000370848 "J"
 *   insn=0x0000000000370848 string=0x000000000037084C "*"
 *   insn=0x0000000000370854 string=0x0000000000370858 "*,"
 *   insn=0x0000000000370858 string=0x00000000001FB900 "0'"
 *   insn=0x000000000037085C string=0x0000000000370860 "4"
 *   insn=0x0000000000370860 string=0x00000000003708A4 "hB@"
 *   insn=0x0000000000370864 string=0x0000000000370868 ""
 *   insn=0x0000000000370878 string=0x000000000037087C "\t@"
 *   insn=0x0000000000370884 string=0x0000000000370888 ""
 *   insn=0x0000000000370898 string=0x000000000037089C "@"
 *   insn=0x00000000003708A4 string=0x00000000003708A8 "j""
 *   insn=0x00000000003708B0 string=0x00000000003708B4 "\t"
 *   insn=0x00000000003708B8 string=0x00000000003708BC "*y"
 *   insn=0x00000000003708D8 string=0x00000000003708DC "`"
 *   insn=0x00000000003708D8 string=0x00000000001F6B70 "0'"
 *   insn=0x00000000003708E0 string=0x00000000003708E4 ""
 *   insn=0x00000000003708F8 string=0x00000000003708FC ""
 *   insn=0x0000000000370914 string=0x00000000001F9BE0 "0'"
 *   insn=0x0000000000370918 string=0x000000000037091C "h"
 *   insn=0x000000000037091C string=0x0000000000370920 "("
 *   insn=0x000000000037091C string=0x0000000000370948 "hB@"
 *   insn=0x0000000000370920 string=0x0000000000370924 ""
 *   insn=0x0000000000370924 string=0x0000000000370928 ""
 *   insn=0x0000000000370930 string=0x0000000000370934 " !"
 *   insn=0x0000000000370968 string=0x000000000037096C "`"
 *   insn=0x0000000000370970 string=0x0000000000370974 ""
 *   insn=0x0000000000370988 string=0x000000000037098C ""
 *   insn=0x00000000003709A8 string=0x00000000003709AC "h"
 *   insn=0x00000000003709AC string=0x00000000003709B0 "("
 *   insn=0x00000000003709AC string=0x00000000003709D8 "hB@"
 *   insn=0x00000000003709B0 string=0x00000000003709B4 ""
 *   insn=0x00000000003709B4 string=0x00000000003709B8 ""
 *   insn=0x00000000003709C0 string=0x00000000003709C4 " !"
 *   insn=0x00000000003709F4 string=0x00000000003709F8 "^"
 *   insn=0x00000000003709F8 string=0x00000000003709FC "`"
 *   insn=0x0000000000370A00 string=0x0000000000370A04 ""
 *   insn=0x0000000000370A18 string=0x0000000000370A1C ""
 *   insn=0x0000000000370A30 string=0x0000000000370A34 "k$"
 *   insn=0x0000000000370A38 string=0x0000000000370A3C "h"
 *   insn=0x0000000000370A3C string=0x0000000000370A40 "("
 *   insn=0x0000000000370A3C string=0x0000000000370A68 "tB@"
 *   insn=0x0000000000370A40 string=0x0000000000370A44 ""
 *   insn=0x0000000000370A44 string=0x0000000000370A48 ""
 *   insn=0x0000000000370A50 string=0x0000000000370A54 " !"
 *   insn=0x0000000000370A6C string=0x0000000000370A70 "\t"
 *   insn=0x0000000000370A70 string=0x0000000000370A74 "I"
 *   insn=0x0000000000370A74 string=0x0000000000370A78 "\t"
 *   insn=0x0000000000370A78 string=0x0000000000370A7C ""
 *   insn=0x0000000000370A7C string=0x0000000000370A80 ")"
 *   insn=0x0000000000370A80 string=0x0000000000370A84 "ii"
 *   insn=0x0000000000370A90 string=0x00000000001FCAA0 "0'"
 *   insn=0x0000000000370A9C string=0x00000000001F8DF0 "0'"
 *   insn=0x0000000000370AA4 string=0x0000000000370AA8 ")"
 *   insn=0x0000000000370AB0 string=0x0000000000370AB4 "!"
 *   insn=0x0000000000370AB4 string=0x0000000000370AB8 "tB@"
 *   insn=0x0000000000370AC4 string=0x0000000000370AC8 "hB@"
 *   insn=0x0000000000370AC4 string=0x00000000001F4DD0 "P'"
 *   insn=0x0000000000370AC8 string=0x0000000000370ACC "jB"
 *   insn=0x0000000000370ACC string=0x0000000000370AD0 "\t"
 *   insn=0x0000000000370AD0 string=0x0000000000370AD4 "*y"
 *   insn=0x0000000000370AD4 string=0x0000000000370AD8 "tF@"
 *   insn=0x0000000000370ADC string=0x0000000000370AEC "u"
 *   insn=0x0000000000370AE0 string=0x0000000000370AE4 ")\t"
 *   insn=0x0000000000370AEC string=0x0000000000370AF0 "h"
 *   insn=0x0000000000370AF0 string=0x0000000000370AF4 "5"
 *   insn=0x0000000000370AF4 string=0x0000000000370B38 "`"@"
 *   insn=0x0000000000370AF8 string=0x0000000000370AFC ""
 *   insn=0x0000000000370B08 string=0x0000000000370B0C "\t@"
 *   insn=0x0000000000370B18 string=0x0000000000370B1C ""
 *   insn=0x0000000000370B28 string=0x0000000000370B2C "@"
 *   insn=0x0000000000370B3C string=0x0000000000370B40 ""
 *   insn=0x0000000000370B3C string=0x0000000000370B50 "4"
 *   insn=0x0000000000370B40 string=0x0000000000370B44 ""
 *   insn=0x0000000000370B54 string=0x0000000000370B58 ""
 *   insn=0x0000000000370B68 string=0x0000000000370B6C "\t@"
 *   insn=0x0000000000370B74 string=0x0000000000370B78 ""
 *   insn=0x0000000000370B88 string=0x0000000000370B8C "@"
 *   insn=0x0000000000370BB8 string=0x0000000000370BBC ")=G"
 *   insn=0x0000000000370BBC string=0x0000000000370BC0 "!"
 *   insn=0x0000000000370BC4 string=0x0000000000370BC8 "\t"
 *   insn=0x0000000000370BC4 string=0x0000000000370BDC "\t"
 *   insn=0x0000000000370BC8 string=0x0000000000370BCC "*"
 *   insn=0x0000000000370BCC string=0x0000000000370BD0 "\n"
 *   insn=0x0000000000370BD8 string=0x0000000000370BE8 "?"
 *   insn=0x0000000000370BDC string=0x0000000000370BE0 "*"
 *   insn=0x0000000000370BE0 string=0x0000000000370BE4 "\n"
 *   insn=0x0000000000370BE8 string=0x0000000000370BEC "l"
 *   insn=0x0000000000370BFC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000370C04 string=0x0000000000370C08 "J"
 *   insn=0x0000000000370C0C string=0x0000000000370C10 "(a"
 *   insn=0x0000000000370C14 string=0x0000000000370C18 " "
 *   insn=0x0000000000370C1C string=0x0000000000370C20 "J=G"
 *   insn=0x0000000000370C20 string=0x0000000000370C24 ")!"
 *   insn=0x0000000000370C28 string=0x0000000000370C2C "*"
 *   insn=0x0000000000370C28 string=0x0000000000370C58 "*"
 *   insn=0x0000000000370C2C string=0x0000000000370C30 "K"
 *   insn=0x0000000000370C30 string=0x0000000000370C34 "+"
 *   insn=0x0000000000370C38 string=0x0000000000370C3C "_"
 *   insn=0x0000000000370C58 string=0x0000000000370C5C "K"
 *   insn=0x0000000000370C5C string=0x0000000000370C60 "+"
 *   insn=0x0000000000370C60 string=0x0000000000370C64 "_"
 *   insn=0x0000000000370C68 string=0x0000000000370C6C "T"
 *   insn=0x0000000000370C70 string=0x0000000000370C74 "T\n"
 *   insn=0x0000000000370C78 string=0x0000000000370C7C ""
 *   insn=0x0000000000370C88 string=0x0000000000370C8C "\t@"
 *   insn=0x0000000000370C98 string=0x0000000000370C9C ""
 *   insn=0x0000000000370CA8 string=0x0000000000370CAC "@"
 *   insn=0x0000000000370CB4 string=0x0000000000370CB8 "A"
 *   insn=0x0000000000370CC4 string=0x0000000000370CC8 "("
 *   insn=0x0000000000370CC8 string=0x0000000000370CCC ""
 *   insn=0x0000000000370CCC string=0x0000000000370CD0 ""
 *   insn=0x0000000000370CD8 string=0x0000000000370CDC " !"
 *   insn=0x0000000000370D00 string=0x0000000000370D04 "("
 *   insn=0x0000000000370D04 string=0x0000000000370D08 ""
 *   insn=0x0000000000370D08 string=0x0000000000370D0C ""
 *   insn=0x0000000000370D14 string=0x0000000000370D18 " !"
 *   insn=0x0000000000370D38 string=0x0000000000370D3C ""
 *   insn=0x0000000000370D3C string=0x0000000000370D40 "("
 *   insn=0x0000000000370D40 string=0x0000000000370D44 ""
 *   insn=0x0000000000370D44 string=0x0000000000370D48 ""
 *   insn=0x0000000000370D50 string=0x0000000000370D54 " !"
 *   insn=0x0000000000370D74 string=0x0000000000370D78 "4"
 *   insn=0x0000000000370D7C string=0x0000000000370D80 ""
 *   insn=0x0000000000370D8C string=0x0000000000370D90 "\t@"
 *   insn=0x0000000000370D9C string=0x0000000000370DA0 ""
 *   insn=0x0000000000370DAC string=0x0000000000370DB0 "@"
 *   insn=0x0000000000370DC0 string=0x0000000000370DC4 "bu"
 *   insn=0x0000000000370DCC string=0x0000000000370DD0 "8"
 *   insn=0x0000000000370DD0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::PortalViewController::LoadView(
        Caver::PortalViewController *this))(_QWORD, Caver::PortalViewController *)
{
  Caver::PortalView *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x9
  unsigned __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x0
  float *v9; // x8
  __int64 v10; // x8
  unsigned __int64 v11; // x9
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  int64x2_t v15; // q0
  _UNKNOWN **v16; // x8
  void (__fastcall *v17)(int64x2_t *, int64x2_t *, __int64); // x8
  int64x2_t v18; // q0
  _UNKNOWN **v19; // x8
  void (__fastcall *v20)(int64x2_t *, int64x2_t *, __int64); // x8
  int64x2_t v21; // q0
  _UNKNOWN **v22; // x8
  void (__fastcall *v23)(int64x2_t *, int64x2_t *, __int64); // x8
  Caver::PortalView *v24; // x20
  __int64 v25; // x8
  void *v26; // x0
  __int64 v27; // x8
  _QWORD *v28; // x20
  _QWORD *v29; // x21
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::PortalViewController *); // x0
  __int64 v33; // x8
  __int64 v34; // x8
  unsigned int *v35; // x8
  int v36; // w9
  __int64 v37; // [xsp+0h] [xbp-60h] BYREF
  int64x2_t v38; // [xsp+8h] [xbp-58h] BYREF
  Caver::PortalViewController *v39; // [xsp+18h] [xbp-48h]
  int64x2_t v40; // [xsp+20h] [xbp-40h]
  Caver::PortalViewController *v41; // [xsp+30h] [xbp-30h]
  __int64 v42; // [xsp+38h] [xbp-28h]

  v42 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::PortalView *)operator new(0x180u);
  Caver::PortalView::PortalView(v2);
  boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>();
  v3 = (_QWORD *)*((_QWORD *)this + 17);
  v4 = v37;
  v37 = *((_QWORD *)this + 16);
  v5 = v38.n128_u64[0];
  *((_QWORD *)this + 16) = v4;
  *((_QWORD *)this + 17) = v5;
  v38.n128_u64[0] = (unsigned __int64)v3;
  if ( v3 )
  {
    v6 = v3[1] - 1LL;
    v3[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v7 = v3[2] - 1LL;
      v3[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v8 = *((_QWORD *)this + 16);
  if ( *(_DWORD *)(v8 + 112) != 18 )
  {
    v9 = *(float **)(v8 + 88);
    *(_DWORD *)(v8 + 112) = 18;
    if ( v9 )
    {
      if ( v9[35] > 0.001 )
        (*(void (__fastcall **)(float *__return_ptr, float *))(*(_QWORD *)v9 + 88LL))(v9, v9);
    }
  }
  v10 = *((_QWORD *)this + 14);
  v37 = *(_QWORD *)(v10 + 128);
  v11 = *(_QWORD *)(v10 + 136);
  v38.n128_u64[0] = v11;
  if ( v11 )
    ++*(_QWORD *)(v11 + 8);
  Caver::PortalView::InitWithGameState();
  v12 = (_QWORD *)v38.n128_u64[0];
  if ( v38.n128_u64[0] )
  {
    v13 = *(_QWORD *)(v38.n128_u64[0] + 8) - 1LL;
    *(_QWORD *)(v38.n128_u64[0] + 8) = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  v15 = vdupq_n_s64(0);
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 272LL) + 240LL) = (char *)this + 72;
  v37 = 0;
  v41 = this;
  v15.n128_u64[0] = (unsigned __int64)Caver::PortalViewController::ButtonPressed;
  v40 = v15;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v16 = 0;
  }
  else
  {
    v39 = v41;
    v38 = v40;
    v16 = &boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::PortalViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::PortalViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::PortalViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::PortalViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v37 = (__int64)v16;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( v37 )
  {
    if ( (v37 & 1) == 0 )
    {
      v17 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v37 & 0xFFFFFFFFFFFFFFFELL);
      if ( v17 )
        v17(&v38, &v38, 2);
    }
    v37 = 0;
  }
  v18 = vdupq_n_s64(0);
  v18.n128_u64[0] = (unsigned __int64)Caver::PortalViewController::ButtonPressed;
  v37 = 0;
  v40 = v18;
  v41 = this;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v19 = 0;
  }
  else
  {
    v39 = v41;
    v38 = v40;
    v19 = &boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::PortalViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::PortalViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::PortalViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::PortalViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v37 = (__int64)v19;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( v37 )
  {
    if ( (v37 & 1) == 0 )
    {
      v20 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v37 & 0xFFFFFFFFFFFFFFFELL);
      if ( v20 )
        v20(&v38, &v38, 2);
    }
    v37 = 0;
  }
  v21 = vdupq_n_s64(0);
  v21.n128_u64[0] = (unsigned __int64)Caver::PortalViewController::ButtonPressed;
  v37 = 0;
  v40 = v21;
  v41 = this;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v22 = 0;
  }
  else
  {
    v39 = v41;
    v38 = v40;
    v22 = &boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::PortalViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::PortalViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::PortalViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::PortalViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v37 = (__int64)v22;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( v37 )
  {
    if ( (v37 & 1) == 0 )
    {
      v23 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v37 & 0xFFFFFFFFFFFFFFFELL);
      if ( v23 )
        v23(&v38, &v38, 2);
    }
    v37 = 0;
  }
  v24 = (Caver::PortalView *)*((_QWORD *)this + 16);
  v25 = *((_QWORD *)v24 + 34);
  if ( *(_BYTE *)(v25 + 1016) )
  {
    Caver::MapNode::Title(&v37, **(Caver::MapNode ***)(*(_QWORD *)(v25 + 280) + 16LL * *(_QWORD *)(v25 + 1024)));
    Caver::PortalView::SetDescription();
    v26 = (void *)(v37 - 24);
    if ( (__int64 *)(v37 - 24) != &qword_6FD2E0 )
    {
      v35 = (unsigned int *)(v37 - 8);
      if ( &pthread_create )
      {
        do
          v36 = __ldaxr(v35);
        while ( __stlxr(v36 - 1, v35) );
      }
      else
      {
        v36 = (*v35)--;
      }
      if ( v36 <= 0 )
        operator delete(v26);
    }
    v24 = (Caver::PortalView *)*((_QWORD *)this + 16);
  }
  Caver::PortalView::SetHelpButtonVisible(v24, 1);
  v27 = *((_QWORD *)this + 16);
  *(_QWORD *)(*(_QWORD *)(v27 + 368) + 240LL) = (char *)this + 80;
  v28 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v28 )
    v28[1] += 2LL;
  v29 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v27;
  *((_QWORD *)this + 4) = v28;
  if ( v29 )
  {
    v30 = v29[1] - 1LL;
    v29[1] = v30;
    if ( !v30 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
      v31 = v29[2] - 1LL;
      v29[2] = v31;
      if ( !v31 )
        (*(void (__fastcall **)(_QWORD *))(*v29 + 24LL))(v29);
    }
  }
  result = (__int64 (__fastcall ***)(_QWORD, Caver::PortalViewController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::PortalViewController *))(**result)(result, this);
  if ( v28 )
  {
    v33 = v28[1] - 1LL;
    v28[1] = v33;
    if ( !v33 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::PortalViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
      v34 = v28[2] - 1LL;
      v28[2] = v34;
      if ( !v34 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::PortalViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
    }
  }
  return result;
}

