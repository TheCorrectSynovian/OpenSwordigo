/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003470E0
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_15GuideToggleViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuideToggleView,Caver::GuideToggleView>(boost::shared_ptr<Caver::GuideToggleView> const*,Caver::GuideToggleView *)
 *
 * Callers: 1
 *   0x0000000000202240  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuideToggleView,Caver::GuideToggleView>(boost::shared_ptr<Caver::GuideToggleView> const*,Caver::GuideToggleView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x00000000003470F0 string=0x00000000003470F4 "`"
 *   insn=0x00000000003470F4 string=0x00000000003470F8 ""
 *   insn=0x00000000003470F4 string=0x0000000000347100 "3"
 *   insn=0x00000000003470F8 string=0x00000000003470FC "h"
 *   insn=0x0000000000347104 string=0x0000000000347108 "h"
 *   insn=0x0000000000347108 string=0x000000000034710C ""
 *   insn=0x000000000034710C string=0x0000000000347110 "h"
 *   insn=0x0000000000347120 string=0x0000000000347124 "h\n@"
 *   insn=0x0000000000347124 string=0x0000000000347128 ""
 *   insn=0x0000000000347128 string=0x000000000034712C "h\n"
 *   insn=0x0000000000347130 string=0x0000000000347134 "@"
 *   insn=0x0000000000347134 string=0x0000000000347138 ""
 *   insn=0x0000000000347138 string=0x000000000034713C ""
 *   insn=0x0000000000347140 string=0x0000000000347144 ""
 *   insn=0x0000000000347144 string=0x0000000000347148 "@"
 *   insn=0x0000000000347154 string=0x0000000000347158 "h"
 *   insn=0x0000000000347158 string=0x000000000034715C ""
 *   insn=0x000000000034715C string=0x0000000000347160 "h"
 *   insn=0x0000000000347160 string=0x0000000000347164 "!"
 *   insn=0x0000000000347164 string=0x0000000000347168 "h"
 *   insn=0x000000000034716C string=0x0000000000347170 "\t@"
 *   insn=0x0000000000347174 string=0x0000000000347178 "h\n@"
 *   insn=0x0000000000347178 string=0x000000000034717C ""
 *   insn=0x000000000034717C string=0x0000000000347180 "h\n"
 *   insn=0x0000000000347184 string=0x0000000000347194 "h"
 *   insn=0x00000000003471A4 string=0x00000000003471A8 " "
 *   insn=0x00000000003471AC string=0x00000000003471B0 "3"
 *   insn=0x00000000003471B0 string=0x00000000003471B4 "h"
 *   insn=0x00000000003471B4 string=0x00000000003471B8 ""
 *   insn=0x00000000003471B8 string=0x00000000003471BC "h"
 *   insn=0x00000000003471C0 string=0x00000000003471C4 "h"
 *   insn=0x00000000003471C4 string=0x00000000003471C8 "\t@"
 *   insn=0x00000000003471D0 string=0x00000000003471D4 "h\n@"
 *   insn=0x00000000003471D4 string=0x00000000003471D8 ""
 *   insn=0x00000000003471D8 string=0x00000000003471DC "h\n"
 *   insn=0x00000000003471E0 string=0x00000000003471E4 "h"
 *   insn=0x00000000003471E4 string=0x00000000003471E8 "@"
 *   insn=0x00000000003471F8 string=0x00000000003471FC "T"
 *   insn=0x00000000003471FC string=0x0000000000347200 ","
 *   insn=0x0000000000347200 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuideToggleView,Caver::GuideToggleView>(
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

