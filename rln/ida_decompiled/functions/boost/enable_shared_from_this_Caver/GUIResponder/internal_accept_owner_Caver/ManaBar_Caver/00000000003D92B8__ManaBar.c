/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D92B8
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7ManaBarES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ManaBar,Caver::ManaBar>(boost::shared_ptr<Caver::ManaBar> const*,Caver::ManaBar *)
 *
 * Callers: 1
 *   0x00000000002007F0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ManaBar,Caver::ManaBar>(boost::shared_ptr<Caver::ManaBar> const*,Caver::ManaBar *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB7E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TargetFrame,Caver::TargetFrame>(boost::shared_ptr<Caver::TargetFrame> const*,Caver::TargetFrame *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x00000000003D92C8 string=0x00000000003D92CC "`"
 *   insn=0x00000000003D92CC string=0x00000000003D92D0 ""
 *   insn=0x00000000003D92CC string=0x00000000003D92D8 "3"
 *   insn=0x00000000003D92D0 string=0x00000000003D92D4 "h"
 *   insn=0x00000000003D92DC string=0x00000000003D92E0 "h"
 *   insn=0x00000000003D92E0 string=0x00000000003D92E4 ""
 *   insn=0x00000000003D92E4 string=0x00000000003D92E8 "h"
 *   insn=0x00000000003D92F8 string=0x00000000003D92FC "h\n@"
 *   insn=0x00000000003D92FC string=0x00000000003D9300 ""
 *   insn=0x00000000003D9300 string=0x00000000003D9304 "h\n"
 *   insn=0x00000000003D9308 string=0x00000000003D930C "@"
 *   insn=0x00000000003D930C string=0x00000000003D9310 ""
 *   insn=0x00000000003D9310 string=0x00000000003D9314 ""
 *   insn=0x00000000003D9318 string=0x00000000003D931C ""
 *   insn=0x00000000003D931C string=0x00000000003D9320 "@"
 *   insn=0x00000000003D932C string=0x00000000003D9330 "h"
 *   insn=0x00000000003D9330 string=0x00000000003D9334 ""
 *   insn=0x00000000003D9334 string=0x00000000003D9338 "h"
 *   insn=0x00000000003D9338 string=0x00000000003D933C "!"
 *   insn=0x00000000003D933C string=0x00000000003D9340 "h"
 *   insn=0x00000000003D9344 string=0x00000000003D9348 "\t@"
 *   insn=0x00000000003D934C string=0x00000000003D9350 "h\n@"
 *   insn=0x00000000003D9350 string=0x00000000003D9354 ""
 *   insn=0x00000000003D9354 string=0x00000000003D9358 "h\n"
 *   insn=0x00000000003D935C string=0x00000000003D936C "h"
 *   insn=0x00000000003D937C string=0x00000000003D9380 " "
 *   insn=0x00000000003D9384 string=0x00000000003D9388 "3"
 *   insn=0x00000000003D9388 string=0x00000000003D938C "h"
 *   insn=0x00000000003D938C string=0x00000000003D9390 ""
 *   insn=0x00000000003D9390 string=0x00000000003D9394 "h"
 *   insn=0x00000000003D9398 string=0x00000000003D939C "h"
 *   insn=0x00000000003D939C string=0x00000000003D93A0 "\t@"
 *   insn=0x00000000003D93A8 string=0x00000000003D93AC "h\n@"
 *   insn=0x00000000003D93AC string=0x00000000003D93B0 ""
 *   insn=0x00000000003D93B0 string=0x00000000003D93B4 "h\n"
 *   insn=0x00000000003D93B8 string=0x00000000003D93BC "h"
 *   insn=0x00000000003D93BC string=0x00000000003D93C0 "@"
 *   insn=0x00000000003D93CC string=0x00000000003D93D0 "="
 *   insn=0x00000000003D93F0 string=0x00000000003D93F4 "{p"
 *   insn=0x00000000003D93F4 string=0x00000000003D93F8 "i"
 *   insn=0x00000000003D93F4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003D93F8 string=0x00000000003D93FC ")"
 *   insn=0x00000000003D9408 string=0x00000000003D940C "(A"
 *   insn=0x00000000003D9410 string=0x00000000003D9414 ""
 *   insn=0x00000000003D941C string=0x00000000003D9420 "`""
 *   insn=0x00000000003D942C string=0x00000000001FB7E0 "0'"
 *   insn=0x00000000003D9440 string=0x00000000003D9444 "4"
 *   insn=0x00000000003D9448 string=0x00000000003D944C ""
 *   insn=0x00000000003D9458 string=0x00000000003D945C "\t@"
 *   insn=0x00000000003D9468 string=0x00000000003D946C ""
 *   insn=0x00000000003D9478 string=0x00000000003D947C "@"
 *   insn=0x00000000003D9490 string=0x00000000003D9494 "Sl"
 *   insn=0x00000000003D9494 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003D9498 string=0x00000000003D949C "h"
 *   insn=0x00000000003D949C string=0x00000000003D94A0 "!@"
 *   insn=0x00000000003D94B0 string=0x00000000003D94B4 "7"
 *   insn=0x00000000003D94B4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003D94BC string=0x00000000003D94C0 "|w"
 *   insn=0x00000000003D94C0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ManaBar,Caver::ManaBar>(
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

