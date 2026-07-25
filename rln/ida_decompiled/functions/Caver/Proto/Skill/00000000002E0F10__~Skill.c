/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E0F10
 * Mangled: _ZN5Caver5Proto5SkillD0Ev
 * Demangled: Caver::Proto::Skill::~Skill()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4860  Caver::Proto::Skill::SharedDtor(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002E0F18 string=0x00000000002E0F1C "( "
 *   insn=0x00000000002E0F1C string=0x00000000002E0F20 ""
 *   insn=0x00000000002E0F24 string=0x00000000002E0F28 "A"
 *   insn=0x00000000002E0F28 string=0x00000000002E0F2C "h"
 *   insn=0x00000000002E0F2C string=0x00000000002E0F30 "LN"
 *   insn=0x00000000002E0F30 string=0x00000000001F4860 "P'"
 *   insn=0x00000000002E0F38 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002E0F48 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E0F68 string=0x00000000002E0F6C "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Skill::~Skill(Caver::Proto::Skill *this)
{
  *(_QWORD *)this = off_6C6868;
  Caver::Proto::Skill::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

