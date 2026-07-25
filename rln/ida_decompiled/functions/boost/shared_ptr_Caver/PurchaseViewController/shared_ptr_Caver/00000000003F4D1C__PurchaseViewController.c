/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F4D1C
 * Mangled: _ZN5boost10shared_ptrIN5Caver22PurchaseViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *
 * Callers: 2
 *   0x00000000001FD550  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *   0x00000000003F4B14  Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Callees: 14
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F56F0  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000001F5D10  Caver::StoreViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FCF80  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002003A0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 104
 *   insn=0x00000000003F4D34 string=0x00000000003F4D38 "*"
 *   insn=0x00000000003F4D38 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003F4D3C string=0x00000000003F4D40 ")"
 *   insn=0x00000000003F4D4C string=0x00000000003F4D50 "(A"
 *   insn=0x00000000003F4D54 string=0x00000000003F4D58 ""
 *   insn=0x00000000003F4D60 string=0x00000000003F4D64 "`""
 *   insn=0x00000000003F4D70 string=0x00000000001FCF80 "0'"
 *   insn=0x00000000003F4D84 string=0x00000000003F4D88 "4"
 *   insn=0x00000000003F4D8C string=0x00000000003F4D90 ""
 *   insn=0x00000000003F4D9C string=0x00000000003F4DA0 "\t@"
 *   insn=0x00000000003F4DAC string=0x00000000003F4DB0 ""
 *   insn=0x00000000003F4DBC string=0x00000000003F4DC0 "@"
 *   insn=0x00000000003F4DD0 string=0x00000000003F4DD4 "^e"
 *   insn=0x00000000003F4DD8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003F4DDC string=0x00000000003F4DE0 "h"
 *   insn=0x00000000003F4DDC string=0x00000000003F4DF0 "`7"
 *   insn=0x00000000003F4DE0 string=0x00000000003F4DE4 ""
 *   insn=0x00000000003F4DF8 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003F4E1C string=0x00000000003F4E20 "W"
 *   insn=0x00000000003F4E30 string=0x00000000003F4E34 "v*@"
 *   insn=0x00000000003F4E54 string=0x00000000003F4E58 ""
 *   insn=0x00000000003F4E70 string=0x00000000003F4E74 " "
 *   insn=0x00000000003F4E7C string=0x00000000003F4E80 ")"
 *   insn=0x00000000003F4E94 string=0x00000000003F4E98 ""
 *   insn=0x00000000003F4E9C string=0x00000000003F4EA0 "!"
 *   insn=0x00000000003F4EA8 string=0x00000000003F4EAC "\t@"
 *   insn=0x00000000003F4EB4 string=0x00000000003F4EB8 ""
 *   insn=0x00000000003F4EBC string=0x00000000003F4EC0 "!"
 *   insn=0x00000000003F4EC8 string=0x00000000003F4ECC "@"
 *   insn=0x00000000003F4EF0 string=0x00000000003F4EF4 ""
 *   insn=0x00000000003F4F00 string=0x00000000003F4F04 "`"
 *   insn=0x00000000003F4F08 string=0x00000000003F4F0C "%-"
 *   insn=0x00000000003F4F14 string=0x00000000003F4F18 ")"
 *   insn=0x00000000003F4F24 string=0x00000000003F4F28 "4"
 *   insn=0x00000000003F4F28 string=0x00000000003F4F6C "tVG"
 *   insn=0x00000000003F4F2C string=0x00000000003F4F30 ""
 *   insn=0x00000000003F4F40 string=0x00000000003F4F44 "\t@"
 *   insn=0x00000000003F4F4C string=0x00000000003F4F50 ""
 *   insn=0x00000000003F4F60 string=0x00000000003F4F64 "@"
 *   insn=0x00000000003F4F80 string=0x00000000001F56F0 "P'"
 *   insn=0x00000000003F4F88 string=0x00000000003F4F8C "a"
 *   insn=0x00000000003F4FBC string=0x00000000003F4FC0 ")=G"
 *   insn=0x00000000003F4FC0 string=0x00000000003F4FC4 "!"
 *   insn=0x00000000003F4FC8 string=0x00000000003F4FCC "\t"
 *   insn=0x00000000003F4FC8 string=0x00000000003F5004 "\t"
 *   insn=0x00000000003F4FCC string=0x00000000003F4FD0 "*"
 *   insn=0x00000000003F4FD0 string=0x00000000003F4FD4 "\n"
 *   insn=0x00000000003F4FD8 string=0x00000000003F4FDC ""
 *   insn=0x00000000003F4FDC string=0x00000000003F5010 "?"
 *   insn=0x00000000003F4FE0 string=0x00000000003F4FE4 ")=G"
 *   insn=0x00000000003F4FE4 string=0x00000000003F4FE8 "!"
 *   insn=0x00000000003F4FEC string=0x00000000003F4FF0 "\t"
 *   insn=0x00000000003F4FEC string=0x00000000003F5028 "\t"
 *   insn=0x00000000003F4FF0 string=0x00000000003F4FF4 "*"
 *   insn=0x00000000003F4FF4 string=0x00000000003F4FF8 "\n"
 *   insn=0x00000000003F4FFC string=0x00000000003F5000 ""
 *   insn=0x00000000003F5000 string=0x00000000003F5034 "?"
 *   insn=0x00000000003F5004 string=0x00000000003F5008 "*"
 *   insn=0x00000000003F5008 string=0x00000000003F500C "\n"
 *   insn=0x00000000003F501C string=0x00000000003F5020 "t"
 *   insn=0x00000000003F5028 string=0x00000000003F502C "*"
 *   insn=0x00000000003F502C string=0x00000000003F5030 "\n"
 *   insn=0x00000000003F504C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003F5054 string=0x00000000003F5058 "J"
 *   insn=0x00000000003F505C string=0x00000000003F5060 "(a"
 *   insn=0x00000000003F5068 string=0x00000000003F506C "j"
 *   insn=0x00000000003F506C string=0x00000000003F5070 "J=G"
 *   insn=0x00000000003F5070 string=0x00000000003F5074 ")!"
 *   insn=0x00000000003F5078 string=0x00000000003F507C "*"
 *   insn=0x00000000003F5078 string=0x00000000003F50A8 "*"
 *   insn=0x00000000003F507C string=0x00000000003F5080 "K"
 *   insn=0x00000000003F5080 string=0x00000000003F5084 "+"
 *   insn=0x00000000003F5088 string=0x00000000003F508C "_"
 *   insn=0x00000000003F509C string=0x00000000003F50A0 "T"
 *   insn=0x00000000003F50A0 string=0x00000000003F50A4 "H"
 *   insn=0x00000000003F50A8 string=0x00000000003F50AC "K"
 *   insn=0x00000000003F50AC string=0x00000000003F50B0 "+"
 *   insn=0x00000000003F50B0 string=0x00000000003F50B4 "_"
 *   insn=0x00000000003F50C8 string=0x00000000003F50CC ""
 *   insn=0x00000000003F50D8 string=0x00000000003F50DC "\t@"
 *   insn=0x00000000003F50E8 string=0x00000000003F50EC ""
 *   insn=0x00000000003F50F8 string=0x00000000003F50FC "@"
 *   insn=0x00000000003F5104 string=0x00000000003F5108 "/"
 *   insn=0x00000000003F5110 string=0x00000000003F5114 "J"
 *   insn=0x00000000003F5118 string=0x00000000003F511C "(a"
 *   insn=0x00000000003F5124 string=0x00000000003F5128 "j"
 *   insn=0x00000000003F5124 string=0x00000000003F5180 "4"
 *   insn=0x00000000003F5128 string=0x00000000003F512C "J=G"
 *   insn=0x00000000003F512C string=0x00000000003F5130 ")!"
 *   insn=0x00000000003F5134 string=0x00000000003F5138 "*"
 *   insn=0x00000000003F5134 string=0x00000000003F5164 "*"
 *   insn=0x00000000003F5138 string=0x00000000003F513C "K"
 *   insn=0x00000000003F513C string=0x00000000003F5140 "+"
 *   insn=0x00000000003F5144 string=0x00000000003F5148 "_"
 *   insn=0x00000000003F5158 string=0x00000000003F515C "T"
 *   insn=0x00000000003F5164 string=0x00000000003F5168 "K"
 *   insn=0x00000000003F5168 string=0x00000000003F516C "+"
 *   insn=0x00000000003F516C string=0x00000000003F5170 "_"
 *   insn=0x00000000003F5184 string=0x00000000003F5188 ""
 *   insn=0x00000000003F5194 string=0x00000000003F5198 "\t@"
 *   insn=0x00000000003F51A4 string=0x00000000003F51A8 ""
 *   insn=0x00000000003F51B4 string=0x00000000003F51B8 "@"
 *   insn=0x00000000003F51C8 string=0x00000000003F51CC "`d"
 *   insn=0x00000000003F51D4 string=0x00000000001F5D10 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6D1018;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>();
  return result;
}

