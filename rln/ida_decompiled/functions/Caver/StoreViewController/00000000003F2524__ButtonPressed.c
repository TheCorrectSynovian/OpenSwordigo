/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F2524
 * Mangled: _ZN5Caver19StoreViewController13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::StoreViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *
 * Callees: 13
 *   0x00000000001F6020  Caver::StoreView::AnimateOut(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FB9B0  Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000003F4210  Caver::StoreViewController::RestoreCompletion(std::vector<std::string,std::allocator<std::string>> const&,std::string const&)
 *   0x00000000003F5B18  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::StoreViewController,std::vector<std::string,std::allocator<std::string>> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::StoreViewController*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 140
 *   insn=0x00000000003F2538 string=0x00000000003F253C "V"
 *   insn=0x00000000003F254C string=0x00000000003F2550 "x@"
 *   insn=0x00000000003F2558 string=0x00000000003F255C ""
 *   insn=0x00000000003F2564 string=0x00000000003F25D8 "&3"
 *   insn=0x00000000003F2568 string=0x00000000003F256C "+"
 *   insn=0x00000000003F2570 string=0x00000000003F2574 "\n"
 *   insn=0x00000000003F257C string=0x00000000003F2580 "k"
 *   insn=0x00000000003F2580 string=0x00000000003F2584 "Lih"
 *   insn=0x00000000003F258C string=0x00000000003F2590 " "
 *   insn=0x00000000003F2590 string=0x00000000003F2594 ")"
 *   insn=0x00000000003F2598 string=0x00000000003F259C "A"
 *   insn=0x00000000003F259C string=0x00000000003F25A0 "("
 *   insn=0x00000000003F25AC string=0x00000000003F25B0 "\t"
 *   insn=0x00000000003F25B8 string=0x00000000003F25BC ")"
 *   insn=0x00000000003F25BC string=0x00000000003F25C0 " "
 *   insn=0x00000000003F25C8 string=0x00000000001F6020 "0'"
 *   insn=0x00000000003F25D0 string=0x00000000001F7010 "0'"
 *   insn=0x00000000003F25E4 string=0x00000000003F25E8 "h"
 *   insn=0x00000000003F25F0 string=0x00000000003F25F4 "\t"
 *   insn=0x00000000003F25FC string=0x00000000003F2600 "7"
 *   insn=0x00000000003F2600 string=0x00000000003F2604 "h"
 *   insn=0x00000000003F260C string=0x00000000003F2610 ""
 *   insn=0x00000000003F2620 string=0x00000000003F2624 "S"
 *   insn=0x00000000003F2624 string=0x00000000003F2628 "`"
 *   insn=0x00000000003F2624 string=0x00000000001F6B70 "0'"
 *   insn=0x00000000003F262C string=0x00000000003F2630 ""
 *   insn=0x00000000003F2644 string=0x00000000003F2648 ""
 *   insn=0x00000000003F2650 string=0x00000000003F2654 "i\n@"
 *   insn=0x00000000003F2654 string=0x00000000003F2658 ")"
 *   insn=0x00000000003F2658 string=0x00000000003F265C "i\n"
 *   insn=0x00000000003F2668 string=0x00000000003F266C "("
 *   insn=0x00000000003F266C string=0x00000000003F2670 ""
 *   insn=0x00000000003F2670 string=0x00000000003F2674 ""
 *   insn=0x00000000003F2678 string=0x00000000003F267C " !"
 *   insn=0x00000000003F2680 string=0x00000000003F2684 "!a"
 *   insn=0x00000000003F2694 string=0x00000000003F2698 "!"
 *   insn=0x00000000003F2698 string=0x00000000003F269C "("
 *   insn=0x00000000003F26A8 string=0x00000000003F26AC "I"
 *   insn=0x00000000003F26A8 string=0x00000000001FB9B0 "0'"
 *   insn=0x00000000003F26CC string=0x00000000003F26D0 "h"
 *   insn=0x00000000003F26D0 string=0x00000000003F26D4 "("
 *   insn=0x00000000003F26D4 string=0x00000000003F26D8 ""
 *   insn=0x00000000003F26D8 string=0x00000000003F26DC ""
 *   insn=0x00000000003F26E4 string=0x00000000003F26E8 " a"
 *   insn=0x00000000003F2700 string=0x00000000003F2704 "@"
 *   insn=0x00000000003F2704 string=0x00000000003F2708 ""
 *   insn=0x00000000003F2708 string=0x00000000003F270C ""
 *   insn=0x00000000003F2710 string=0x00000000003F2714 ""
 *   insn=0x00000000003F2714 string=0x00000000003F2718 "@"
 *   insn=0x00000000003F2720 string=0x00000000003F2724 "h"
 *   insn=0x00000000003F2724 string=0x00000000003F2728 "("
 *   insn=0x00000000003F2724 string=0x00000000003F2750 "h"
 *   insn=0x00000000003F2728 string=0x00000000003F272C ""
 *   insn=0x00000000003F272C string=0x00000000003F2730 ""
 *   insn=0x00000000003F2738 string=0x00000000003F273C " !"
 *   insn=0x00000000003F2750 string=0x00000000003F2754 ""
 *   insn=0x00000000003F2754 string=0x00000000003F2758 "h"
 *   insn=0x00000000003F275C string=0x00000000003F2760 "h"
 *   insn=0x00000000003F275C string=0x00000000003F2790 "h"
 *   insn=0x00000000003F2760 string=0x00000000003F2764 "\t@"
 *   insn=0x00000000003F276C string=0x00000000003F2770 "h\n@"
 *   insn=0x00000000003F2770 string=0x00000000003F2774 ""
 *   insn=0x00000000003F2774 string=0x00000000003F2778 "h\n"
 *   insn=0x00000000003F277C string=0x00000000003F2780 "h"
 *   insn=0x00000000003F2780 string=0x00000000003F2784 "@"
 *   insn=0x00000000003F2790 string=0x00000000003F2794 ""
 *   insn=0x00000000003F2794 string=0x00000000003F2798 "h"
 *   insn=0x00000000003F279C string=0x00000000003F27A0 "h"
 *   insn=0x00000000003F27A4 string=0x00000000003F27A8 "\t@"
 *   insn=0x00000000003F27AC string=0x00000000003F27B0 "h\n@"
 *   insn=0x00000000003F27B0 string=0x00000000003F27B4 ""
 *   insn=0x00000000003F27B4 string=0x00000000003F27B8 "h\n"
 *   insn=0x00000000003F27BC string=0x00000000003F27C0 "h"
 *   insn=0x00000000003F27C4 string=0x00000000003F27C8 "@"
 *   insn=0x00000000003F27F8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003F27FC string=0x00000000003F2800 ""
 *   insn=0x00000000003F2800 string=0x00000000003F2804 "A"
 *   insn=0x00000000003F280C string=0x00000000003F2810 "\ "
 *   insn=0x00000000003F2810 string=0x00000000001FA980 "0'"
 *   insn=0x00000000003F2820 string=0x00000000003F2824 "(<"
 *   insn=0x00000000003F2828 string=0x00000000003F282C "C"
 *   insn=0x00000000003F282C string=0x00000000003F2938 "h"
 *   insn=0x00000000003F2838 string=0x00000000003F283C "\t\t@"
 *   insn=0x00000000003F283C string=0x00000000003F2840 ")"
 *   insn=0x00000000003F2840 string=0x00000000003F2844 "\t\t"
 *   insn=0x00000000003F2848 string=0x00000000003F284C "\t"
 *   insn=0x00000000003F284C string=0x00000000003F2850 ")@"
 *   insn=0x00000000003F2854 string=0x00000000003F2858 " "
 *   insn=0x00000000003F2858 string=0x00000000003F285C "+"
 *   insn=0x00000000003F2868 string=0x00000000003F286C "("
 *   insn=0x00000000003F286C string=0x00000000003F2870 "2"
 *   insn=0x00000000003F286C string=0x00000000003F2910 "("
 *   insn=0x00000000003F2878 string=0x00000000003F287C "h"
 *   insn=0x00000000003F287C string=0x00000000003F2880 "\t\t@"
 *   insn=0x00000000003F2880 string=0x00000000003F2884 ")"
 *   insn=0x00000000003F2884 string=0x00000000003F2888 "\t\t"
 *   insn=0x00000000003F288C string=0x00000000003F2890 "\t"
 *   insn=0x00000000003F2890 string=0x00000000003F2894 ")@"
 *   insn=0x00000000003F2898 string=0x00000000003F289C " "
 *   insn=0x00000000003F28A8 string=0x00000000003F28AC "3"
 *   insn=0x00000000003F28AC string=0x00000000003F2978 "h"
 *   insn=0x00000000003F28B4 string=0x00000000003F28B8 "h"
 *   insn=0x00000000003F28B8 string=0x00000000003F28BC "("
 *   insn=0x00000000003F28BC string=0x00000000003F28C0 ""
 *   insn=0x00000000003F28C0 string=0x00000000003F28C4 ""
 *   insn=0x00000000003F28CC string=0x00000000003F28D0 " a"
 *   insn=0x00000000003F28E8 string=0x00000000003F28EC "@"
 *   insn=0x00000000003F28EC string=0x00000000003F28F0 ""
 *   insn=0x00000000003F28F0 string=0x00000000003F28F4 ""
 *   insn=0x00000000003F28F8 string=0x00000000003F28FC ""
 *   insn=0x00000000003F28FC string=0x00000000003F2900 "@"
 *   insn=0x00000000003F2908 string=0x00000000003F290C "h"
 *   insn=0x00000000003F2910 string=0x00000000003F2914 ""
 *   insn=0x00000000003F2914 string=0x00000000003F2918 ""
 *   insn=0x00000000003F2920 string=0x00000000003F2924 " !"
 *   insn=0x00000000003F2938 string=0x00000000003F293C ""
 *   insn=0x00000000003F293C string=0x00000000003F2940 "h"
 *   insn=0x00000000003F2944 string=0x00000000003F2948 "h"
 *   insn=0x00000000003F2948 string=0x00000000003F294C "\t@"
 *   insn=0x00000000003F2954 string=0x00000000003F2958 "h\n@"
 *   insn=0x00000000003F2958 string=0x00000000003F295C ""
 *   insn=0x00000000003F295C string=0x00000000003F2960 "h\n"
 *   insn=0x00000000003F2964 string=0x00000000003F2968 "h"
 *   insn=0x00000000003F2968 string=0x00000000003F296C "@"
 *   insn=0x00000000003F2978 string=0x00000000003F297C ""
 *   insn=0x00000000003F297C string=0x00000000003F2980 "h"
 *   insn=0x00000000003F2984 string=0x00000000003F2988 "h"
 *   insn=0x00000000003F2988 string=0x00000000003F298C "\t@"
 *   insn=0x00000000003F2994 string=0x00000000003F2998 "h\n@"
 *   insn=0x00000000003F2998 string=0x00000000003F299C ""
 *   insn=0x00000000003F299C string=0x00000000003F29A0 "h\n"
 *   insn=0x00000000003F29A4 string=0x00000000003F29A8 "h"
 *   insn=0x00000000003F29A8 string=0x00000000003F29AC "@"
 *   insn=0x00000000003F29C8 string=0x00000000003F29CC "\t\t@"
 *   insn=0x00000000003F29CC string=0x00000000003F29D0 ")"
 *   insn=0x00000000003F29D0 string=0x00000000003F29D4 "\t\t"
 *   insn=0x00000000003F29D8 string=0x00000000003F29DC "\t"
 *   insn=0x00000000003F29DC string=0x00000000003F29E0 ")@"
 *   insn=0x00000000003F29E4 string=0x00000000003F29E8 " "
 *   insn=0x00000000003F29F8 string=0x00000000003F29FC "Tn"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::StoreView *__fastcall Caver::StoreViewController::ButtonPressed(__int64 a1, __int64 a2)
{
  Caver::StoreView *result; // x0
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x11
  __int64 v7; // x8
  unsigned __int64 v8; // x9
  unsigned __int64 v9; // x11
  _QWORD *v10; // x8
  __int64 v11; // x0
  Caver::StoreView *v12; // x19
  __int64 v13; // x21
  __int64 v14; // x8
  __int64 v15; // x24
  int64x2_t v16; // q0
  void (__fastcall *v17)(__int64, __int64 *); // x23
  unsigned __int64 v18; // x8
  void (__fastcall *v19)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v20; // x8
  __int64 (__fastcall *v21)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x20
  __int64 v28; // x20
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x8
  __int64 v33; // x0
  Caver::StoreView *v34; // x8
  __int64 v35; // x19
  __int64 v36; // x9
  __int64 v37; // x0
  unsigned __int64 v38; // [xsp+0h] [xbp-A0h]
  int64x2_t v39; // [xsp+8h] [xbp-98h] BYREF
  __int64 v40; // [xsp+18h] [xbp-88h]
  __int64 v41; // [xsp+20h] [xbp-80h] BYREF
  Caver::StoreView *v42; // [xsp+28h] [xbp-78h]
  unsigned __int64 v43; // [xsp+30h] [xbp-70h]
  int64x2_t v44; // [xsp+38h] [xbp-68h] BYREF
  __int64 v45; // [xsp+48h] [xbp-58h]
  int64x2_t v46; // [xsp+50h] [xbp-50h] BYREF
  __int64 v47; // [xsp+60h] [xbp-40h]
  __int64 v48; // [xsp+68h] [xbp-38h]

  v48 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = *(Caver::StoreView **)(a1 + 88);
  if ( *((_QWORD *)result + 30) == a2 )
  {
    v10 = *(_QWORD **)(a1 + 80);
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD *__return_ptr, _QWORD, __int64))*v10)(v10, *(_QWORD *)(a1 + 80), a1);
      result = *(Caver::StoreView **)(a1 + 88);
    }
    Caver::StoreView::AnimateOut(result);
    return (Caver::StoreView *)Caver::GUIViewController::DismissModalViewController(*(Caver::GUIViewController **)(a1 + 40));
  }
  else if ( *((_QWORD *)result + 36) == a2 )
  {
    v11 = Caver::StoreController::SharedController(result);
    v12 = *(Caver::StoreView **)(a1 + 16);
    v13 = v11;
    if ( v12 && (v14 = *((_QWORD *)v12 + 1)) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v16 = vdupq_n_s64(0);
      v17 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 56LL);
      *((_QWORD *)v12 + 1) = v14 + 2;
      v47 = a1;
      v16.n128_u64[0] = (unsigned __int64)Caver::StoreViewController::RestoreCompletion;
      v46 = v16;
      if ( (boost::detail::function::has_empty_target() & 1) != 0 )
      {
        v18 = 0;
      }
      else
      {
        v40 = v47;
        v39 = v46;
        v18 = (unsigned __int64)boost::function2<void,std::vector<std::string> const&,std::string const&>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::StoreViewController,std::vector<std::string> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::StoreViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::StoreViewController,std::vector<std::string> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::StoreViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
      }
      v38 = v18;
      v41 = v15;
      v42 = v12;
      ++*((_QWORD *)v12 + 2);
      v43 = 0;
      if ( v18 )
      {
        v43 = v18;
        if ( (v18 & 1) != 0 )
        {
          v45 = v40;
          v44 = v39;
        }
        else
        {
          (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v18 & 0xFFFFFFFFFFFFFFFELL))(&v39, &v44, 0);
        }
      }
      v17(v13, &v41);
      if ( v43 )
      {
        if ( (v43 & 1) == 0 )
        {
          v19 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v43 & 0xFFFFFFFFFFFFFFFELL);
          if ( v19 )
            v19(&v44, &v44, 2);
        }
        v43 = 0;
      }
      result = v42;
      if ( v42 )
      {
        v20 = *((_QWORD *)v42 + 2) - 1LL;
        *((_QWORD *)v42 + 2) = v20;
        if ( !v20 )
          result = (Caver::StoreView *)(*(__int64 (__fastcall **)(Caver::StoreView *))(*(_QWORD *)result + 24LL))(result);
      }
      if ( v38 )
      {
        if ( (v38 & 1) == 0 )
        {
          v21 = *(__int64 (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v38 & 0xFFFFFFFFFFFFFFFELL);
          if ( v21 )
            result = (Caver::StoreView *)v21(&v39, &v39, 2);
        }
      }
      v22 = *((_QWORD *)v12 + 1) - 1LL;
      *((_QWORD *)v12 + 1) = v22;
      if ( !v22 )
      {
        result = (Caver::StoreView *)(*(__int64 (__fastcall **)(Caver::StoreView *))(*(_QWORD *)v12 + 16LL))(v12);
        v23 = *((_QWORD *)v12 + 2) - 1LL;
        *((_QWORD *)v12 + 2) = v23;
        if ( !v23 )
          result = (Caver::StoreView *)(*(__int64 (__fastcall **)(Caver::StoreView *))(*(_QWORD *)v12 + 24LL))(v12);
      }
      v24 = *((_QWORD *)v12 + 1) - 1LL;
      *((_QWORD *)v12 + 1) = v24;
      if ( !v24 )
      {
        result = (Caver::StoreView *)(*(__int64 (__fastcall **)(Caver::StoreView *))(*(_QWORD *)v12 + 16LL))(v12);
        v25 = *((_QWORD *)v12 + 2) - 1LL;
        *((_QWORD *)v12 + 2) = v25;
        if ( !v25 )
          return (Caver::StoreView *)(*(__int64 (__fastcall **)(Caver::StoreView *))(*(_QWORD *)v12 + 24LL))(v12);
      }
    }
    else
    {
      v46.n128_u64[0] = (unsigned __int64)off_6CC4E8;
      boost::throw_exception<boost::bad_weak_ptr>();
      v27 = v26;
      std::exception::~exception((std::exception *)&v46);
      v28 = sub_5818C4(v27);
      v29 = *((_QWORD *)v12 + 1) - 1LL;
      *((_QWORD *)v12 + 1) = v29;
      if ( !v29 )
      {
        (*(void (__fastcall **)(Caver::StoreView *))(*(_QWORD *)v12 + 16LL))(v12);
        v30 = *((_QWORD *)v12 + 2) - 1LL;
        *((_QWORD *)v12 + 2) = v30;
        if ( !v30 )
          (*(void (__fastcall **)(Caver::StoreView *))(*(_QWORD *)v12 + 24LL))(v12);
      }
      v31 = *((_QWORD *)v12 + 1) - 1LL;
      *((_QWORD *)v12 + 1) = v31;
      if ( !v31 )
      {
        (*(void (__fastcall **)(Caver::StoreView *))(*(_QWORD *)v12 + 16LL))(v12);
        v32 = *((_QWORD *)v12 + 2) - 1LL;
        *((_QWORD *)v12 + 2) = v32;
        if ( !v32 )
          (*(void (__fastcall **)(Caver::StoreView *))(*(_QWORD *)v12 + 24LL))(v12);
      }
      v33 = sub_5818C4(v28);
      v34 = v42;
      v35 = v33;
      if ( v42 )
      {
        v36 = *((_QWORD *)v42 + 2) - 1LL;
        *((_QWORD *)v42 + 2) = v36;
        if ( !v36 )
          (*(void (__fastcall **)(Caver::StoreView *))(*(_QWORD *)v34 + 24LL))(v34);
      }
      v37 = ((__int64 (__fastcall *)(__int64))loc_20E34C)(v35);
      return (Caver::StoreView *)Caver::StoreViewController::UpdateProductBuyButton(v37);
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 112);
    v5 = *(_QWORD *)(a1 + 120);
    v6 = v5 - v4;
    if ( v5 != v4 )
    {
      v7 = 0;
      v8 = 0;
      v9 = v6 >> 3;
      while ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)result + 40) + v7) + 256LL) != a2 )
      {
        ++v8;
        v7 += 16;
        if ( v9 <= v8 )
          return result;
      }
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 136) + v7) )
        return (Caver::StoreView *)Caver::StoreViewController::PurchaseProduct();
    }
  }
  return result;
}

