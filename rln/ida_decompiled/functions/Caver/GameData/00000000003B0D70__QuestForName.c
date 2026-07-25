/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B0D70
 * Mangled: _ZN5Caver8GameData12QuestForNameERKSs
 * Demangled: Caver::GameData::QuestForName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F7BF0  Caver::GameData::QuestForName(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F3D20  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::find(std::string const&)
 *
 * Referenced strings: 9
 *   insn=0x00000000003B0D88 string=0x00000000001F3D20 "P'"
 *   insn=0x00000000003B0D90 string=0x00000000003B0D94 "@"
 *   insn=0x00000000003B0D94 string=0x00000000003B0D98 ""
 *   insn=0x00000000003B0D98 string=0x00000000003B0D9C "h"
 *   insn=0x00000000003B0D9C string=0x00000000003B0DA0 ""
 *   insn=0x00000000003B0DA0 string=0x00000000003B0DA4 "h"
 *   insn=0x00000000003B0DA8 string=0x00000000003B0DAC "\t"
 *   insn=0x00000000003B0DAC string=0x00000000003B0DB0 ")"
 *   insn=0x00000000003B0DB0 string=0x00000000003B0DB4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GameData::QuestForName(__int64 a1@<X0>, _QWORD *a2@<X8>)
{
  __int64 v4; // x0
  __int64 v5; // x8

  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::find();
  if ( a1 + 96 == v4 )
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

