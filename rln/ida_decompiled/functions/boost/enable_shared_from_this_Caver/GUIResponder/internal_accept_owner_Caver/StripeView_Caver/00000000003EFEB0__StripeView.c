/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EFEB0
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_10StripeViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StripeView,Caver::StripeView>(boost::shared_ptr<Caver::StripeView> const*,Caver::StripeView *)
 *
 * Callers: 1
 *   0x00000000001FF4C0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StripeView,Caver::StripeView>(boost::shared_ptr<Caver::StripeView> const*,Caver::StripeView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x00000000003EFEC0 string=0x00000000003EFEC4 "`"
 *   insn=0x00000000003EFEC4 string=0x00000000003EFEC8 ""
 *   insn=0x00000000003EFEC4 string=0x00000000003EFED0 "3"
 *   insn=0x00000000003EFEC8 string=0x00000000003EFECC "h"
 *   insn=0x00000000003EFED4 string=0x00000000003EFED8 "h"
 *   insn=0x00000000003EFED8 string=0x00000000003EFEDC ""
 *   insn=0x00000000003EFEDC string=0x00000000003EFEE0 "h"
 *   insn=0x00000000003EFEF0 string=0x00000000003EFEF4 "h\n@"
 *   insn=0x00000000003EFEF4 string=0x00000000003EFEF8 ""
 *   insn=0x00000000003EFEF8 string=0x00000000003EFEFC "h\n"
 *   insn=0x00000000003EFF00 string=0x00000000003EFF04 "@"
 *   insn=0x00000000003EFF04 string=0x00000000003EFF08 ""
 *   insn=0x00000000003EFF08 string=0x00000000003EFF0C ""
 *   insn=0x00000000003EFF10 string=0x00000000003EFF14 ""
 *   insn=0x00000000003EFF14 string=0x00000000003EFF18 "@"
 *   insn=0x00000000003EFF24 string=0x00000000003EFF28 "h"
 *   insn=0x00000000003EFF28 string=0x00000000003EFF2C ""
 *   insn=0x00000000003EFF2C string=0x00000000003EFF30 "h"
 *   insn=0x00000000003EFF30 string=0x00000000003EFF34 "!"
 *   insn=0x00000000003EFF34 string=0x00000000003EFF38 "h"
 *   insn=0x00000000003EFF3C string=0x00000000003EFF40 "\t@"
 *   insn=0x00000000003EFF44 string=0x00000000003EFF48 "h\n@"
 *   insn=0x00000000003EFF48 string=0x00000000003EFF4C ""
 *   insn=0x00000000003EFF4C string=0x00000000003EFF50 "h\n"
 *   insn=0x00000000003EFF54 string=0x00000000003EFF64 "h"
 *   insn=0x00000000003EFF74 string=0x00000000003EFF78 " "
 *   insn=0x00000000003EFF7C string=0x00000000003EFF80 "3"
 *   insn=0x00000000003EFF80 string=0x00000000003EFF84 "h"
 *   insn=0x00000000003EFF84 string=0x00000000003EFF88 ""
 *   insn=0x00000000003EFF88 string=0x00000000003EFF8C "h"
 *   insn=0x00000000003EFF90 string=0x00000000003EFF94 "h"
 *   insn=0x00000000003EFF94 string=0x00000000003EFF98 "\t@"
 *   insn=0x00000000003EFFA0 string=0x00000000003EFFA4 "h\n@"
 *   insn=0x00000000003EFFA4 string=0x00000000003EFFA8 ""
 *   insn=0x00000000003EFFA8 string=0x00000000003EFFAC "h\n"
 *   insn=0x00000000003EFFB0 string=0x00000000003EFFB4 "h"
 *   insn=0x00000000003EFFB4 string=0x00000000003EFFB8 "@"
 *   insn=0x00000000003EFFC4 string=0x00000000003EFFC8 "?F"
 *   insn=0x00000000003EFFD0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StripeView,Caver::StripeView>(
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

