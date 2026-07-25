/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D908C
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9HealthBarES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>(boost::shared_ptr<Caver::HealthBar> const*,Caver::HealthBar *)
 *
 * Callers: 1
 *   0x00000000002004A0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>(boost::shared_ptr<Caver::HealthBar> const*,Caver::HealthBar *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002007F0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ManaBar,Caver::ManaBar>(boost::shared_ptr<Caver::ManaBar> const*,Caver::ManaBar *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 58
 *   insn=0x00000000003D909C string=0x00000000003D90A0 "`"
 *   insn=0x00000000003D90A0 string=0x00000000003D90A4 ""
 *   insn=0x00000000003D90A0 string=0x00000000003D90AC "3"
 *   insn=0x00000000003D90A4 string=0x00000000003D90A8 "h"
 *   insn=0x00000000003D90B0 string=0x00000000003D90B4 "h"
 *   insn=0x00000000003D90B4 string=0x00000000003D90B8 ""
 *   insn=0x00000000003D90B8 string=0x00000000003D90BC "h"
 *   insn=0x00000000003D90CC string=0x00000000003D90D0 "h\n@"
 *   insn=0x00000000003D90D0 string=0x00000000003D90D4 ""
 *   insn=0x00000000003D90D4 string=0x00000000003D90D8 "h\n"
 *   insn=0x00000000003D90DC string=0x00000000003D90E0 "@"
 *   insn=0x00000000003D90E0 string=0x00000000003D90E4 ""
 *   insn=0x00000000003D90E4 string=0x00000000003D90E8 ""
 *   insn=0x00000000003D90EC string=0x00000000003D90F0 ""
 *   insn=0x00000000003D90F0 string=0x00000000003D90F4 "@"
 *   insn=0x00000000003D9100 string=0x00000000003D9104 "h"
 *   insn=0x00000000003D9104 string=0x00000000003D9108 ""
 *   insn=0x00000000003D9108 string=0x00000000003D910C "h"
 *   insn=0x00000000003D910C string=0x00000000003D9110 "!"
 *   insn=0x00000000003D9110 string=0x00000000003D9114 "h"
 *   insn=0x00000000003D9118 string=0x00000000003D911C "\t@"
 *   insn=0x00000000003D9120 string=0x00000000003D9124 "h\n@"
 *   insn=0x00000000003D9124 string=0x00000000003D9128 ""
 *   insn=0x00000000003D9128 string=0x00000000003D912C "h\n"
 *   insn=0x00000000003D9130 string=0x00000000003D9140 "h"
 *   insn=0x00000000003D9150 string=0x00000000003D9154 " "
 *   insn=0x00000000003D9158 string=0x00000000003D915C "3"
 *   insn=0x00000000003D915C string=0x00000000003D9160 "h"
 *   insn=0x00000000003D9160 string=0x00000000003D9164 ""
 *   insn=0x00000000003D9164 string=0x00000000003D9168 "h"
 *   insn=0x00000000003D916C string=0x00000000003D9170 "h"
 *   insn=0x00000000003D9170 string=0x00000000003D9174 "\t@"
 *   insn=0x00000000003D917C string=0x00000000003D9180 "h\n@"
 *   insn=0x00000000003D9180 string=0x00000000003D9184 ""
 *   insn=0x00000000003D9184 string=0x00000000003D9188 "h\n"
 *   insn=0x00000000003D918C string=0x00000000003D9190 "h"
 *   insn=0x00000000003D9190 string=0x00000000003D9194 "@"
 *   insn=0x00000000003D91A4 string=0x00000000003D91A8 "i"
 *   insn=0x00000000003D91C8 string=0x00000000003D91CC "i"
 *   insn=0x00000000003D91C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003D91CC string=0x00000000003D91D0 ")"
 *   insn=0x00000000003D91DC string=0x00000000003D91E0 "(A"
 *   insn=0x00000000003D91E4 string=0x00000000003D91E8 ""
 *   insn=0x00000000003D91F0 string=0x00000000003D91F4 "`""
 *   insn=0x00000000003D91FC string=0x00000000003D9200 "|"
 *   insn=0x00000000003D9214 string=0x00000000003D9218 "4"
 *   insn=0x00000000003D921C string=0x00000000003D9220 ""
 *   insn=0x00000000003D922C string=0x00000000003D9230 "\t@"
 *   insn=0x00000000003D923C string=0x00000000003D9240 ""
 *   insn=0x00000000003D924C string=0x00000000003D9250 "@"
 *   insn=0x00000000003D9260 string=0x00000000003D9264 ":"
 *   insn=0x00000000003D9268 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003D926C string=0x00000000003D9270 "h"
 *   insn=0x00000000003D926C string=0x00000000003D9280 "<"
 *   insn=0x00000000003D9270 string=0x00000000003D9274 "!@"
 *   insn=0x00000000003D9288 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003D9290 string=0x00000000003D9294 "x"
 *   insn=0x00000000003D9294 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>(
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

