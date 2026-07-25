/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000350CBC
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_17ItemInfoPopupViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoPopupView,Caver::ItemInfoPopupView>(boost::shared_ptr<Caver::ItemInfoPopupView> const*,Caver::ItemInfoPopupView *)
 *
 * Callers: 1
 *   0x00000000001FB220  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoPopupView,Caver::ItemInfoPopupView>(boost::shared_ptr<Caver::ItemInfoPopupView> const*,Caver::ItemInfoPopupView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8B20  Caver::GUIAnimation::~GUIAnimation()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 49
 *   insn=0x0000000000350CCC string=0x0000000000350CD0 "`"
 *   insn=0x0000000000350CD0 string=0x0000000000350CD4 ""
 *   insn=0x0000000000350CD0 string=0x0000000000350CDC "3"
 *   insn=0x0000000000350CD4 string=0x0000000000350CD8 "h"
 *   insn=0x0000000000350CE0 string=0x0000000000350CE4 "h"
 *   insn=0x0000000000350CE4 string=0x0000000000350CE8 ""
 *   insn=0x0000000000350CE8 string=0x0000000000350CEC "h"
 *   insn=0x0000000000350CFC string=0x0000000000350D00 "h\n@"
 *   insn=0x0000000000350D00 string=0x0000000000350D04 ""
 *   insn=0x0000000000350D04 string=0x0000000000350D08 "h\n"
 *   insn=0x0000000000350D0C string=0x0000000000350D10 "@"
 *   insn=0x0000000000350D10 string=0x0000000000350D14 ""
 *   insn=0x0000000000350D14 string=0x0000000000350D18 ""
 *   insn=0x0000000000350D1C string=0x0000000000350D20 ""
 *   insn=0x0000000000350D20 string=0x0000000000350D24 "@"
 *   insn=0x0000000000350D30 string=0x0000000000350D34 "h"
 *   insn=0x0000000000350D34 string=0x0000000000350D38 ""
 *   insn=0x0000000000350D38 string=0x0000000000350D3C "h"
 *   insn=0x0000000000350D3C string=0x0000000000350D40 "!"
 *   insn=0x0000000000350D40 string=0x0000000000350D44 "h"
 *   insn=0x0000000000350D48 string=0x0000000000350D4C "\t@"
 *   insn=0x0000000000350D50 string=0x0000000000350D54 "h\n@"
 *   insn=0x0000000000350D54 string=0x0000000000350D58 ""
 *   insn=0x0000000000350D58 string=0x0000000000350D5C "h\n"
 *   insn=0x0000000000350D60 string=0x0000000000350D70 "h"
 *   insn=0x0000000000350D80 string=0x0000000000350D84 " "
 *   insn=0x0000000000350D88 string=0x0000000000350D8C "3"
 *   insn=0x0000000000350D8C string=0x0000000000350D90 "h"
 *   insn=0x0000000000350D90 string=0x0000000000350D94 ""
 *   insn=0x0000000000350D94 string=0x0000000000350D98 "h"
 *   insn=0x0000000000350D9C string=0x0000000000350DA0 "h"
 *   insn=0x0000000000350DA0 string=0x0000000000350DA4 "\t@"
 *   insn=0x0000000000350DAC string=0x0000000000350DB0 "h\n@"
 *   insn=0x0000000000350DB0 string=0x0000000000350DB4 ""
 *   insn=0x0000000000350DB4 string=0x0000000000350DB8 "h\n"
 *   insn=0x0000000000350DBC string=0x0000000000350DC0 "h"
 *   insn=0x0000000000350DC0 string=0x0000000000350DC4 "@"
 *   insn=0x0000000000350DD4 string=0x0000000000350DD8 "]"
 *   insn=0x0000000000350DF8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000350DFC string=0x0000000000350E00 ")AE"
 *   insn=0x0000000000350E0C string=0x0000000000350E10 "(A"
 *   insn=0x0000000000350E14 string=0x0000000000350E18 ""
 *   insn=0x0000000000350E2C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000350E30 string=0x0000000000350E44 "K"
 *   insn=0x0000000000350E34 string=0x0000000000350E38 ":"
 *   insn=0x0000000000350E38 string=0x00000000001F8B20 "0'"
 *   insn=0x0000000000350E40 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000350E5C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000350E64 string=0x0000000000350E68 "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoPopupView,Caver::ItemInfoPopupView>(
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

