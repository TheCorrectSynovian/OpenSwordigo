/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368140
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_17GuidePurchaseViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuidePurchaseView,Caver::GuidePurchaseView>(boost::shared_ptr<Caver::GuidePurchaseView> const*,Caver::GuidePurchaseView *)
 *
 * Callers: 1
 *   0x0000000000202340  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuidePurchaseView,Caver::GuidePurchaseView>(boost::shared_ptr<Caver::GuidePurchaseView> const*,Caver::GuidePurchaseView *)
 *
 * Callees: 9
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000201E00  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_weak_ptr> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000368320  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x0000000000368150 string=0x0000000000368154 "`"
 *   insn=0x0000000000368154 string=0x0000000000368158 ""
 *   insn=0x0000000000368154 string=0x0000000000368160 "3"
 *   insn=0x0000000000368158 string=0x000000000036815C "h"
 *   insn=0x0000000000368164 string=0x0000000000368168 "h"
 *   insn=0x0000000000368168 string=0x000000000036816C ""
 *   insn=0x000000000036816C string=0x0000000000368170 "h"
 *   insn=0x0000000000368180 string=0x0000000000368184 "h\n@"
 *   insn=0x0000000000368184 string=0x0000000000368188 ""
 *   insn=0x0000000000368188 string=0x000000000036818C "h\n"
 *   insn=0x0000000000368190 string=0x0000000000368194 "@"
 *   insn=0x0000000000368194 string=0x0000000000368198 ""
 *   insn=0x0000000000368198 string=0x000000000036819C ""
 *   insn=0x00000000003681A0 string=0x00000000003681A4 ""
 *   insn=0x00000000003681A4 string=0x00000000003681A8 "@"
 *   insn=0x00000000003681B4 string=0x00000000003681B8 "h"
 *   insn=0x00000000003681B8 string=0x00000000003681BC ""
 *   insn=0x00000000003681BC string=0x00000000003681C0 "h"
 *   insn=0x00000000003681C0 string=0x00000000003681C4 "!"
 *   insn=0x00000000003681C4 string=0x00000000003681C8 "h"
 *   insn=0x00000000003681CC string=0x00000000003681D0 "\t@"
 *   insn=0x00000000003681D4 string=0x00000000003681D8 "h\n@"
 *   insn=0x00000000003681D8 string=0x00000000003681DC ""
 *   insn=0x00000000003681DC string=0x00000000003681E0 "h\n"
 *   insn=0x00000000003681E4 string=0x00000000003681F4 "h"
 *   insn=0x0000000000368204 string=0x0000000000368208 " "
 *   insn=0x000000000036820C string=0x0000000000368210 "3"
 *   insn=0x0000000000368210 string=0x0000000000368214 "h"
 *   insn=0x0000000000368214 string=0x0000000000368218 ""
 *   insn=0x0000000000368218 string=0x000000000036821C "h"
 *   insn=0x0000000000368220 string=0x0000000000368224 "h"
 *   insn=0x0000000000368224 string=0x0000000000368228 "\t@"
 *   insn=0x0000000000368230 string=0x0000000000368234 "h\n@"
 *   insn=0x0000000000368234 string=0x0000000000368238 ""
 *   insn=0x0000000000368238 string=0x000000000036823C "h\n"
 *   insn=0x0000000000368240 string=0x0000000000368244 "h"
 *   insn=0x0000000000368244 string=0x0000000000368248 "@"
 *   insn=0x0000000000368258 string=0x000000000036825C "<"
 *   insn=0x0000000000368274 string=0x0000000000368278 "zD"
 *   insn=0x0000000000368278 string=0x00000000001F9460 "0'"
 *   insn=0x0000000000368284 string=0x0000000000368288 ")QA"
 *   insn=0x0000000000368288 string=0x000000000036828C ""
 *   insn=0x0000000000368294 string=0x0000000000368298 "(A"
 *   insn=0x0000000000368298 string=0x000000000036829C ")"
 *   insn=0x00000000003682A0 string=0x00000000003682A4 " "
 *   insn=0x00000000003682BC string=0x00000000003682C0 "!`D"
 *   insn=0x00000000003682C0 string=0x00000000003682C4 "B,C"
 *   insn=0x00000000003682CC string=0x00000000003682D0 "tL"
 *   insn=0x00000000003682D0 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000003682D4 string=0x00000000003682D8 ""
 *   insn=0x00000000003682DC string=0x00000000003682E0 "A"
 *   insn=0x00000000003682EC string=0x00000000003682F0 "\t"
 *   insn=0x00000000003682F0 string=0x00000000003682F4 ")"
 *   insn=0x00000000003682F8 string=0x00000000003682FC " "
 *   insn=0x0000000000368300 string=0x0000000000368304 "[_"
 *   insn=0x0000000000368304 string=0x0000000000368308 "t"
 *   insn=0x0000000000368310 string=0x00000000001F41F0 "P'"
 *   insn=0x0000000000368314 string=0x0000000000368318 "ke"
 *   insn=0x000000000036831C string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuidePurchaseView,Caver::GuidePurchaseView>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8

  result = (_QWORD *)a1[1];
  if ( !result || !result[1] )
  {
    v5 = *(_QWORD **)(a2 + 8);
    if ( v5 )
      ++v5[1];
    *a1 = a3;
    if ( v5 != result )
    {
      if ( v5 )
        ++v5[2];
      if ( result )
      {
        v6 = result[2] - 1LL;
        result[2] = v6;
        if ( !v6 )
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
      }
      a1[1] = v5;
    }
    if ( v5 )
    {
      v7 = v5[1] - 1LL;
      v5[1] = v7;
      if ( !v7 )
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v8 = v5[2] - 1LL;
        v5[2] = v8;
        if ( !v8 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  return result;
}

