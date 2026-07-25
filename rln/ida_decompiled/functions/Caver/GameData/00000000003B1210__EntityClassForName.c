/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B1210
 * Mangled: _ZN5Caver8GameData18EntityClassForNameERKSs
 * Demangled: Caver::GameData::EntityClassForName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F6960  Caver::GameData::EntityClassForName(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F9300  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::find(std::string const&)
 *
 * Referenced strings: 10
 *   insn=0x00000000003B1224 string=0x00000000003B1228 "6 "
 *   insn=0x00000000003B1228 string=0x00000000001F9300 "0'"
 *   insn=0x00000000003B1230 string=0x00000000003B1234 "@"
 *   insn=0x00000000003B1234 string=0x00000000003B1238 ""
 *   insn=0x00000000003B1238 string=0x00000000003B123C "h"
 *   insn=0x00000000003B123C string=0x00000000003B1240 ""
 *   insn=0x00000000003B1240 string=0x00000000003B1244 "h"
 *   insn=0x00000000003B1248 string=0x00000000003B124C "\t"
 *   insn=0x00000000003B124C string=0x00000000003B1250 ")"
 *   insn=0x00000000003B1250 string=0x00000000003B1254 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GameData::EntityClassForName(__int64 a1@<X0>, _QWORD *a2@<X8>)
{
  __int64 v4; // x0
  __int64 v5; // x8

  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::find();
  if ( a1 + 168 == v4 )
  {
    *a2 = 0;
    a2[1] = 0;
  }
  else
  {
    *a2 = *(_QWORD *)(v4 + 40);
    v5 = *(_QWORD *)(v4 + 48);
    a2[1] = v5;
    if ( v5 )
      ++*(_QWORD *)(v5 + 8);
  }
}

