/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BD438
 * Mangled: _ZN5Caver23StoreController_Android18IsProductPurchasedERKSs
 * Demangled: Caver::StoreController_Android::IsProductPurchased(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200780  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find(std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000004BD444 string=0x00000000004BD448 "`"
 *   insn=0x00000000004BD450 string=0x00000000004BD454 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::StoreController_Android::IsProductPurchased(__int64 a1)
{
  __int64 v2; // x0

  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find();
  return a1 + 120 != v2;
}

