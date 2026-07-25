/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003474AC
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13CharacterViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CharacterView,Caver::CharacterView>(boost::shared_ptr<Caver::CharacterView> const*,Caver::CharacterView *)
 *
 * Callers: 1
 *   0x0000000000202CB0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CharacterView,Caver::CharacterView>(boost::shared_ptr<Caver::CharacterView> const*,Caver::CharacterView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x00000000003474BC string=0x00000000003474C0 "`"
 *   insn=0x00000000003474C0 string=0x00000000003474C4 ""
 *   insn=0x00000000003474C0 string=0x00000000003474CC "3"
 *   insn=0x00000000003474C4 string=0x00000000003474C8 "h"
 *   insn=0x00000000003474D0 string=0x00000000003474D4 "h"
 *   insn=0x00000000003474D4 string=0x00000000003474D8 ""
 *   insn=0x00000000003474D8 string=0x00000000003474DC "h"
 *   insn=0x00000000003474EC string=0x00000000003474F0 "h\n@"
 *   insn=0x00000000003474F0 string=0x00000000003474F4 ""
 *   insn=0x00000000003474F4 string=0x00000000003474F8 "h\n"
 *   insn=0x00000000003474FC string=0x0000000000347500 "@"
 *   insn=0x0000000000347500 string=0x0000000000347504 ""
 *   insn=0x0000000000347504 string=0x0000000000347508 ""
 *   insn=0x000000000034750C string=0x0000000000347510 ""
 *   insn=0x0000000000347510 string=0x0000000000347514 "@"
 *   insn=0x0000000000347520 string=0x0000000000347524 "h"
 *   insn=0x0000000000347524 string=0x0000000000347528 ""
 *   insn=0x0000000000347528 string=0x000000000034752C "h"
 *   insn=0x000000000034752C string=0x0000000000347530 "!"
 *   insn=0x0000000000347530 string=0x0000000000347534 "h"
 *   insn=0x0000000000347538 string=0x000000000034753C "\t@"
 *   insn=0x0000000000347540 string=0x0000000000347544 "h\n@"
 *   insn=0x0000000000347544 string=0x0000000000347548 ""
 *   insn=0x0000000000347548 string=0x000000000034754C "h\n"
 *   insn=0x0000000000347550 string=0x0000000000347560 "h"
 *   insn=0x0000000000347570 string=0x0000000000347574 " "
 *   insn=0x0000000000347578 string=0x000000000034757C "3"
 *   insn=0x000000000034757C string=0x0000000000347580 "h"
 *   insn=0x0000000000347580 string=0x0000000000347584 ""
 *   insn=0x0000000000347584 string=0x0000000000347588 "h"
 *   insn=0x000000000034758C string=0x0000000000347590 "h"
 *   insn=0x0000000000347590 string=0x0000000000347594 "\t@"
 *   insn=0x000000000034759C string=0x00000000003475A0 "h\n@"
 *   insn=0x00000000003475A0 string=0x00000000003475A4 ""
 *   insn=0x00000000003475A4 string=0x00000000003475A8 "h\n"
 *   insn=0x00000000003475AC string=0x00000000003475B0 "h"
 *   insn=0x00000000003475B0 string=0x00000000003475B4 "@"
 *   insn=0x00000000003475C4 string=0x00000000003475C8 "a"
 *   insn=0x00000000003475C8 string=0x00000000003475CC "9"
 *   insn=0x00000000003475CC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CharacterView,Caver::CharacterView>(
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

