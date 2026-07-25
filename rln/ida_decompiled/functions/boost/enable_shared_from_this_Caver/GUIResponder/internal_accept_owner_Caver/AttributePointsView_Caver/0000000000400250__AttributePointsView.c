/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000400250
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_19AttributePointsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AttributePointsView,Caver::AttributePointsView>(boost::shared_ptr<Caver::AttributePointsView> const*,Caver::AttributePointsView *)
 *
 * Callers: 1
 *   0x0000000000200F00  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AttributePointsView,Caver::AttributePointsView>(boost::shared_ptr<Caver::AttributePointsView> const*,Caver::AttributePointsView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000400260 string=0x0000000000400264 "`"
 *   insn=0x0000000000400264 string=0x0000000000400268 ""
 *   insn=0x0000000000400264 string=0x0000000000400270 "3"
 *   insn=0x0000000000400268 string=0x000000000040026C "h"
 *   insn=0x0000000000400274 string=0x0000000000400278 "h"
 *   insn=0x0000000000400278 string=0x000000000040027C ""
 *   insn=0x000000000040027C string=0x0000000000400280 "h"
 *   insn=0x0000000000400290 string=0x0000000000400294 "h\n@"
 *   insn=0x0000000000400294 string=0x0000000000400298 ""
 *   insn=0x0000000000400298 string=0x000000000040029C "h\n"
 *   insn=0x00000000004002A0 string=0x00000000004002A4 "@"
 *   insn=0x00000000004002A4 string=0x00000000004002A8 ""
 *   insn=0x00000000004002A8 string=0x00000000004002AC ""
 *   insn=0x00000000004002B0 string=0x00000000004002B4 ""
 *   insn=0x00000000004002B4 string=0x00000000004002B8 "@"
 *   insn=0x00000000004002C4 string=0x00000000004002C8 "h"
 *   insn=0x00000000004002C8 string=0x00000000004002CC ""
 *   insn=0x00000000004002CC string=0x00000000004002D0 "h"
 *   insn=0x00000000004002D0 string=0x00000000004002D4 "!"
 *   insn=0x00000000004002D4 string=0x00000000004002D8 "h"
 *   insn=0x00000000004002DC string=0x00000000004002E0 "\t@"
 *   insn=0x00000000004002E4 string=0x00000000004002E8 "h\n@"
 *   insn=0x00000000004002E8 string=0x00000000004002EC ""
 *   insn=0x00000000004002EC string=0x00000000004002F0 "h\n"
 *   insn=0x00000000004002F4 string=0x0000000000400304 "h"
 *   insn=0x0000000000400314 string=0x0000000000400318 " "
 *   insn=0x000000000040031C string=0x0000000000400320 "3"
 *   insn=0x0000000000400320 string=0x0000000000400324 "h"
 *   insn=0x0000000000400324 string=0x0000000000400328 ""
 *   insn=0x0000000000400328 string=0x000000000040032C "h"
 *   insn=0x0000000000400330 string=0x0000000000400334 "h"
 *   insn=0x0000000000400334 string=0x0000000000400338 "\t@"
 *   insn=0x0000000000400340 string=0x0000000000400344 "h\n@"
 *   insn=0x0000000000400344 string=0x0000000000400348 ""
 *   insn=0x0000000000400348 string=0x000000000040034C "h\n"
 *   insn=0x0000000000400350 string=0x0000000000400354 "h"
 *   insn=0x0000000000400354 string=0x0000000000400358 "@"
 *   insn=0x0000000000400364 string=0x0000000000400368 "W"
 *   insn=0x0000000000400370 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AttributePointsView,Caver::AttributePointsView>(
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

