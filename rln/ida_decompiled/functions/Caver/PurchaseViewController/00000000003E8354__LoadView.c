/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E8354
 * Mangled: _ZN5Caver22PurchaseViewController8LoadViewEv
 * Demangled: Caver::PurchaseViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F80E0  Caver::PurchaseView::PurchaseView(void)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FBD90  boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>(Caver::PurchaseView *)
 *   0x00000000001FEA00  Caver::PurchaseViewController::UpdateView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 82
 *   insn=0x00000000003E8364 string=0x00000000003E8368 "V"
 *   insn=0x00000000003E837C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003E8380 string=0x00000000003E8384 "W?"
 *   insn=0x00000000003E8384 string=0x00000000001F80E0 "0'"
 *   insn=0x00000000003E8390 string=0x00000000003E8394 "hRE"
 *   insn=0x00000000003E8390 string=0x00000000001FBD90 "0'"
 *   insn=0x00000000003E83A0 string=0x00000000003E83A4 "i""
 *   insn=0x00000000003E83A8 string=0x00000000003E83AC "4"
 *   insn=0x00000000003E83AC string=0x00000000003E83F0 "h*@"
 *   insn=0x00000000003E83B0 string=0x00000000003E83B4 ""
 *   insn=0x00000000003E83C4 string=0x00000000003E83C8 "\t@"
 *   insn=0x00000000003E83D0 string=0x00000000003E83D4 ""
 *   insn=0x00000000003E83E4 string=0x00000000003E83E8 "@"
 *   insn=0x00000000003E83F0 string=0x00000000003E83F4 "\tq@"
 *   insn=0x00000000003E83F4 string=0x00000000003E83F8 "?I"
 *   insn=0x00000000003E83FC string=0x00000000003E8434 "t.@"
 *   insn=0x00000000003E8400 string=0x00000000003E8404 "I"
 *   insn=0x00000000003E8404 string=0x00000000003E8408 "\tq"
 *   insn=0x00000000003E8408 string=0x00000000003E840C "@"
 *   insn=0x00000000003E8410 string=0x0000000000583734 "o"
 *   insn=0x00000000003E8414 string=0x00000000003E8418 "!5G"
 *   insn=0x00000000003E8420 string=0x00000000003E8424 ""
 *   insn=0x00000000003E8424 string=0x00000000003E8428 "-@"
 *   insn=0x00000000003E842C string=0x00000000003E8430 "h*@"
 *   insn=0x00000000003E8438 string=0x00000000003E8448 "u"
 *   insn=0x00000000003E843C string=0x00000000003E8440 ")\t"
 *   insn=0x00000000003E8448 string=0x00000000003E844C "h"
 *   insn=0x00000000003E844C string=0x00000000003E8450 "5"
 *   insn=0x00000000003E8450 string=0x00000000003E8494 "`"@"
 *   insn=0x00000000003E8454 string=0x00000000003E8458 ""
 *   insn=0x00000000003E8464 string=0x00000000003E8468 "\t@"
 *   insn=0x00000000003E8474 string=0x00000000003E8478 ""
 *   insn=0x00000000003E8484 string=0x00000000003E8488 "@"
 *   insn=0x00000000003E8498 string=0x00000000003E849C ""
 *   insn=0x00000000003E8498 string=0x00000000003E84AC "4"
 *   insn=0x00000000003E849C string=0x00000000003E84A0 ""
 *   insn=0x00000000003E84AC string=0x00000000003E84F0 "h*@"
 *   insn=0x00000000003E84B0 string=0x00000000003E84B4 ""
 *   insn=0x00000000003E84C4 string=0x00000000003E84C8 "\t@"
 *   insn=0x00000000003E84D0 string=0x00000000003E84D4 ""
 *   insn=0x00000000003E84E4 string=0x00000000003E84E8 "@"
 *   insn=0x00000000003E8518 string=0x00000000003E851C "`"
 *   insn=0x00000000003E8518 string=0x00000000001F6B70 "0'"
 *   insn=0x00000000003E8520 string=0x00000000003E8524 ""
 *   insn=0x00000000003E8538 string=0x00000000003E853C ""
 *   insn=0x00000000003E8554 string=0x00000000001F9BE0 "0'"
 *   insn=0x00000000003E8558 string=0x00000000003E855C "h"
 *   insn=0x00000000003E855C string=0x00000000003E8560 "("
 *   insn=0x00000000003E855C string=0x00000000003E8588 "h*@"
 *   insn=0x00000000003E8560 string=0x00000000003E8564 ""
 *   insn=0x00000000003E8564 string=0x00000000003E8568 ""
 *   insn=0x00000000003E8570 string=0x00000000003E8574 " !"
 *   insn=0x00000000003E85A4 string=0x00000000003E85A8 "r9"
 *   insn=0x00000000003E85A8 string=0x00000000003E85AC "`"
 *   insn=0x00000000003E85B0 string=0x00000000003E85B4 ""
 *   insn=0x00000000003E85C8 string=0x00000000003E85CC ""
 *   insn=0x00000000003E85E8 string=0x00000000003E85EC "h"
 *   insn=0x00000000003E85EC string=0x00000000003E85F0 "("
 *   insn=0x00000000003E85F0 string=0x00000000003E85F4 ""
 *   insn=0x00000000003E85F4 string=0x00000000003E85F8 ""
 *   insn=0x00000000003E8600 string=0x00000000003E8604 " !"
 *   insn=0x00000000003E862C string=0x00000000003E8644 "#7"
 *   insn=0x00000000003E8644 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E8650 string=0x00000000003E8654 ""
 *   insn=0x00000000003E8660 string=0x00000000003E8664 "\t@"
 *   insn=0x00000000003E8670 string=0x00000000003E8674 ""
 *   insn=0x00000000003E8680 string=0x00000000003E8684 "@"
 *   insn=0x00000000003E868C string=0x00000000003E8690 ""
 *   insn=0x00000000003E8698 string=0x00000000003E869C ""
 *   insn=0x00000000003E86A0 string=0x00000000003E86A4 ""
 *   insn=0x00000000003E86A4 string=0x00000000003E86A8 ""
 *   insn=0x00000000003E86A8 string=0x00000000003E86AC "h"
 *   insn=0x00000000003E86B0 string=0x00000000003E86B4 " !"
 *   insn=0x00000000003E86C0 string=0x00000000003E86C4 ""
 *   insn=0x00000000003E86CC string=0x00000000003E86D0 "h"
 *   insn=0x00000000003E86D0 string=0x00000000003E86D4 "("
 *   insn=0x00000000003E86D4 string=0x00000000003E86D8 ""
 *   insn=0x00000000003E86D8 string=0x00000000003E86DC ""
 *   insn=0x00000000003E86E4 string=0x00000000003E86E8 " !"
 *   insn=0x00000000003E86FC string=0x00000000003E8700 "qd"
 *   insn=0x00000000003E8710 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E8714 string=0x00000000003E8718 "kd"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PurchaseViewController::LoadView(Caver::PurchaseViewController *this)
{
  Caver::PurchaseView *v2; // x0
  _QWORD *v3; // x20
  unsigned __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  float *v8; // x0
  _QWORD *v9; // x20
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8
  void (__fastcall ***v13)(_QWORD, Caver::PurchaseViewController *); // x0
  __int64 v14; // x8
  __int64 v15; // x8
  int64x2_t v16; // q0
  _UNKNOWN **v17; // x8
  void (__fastcall *v18)(int64x2_t *, int64x2_t *, __int64); // x8
  int64x2_t v19; // q0
  _UNKNOWN **v20; // x8
  void (__fastcall *v21)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v22; // [xsp+0h] [xbp-60h]
  unsigned __int64 v23; // [xsp+0h] [xbp-60h]
  unsigned __int64 v24; // [xsp+0h] [xbp-60h]
  int64x2_t v25; // [xsp+8h] [xbp-58h] BYREF
  Caver::PurchaseViewController *v26; // [xsp+18h] [xbp-48h]
  int64x2_t v27; // [xsp+20h] [xbp-40h]
  Caver::PurchaseViewController *v28; // [xsp+30h] [xbp-30h]
  __int64 v29; // [xsp+38h] [xbp-28h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::PurchaseView *)operator new(0x148u);
  Caver::PurchaseView::PurchaseView(v2);
  boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>();
  v3 = (_QWORD *)*((_QWORD *)this + 11);
  v4 = v25.n128_u64[0];
  *((_QWORD *)this + 10) = v22;
  *((_QWORD *)this + 11) = v4;
  v25.n128_u64[0] = (unsigned __int64)v3;
  if ( v3 )
  {
    v5 = v3[1] - 1LL;
    v3[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v6 = v3[2] - 1LL;
      v3[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v7 = *((_QWORD *)this + 10);
  if ( *(_DWORD *)(v7 + 112) != 18 )
  {
    v8 = *(float **)(v7 + 88);
    *(_DWORD *)(v7 + 112) = 18;
    if ( v8 )
    {
      if ( v8[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v8 + 88LL))(v8);
        v7 = *((_QWORD *)this + 10);
      }
    }
  }
  v9 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v9 )
    v9[1] += 2LL;
  v10 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v7;
  *((_QWORD *)this + 4) = v9;
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v13 = (void (__fastcall ***)(_QWORD, Caver::PurchaseViewController *))*((_QWORD *)this + 8);
  if ( v13 )
    (**v13)(v13, this);
  if ( v9 )
  {
    v14 = v9[1] - 1LL;
    v9[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v15 = v9[2] - 1LL;
      v9[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  v16 = vdupq_n_s64(0);
  v28 = this;
  v16.n128_u64[0] = (unsigned __int64)&Caver::PurchaseViewController::ButtonPressed;
  v27 = v16;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v17 = 0;
  }
  else
  {
    v26 = v28;
    v25 = v27;
    v17 = &boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::PurchaseViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::PurchaseViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v23 = (unsigned __int64)v17;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( v23 )
  {
    if ( (v23 & 1) == 0 )
    {
      v18 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v23 & 0xFFFFFFFFFFFFFFFELL);
      if ( v18 )
        v18(&v25, &v25, 2);
    }
  }
  v19 = vdupq_n_s64(0);
  v19.n128_u64[0] = (unsigned __int64)&Caver::PurchaseViewController::ButtonPressed;
  v27 = v19;
  v28 = this;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v20 = 0;
  }
  else
  {
    v26 = v28;
    v25 = v27;
    v20 = &boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::PurchaseViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::PurchaseViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v24 = (unsigned __int64)v20;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( v24 )
  {
    if ( (v24 & 1) == 0 )
    {
      v21 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v24 & 0xFFFFFFFFFFFFFFFELL);
      if ( v21 )
        v21(&v25, &v25, 2);
    }
  }
  Caver::PurchaseViewController::UpdateView(this);
}

