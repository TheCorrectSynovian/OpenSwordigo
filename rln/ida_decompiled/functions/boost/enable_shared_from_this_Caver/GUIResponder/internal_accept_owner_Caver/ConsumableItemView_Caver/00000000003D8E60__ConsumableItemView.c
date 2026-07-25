/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D8E60
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_18ConsumableItemViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>(boost::shared_ptr<Caver::ConsumableItemView> const*,Caver::ConsumableItemView *)
 *
 * Callers: 1
 *   0x00000000001F5DE0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>(boost::shared_ptr<Caver::ConsumableItemView> const*,Caver::ConsumableItemView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002004A0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>(boost::shared_ptr<Caver::HealthBar> const*,Caver::HealthBar *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 58
 *   insn=0x00000000003D8E70 string=0x00000000003D8E74 "`"
 *   insn=0x00000000003D8E74 string=0x00000000003D8E78 ""
 *   insn=0x00000000003D8E74 string=0x00000000003D8E80 "3"
 *   insn=0x00000000003D8E78 string=0x00000000003D8E7C "h"
 *   insn=0x00000000003D8E84 string=0x00000000003D8E88 "h"
 *   insn=0x00000000003D8E88 string=0x00000000003D8E8C ""
 *   insn=0x00000000003D8E8C string=0x00000000003D8E90 "h"
 *   insn=0x00000000003D8EA0 string=0x00000000003D8EA4 "h\n@"
 *   insn=0x00000000003D8EA4 string=0x00000000003D8EA8 ""
 *   insn=0x00000000003D8EA8 string=0x00000000003D8EAC "h\n"
 *   insn=0x00000000003D8EB0 string=0x00000000003D8EB4 "@"
 *   insn=0x00000000003D8EB4 string=0x00000000003D8EB8 ""
 *   insn=0x00000000003D8EB8 string=0x00000000003D8EBC ""
 *   insn=0x00000000003D8EC0 string=0x00000000003D8EC4 ""
 *   insn=0x00000000003D8EC4 string=0x00000000003D8EC8 "@"
 *   insn=0x00000000003D8ED4 string=0x00000000003D8ED8 "h"
 *   insn=0x00000000003D8ED8 string=0x00000000003D8EDC ""
 *   insn=0x00000000003D8EDC string=0x00000000003D8EE0 "h"
 *   insn=0x00000000003D8EE0 string=0x00000000003D8EE4 "!"
 *   insn=0x00000000003D8EE4 string=0x00000000003D8EE8 "h"
 *   insn=0x00000000003D8EEC string=0x00000000003D8EF0 "\t@"
 *   insn=0x00000000003D8EF4 string=0x00000000003D8EF8 "h\n@"
 *   insn=0x00000000003D8EF8 string=0x00000000003D8EFC ""
 *   insn=0x00000000003D8EFC string=0x00000000003D8F00 "h\n"
 *   insn=0x00000000003D8F04 string=0x00000000003D8F14 "h"
 *   insn=0x00000000003D8F24 string=0x00000000003D8F28 " "
 *   insn=0x00000000003D8F2C string=0x00000000003D8F30 "3"
 *   insn=0x00000000003D8F30 string=0x00000000003D8F34 "h"
 *   insn=0x00000000003D8F34 string=0x00000000003D8F38 ""
 *   insn=0x00000000003D8F38 string=0x00000000003D8F3C "h"
 *   insn=0x00000000003D8F40 string=0x00000000003D8F44 "h"
 *   insn=0x00000000003D8F44 string=0x00000000003D8F48 "\t@"
 *   insn=0x00000000003D8F50 string=0x00000000003D8F54 "h\n@"
 *   insn=0x00000000003D8F54 string=0x00000000003D8F58 ""
 *   insn=0x00000000003D8F58 string=0x00000000003D8F5C "h\n"
 *   insn=0x00000000003D8F60 string=0x00000000003D8F64 "h"
 *   insn=0x00000000003D8F64 string=0x00000000003D8F68 "@"
 *   insn=0x00000000003D8F74 string=0x00000000003D8F78 "S"
 *   insn=0x00000000003D8F9C string=0x00000000003D8FA0 "i"
 *   insn=0x00000000003D8F9C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003D8FA0 string=0x00000000003D8FA4 ")%F"
 *   insn=0x00000000003D8FB0 string=0x00000000003D8FB4 "(A"
 *   insn=0x00000000003D8FB8 string=0x00000000003D8FBC ""
 *   insn=0x00000000003D8FC4 string=0x00000000003D8FC8 "`""
 *   insn=0x00000000003D8FD0 string=0x00000000003D8FD4 "3"
 *   insn=0x00000000003D8FE8 string=0x00000000003D8FEC "4"
 *   insn=0x00000000003D8FF0 string=0x00000000003D8FF4 ""
 *   insn=0x00000000003D9000 string=0x00000000003D9004 "\t@"
 *   insn=0x00000000003D9010 string=0x00000000003D9014 ""
 *   insn=0x00000000003D9020 string=0x00000000003D9024 "@"
 *   insn=0x00000000003D9030 string=0x00000000003D9034 "$"
 *   insn=0x00000000003D9038 string=0x00000000003D903C "im"
 *   insn=0x00000000003D903C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003D9040 string=0x00000000003D9044 "h"
 *   insn=0x00000000003D9044 string=0x00000000003D9048 "!@"
 *   insn=0x00000000003D9058 string=0x00000000003D905C "M"
 *   insn=0x00000000003D905C string=0x00000000001FD590 "0'"
 *   insn=0x00000000003D9068 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>(
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

