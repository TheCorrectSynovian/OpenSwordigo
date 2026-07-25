/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BC1FC
 * Mangled: _ZN5Caver3Map11NodeForNameERKSs
 * Demangled: Caver::Map::NodeForName(std::string const&)
 *
 * Callers: 1
 *   0x0000000000202260  Caver::Map::NodeForName(std::string const&)
 *
 * Callees: 1
 *   0x0000000000200310  std::map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::operator[](std::string const&)
 *
 * Referenced strings: 8
 *   insn=0x00000000003BC20C string=0x00000000003BC210 "@"
 *   insn=0x00000000003BC210 string=0x00000000003BC214 ""
 *   insn=0x00000000003BC214 string=0x00000000003BC218 "h"
 *   insn=0x00000000003BC218 string=0x00000000003BC21C ""
 *   insn=0x00000000003BC21C string=0x00000000003BC220 "h"
 *   insn=0x00000000003BC224 string=0x00000000003BC228 "\t"
 *   insn=0x00000000003BC228 string=0x00000000003BC22C ")"
 *   insn=0x00000000003BC22C string=0x00000000003BC230 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall Caver::Map::NodeForName@<X0>(_QWORD *a1@<X8>)
{
  _QWORD *result; // x0
  __int64 v3; // x8

  result = (_QWORD *)std::map<std::string,boost::shared_ptr<Caver::MapNode>>::operator[]();
  *a1 = *result;
  v3 = result[1];
  a1[1] = v3;
  if ( v3 )
    ++*(_QWORD *)(v3 + 8);
  return result;
}

