/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000347368
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12SettingsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SettingsView,Caver::SettingsView>(boost::shared_ptr<Caver::SettingsView> const*,Caver::SettingsView *)
 *
 * Callers: 1
 *   0x00000000001F4C20  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SettingsView,Caver::SettingsView>(boost::shared_ptr<Caver::SettingsView> const*,Caver::SettingsView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x0000000000347378 string=0x000000000034737C "`"
 *   insn=0x000000000034737C string=0x0000000000347380 ""
 *   insn=0x000000000034737C string=0x0000000000347388 "3"
 *   insn=0x0000000000347380 string=0x0000000000347384 "h"
 *   insn=0x000000000034738C string=0x0000000000347390 "h"
 *   insn=0x0000000000347390 string=0x0000000000347394 ""
 *   insn=0x0000000000347394 string=0x0000000000347398 "h"
 *   insn=0x00000000003473A8 string=0x00000000003473AC "h\n@"
 *   insn=0x00000000003473AC string=0x00000000003473B0 ""
 *   insn=0x00000000003473B0 string=0x00000000003473B4 "h\n"
 *   insn=0x00000000003473B8 string=0x00000000003473BC "@"
 *   insn=0x00000000003473BC string=0x00000000003473C0 ""
 *   insn=0x00000000003473C0 string=0x00000000003473C4 ""
 *   insn=0x00000000003473C8 string=0x00000000003473CC ""
 *   insn=0x00000000003473CC string=0x00000000003473D0 "@"
 *   insn=0x00000000003473DC string=0x00000000003473E0 "h"
 *   insn=0x00000000003473E0 string=0x00000000003473E4 ""
 *   insn=0x00000000003473E4 string=0x00000000003473E8 "h"
 *   insn=0x00000000003473E8 string=0x00000000003473EC "!"
 *   insn=0x00000000003473EC string=0x00000000003473F0 "h"
 *   insn=0x00000000003473F4 string=0x00000000003473F8 "\t@"
 *   insn=0x00000000003473FC string=0x0000000000347400 "h\n@"
 *   insn=0x0000000000347400 string=0x0000000000347404 ""
 *   insn=0x0000000000347404 string=0x0000000000347408 "h\n"
 *   insn=0x000000000034740C string=0x000000000034741C "h"
 *   insn=0x000000000034742C string=0x0000000000347430 " "
 *   insn=0x0000000000347434 string=0x0000000000347438 "3"
 *   insn=0x0000000000347438 string=0x000000000034743C "h"
 *   insn=0x000000000034743C string=0x0000000000347440 ""
 *   insn=0x0000000000347440 string=0x0000000000347444 "h"
 *   insn=0x0000000000347448 string=0x000000000034744C "h"
 *   insn=0x000000000034744C string=0x0000000000347450 "\t@"
 *   insn=0x0000000000347458 string=0x000000000034745C "h\n@"
 *   insn=0x000000000034745C string=0x0000000000347460 ""
 *   insn=0x0000000000347460 string=0x0000000000347464 "h\n"
 *   insn=0x0000000000347468 string=0x000000000034746C "h"
 *   insn=0x000000000034746C string=0x0000000000347470 "@"
 *   insn=0x0000000000347488 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SettingsView,Caver::SettingsView>(
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

