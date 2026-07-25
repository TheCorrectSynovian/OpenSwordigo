/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F4B14
 * Mangled: _ZN5Caver19StoreViewController15PurchaseProductERKN5boost10shared_ptrINS_12StoreProductEEE
 * Demangled: Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Callers: 2
 *   0x00000000001FB9B0  Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *   0x00000000003F4210  Caver::StoreViewController::RestoreCompletion(std::vector<std::string,std::allocator<std::string>> const&,std::string const&)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5D60  Caver::PurchaseViewController::SetProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD550  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *   0x00000000001FE330  Caver::PurchaseViewController::PurchaseViewController(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003F4D1C  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 49
 *   insn=0x00000000003F4B24 string=0x00000000003F4B28 "V"
 *   insn=0x00000000003F4B40 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003F4B54 string=0x00000000001FD550 "0'"
 *   insn=0x00000000003F4B58 string=0x00000000003F4B5C "h""
 *   insn=0x00000000003F4B5C string=0x00000000003F4B60 "$"
 *   insn=0x00000000003F4B64 string=0x00000000003F4B68 "~"
 *   insn=0x00000000003F4B68 string=0x00000000003F4B6C "h"
 *   insn=0x00000000003F4B68 string=0x00000000001F5D60 "P'"
 *   insn=0x00000000003F4B70 string=0x00000000003F4B74 ")@"
 *   insn=0x00000000003F4B7C string=0x00000000003F4B80 "*"
 *   insn=0x00000000003F4B80 string=0x00000000003F4B84 "J"
 *   insn=0x00000000003F4B84 string=0x00000000003F4B88 "*"
 *   insn=0x00000000003F4B98 string=0x00000000003F4B9C "3"
 *   insn=0x00000000003F4B9C string=0x00000000003F4BA0 "h"
 *   insn=0x00000000003F4BA0 string=0x00000000003F4BA4 ""
 *   insn=0x00000000003F4BA4 string=0x00000000003F4BA8 "h"
 *   insn=0x00000000003F4BAC string=0x00000000003F4BB0 "h"
 *   insn=0x00000000003F4BB0 string=0x00000000003F4BB4 "\t@"
 *   insn=0x00000000003F4BBC string=0x00000000003F4BC0 "h\n@"
 *   insn=0x00000000003F4BC0 string=0x00000000003F4BC4 ""
 *   insn=0x00000000003F4BC4 string=0x00000000003F4BC8 "h\n"
 *   insn=0x00000000003F4BCC string=0x00000000003F4BD0 "h"
 *   insn=0x00000000003F4BD0 string=0x00000000003F4BD4 "@"
 *   insn=0x00000000003F4BE0 string=0x00000000003F4BE4 "3"
 *   insn=0x00000000003F4BE4 string=0x00000000003F4BE8 "h"
 *   insn=0x00000000003F4BE8 string=0x00000000003F4BEC ""
 *   insn=0x00000000003F4BEC string=0x00000000003F4BF0 "h"
 *   insn=0x00000000003F4BF4 string=0x00000000003F4BF8 "h"
 *   insn=0x00000000003F4BFC string=0x00000000003F4C00 "\t@"
 *   insn=0x00000000003F4C04 string=0x00000000003F4C08 "h\n@"
 *   insn=0x00000000003F4C08 string=0x00000000003F4C0C ""
 *   insn=0x00000000003F4C0C string=0x00000000003F4C10 "h\n"
 *   insn=0x00000000003F4C14 string=0x00000000003F4C18 "h"
 *   insn=0x00000000003F4C1C string=0x00000000003F4C20 "@"
 *   insn=0x00000000003F4C4C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003F4C54 string=0x00000000003F4C58 "4"
 *   insn=0x00000000003F4C58 string=0x00000000003F4C5C "("
 *   insn=0x00000000003F4C64 string=0x00000000003F4C68 "t"
 *   insn=0x00000000003F4C6C string=0x00000000003F4C70 ""
 *   insn=0x00000000003F4C7C string=0x00000000003F4C80 "\t@"
 *   insn=0x00000000003F4C8C string=0x00000000003F4C90 ""
 *   insn=0x00000000003F4C9C string=0x00000000003F4CA0 "@"
 *   insn=0x00000000003F4CB4 string=0x00000000003F4CB8 "4"
 *   insn=0x00000000003F4CBC string=0x00000000003F4CC0 ""
 *   insn=0x00000000003F4CCC string=0x00000000003F4CD0 "\t@"
 *   insn=0x00000000003F4CDC string=0x00000000003F4CE0 ""
 *   insn=0x00000000003F4CEC string=0x00000000003F4CF0 "@"
 *   insn=0x00000000003F4D0C string=0x00000000003F4D10 "h\t"
 *   insn=0x00000000003F4D10 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreViewController::PurchaseProduct(__int64 a1)
{
  Caver::PurchaseViewController *v2; // x0
  __int64 (__fastcall *v3)(__int64, __int64 *); // x8
  __int64 result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // [xsp+8h] [xbp-48h] BYREF
  _QWORD *v12; // [xsp+10h] [xbp-40h]
  __int64 v13; // [xsp+18h] [xbp-38h]
  _QWORD *v14; // [xsp+20h] [xbp-30h]
  __int64 v15; // [xsp+28h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::PurchaseViewController *)operator new(0x80u);
  Caver::PurchaseViewController::PurchaseViewController(v2);
  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>();
  *(_QWORD *)(v13 + 72) = a1 + 72;
  Caver::PurchaseViewController::SetProduct();
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL);
  v11 = v13;
  v12 = v14;
  if ( v14 )
    ++v14[1];
  result = v3(a1, &v11);
  v5 = v12;
  if ( v12 )
  {
    v6 = v12[1] - 1LL;
    v12[1] = v6;
    if ( !v6 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = v14;
  if ( v14 )
  {
    v9 = v14[1] - 1LL;
    v14[1] = v9;
    if ( !v9 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  return result;
}

