/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003656F4
 * Mangled: _ZN5Caver27GuidePurchaseViewController8LoadViewEv
 * Demangled: Caver::GuidePurchaseViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000200B70  boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>(Caver::GuidePurchaseView *)
 *   0x00000000002032C0  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000365DF0  Caver::GuidePurchaseViewController::ProductRequestCompletion(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x0000000000368A38  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GuidePurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 212
 *   insn=0x0000000000365708 string=0x000000000036570C "V"
 *   insn=0x0000000000365720 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036574C string=0x0000000000365750 "3"
 *   insn=0x0000000000365750 string=0x0000000000365754 "h"
 *   insn=0x0000000000365754 string=0x0000000000365758 ""
 *   insn=0x0000000000365758 string=0x000000000036575C "h"
 *   insn=0x0000000000365760 string=0x0000000000365764 "h"
 *   insn=0x0000000000365768 string=0x000000000036576C "\t@"
 *   insn=0x0000000000365770 string=0x0000000000365774 "h\n@"
 *   insn=0x0000000000365774 string=0x0000000000365778 ""
 *   insn=0x0000000000365778 string=0x000000000036577C "h\n"
 *   insn=0x0000000000365780 string=0x0000000000365784 "h"
 *   insn=0x0000000000365788 string=0x000000000036578C "@"
 *   insn=0x0000000000365798 string=0x000000000036579C "\tq@"
 *   insn=0x000000000036579C string=0x00000000003657A0 "\ny"
 *   insn=0x00000000003657A0 string=0x00000000003657A4 "?I"
 *   insn=0x00000000003657AC string=0x00000000003657B0 "I"
 *   insn=0x00000000003657B0 string=0x00000000003657B4 "\tq"
 *   insn=0x00000000003657B4 string=0x00000000003657B8 " "
 *   insn=0x00000000003657BC string=0x0000000000583734 "o"
 *   insn=0x00000000003657CC string=0x00000000003657D0 ""
 *   insn=0x00000000003657D0 string=0x00000000003657D4 "-@"
 *   insn=0x00000000003657E8 string=0x00000000003657EC "A"
 *   insn=0x00000000003657EC string=0x000000000058E508 "compass"
 *   insn=0x0000000000365804 string=0x0000000000365808 "h"
 *   insn=0x0000000000365804 string=0x0000000000365B18 ""
 *   insn=0x0000000000365808 string=0x000000000036580C "h"
 *   insn=0x0000000000365814 string=0x0000000000365818 ")"
 *   insn=0x000000000036581C string=0x0000000000365820 "\t"
 *   insn=0x0000000000365824 string=0x0000000000365828 " "
 *   insn=0x0000000000365828 string=0x000000000036582C "h"
 *   insn=0x000000000036583C string=0x0000000000365840 "`"
 *   insn=0x000000000036583C string=0x00000000001F6B70 "0'"
 *   insn=0x0000000000365844 string=0x0000000000365848 ""
 *   insn=0x0000000000365858 string=0x000000000036585C ""
 *   insn=0x000000000036585C string=0x0000000000365860 "\tD"
 *   insn=0x0000000000365868 string=0x000000000036586C "i\n@"
 *   insn=0x000000000036586C string=0x0000000000365870 ")"
 *   insn=0x0000000000365870 string=0x0000000000365874 "i\n"
 *   insn=0x0000000000365878 string=0x000000000036587C ""
 *   insn=0x0000000000365880 string=0x0000000000365884 "H"
 *   insn=0x0000000000365884 string=0x0000000000365888 ""
 *   insn=0x0000000000365888 string=0x000000000036588C ""
 *   insn=0x0000000000365890 string=0x0000000000365894 " !"
 *   insn=0x0000000000365898 string=0x000000000036589C "!a"
 *   insn=0x00000000003658CC string=0x00000000003658D0 "h"
 *   insn=0x00000000003658D0 string=0x00000000003658D4 "("
 *   insn=0x00000000003658D4 string=0x00000000003658D8 ""
 *   insn=0x00000000003658D8 string=0x00000000003658DC ""
 *   insn=0x00000000003658E4 string=0x00000000003658E8 " a"
 *   insn=0x0000000000365900 string=0x0000000000365904 "@"
 *   insn=0x0000000000365904 string=0x0000000000365908 ""
 *   insn=0x0000000000365908 string=0x000000000036590C ""
 *   insn=0x0000000000365910 string=0x0000000000365914 ""
 *   insn=0x0000000000365914 string=0x0000000000365918 "@"
 *   insn=0x0000000000365920 string=0x0000000000365924 "h"
 *   insn=0x0000000000365924 string=0x0000000000365928 "("
 *   insn=0x0000000000365924 string=0x0000000000365950 "h"
 *   insn=0x0000000000365928 string=0x000000000036592C ""
 *   insn=0x000000000036592C string=0x0000000000365930 ""
 *   insn=0x0000000000365938 string=0x000000000036593C " !"
 *   insn=0x0000000000365950 string=0x0000000000365954 ""
 *   insn=0x0000000000365954 string=0x0000000000365958 "h"
 *   insn=0x000000000036595C string=0x0000000000365960 "h"
 *   insn=0x000000000036595C string=0x0000000000365990 "h"
 *   insn=0x0000000000365960 string=0x0000000000365964 "\t@"
 *   insn=0x000000000036596C string=0x0000000000365970 "h\n@"
 *   insn=0x0000000000365970 string=0x0000000000365974 ""
 *   insn=0x0000000000365974 string=0x0000000000365978 "h\n"
 *   insn=0x000000000036597C string=0x0000000000365980 "h"
 *   insn=0x0000000000365980 string=0x0000000000365984 "@"
 *   insn=0x0000000000365990 string=0x0000000000365994 ""
 *   insn=0x0000000000365994 string=0x0000000000365998 "h"
 *   insn=0x000000000036599C string=0x00000000003659A0 "h"
 *   insn=0x00000000003659A0 string=0x00000000003659A4 "\t@"
 *   insn=0x00000000003659AC string=0x00000000003659B0 "h\n@"
 *   insn=0x00000000003659B0 string=0x00000000003659B4 ""
 *   insn=0x00000000003659B4 string=0x00000000003659B8 "h\n"
 *   insn=0x00000000003659BC string=0x00000000003659C0 "h"
 *   insn=0x00000000003659C0 string=0x00000000003659C4 "@"
 *   insn=0x00000000003659D0 string=0x00000000003659D4 "\t"
 *   insn=0x00000000003659D4 string=0x00000000003659D8 ")"
 *   insn=0x00000000003659E0 string=0x00000000003659E4 "A"
 *   insn=0x00000000003659EC string=0x00000000003659F0 "i"
 *   insn=0x00000000003659F0 string=0x00000000003659F4 ")\t"
 *   insn=0x00000000003659F4 string=0x00000000003659F8 "i"
 *   insn=0x0000000000365A00 string=0x0000000000365A04 "5"
 *   insn=0x0000000000365A08 string=0x0000000000365A0C ""
 *   insn=0x0000000000365A18 string=0x0000000000365A1C "\t@"
 *   insn=0x0000000000365A28 string=0x0000000000365A2C ""
 *   insn=0x0000000000365A38 string=0x0000000000365A3C "@"
 *   insn=0x0000000000365A4C string=0x0000000000365A50 ""
 *   insn=0x0000000000365A4C string=0x0000000000365A60 "3"
 *   insn=0x0000000000365A50 string=0x0000000000365A54 ""
 *   insn=0x0000000000365A60 string=0x0000000000365A64 "h"
 *   insn=0x0000000000365A64 string=0x0000000000365A68 ""
 *   insn=0x0000000000365A68 string=0x0000000000365A6C "h"
 *   insn=0x0000000000365A70 string=0x0000000000365A74 "h"
 *   insn=0x0000000000365A78 string=0x0000000000365A7C "\t@"
 *   insn=0x0000000000365A80 string=0x0000000000365A84 "h\n@"
 *   insn=0x0000000000365A84 string=0x0000000000365A88 ""
 *   insn=0x0000000000365A88 string=0x0000000000365A8C "h\n"
 *   insn=0x0000000000365A90 string=0x0000000000365A94 "h"
 *   insn=0x0000000000365A98 string=0x0000000000365A9C "@"
 *   insn=0x0000000000365ACC string=0x0000000000365AD0 ")=G"
 *   insn=0x0000000000365AD0 string=0x0000000000365AD4 "!"
 *   insn=0x0000000000365AD8 string=0x0000000000365ADC "\t"
 *   insn=0x0000000000365AD8 string=0x0000000000365AF0 "\t"
 *   insn=0x0000000000365ADC string=0x0000000000365AE0 "*"
 *   insn=0x0000000000365AE0 string=0x0000000000365AE4 "\n"
 *   insn=0x0000000000365AEC string=0x0000000000365AFC "?"
 *   insn=0x0000000000365AF0 string=0x0000000000365AF4 "*"
 *   insn=0x0000000000365AF4 string=0x0000000000365AF8 "\n"
 *   insn=0x0000000000365AFC string=0x0000000000365B00 "L"
 *   insn=0x0000000000365B04 string=0x0000000000365B08 "'"
 *   insn=0x0000000000365B18 string=0x0000000000365B1C ""
 *   insn=0x0000000000365B1C string=0x0000000000365B20 "A"
 *   insn=0x0000000000365B2C string=0x00000000001FA980 "0'"
 *   insn=0x0000000000365B30 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000365B38 string=0x0000000000365B3C "Mi"
 *   insn=0x0000000000365B3C string=0x0000000000365B40 "z"
 *   insn=0x0000000000365B44 string=0x0000000000365B48 "X"
 *   insn=0x0000000000365B48 string=0x0000000000365CA8 "h"
 *   insn=0x0000000000365B50 string=0x0000000000365B54 "(\t"
 *   insn=0x0000000000365B54 string=0x0000000000365B58 "\t\t@"
 *   insn=0x0000000000365B58 string=0x0000000000365B5C ")"
 *   insn=0x0000000000365B5C string=0x0000000000365B60 "\t\t"
 *   insn=0x0000000000365B64 string=0x0000000000365B68 "\t"
 *   insn=0x0000000000365B68 string=0x0000000000365B6C ")@"
 *   insn=0x0000000000365B70 string=0x0000000000365B74 " "
 *   insn=0x0000000000365B74 string=0x0000000000365B78 "@"
 *   insn=0x0000000000365B88 string=0x0000000000365B8C "G"
 *   insn=0x0000000000365B88 string=0x0000000000365C80 "("
 *   insn=0x0000000000365B94 string=0x0000000000365B98 ""
 *   insn=0x0000000000365B98 string=0x0000000000365B9C "\t\t@"
 *   insn=0x0000000000365B9C string=0x0000000000365BA0 ")"
 *   insn=0x0000000000365BA0 string=0x0000000000365BA4 "\t\t"
 *   insn=0x0000000000365BA8 string=0x0000000000365BAC "\t"
 *   insn=0x0000000000365BAC string=0x0000000000365BB0 ")@"
 *   insn=0x0000000000365BB4 string=0x0000000000365BB8 " "
 *   insn=0x0000000000365BB8 string=0x0000000000365BBC "/"
 *   insn=0x0000000000365BC4 string=0x0000000000365BC8 "X"
 *   insn=0x0000000000365BCC string=0x0000000000365BD0 "F"
 *   insn=0x0000000000365BD0 string=0x0000000000365CE8 "h"
 *   insn=0x0000000000365BD8 string=0x0000000000365BDC "h"
 *   insn=0x0000000000365BDC string=0x0000000000365BE0 ""
 *   insn=0x0000000000365BE0 string=0x0000000000365BE4 "h"
 *   insn=0x0000000000365BE4 string=0x0000000000365BE8 "a"
 *   insn=0x0000000000365BE8 string=0x0000000000365BEC "h"
 *   insn=0x0000000000365BEC string=0x0000000000365BF0 "\t@"
 *   insn=0x0000000000365BF8 string=0x0000000000365BFC "h\n@"
 *   insn=0x0000000000365BFC string=0x0000000000365C00 ""
 *   insn=0x0000000000365C00 string=0x0000000000365C04 "h\n"
 *   insn=0x0000000000365C04 string=0x0000000000365C08 "a"
 *   insn=0x0000000000365C08 string=0x0000000000365C0C "h"
 *   insn=0x0000000000365C0C string=0x0000000000365C10 "@"
 *   insn=0x0000000000365C18 string=0x0000000000365C1C "n"
 *   insn=0x0000000000365C24 string=0x0000000000365C28 "h"
 *   insn=0x0000000000365C28 string=0x0000000000365C2C "("
 *   insn=0x0000000000365C2C string=0x0000000000365C30 ""
 *   insn=0x0000000000365C30 string=0x0000000000365C34 ""
 *   insn=0x0000000000365C3C string=0x0000000000365C40 " a"
 *   insn=0x0000000000365C58 string=0x0000000000365C5C "@"
 *   insn=0x0000000000365C5C string=0x0000000000365C60 ""
 *   insn=0x0000000000365C60 string=0x0000000000365C64 ""
 *   insn=0x0000000000365C68 string=0x0000000000365C6C ""
 *   insn=0x0000000000365C6C string=0x0000000000365C70 "@"
 *   insn=0x0000000000365C78 string=0x0000000000365C7C "h"
 *   insn=0x0000000000365C80 string=0x0000000000365C84 ""
 *   insn=0x0000000000365C84 string=0x0000000000365C88 ""
 *   insn=0x0000000000365C90 string=0x0000000000365C94 " !"
 *   insn=0x0000000000365CA8 string=0x0000000000365CAC ""
 *   insn=0x0000000000365CAC string=0x0000000000365CB0 "h"
 *   insn=0x0000000000365CB4 string=0x0000000000365CB8 "h"
 *   insn=0x0000000000365CB8 string=0x0000000000365CBC "\t@"
 *   insn=0x0000000000365CC4 string=0x0000000000365CC8 "h\n@"
 *   insn=0x0000000000365CC8 string=0x0000000000365CCC ""
 *   insn=0x0000000000365CCC string=0x0000000000365CD0 "h\n"
 *   insn=0x0000000000365CD4 string=0x0000000000365CD8 "h"
 *   insn=0x0000000000365CD8 string=0x0000000000365CDC "@"
 *   insn=0x0000000000365CE8 string=0x0000000000365CEC ""
 *   insn=0x0000000000365CEC string=0x0000000000365CF0 "h"
 *   insn=0x0000000000365CF4 string=0x0000000000365CF8 "h"
 *   insn=0x0000000000365CF8 string=0x0000000000365CFC "\t@"
 *   insn=0x0000000000365D04 string=0x0000000000365D08 "h\n@"
 *   insn=0x0000000000365D08 string=0x0000000000365D0C ""
 *   insn=0x0000000000365D0C string=0x0000000000365D10 "h\n"
 *   insn=0x0000000000365D14 string=0x0000000000365D18 "h"
 *   insn=0x0000000000365D18 string=0x0000000000365D1C "@"
 *   insn=0x0000000000365D28 string=0x0000000000365D2C "\t"
 *   insn=0x0000000000365D2C string=0x0000000000365D30 ")"
 *   insn=0x0000000000365D40 string=0x0000000000365D44 ")=G"
 *   insn=0x0000000000365D44 string=0x0000000000365D48 "!"
 *   insn=0x0000000000365D48 string=0x0000000000365D4C "i"
 *   insn=0x0000000000365D4C string=0x0000000000365D50 "\t"
 *   insn=0x0000000000365D4C string=0x0000000000365D78 "\t"
 *   insn=0x0000000000365D50 string=0x0000000000365D54 "*"
 *   insn=0x0000000000365D54 string=0x0000000000365D58 "\n"
 *   insn=0x0000000000365D5C string=0x0000000000365D60 "?"
 *   insn=0x0000000000365D78 string=0x0000000000365D7C "*"
 *   insn=0x0000000000365D7C string=0x0000000000365D80 "\n"
 *   insn=0x0000000000365D80 string=0x0000000000365D84 "?"
 *   insn=0x0000000000365D84 string=0x0000000000365D88 ""
 *   insn=0x0000000000365D98 string=0x0000000000365D9C "\t\t@"
 *   insn=0x0000000000365D9C string=0x0000000000365DA0 ")"
 *   insn=0x0000000000365DA0 string=0x0000000000365DA4 "\t\t"
 *   insn=0x0000000000365DA8 string=0x0000000000365DAC "\t"
 *   insn=0x0000000000365DAC string=0x0000000000365DB0 ")@"
 *   insn=0x0000000000365DB4 string=0x0000000000365DB8 " "
 *   insn=0x0000000000365DC8 string=0x0000000000365DCC "`"
 *   insn=0x0000000000365DE0 string=0x0000000000365DE4 "3E"
 *   insn=0x0000000000365DE4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::GuidePurchaseViewController::LoadView(
        Caver::GuidePurchaseViewController *this))(_QWORD, Caver::GuidePurchaseViewController *)
{
  Caver::GuidePurchaseView *v2; // x0
  float *v3; // x0
  _QWORD *v4; // x19
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  int v10; // w9
  __int64 v11; // x21
  void (__fastcall *v12)(__int64, __int64 *, __int64 *); // x23
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x24
  int64x2_t v16; // q0
  unsigned __int64 v17; // x8
  void (__fastcall *v18)(int64x2_t *, int64x2_t *, __int64); // x8
  _QWORD *v19; // x0
  __int64 v20; // x8
  void (__fastcall *v21)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  void *v26; // x0
  __int64 v27; // x8
  _QWORD *v28; // x19
  _QWORD *v29; // x21
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::GuidePurchaseViewController *); // x0
  __int64 v33; // x8
  __int64 v34; // x8
  unsigned int *v35; // x8
  int v36; // w9
  unsigned __int64 v37; // [xsp+8h] [xbp-A8h]
  int64x2_t v38; // [xsp+10h] [xbp-A0h] BYREF
  Caver::GuidePurchaseViewController *v39; // [xsp+20h] [xbp-90h]
  __int64 v40; // [xsp+28h] [xbp-88h] BYREF
  _QWORD *v41; // [xsp+30h] [xbp-80h]
  unsigned __int64 v42; // [xsp+38h] [xbp-78h]
  int64x2_t v43; // [xsp+40h] [xbp-70h] BYREF
  Caver::GuidePurchaseViewController *v44; // [xsp+50h] [xbp-60h]
  __int64 v45; // [xsp+58h] [xbp-58h] BYREF
  int64x2_t v46; // [xsp+60h] [xbp-50h]
  Caver::GuidePurchaseViewController *v47; // [xsp+70h] [xbp-40h]
  __int64 v48; // [xsp+78h] [xbp-38h]

  v48 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::GuidePurchaseView *)operator new(0x170u);
  Caver::GuidePurchaseView::GuidePurchaseView(v2);
  v3 = (float *)boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>();
  v4 = (_QWORD *)*((_QWORD *)this + 13);
  v5 = v46.n128_u64[0];
  v46.n128_u64[0] = *((_QWORD *)this + 12);
  v6 = v46.n128_u64[1];
  *((_QWORD *)this + 12) = v5;
  *((_QWORD *)this + 13) = v6;
  v46.n128_u64[1] = (unsigned __int64)v4;
  if ( v4 )
  {
    v7 = v4[1] - 1LL;
    v4[1] = v7;
    if ( !v7 )
    {
      v3 = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v8 = v4[2] - 1LL;
      v4[2] = v8;
      if ( !v8 )
        v3 = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  v9 = *((_QWORD *)this + 12);
  v10 = *(_DWORD *)(v9 + 112);
  *(_QWORD *)(v9 + 240) = (char *)this + 72;
  if ( v10 != 18 )
  {
    v3 = *(float **)(v9 + 88);
    *(_DWORD *)(v9 + 112) = 18;
    if ( v3 )
    {
      if ( v3[35] > 0.001 )
        v3 = (float *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)v3 + 88LL))(v3);
    }
  }
  v11 = Caver::StoreController::SharedController((Caver::StoreController *)v3);
  v12 = *(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v11 + 32LL);
  sub_566BB8((int)&v45, "compass");
  v13 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !v13 || (v14 = v13[1]) == 0 )
  {
    v46.n128_u64[0] = (unsigned __int64)off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v15 = *((_QWORD *)this + 1);
  v16 = vdupq_n_s64(0);
  v16.n128_u64[0] = (unsigned __int64)Caver::GuidePurchaseViewController::ProductRequestCompletion;
  v13[1] = v14 + 2;
  v46 = v16;
  v47 = this;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v17 = 0;
  }
  else
  {
    v39 = v47;
    v38 = v46;
    v17 = (unsigned __int64)boost::function3<void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GuidePurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GuidePurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>)::stored_vtable;
  }
  v37 = v17;
  v40 = v15;
  v41 = v13;
  ++v13[2];
  v42 = 0;
  if ( v17 )
  {
    v42 = v17;
    if ( (v17 & 1) != 0 )
    {
      v44 = v39;
      v43 = v38;
    }
    else
    {
      (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v17 & 0xFFFFFFFFFFFFFFFELL))(&v38, &v43, 0);
    }
  }
  v12(v11, &v45, &v40);
  if ( v42 )
  {
    if ( (v42 & 1) == 0 )
    {
      v18 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v42 & 0xFFFFFFFFFFFFFFFELL);
      if ( v18 )
        v18(&v43, &v43, 2);
    }
    v42 = 0;
  }
  v19 = v41;
  if ( v41 )
  {
    v20 = v41[2] - 1LL;
    v41[2] = v20;
    if ( !v20 )
      (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
  }
  if ( v37 )
  {
    if ( (v37 & 1) == 0 )
    {
      v21 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v37 & 0xFFFFFFFFFFFFFFFELL);
      if ( v21 )
        v21(&v38, &v38, 2);
    }
  }
  v22 = v13[1] - 1LL;
  v13[1] = v22;
  if ( !v22 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    v23 = v13[2] - 1LL;
    v13[2] = v23;
    if ( !v23 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
  }
  v24 = v13[1] - 1LL;
  v13[1] = v24;
  if ( !v24 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    v25 = v13[2] - 1LL;
    v13[2] = v25;
    if ( !v25 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
  }
  v26 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v45 - 8);
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
    {
      operator delete(v26);
      v27 = *((_QWORD *)this + 12);
      v28 = (_QWORD *)*((_QWORD *)this + 13);
      if ( !v28 )
        goto LABEL_39;
      goto LABEL_38;
    }
  }
  v27 = *((_QWORD *)this + 12);
  v28 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v28 )
LABEL_38:
    v28[1] += 2LL;
LABEL_39:
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
  result = (__int64 (__fastcall ***)(_QWORD, Caver::GuidePurchaseViewController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::GuidePurchaseViewController *))(**result)(result, this);
  if ( v28 )
  {
    v33 = v28[1] - 1LL;
    v28[1] = v33;
    if ( !v33 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::GuidePurchaseViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
      v34 = v28[2] - 1LL;
      v28[2] = v34;
      if ( !v34 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::GuidePurchaseViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
    }
  }
  return result;
}

