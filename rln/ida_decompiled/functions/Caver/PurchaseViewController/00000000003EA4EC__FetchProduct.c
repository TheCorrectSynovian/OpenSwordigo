/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EA4EC
 * Mangled: _ZN5Caver22PurchaseViewController12FetchProductERKSs
 * Demangled: Caver::PurchaseViewController::FetchProduct(std::string const&)
 *
 * Callers: 1
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FEA00  Caver::PurchaseViewController::UpdateView(void)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003EA940  Caver::PurchaseViewController::ProductRequestCompletion(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x00000000003EBE00  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 123
 *   insn=0x00000000003EA504 string=0x00000000003EA508 "W"
 *   insn=0x00000000003EA51C string=0x00000000003EA520 "b"
 *   insn=0x00000000003EA524 string=0x00000000003EA528 "6Q"
 *   insn=0x00000000003EA528 string=0x00000000003EA52C "QS"
 *   insn=0x00000000003EA538 string=0x00000000003EA53C "h"
 *   insn=0x00000000003EA544 string=0x00000000003EA548 "\t"
 *   insn=0x00000000003EA550 string=0x00000000003EA554 "8"
 *   insn=0x00000000003EA554 string=0x00000000003EA558 "h"
 *   insn=0x00000000003EA560 string=0x00000000003EA564 "QG"
 *   insn=0x00000000003EA574 string=0x00000000003EA578 "~1"
 *   insn=0x00000000003EA578 string=0x00000000003EA57C "`"
 *   insn=0x00000000003EA578 string=0x00000000001F6B70 "0'"
 *   insn=0x00000000003EA580 string=0x00000000003EA584 ""
 *   insn=0x00000000003EA598 string=0x00000000003EA59C "]A"
 *   insn=0x00000000003EA5A4 string=0x00000000003EA5A8 "i\n@"
 *   insn=0x00000000003EA5A8 string=0x00000000003EA5AC ")"
 *   insn=0x00000000003EA5AC string=0x00000000003EA5B0 "i\n"
 *   insn=0x00000000003EA5B4 string=0x00000000003EA5B8 ""
 *   insn=0x00000000003EA5BC string=0x00000000003EA5C0 "H"
 *   insn=0x00000000003EA5C0 string=0x00000000003EA5C4 ""
 *   insn=0x00000000003EA5C4 string=0x00000000003EA5C8 ""
 *   insn=0x00000000003EA5CC string=0x00000000003EA5D0 " !"
 *   insn=0x00000000003EA5D4 string=0x00000000003EA5D8 "!a"
 *   insn=0x00000000003EA608 string=0x00000000003EA60C "h"
 *   insn=0x00000000003EA60C string=0x00000000003EA610 "("
 *   insn=0x00000000003EA610 string=0x00000000003EA614 ""
 *   insn=0x00000000003EA614 string=0x00000000003EA618 ""
 *   insn=0x00000000003EA620 string=0x00000000003EA624 " a"
 *   insn=0x00000000003EA63C string=0x00000000003EA640 "@"
 *   insn=0x00000000003EA640 string=0x00000000003EA644 ""
 *   insn=0x00000000003EA644 string=0x00000000003EA648 ""
 *   insn=0x00000000003EA64C string=0x00000000003EA650 ""
 *   insn=0x00000000003EA650 string=0x00000000003EA654 "@"
 *   insn=0x00000000003EA65C string=0x00000000003EA660 "h"
 *   insn=0x00000000003EA660 string=0x00000000003EA664 "("
 *   insn=0x00000000003EA660 string=0x00000000003EA68C "h"
 *   insn=0x00000000003EA664 string=0x00000000003EA668 ""
 *   insn=0x00000000003EA668 string=0x00000000003EA66C ""
 *   insn=0x00000000003EA674 string=0x00000000003EA678 " !"
 *   insn=0x00000000003EA68C string=0x00000000003EA690 ""
 *   insn=0x00000000003EA690 string=0x00000000003EA694 "h"
 *   insn=0x00000000003EA698 string=0x00000000003EA69C "h"
 *   insn=0x00000000003EA698 string=0x00000000003EA6CC "h"
 *   insn=0x00000000003EA69C string=0x00000000003EA6A0 "\t@"
 *   insn=0x00000000003EA6A8 string=0x00000000003EA6AC "h\n@"
 *   insn=0x00000000003EA6AC string=0x00000000003EA6B0 ""
 *   insn=0x00000000003EA6B0 string=0x00000000003EA6B4 "h\n"
 *   insn=0x00000000003EA6B8 string=0x00000000003EA6BC "h"
 *   insn=0x00000000003EA6BC string=0x00000000003EA6C0 "@"
 *   insn=0x00000000003EA6CC string=0x00000000003EA6D0 ""
 *   insn=0x00000000003EA6D0 string=0x00000000003EA6D4 "h"
 *   insn=0x00000000003EA6D8 string=0x00000000003EA6DC "h"
 *   insn=0x00000000003EA6E0 string=0x00000000003EA6E4 "\t@"
 *   insn=0x00000000003EA6E8 string=0x00000000003EA6EC "h\n@"
 *   insn=0x00000000003EA6EC string=0x00000000003EA6F0 ""
 *   insn=0x00000000003EA6F0 string=0x00000000003EA6F4 "h\n"
 *   insn=0x00000000003EA6F8 string=0x00000000003EA6FC "h"
 *   insn=0x00000000003EA700 string=0x00000000003EA704 "@"
 *   insn=0x00000000003EA738 string=0x00000000003EA73C ""
 *   insn=0x00000000003EA73C string=0x00000000003EA740 "A"
 *   insn=0x00000000003EA74C string=0x00000000001FA980 "0'"
 *   insn=0x00000000003EA750 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003EA758 string=0x00000000003EA75C "EV"
 *   insn=0x00000000003EA760 string=0x00000000003EA764 "X\"
 *   insn=0x00000000003EA768 string=0x00000000003EA76C "C"
 *   insn=0x00000000003EA76C string=0x00000000003EA878 "h"
 *   insn=0x00000000003EA778 string=0x00000000003EA77C "\t\t@"
 *   insn=0x00000000003EA77C string=0x00000000003EA780 ")"
 *   insn=0x00000000003EA780 string=0x00000000003EA784 "\t\t"
 *   insn=0x00000000003EA788 string=0x00000000003EA78C "\t"
 *   insn=0x00000000003EA78C string=0x00000000003EA790 ")@"
 *   insn=0x00000000003EA794 string=0x00000000003EA798 " "
 *   insn=0x00000000003EA798 string=0x00000000003EA79C "+"
 *   insn=0x00000000003EA7A8 string=0x00000000003EA7AC "("
 *   insn=0x00000000003EA7AC string=0x00000000003EA7B0 "2"
 *   insn=0x00000000003EA7AC string=0x00000000003EA850 "("
 *   insn=0x00000000003EA7B8 string=0x00000000003EA7BC "h"
 *   insn=0x00000000003EA7BC string=0x00000000003EA7C0 "\t\t@"
 *   insn=0x00000000003EA7C0 string=0x00000000003EA7C4 ")"
 *   insn=0x00000000003EA7C4 string=0x00000000003EA7C8 "\t\t"
 *   insn=0x00000000003EA7CC string=0x00000000003EA7D0 "\t"
 *   insn=0x00000000003EA7D0 string=0x00000000003EA7D4 ")@"
 *   insn=0x00000000003EA7D8 string=0x00000000003EA7DC " "
 *   insn=0x00000000003EA7E8 string=0x00000000003EA7EC "3"
 *   insn=0x00000000003EA7EC string=0x00000000003EA8B8 "h"
 *   insn=0x00000000003EA7F4 string=0x00000000003EA7F8 "h"
 *   insn=0x00000000003EA7F8 string=0x00000000003EA7FC "("
 *   insn=0x00000000003EA7FC string=0x00000000003EA800 ""
 *   insn=0x00000000003EA800 string=0x00000000003EA804 ""
 *   insn=0x00000000003EA80C string=0x00000000003EA810 " a"
 *   insn=0x00000000003EA828 string=0x00000000003EA82C "@"
 *   insn=0x00000000003EA82C string=0x00000000003EA830 ""
 *   insn=0x00000000003EA830 string=0x00000000003EA834 ""
 *   insn=0x00000000003EA838 string=0x00000000003EA83C ""
 *   insn=0x00000000003EA83C string=0x00000000003EA840 "@"
 *   insn=0x00000000003EA848 string=0x00000000003EA84C "h"
 *   insn=0x00000000003EA850 string=0x00000000003EA854 ""
 *   insn=0x00000000003EA854 string=0x00000000003EA858 ""
 *   insn=0x00000000003EA860 string=0x00000000003EA864 " !"
 *   insn=0x00000000003EA878 string=0x00000000003EA87C ""
 *   insn=0x00000000003EA87C string=0x00000000003EA880 "h"
 *   insn=0x00000000003EA884 string=0x00000000003EA888 "h"
 *   insn=0x00000000003EA888 string=0x00000000003EA88C "\t@"
 *   insn=0x00000000003EA894 string=0x00000000003EA898 "h\n@"
 *   insn=0x00000000003EA898 string=0x00000000003EA89C ""
 *   insn=0x00000000003EA89C string=0x00000000003EA8A0 "h\n"
 *   insn=0x00000000003EA8A4 string=0x00000000003EA8A8 "h"
 *   insn=0x00000000003EA8A8 string=0x00000000003EA8AC "@"
 *   insn=0x00000000003EA8B8 string=0x00000000003EA8BC ""
 *   insn=0x00000000003EA8BC string=0x00000000003EA8C0 "h"
 *   insn=0x00000000003EA8C4 string=0x00000000003EA8C8 "h"
 *   insn=0x00000000003EA8C8 string=0x00000000003EA8CC "\t@"
 *   insn=0x00000000003EA8D4 string=0x00000000003EA8D8 "h\n@"
 *   insn=0x00000000003EA8D8 string=0x00000000003EA8DC ""
 *   insn=0x00000000003EA8DC string=0x00000000003EA8E0 "h\n"
 *   insn=0x00000000003EA8E4 string=0x00000000003EA8E8 "h"
 *   insn=0x00000000003EA8E8 string=0x00000000003EA8EC "@"
 *   insn=0x00000000003EA908 string=0x00000000003EA90C "\t\t@"
 *   insn=0x00000000003EA90C string=0x00000000003EA910 ")"
 *   insn=0x00000000003EA910 string=0x00000000003EA914 "\t\t"
 *   insn=0x00000000003EA918 string=0x00000000003EA91C "\t"
 *   insn=0x00000000003EA91C string=0x00000000003EA920 ")@"
 *   insn=0x00000000003EA924 string=0x00000000003EA928 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PurchaseViewController::FetchProduct(Caver::PurchaseViewController *a1)
{
  _QWORD *v2; // x20
  Caver::StoreController *v3; // x0
  __int64 v4; // x0
  _QWORD *v5; // x19
  __int64 v6; // x21
  __int64 v7; // x8
  __int64 v8; // x25
  int64x2_t v9; // q0
  void (__fastcall *v10)(__int64, _QWORD *, __int64 *); // x24
  unsigned __int64 v11; // x8
  void (__fastcall *v12)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 result; // x0
  __int64 v14; // x8
  __int64 (__fastcall *v15)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  unsigned __int64 v20; // [xsp+0h] [xbp-B0h]
  int64x2_t v21; // [xsp+8h] [xbp-A8h] BYREF
  Caver::PurchaseViewController *v22; // [xsp+18h] [xbp-98h]
  __int64 v23; // [xsp+20h] [xbp-90h] BYREF
  _QWORD *v24; // [xsp+28h] [xbp-88h]
  unsigned __int64 v25; // [xsp+30h] [xbp-80h]
  int64x2_t v26; // [xsp+38h] [xbp-78h] BYREF
  Caver::PurchaseViewController *v27; // [xsp+48h] [xbp-68h]
  int64x2_t v28; // [xsp+50h] [xbp-60h]
  Caver::PurchaseViewController *v29; // [xsp+60h] [xbp-50h]
  __int64 v30; // [xsp+68h] [xbp-48h]

  v2 = (_QWORD *)((char *)a1 + 96);
  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A6A8((char *)a1 + 96);
  Caver::PurchaseViewController::UpdateView(a1);
  v4 = Caver::StoreController::SharedController(v3);
  v5 = (_QWORD *)*((_QWORD *)a1 + 2);
  v6 = v4;
  if ( !v5 || (v7 = v5[1]) == 0 )
  {
    v28.n128_u64[0] = (unsigned __int64)off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v8 = *((_QWORD *)a1 + 1);
  v9 = vdupq_n_s64(0);
  v10 = *(void (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v4 + 32LL);
  v5[1] = v7 + 2;
  v29 = a1;
  v9.n128_u64[0] = (unsigned __int64)Caver::PurchaseViewController::ProductRequestCompletion;
  v28 = v9;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v11 = 0;
  }
  else
  {
    v22 = v29;
    v21 = v28;
    v11 = (unsigned __int64)boost::function3<void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>)::stored_vtable;
  }
  v20 = v11;
  v23 = v8;
  v24 = v5;
  ++v5[2];
  v25 = 0;
  if ( v11 )
  {
    v25 = v11;
    if ( (v11 & 1) != 0 )
    {
      v27 = v22;
      v26 = v21;
    }
    else
    {
      (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v11 & 0xFFFFFFFFFFFFFFFELL))(&v21, &v26, 0);
    }
  }
  v10(v6, v2, &v23);
  if ( v25 )
  {
    if ( (v25 & 1) == 0 )
    {
      v12 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v25 & 0xFFFFFFFFFFFFFFFELL);
      if ( v12 )
        v12(&v26, &v26, 2);
    }
    v25 = 0;
  }
  result = (__int64)v24;
  if ( v24 )
  {
    v14 = v24[2] - 1LL;
    v24[2] = v14;
    if ( !v14 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
  }
  if ( v20 )
  {
    if ( (v20 & 1) == 0 )
    {
      v15 = *(__int64 (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v20 & 0xFFFFFFFFFFFFFFFELL);
      if ( v15 )
        result = v15(&v21, &v21, 2);
    }
  }
  v16 = v5[1] - 1LL;
  v5[1] = v16;
  if ( !v16 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    v17 = v5[2] - 1LL;
    v5[2] = v17;
    if ( !v17 )
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
  }
  v18 = v5[1] - 1LL;
  v5[1] = v18;
  if ( !v18 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    v19 = v5[2] - 1LL;
    v5[2] = v19;
    if ( !v19 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
  }
  return result;
}

