/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EBC2C
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12PurchaseViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PurchaseView,Caver::PurchaseView>(boost::shared_ptr<Caver::PurchaseView> const*,Caver::PurchaseView *)
 *
 * Callers: 1
 *   0x00000000002000C0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PurchaseView,Caver::PurchaseView>(boost::shared_ptr<Caver::PurchaseView> const*,Caver::PurchaseView *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x00000000003EBC3C string=0x00000000003EBC40 "`"
 *   insn=0x00000000003EBC40 string=0x00000000003EBC44 ""
 *   insn=0x00000000003EBC40 string=0x00000000003EBC4C "3"
 *   insn=0x00000000003EBC44 string=0x00000000003EBC48 "h"
 *   insn=0x00000000003EBC50 string=0x00000000003EBC54 "h"
 *   insn=0x00000000003EBC54 string=0x00000000003EBC58 ""
 *   insn=0x00000000003EBC58 string=0x00000000003EBC5C "h"
 *   insn=0x00000000003EBC6C string=0x00000000003EBC70 "h\n@"
 *   insn=0x00000000003EBC70 string=0x00000000003EBC74 ""
 *   insn=0x00000000003EBC74 string=0x00000000003EBC78 "h\n"
 *   insn=0x00000000003EBC7C string=0x00000000003EBC80 "@"
 *   insn=0x00000000003EBC80 string=0x00000000003EBC84 ""
 *   insn=0x00000000003EBC84 string=0x00000000003EBC88 ""
 *   insn=0x00000000003EBC8C string=0x00000000003EBC90 ""
 *   insn=0x00000000003EBC90 string=0x00000000003EBC94 "@"
 *   insn=0x00000000003EBCA0 string=0x00000000003EBCA4 "h"
 *   insn=0x00000000003EBCA4 string=0x00000000003EBCA8 ""
 *   insn=0x00000000003EBCA8 string=0x00000000003EBCAC "h"
 *   insn=0x00000000003EBCAC string=0x00000000003EBCB0 "!"
 *   insn=0x00000000003EBCB0 string=0x00000000003EBCB4 "h"
 *   insn=0x00000000003EBCB8 string=0x00000000003EBCBC "\t@"
 *   insn=0x00000000003EBCC0 string=0x00000000003EBCC4 "h\n@"
 *   insn=0x00000000003EBCC4 string=0x00000000003EBCC8 ""
 *   insn=0x00000000003EBCC8 string=0x00000000003EBCCC "h\n"
 *   insn=0x00000000003EBCD0 string=0x00000000003EBCE0 "h"
 *   insn=0x00000000003EBCF0 string=0x00000000003EBCF4 " "
 *   insn=0x00000000003EBCF8 string=0x00000000003EBCFC "3"
 *   insn=0x00000000003EBCFC string=0x00000000003EBD00 "h"
 *   insn=0x00000000003EBD00 string=0x00000000003EBD04 ""
 *   insn=0x00000000003EBD04 string=0x00000000003EBD08 "h"
 *   insn=0x00000000003EBD0C string=0x00000000003EBD10 "h"
 *   insn=0x00000000003EBD10 string=0x00000000003EBD14 "\t@"
 *   insn=0x00000000003EBD1C string=0x00000000003EBD20 "h\n@"
 *   insn=0x00000000003EBD20 string=0x00000000003EBD24 ""
 *   insn=0x00000000003EBD24 string=0x00000000003EBD28 "h\n"
 *   insn=0x00000000003EBD2C string=0x00000000003EBD30 "h"
 *   insn=0x00000000003EBD30 string=0x00000000003EBD34 "@"
 *   insn=0x00000000003EBD58 string=0x00000000003EBD5C "_"
 *   insn=0x00000000003EBD64 string=0x00000000003EBD7C "_"
 *   insn=0x00000000003EBD68 string=0x00000000003EBD6C "}F"
 *   insn=0x00000000003EBD70 string=0x00000000003EBD74 "h"
 *   insn=0x00000000003EBD80 string=0x00000000003EBD98 "_"
 *   insn=0x00000000003EBD84 string=0x00000000003EBD88 "h\n"
 *   insn=0x00000000003EBD8C string=0x00000000003EBD90 "`"
 *   insn=0x00000000003EBD9C string=0x00000000003EBDA0 "_"
 *   insn=0x00000000003EBDA0 string=0x00000000003EBDA4 "!"
 *   insn=0x00000000003EBDA4 string=0x00000000003EBDA8 "h"
 *   insn=0x00000000003EBDAC string=0x00000000003EBDB0 ""
 *   insn=0x00000000003EBDB4 string=0x00000000003EBDB8 "*"
 *   insn=0x00000000003EBDB8 string=0x00000000003EBDBC "!hA"
 *   insn=0x00000000003EBDBC string=0x00000000003EBDC0 "_"
 *   insn=0x00000000003EBDBC string=0x0000000000593070 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver22PurchaseViewControllerEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x00000000003EBDC0 string=0x00000000003EBDC4 " "
 *   insn=0x00000000003EBDC8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PurchaseView,Caver::PurchaseView>(
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

