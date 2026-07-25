/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BEA80
 * Mangled: _ZN5Caver23StoreController_Android25StartedRestoringPurchasesEv
 * Demangled: Caver::StoreController_Android::StartedRestoringPurchases(void)
 *
 * Callers: 1
 *   0x0000000000203300  Caver::StoreController_Android::StartedRestoringPurchases(void)
 *
 * Callees: 1
 *   0x00000000001FF1E0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *
 * Referenced strings: 4
 *   insn=0x00000000004BEA8C string=0x00000000004BEA90 "aB@"
 *   insn=0x00000000004BEA90 string=0x00000000004BEA94 "`"
 *   insn=0x00000000004BEA94 string=0x00000000004BEA98 "t"
 *   insn=0x00000000004BEAA0 string=0x00000000004BEAA4 "t~\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreController_Android::StartedRestoringPurchases(Caver::StoreController_Android *this)
{
  char *v2; // x20
  __int64 result; // x0

  v2 = (char *)this + 120;
  result = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase();
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = v2;
  *((_QWORD *)this + 18) = v2;
  *((_QWORD *)this + 19) = 0;
  return result;
}

