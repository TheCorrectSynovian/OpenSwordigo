/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000364308
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16SceneLoadingViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>(boost::shared_ptr<Caver::SceneLoadingView> const*,Caver::SceneLoadingView *)
 *
 * Callers: 1
 *   0x00000000001FAA10  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>(boost::shared_ptr<Caver::SceneLoadingView> const*,Caver::SceneLoadingView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000364318 string=0x000000000036431C "`"
 *   insn=0x000000000036431C string=0x0000000000364320 ""
 *   insn=0x000000000036431C string=0x0000000000364328 "3"
 *   insn=0x0000000000364320 string=0x0000000000364324 "h"
 *   insn=0x000000000036432C string=0x0000000000364330 "h"
 *   insn=0x0000000000364330 string=0x0000000000364334 ""
 *   insn=0x0000000000364334 string=0x0000000000364338 "h"
 *   insn=0x0000000000364348 string=0x000000000036434C "h\n@"
 *   insn=0x000000000036434C string=0x0000000000364350 ""
 *   insn=0x0000000000364350 string=0x0000000000364354 "h\n"
 *   insn=0x0000000000364358 string=0x000000000036435C "@"
 *   insn=0x000000000036435C string=0x0000000000364360 ""
 *   insn=0x0000000000364360 string=0x0000000000364364 ""
 *   insn=0x0000000000364368 string=0x000000000036436C ""
 *   insn=0x000000000036436C string=0x0000000000364370 "@"
 *   insn=0x000000000036437C string=0x0000000000364380 "h"
 *   insn=0x0000000000364380 string=0x0000000000364384 ""
 *   insn=0x0000000000364384 string=0x0000000000364388 "h"
 *   insn=0x0000000000364388 string=0x000000000036438C "!"
 *   insn=0x000000000036438C string=0x0000000000364390 "h"
 *   insn=0x0000000000364394 string=0x0000000000364398 "\t@"
 *   insn=0x000000000036439C string=0x00000000003643A0 "h\n@"
 *   insn=0x00000000003643A0 string=0x00000000003643A4 ""
 *   insn=0x00000000003643A4 string=0x00000000003643A8 "h\n"
 *   insn=0x00000000003643AC string=0x00000000003643BC "h"
 *   insn=0x00000000003643CC string=0x00000000003643D0 " "
 *   insn=0x00000000003643D4 string=0x00000000003643D8 "3"
 *   insn=0x00000000003643D8 string=0x00000000003643DC "h"
 *   insn=0x00000000003643DC string=0x00000000003643E0 ""
 *   insn=0x00000000003643E0 string=0x00000000003643E4 "h"
 *   insn=0x00000000003643E8 string=0x00000000003643EC "h"
 *   insn=0x00000000003643EC string=0x00000000003643F0 "\t@"
 *   insn=0x00000000003643F8 string=0x00000000003643FC "h\n@"
 *   insn=0x00000000003643FC string=0x0000000000364400 ""
 *   insn=0x0000000000364400 string=0x0000000000364404 "h\n"
 *   insn=0x0000000000364408 string=0x000000000036440C "h"
 *   insn=0x000000000036440C string=0x0000000000364410 "@"
 *   insn=0x000000000036441C string=0x0000000000364420 ")u"
 *   insn=0x0000000000364428 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>(
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

