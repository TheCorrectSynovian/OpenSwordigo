/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B0038
 * Mangled: _ZN5Caver8GameData8AddSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::GameData::AddSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAA70  std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Skill>*,std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>>,boost::shared_ptr<Caver::Skill> const&)
 *
 * Referenced strings: 11
 *   insn=0x00000000003B0044 string=0x00000000003B0048 "*"
 *   insn=0x00000000003B0048 string=0x00000000003B004C "\n"
 *   insn=0x00000000003B004C string=0x00000000003B0050 ")"
 *   insn=0x00000000003B0050 string=0x00000000003B0054 "\t"
 *   insn=0x00000000003B0058 string=0x00000000003B005C "*"
 *   insn=0x00000000003B0058 string=0x00000000003B0068 "A"
 *   insn=0x00000000003B005C string=0x00000000003B0060 "J"
 *   insn=0x00000000003B0060 string=0x00000000003B0064 "*"
 *   insn=0x00000000003B0068 string=0x00000000003B006C ""
 *   insn=0x00000000003B007C string=0x00000000003B0080 "|*"
 *   insn=0x00000000003B0080 string=0x00000000001FAA70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameData::AddSkill(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // x8
  __int64 v3; // x9

  v2 = *(_QWORD **)(a1 + 56);
  if ( v2 == *(_QWORD **)(a1 + 64) )
  {
    std::vector<boost::shared_ptr<Caver::Skill>>::_M_insert_aux();
  }
  else
  {
    *v2 = *a2;
    v3 = a2[1];
    v2[1] = v3;
    if ( v3 )
      ++*(_QWORD *)(v3 + 8);
    *(_QWORD *)(a1 + 56) = v2 + 2;
  }
}

