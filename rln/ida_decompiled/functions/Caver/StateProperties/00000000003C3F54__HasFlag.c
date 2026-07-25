/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3F54
 * Mangled: _ZN5Caver15StateProperties7HasFlagERKSs
 * Demangled: Caver::StateProperties::HasFlag(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *
 * Callees: 1
 *   0x0000000000200780  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find(std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000003C3F60 string=0x00000000003C3F64 ""
 *   insn=0x00000000003C3F68 string=0x00000000003C3F6C "h""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::StateProperties::HasFlag(__int64 a1)
{
  __int64 v2; // x0

  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find();
  return a1 + 8 != v2;
}

