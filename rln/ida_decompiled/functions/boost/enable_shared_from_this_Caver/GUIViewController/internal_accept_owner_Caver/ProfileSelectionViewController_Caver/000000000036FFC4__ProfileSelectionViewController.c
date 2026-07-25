/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036FFC4
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_30ProfileSelectionViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileSelectionViewController,Caver::ProfileSelectionViewController>(boost::shared_ptr<Caver::ProfileSelectionViewController> const*,Caver::ProfileSelectionViewController *)
 *
 * Callers: 1
 *   0x00000000002001F0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileSelectionViewController,Caver::ProfileSelectionViewController>(boost::shared_ptr<Caver::ProfileSelectionViewController> const*,Caver::ProfileSelectionViewController *)
 *
 * Callees: 3
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x000000000036FFD4 string=0x000000000036FFD8 "`"
 *   insn=0x000000000036FFD8 string=0x000000000036FFDC ""
 *   insn=0x000000000036FFD8 string=0x000000000036FFE4 "3"
 *   insn=0x000000000036FFDC string=0x000000000036FFE0 "h"
 *   insn=0x000000000036FFE8 string=0x000000000036FFEC "h"
 *   insn=0x000000000036FFEC string=0x000000000036FFF0 ""
 *   insn=0x000000000036FFF0 string=0x000000000036FFF4 "h"
 *   insn=0x0000000000370004 string=0x0000000000370008 "h\n@"
 *   insn=0x0000000000370008 string=0x000000000037000C ""
 *   insn=0x000000000037000C string=0x0000000000370010 "h\n"
 *   insn=0x0000000000370014 string=0x0000000000370018 "@"
 *   insn=0x0000000000370018 string=0x000000000037001C ""
 *   insn=0x000000000037001C string=0x0000000000370020 ""
 *   insn=0x0000000000370024 string=0x0000000000370028 ""
 *   insn=0x0000000000370028 string=0x000000000037002C "@"
 *   insn=0x0000000000370038 string=0x000000000037003C "h"
 *   insn=0x000000000037003C string=0x0000000000370040 ""
 *   insn=0x0000000000370040 string=0x0000000000370044 "h"
 *   insn=0x0000000000370044 string=0x0000000000370048 "!"
 *   insn=0x0000000000370048 string=0x000000000037004C "h"
 *   insn=0x0000000000370050 string=0x0000000000370054 "\t@"
 *   insn=0x0000000000370058 string=0x000000000037005C "h\n@"
 *   insn=0x000000000037005C string=0x0000000000370060 ""
 *   insn=0x0000000000370060 string=0x0000000000370064 "h\n"
 *   insn=0x0000000000370068 string=0x0000000000370078 "h"
 *   insn=0x0000000000370088 string=0x000000000037008C " "
 *   insn=0x0000000000370090 string=0x0000000000370094 "3"
 *   insn=0x0000000000370094 string=0x0000000000370098 "h"
 *   insn=0x0000000000370098 string=0x000000000037009C ""
 *   insn=0x000000000037009C string=0x00000000003700A0 "h"
 *   insn=0x00000000003700A4 string=0x00000000003700A8 "h"
 *   insn=0x00000000003700A8 string=0x00000000003700AC "\t@"
 *   insn=0x00000000003700B4 string=0x00000000003700B8 "h\n@"
 *   insn=0x00000000003700B8 string=0x00000000003700BC ""
 *   insn=0x00000000003700BC string=0x00000000003700C0 "h\n"
 *   insn=0x00000000003700C4 string=0x00000000003700C8 "h"
 *   insn=0x00000000003700C8 string=0x00000000003700CC "@"
 *   insn=0x00000000003700F4 string=0x00000000001F40B0 "P'"
 *   insn=0x00000000003700F8 string=0x00000000003700FC ""
 *   insn=0x0000000000370100 string=0x0000000000370104 "\tA"
 *   insn=0x0000000000370104 string=0x0000000000370108 ""
 *   insn=0x0000000000370108 string=0x000000000037010C "i"
 *   insn=0x000000000037010C string=0x0000000000370110 "h&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileSelectionViewController,Caver::ProfileSelectionViewController>(
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

