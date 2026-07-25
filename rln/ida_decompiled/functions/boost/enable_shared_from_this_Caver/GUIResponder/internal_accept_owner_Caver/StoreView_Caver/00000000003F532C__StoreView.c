/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F532C
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9StoreViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreView,Caver::StoreView>(boost::shared_ptr<Caver::StoreView> const*,Caver::StoreView *)
 *
 * Callers: 1
 *   0x00000000001F34E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreView,Caver::StoreView>(boost::shared_ptr<Caver::StoreView> const*,Caver::StoreView *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x00000000003F533C string=0x00000000003F5340 "`"
 *   insn=0x00000000003F5340 string=0x00000000003F5344 ""
 *   insn=0x00000000003F5340 string=0x00000000003F534C "3"
 *   insn=0x00000000003F5344 string=0x00000000003F5348 "h"
 *   insn=0x00000000003F5350 string=0x00000000003F5354 "h"
 *   insn=0x00000000003F5354 string=0x00000000003F5358 ""
 *   insn=0x00000000003F5358 string=0x00000000003F535C "h"
 *   insn=0x00000000003F536C string=0x00000000003F5370 "h\n@"
 *   insn=0x00000000003F5370 string=0x00000000003F5374 ""
 *   insn=0x00000000003F5374 string=0x00000000003F5378 "h\n"
 *   insn=0x00000000003F537C string=0x00000000003F5380 "@"
 *   insn=0x00000000003F5380 string=0x00000000003F5384 ""
 *   insn=0x00000000003F5384 string=0x00000000003F5388 ""
 *   insn=0x00000000003F538C string=0x00000000003F5390 ""
 *   insn=0x00000000003F5390 string=0x00000000003F5394 "@"
 *   insn=0x00000000003F53A0 string=0x00000000003F53A4 "h"
 *   insn=0x00000000003F53A4 string=0x00000000003F53A8 ""
 *   insn=0x00000000003F53A8 string=0x00000000003F53AC "h"
 *   insn=0x00000000003F53AC string=0x00000000003F53B0 "!"
 *   insn=0x00000000003F53B0 string=0x00000000003F53B4 "h"
 *   insn=0x00000000003F53B8 string=0x00000000003F53BC "\t@"
 *   insn=0x00000000003F53C0 string=0x00000000003F53C4 "h\n@"
 *   insn=0x00000000003F53C4 string=0x00000000003F53C8 ""
 *   insn=0x00000000003F53C8 string=0x00000000003F53CC "h\n"
 *   insn=0x00000000003F53D0 string=0x00000000003F53E0 "h"
 *   insn=0x00000000003F53F0 string=0x00000000003F53F4 " "
 *   insn=0x00000000003F53F8 string=0x00000000003F53FC "3"
 *   insn=0x00000000003F53FC string=0x00000000003F5400 "h"
 *   insn=0x00000000003F5400 string=0x00000000003F5404 ""
 *   insn=0x00000000003F5404 string=0x00000000003F5408 "h"
 *   insn=0x00000000003F540C string=0x00000000003F5410 "h"
 *   insn=0x00000000003F5410 string=0x00000000003F5414 "\t@"
 *   insn=0x00000000003F541C string=0x00000000003F5420 "h\n@"
 *   insn=0x00000000003F5420 string=0x00000000003F5424 ""
 *   insn=0x00000000003F5424 string=0x00000000003F5428 "h\n"
 *   insn=0x00000000003F542C string=0x00000000003F5430 "h"
 *   insn=0x00000000003F5430 string=0x00000000003F5434 "@"
 *   insn=0x00000000003F5440 string=0x00000000003F5444 " 1"
 *   insn=0x00000000003F5458 string=0x00000000003F545C "_"
 *   insn=0x00000000003F5464 string=0x00000000003F547C "_"
 *   insn=0x00000000003F5468 string=0x00000000003F546C "ME"
 *   insn=0x00000000003F5470 string=0x00000000003F5474 "h"
 *   insn=0x00000000003F5480 string=0x00000000003F5498 "_"
 *   insn=0x00000000003F5484 string=0x00000000003F5488 "h\n"
 *   insn=0x00000000003F548C string=0x00000000003F5490 "`"
 *   insn=0x00000000003F549C string=0x00000000003F54A0 "_"
 *   insn=0x00000000003F54A0 string=0x00000000003F54A4 "!"
 *   insn=0x00000000003F54A4 string=0x00000000003F54A8 "h"
 *   insn=0x00000000003F54AC string=0x00000000003F54B0 ""
 *   insn=0x00000000003F54B4 string=0x00000000003F54B8 "*"
 *   insn=0x00000000003F54B8 string=0x00000000003F54BC "!"
 *   insn=0x00000000003F54BC string=0x00000000003F54C0 "_"
 *   insn=0x00000000003F54BC string=0x00000000005935A0 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver19StoreViewControllerEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x00000000003F54C0 string=0x00000000003F54C4 " "
 *   insn=0x00000000003F54C8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreView,Caver::StoreView>(
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

