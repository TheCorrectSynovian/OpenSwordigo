/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003512A8
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16DebugInfoOverlayES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>(boost::shared_ptr<Caver::DebugInfoOverlay> const*,Caver::DebugInfoOverlay *)
 *
 * Callers: 1
 *   0x00000000001F5B70  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>(boost::shared_ptr<Caver::DebugInfoOverlay> const*,Caver::DebugInfoOverlay *)
 *
 * Callees: 4
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *   0x00000000001FBC40  .memset
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 67
 *   insn=0x00000000003512B8 string=0x00000000003512BC "`"
 *   insn=0x00000000003512BC string=0x00000000003512C0 ""
 *   insn=0x00000000003512BC string=0x00000000003512C8 "3"
 *   insn=0x00000000003512C0 string=0x00000000003512C4 "h"
 *   insn=0x00000000003512CC string=0x00000000003512D0 "h"
 *   insn=0x00000000003512D0 string=0x00000000003512D4 ""
 *   insn=0x00000000003512D4 string=0x00000000003512D8 "h"
 *   insn=0x00000000003512E8 string=0x00000000003512EC "h\n@"
 *   insn=0x00000000003512EC string=0x00000000003512F0 ""
 *   insn=0x00000000003512F0 string=0x00000000003512F4 "h\n"
 *   insn=0x00000000003512F8 string=0x00000000003512FC "@"
 *   insn=0x00000000003512FC string=0x0000000000351300 ""
 *   insn=0x0000000000351300 string=0x0000000000351304 ""
 *   insn=0x0000000000351308 string=0x000000000035130C ""
 *   insn=0x000000000035130C string=0x0000000000351310 "@"
 *   insn=0x000000000035131C string=0x0000000000351320 "h"
 *   insn=0x0000000000351320 string=0x0000000000351324 ""
 *   insn=0x0000000000351324 string=0x0000000000351328 "h"
 *   insn=0x0000000000351328 string=0x000000000035132C "!"
 *   insn=0x000000000035132C string=0x0000000000351330 "h"
 *   insn=0x0000000000351334 string=0x0000000000351338 "\t@"
 *   insn=0x000000000035133C string=0x0000000000351340 "h\n@"
 *   insn=0x0000000000351340 string=0x0000000000351344 ""
 *   insn=0x0000000000351344 string=0x0000000000351348 "h\n"
 *   insn=0x000000000035134C string=0x000000000035135C "h"
 *   insn=0x000000000035136C string=0x0000000000351370 " "
 *   insn=0x0000000000351374 string=0x0000000000351378 "3"
 *   insn=0x0000000000351378 string=0x000000000035137C "h"
 *   insn=0x000000000035137C string=0x0000000000351380 ""
 *   insn=0x0000000000351380 string=0x0000000000351384 "h"
 *   insn=0x0000000000351388 string=0x000000000035138C "h"
 *   insn=0x000000000035138C string=0x0000000000351390 "\t@"
 *   insn=0x0000000000351398 string=0x000000000035139C "h\n@"
 *   insn=0x000000000035139C string=0x00000000003513A0 ""
 *   insn=0x00000000003513A0 string=0x00000000003513A4 "h\n"
 *   insn=0x00000000003513A8 string=0x00000000003513AC "h"
 *   insn=0x00000000003513AC string=0x00000000003513B0 "@"
 *   insn=0x00000000003513BC string=0x00000000003513C0 "A"
 *   insn=0x00000000003513D4 string=0x00000000003513D8 "6"
 *   insn=0x00000000003513D8 string=0x00000000001F40B0 "P'"
 *   insn=0x00000000003513DC string=0x00000000003513E0 ""
 *   insn=0x00000000003513E0 string=0x00000000003513E4 "`"
 *   insn=0x00000000003513E4 string=0x00000000003513E8 "B"
 *   insn=0x00000000003513EC string=0x00000000003513F0 "\tA"
 *   insn=0x00000000003513F0 string=0x00000000003513F4 "\n"
 *   insn=0x00000000003513F4 string=0x00000000003513F8 "i"
 *   insn=0x00000000003513F8 string=0x00000000003513FC "@"
 *   insn=0x00000000003513FC string=0x0000000000351400 "\t"
 *   insn=0x0000000000351400 string=0x0000000000351404 " "
 *   insn=0x0000000000351404 string=0x0000000000351408 "\ta"
 *   insn=0x0000000000351408 string=0x000000000035140C "`"
 *   insn=0x000000000035140C string=0x0000000000351410 " "
 *   insn=0x0000000000351410 string=0x0000000000351414 "\t!"
 *   insn=0x0000000000351414 string=0x0000000000351418 " "
 *   insn=0x0000000000351418 string=0x000000000035141C "\t"
 *   insn=0x000000000035141C string=0x0000000000351420 "`"
 *   insn=0x0000000000351420 string=0x0000000000351424 " "
 *   insn=0x0000000000351424 string=0x0000000000351428 "\t"
 *   insn=0x0000000000351428 string=0x000000000035142C "a"
 *   insn=0x000000000035142C string=0x0000000000351430 " "
 *   insn=0x0000000000351430 string=0x0000000000351434 "h>"
 *   insn=0x0000000000351434 string=0x0000000000351438 "`"
 *   insn=0x000000000035143C string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000351440 string=0x0000000000351444 ""
 *   insn=0x0000000000351450 string=0x0000000000351454 "a"
 *   insn=0x0000000000351460 string=0x0000000000351464 "hz"
 *   insn=0x0000000000351464 string=0x0000000000351468 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>(
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

