/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000347B00
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_19StoreViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::StoreViewController,Caver::StoreViewController>(boost::shared_ptr<Caver::StoreViewController> const*,Caver::StoreViewController *)
 *
 * Callers: 1
 *   0x00000000001FA0C0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::StoreViewController,Caver::StoreViewController>(boost::shared_ptr<Caver::StoreViewController> const*,Caver::StoreViewController *)
 *
 * Callees: 3
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x0000000000347B10 string=0x0000000000347B14 "`"
 *   insn=0x0000000000347B14 string=0x0000000000347B18 ""
 *   insn=0x0000000000347B14 string=0x0000000000347B20 "3"
 *   insn=0x0000000000347B18 string=0x0000000000347B1C "h"
 *   insn=0x0000000000347B24 string=0x0000000000347B28 "h"
 *   insn=0x0000000000347B28 string=0x0000000000347B2C ""
 *   insn=0x0000000000347B2C string=0x0000000000347B30 "h"
 *   insn=0x0000000000347B40 string=0x0000000000347B44 "h\n@"
 *   insn=0x0000000000347B44 string=0x0000000000347B48 ""
 *   insn=0x0000000000347B48 string=0x0000000000347B4C "h\n"
 *   insn=0x0000000000347B50 string=0x0000000000347B54 "@"
 *   insn=0x0000000000347B54 string=0x0000000000347B58 ""
 *   insn=0x0000000000347B58 string=0x0000000000347B5C ""
 *   insn=0x0000000000347B60 string=0x0000000000347B64 ""
 *   insn=0x0000000000347B64 string=0x0000000000347B68 "@"
 *   insn=0x0000000000347B74 string=0x0000000000347B78 "h"
 *   insn=0x0000000000347B78 string=0x0000000000347B7C ""
 *   insn=0x0000000000347B7C string=0x0000000000347B80 "h"
 *   insn=0x0000000000347B80 string=0x0000000000347B84 "!"
 *   insn=0x0000000000347B84 string=0x0000000000347B88 "h"
 *   insn=0x0000000000347B8C string=0x0000000000347B90 "\t@"
 *   insn=0x0000000000347B94 string=0x0000000000347B98 "h\n@"
 *   insn=0x0000000000347B98 string=0x0000000000347B9C ""
 *   insn=0x0000000000347B9C string=0x0000000000347BA0 "h\n"
 *   insn=0x0000000000347BA4 string=0x0000000000347BB4 "h"
 *   insn=0x0000000000347BC4 string=0x0000000000347BC8 " "
 *   insn=0x0000000000347BCC string=0x0000000000347BD0 "3"
 *   insn=0x0000000000347BD0 string=0x0000000000347BD4 "h"
 *   insn=0x0000000000347BD4 string=0x0000000000347BD8 ""
 *   insn=0x0000000000347BD8 string=0x0000000000347BDC "h"
 *   insn=0x0000000000347BE0 string=0x0000000000347BE4 "h"
 *   insn=0x0000000000347BE4 string=0x0000000000347BE8 "\t@"
 *   insn=0x0000000000347BF0 string=0x0000000000347BF4 "h\n@"
 *   insn=0x0000000000347BF4 string=0x0000000000347BF8 ""
 *   insn=0x0000000000347BF8 string=0x0000000000347BFC "h\n"
 *   insn=0x0000000000347C00 string=0x0000000000347C04 "h"
 *   insn=0x0000000000347C04 string=0x0000000000347C08 "@"
 *   insn=0x0000000000347C14 string=0x0000000000347C18 "+"
 *   insn=0x0000000000347C2C string=0x0000000000347C30 " "
 *   insn=0x0000000000347C30 string=0x00000000001F40B0 "P'"
 *   insn=0x0000000000347C34 string=0x0000000000347C38 ""
 *   insn=0x0000000000347C44 string=0x0000000000347C48 "\tA"
 *   insn=0x0000000000347C48 string=0x0000000000347C4C ""
 *   insn=0x0000000000347C4C string=0x0000000000347C50 "i"
 *   insn=0x0000000000347C50 string=0x0000000000347C54 "h&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::StoreViewController,Caver::StoreViewController>(
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

