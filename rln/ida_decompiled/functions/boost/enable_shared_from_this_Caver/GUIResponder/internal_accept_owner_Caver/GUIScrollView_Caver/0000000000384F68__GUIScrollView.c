/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000384F68
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GUIScrollViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIScrollView,Caver::GUIScrollView>(boost::shared_ptr<Caver::GUIScrollView> const*,Caver::GUIScrollView *)
 *
 * Callers: 1
 *   0x00000000001F62A0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIScrollView,Caver::GUIScrollView>(boost::shared_ptr<Caver::GUIScrollView> const*,Caver::GUIScrollView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x0000000000384F78 string=0x0000000000384F7C "`"
 *   insn=0x0000000000384F7C string=0x0000000000384F80 ""
 *   insn=0x0000000000384F7C string=0x0000000000384F88 "3"
 *   insn=0x0000000000384F80 string=0x0000000000384F84 "h"
 *   insn=0x0000000000384F8C string=0x0000000000384F90 "h"
 *   insn=0x0000000000384F90 string=0x0000000000384F94 ""
 *   insn=0x0000000000384F94 string=0x0000000000384F98 "h"
 *   insn=0x0000000000384FA8 string=0x0000000000384FAC "h\n@"
 *   insn=0x0000000000384FAC string=0x0000000000384FB0 ""
 *   insn=0x0000000000384FB0 string=0x0000000000384FB4 "h\n"
 *   insn=0x0000000000384FB8 string=0x0000000000384FBC "@"
 *   insn=0x0000000000384FBC string=0x0000000000384FC0 ""
 *   insn=0x0000000000384FC0 string=0x0000000000384FC4 ""
 *   insn=0x0000000000384FC8 string=0x0000000000384FCC ""
 *   insn=0x0000000000384FCC string=0x0000000000384FD0 "@"
 *   insn=0x0000000000384FDC string=0x0000000000384FE0 "h"
 *   insn=0x0000000000384FE0 string=0x0000000000384FE4 ""
 *   insn=0x0000000000384FE4 string=0x0000000000384FE8 "h"
 *   insn=0x0000000000384FE8 string=0x0000000000384FEC "!"
 *   insn=0x0000000000384FEC string=0x0000000000384FF0 "h"
 *   insn=0x0000000000384FF4 string=0x0000000000384FF8 "\t@"
 *   insn=0x0000000000384FFC string=0x0000000000385000 "h\n@"
 *   insn=0x0000000000385000 string=0x0000000000385004 ""
 *   insn=0x0000000000385004 string=0x0000000000385008 "h\n"
 *   insn=0x000000000038500C string=0x000000000038501C "h"
 *   insn=0x000000000038502C string=0x0000000000385030 " "
 *   insn=0x0000000000385034 string=0x0000000000385038 "3"
 *   insn=0x0000000000385038 string=0x000000000038503C "h"
 *   insn=0x000000000038503C string=0x0000000000385040 ""
 *   insn=0x0000000000385040 string=0x0000000000385044 "h"
 *   insn=0x0000000000385048 string=0x000000000038504C "h"
 *   insn=0x000000000038504C string=0x0000000000385050 "\t@"
 *   insn=0x0000000000385058 string=0x000000000038505C "h\n@"
 *   insn=0x000000000038505C string=0x0000000000385060 ""
 *   insn=0x0000000000385060 string=0x0000000000385064 "h\n"
 *   insn=0x0000000000385068 string=0x000000000038506C "h"
 *   insn=0x000000000038506C string=0x0000000000385070 "@"
 *   insn=0x0000000000385088 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIScrollView,Caver::GUIScrollView>(
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

