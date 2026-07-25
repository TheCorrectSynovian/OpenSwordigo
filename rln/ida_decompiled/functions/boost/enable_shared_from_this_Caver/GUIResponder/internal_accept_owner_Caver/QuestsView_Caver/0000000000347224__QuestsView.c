/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000347224
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_10QuestsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::QuestsView,Caver::QuestsView>(boost::shared_ptr<Caver::QuestsView> const*,Caver::QuestsView *)
 *
 * Callers: 1
 *   0x00000000001F52C0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::QuestsView,Caver::QuestsView>(boost::shared_ptr<Caver::QuestsView> const*,Caver::QuestsView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000347234 string=0x0000000000347238 "`"
 *   insn=0x0000000000347238 string=0x000000000034723C ""
 *   insn=0x0000000000347238 string=0x0000000000347244 "3"
 *   insn=0x000000000034723C string=0x0000000000347240 "h"
 *   insn=0x0000000000347248 string=0x000000000034724C "h"
 *   insn=0x000000000034724C string=0x0000000000347250 ""
 *   insn=0x0000000000347250 string=0x0000000000347254 "h"
 *   insn=0x0000000000347264 string=0x0000000000347268 "h\n@"
 *   insn=0x0000000000347268 string=0x000000000034726C ""
 *   insn=0x000000000034726C string=0x0000000000347270 "h\n"
 *   insn=0x0000000000347274 string=0x0000000000347278 "@"
 *   insn=0x0000000000347278 string=0x000000000034727C ""
 *   insn=0x000000000034727C string=0x0000000000347280 ""
 *   insn=0x0000000000347284 string=0x0000000000347288 ""
 *   insn=0x0000000000347288 string=0x000000000034728C "@"
 *   insn=0x0000000000347298 string=0x000000000034729C "h"
 *   insn=0x000000000034729C string=0x00000000003472A0 ""
 *   insn=0x00000000003472A0 string=0x00000000003472A4 "h"
 *   insn=0x00000000003472A4 string=0x00000000003472A8 "!"
 *   insn=0x00000000003472A8 string=0x00000000003472AC "h"
 *   insn=0x00000000003472B0 string=0x00000000003472B4 "\t@"
 *   insn=0x00000000003472B8 string=0x00000000003472BC "h\n@"
 *   insn=0x00000000003472BC string=0x00000000003472C0 ""
 *   insn=0x00000000003472C0 string=0x00000000003472C4 "h\n"
 *   insn=0x00000000003472C8 string=0x00000000003472D8 "h"
 *   insn=0x00000000003472E8 string=0x00000000003472EC " "
 *   insn=0x00000000003472F0 string=0x00000000003472F4 "3"
 *   insn=0x00000000003472F4 string=0x00000000003472F8 "h"
 *   insn=0x00000000003472F8 string=0x00000000003472FC ""
 *   insn=0x00000000003472FC string=0x0000000000347300 "h"
 *   insn=0x0000000000347304 string=0x0000000000347308 "h"
 *   insn=0x0000000000347308 string=0x000000000034730C "\t@"
 *   insn=0x0000000000347314 string=0x0000000000347318 "h\n@"
 *   insn=0x0000000000347318 string=0x000000000034731C ""
 *   insn=0x000000000034731C string=0x0000000000347320 "h\n"
 *   insn=0x0000000000347324 string=0x0000000000347328 "h"
 *   insn=0x0000000000347328 string=0x000000000034732C "@"
 *   insn=0x0000000000347338 string=0x000000000034733C "b"
 *   insn=0x0000000000347344 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::QuestsView,Caver::QuestsView>(
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

