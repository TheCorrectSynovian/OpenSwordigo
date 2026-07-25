/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D993C
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7CoinBarES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CoinBar,Caver::CoinBar>(boost::shared_ptr<Caver::CoinBar> const*,Caver::CoinBar *)
 *
 * Callers: 1
 *   0x00000000001FB8E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CoinBar,Caver::CoinBar>(boost::shared_ptr<Caver::CoinBar> const*,Caver::CoinBar *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA180  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>(boost::shared_ptr<Caver::ItemOverlay> const*,Caver::ItemOverlay *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 56
 *   insn=0x00000000003D994C string=0x00000000003D9950 "`"
 *   insn=0x00000000003D9950 string=0x00000000003D9954 ""
 *   insn=0x00000000003D9950 string=0x00000000003D995C "3"
 *   insn=0x00000000003D9954 string=0x00000000003D9958 "h"
 *   insn=0x00000000003D9960 string=0x00000000003D9964 "h"
 *   insn=0x00000000003D9964 string=0x00000000003D9968 ""
 *   insn=0x00000000003D9968 string=0x00000000003D996C "h"
 *   insn=0x00000000003D997C string=0x00000000003D9980 "h\n@"
 *   insn=0x00000000003D9980 string=0x00000000003D9984 ""
 *   insn=0x00000000003D9984 string=0x00000000003D9988 "h\n"
 *   insn=0x00000000003D998C string=0x00000000003D9990 "@"
 *   insn=0x00000000003D9990 string=0x00000000003D9994 ""
 *   insn=0x00000000003D9994 string=0x00000000003D9998 ""
 *   insn=0x00000000003D999C string=0x00000000003D99A0 ""
 *   insn=0x00000000003D99A0 string=0x00000000003D99A4 "@"
 *   insn=0x00000000003D99B0 string=0x00000000003D99B4 "h"
 *   insn=0x00000000003D99B4 string=0x00000000003D99B8 ""
 *   insn=0x00000000003D99B8 string=0x00000000003D99BC "h"
 *   insn=0x00000000003D99BC string=0x00000000003D99C0 "!"
 *   insn=0x00000000003D99C0 string=0x00000000003D99C4 "h"
 *   insn=0x00000000003D99C8 string=0x00000000003D99CC "\t@"
 *   insn=0x00000000003D99D0 string=0x00000000003D99D4 "h\n@"
 *   insn=0x00000000003D99D4 string=0x00000000003D99D8 ""
 *   insn=0x00000000003D99D8 string=0x00000000003D99DC "h\n"
 *   insn=0x00000000003D99E0 string=0x00000000003D99F0 "h"
 *   insn=0x00000000003D9A00 string=0x00000000003D9A04 " "
 *   insn=0x00000000003D9A08 string=0x00000000003D9A0C "3"
 *   insn=0x00000000003D9A0C string=0x00000000003D9A10 "h"
 *   insn=0x00000000003D9A10 string=0x00000000003D9A14 ""
 *   insn=0x00000000003D9A14 string=0x00000000003D9A18 "h"
 *   insn=0x00000000003D9A1C string=0x00000000003D9A20 "h"
 *   insn=0x00000000003D9A20 string=0x00000000003D9A24 "\t@"
 *   insn=0x00000000003D9A2C string=0x00000000003D9A30 "h\n@"
 *   insn=0x00000000003D9A30 string=0x00000000003D9A34 ""
 *   insn=0x00000000003D9A34 string=0x00000000003D9A38 "h\n"
 *   insn=0x00000000003D9A3C string=0x00000000003D9A40 "h"
 *   insn=0x00000000003D9A40 string=0x00000000003D9A44 "@"
 *   insn=0x00000000003D9A54 string=0x00000000003D9A58 "="
 *   insn=0x00000000003D9A78 string=0x00000000003D9A7C "i"
 *   insn=0x00000000003D9A78 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003D9A7C string=0x00000000003D9A80 ")]A"
 *   insn=0x00000000003D9A8C string=0x00000000003D9A90 "(A"
 *   insn=0x00000000003D9A94 string=0x00000000003D9A98 ""
 *   insn=0x00000000003D9AA0 string=0x00000000003D9AA4 "`""
 *   insn=0x00000000003D9AB0 string=0x00000000001FA180 "0'"
 *   insn=0x00000000003D9AC4 string=0x00000000003D9AC8 "4"
 *   insn=0x00000000003D9ACC string=0x00000000003D9AD0 ""
 *   insn=0x00000000003D9ADC string=0x00000000003D9AE0 "\t@"
 *   insn=0x00000000003D9AEC string=0x00000000003D9AF0 ""
 *   insn=0x00000000003D9AFC string=0x00000000003D9B00 "@"
 *   insn=0x00000000003D9B0C string=0x00000000003D9B10 "m"
 *   insn=0x00000000003D9B18 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003D9B1C string=0x00000000003D9B20 "h"
 *   insn=0x00000000003D9B20 string=0x00000000003D9B24 "!@"
 *   insn=0x00000000003D9B38 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003D9B44 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CoinBar,Caver::CoinBar>(
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

