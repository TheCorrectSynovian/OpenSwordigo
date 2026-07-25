/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271E60
 * Mangled: _ZN5Caver19HeroEntityComponentC2Ev
 * Demangled: Caver::HeroEntityComponent::HeroEntityComponent(void)
 *
 * Callers: 2
 *   0x00000000001F50C0  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *   0x00000000001F8220  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *
 * Callees: 9
 *   0x00000000001F3B70  std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *   0x00000000001F4850  Caver::EntityComponent::EntityComponent(void)
 *   0x00000000001F7640  Caver::PhysicsObjectState::~PhysicsObjectState()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FBC40  .memset
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000272028  Caver::HeroEntityComponent::InitWithComponent(Caver::HeroEntityComponent const*)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 62
 *   insn=0x0000000000271E70 string=0x0000000000271E74 "w\n"
 *   insn=0x0000000000271E74 string=0x00000000001F4850 "P'"
 *   insn=0x0000000000271E78 string=0x0000000000271E7C "uF"
 *   insn=0x0000000000271E7C string=0x0000000000271E80 "t"
 *   insn=0x0000000000271E88 string=0x0000000000271E8C "\tA"
 *   insn=0x0000000000271E8C string=0x0000000000271E90 "i"
 *   insn=0x0000000000271E94 string=0x0000000000271E98 ")"
 *   insn=0x0000000000271E98 string=0x0000000000271E9C "\n"
 *   insn=0x0000000000271E9C string=0x0000000000271EA0 "@"
 *   insn=0x0000000000271EA0 string=0x0000000000271EA4 ""
 *   insn=0x0000000000271EA4 string=0x0000000000271EA8 ")a"
 *   insn=0x0000000000271EB0 string=0x0000000000271EB4 "u"
 *   insn=0x0000000000271EB8 string=0x0000000000271EBC "vB"
 *   insn=0x0000000000271EC4 string=0x0000000000271EC8 "`"
 *   insn=0x0000000000271EC8 string=0x0000000000271ECC "]'"
 *   insn=0x0000000000271ECC string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000271EE0 string=0x0000000000271EE4 "#"
 *   insn=0x0000000000271EE4 string=0x00000000001F3B70 "P'"
 *   insn=0x0000000000271F00 string=0x0000000000271F04 "7"
 *   insn=0x0000000000271F04 string=0x0000000000271F08 "`"
 *   insn=0x0000000000271F0C string=0x0000000000271F10 "@"
 *   insn=0x0000000000271F0C string=0x0000000000271F2C "`"
 *   insn=0x0000000000271F10 string=0x0000000000271F14 ""
 *   insn=0x0000000000271F14 string=0x0000000000271F18 ""
 *   insn=0x0000000000271F1C string=0x0000000000271F20 ""
 *   insn=0x0000000000271F20 string=0x0000000000271F24 ""
 *   insn=0x0000000000271F30 string=0x0000000000271F34 "@"
 *   insn=0x0000000000271F30 string=0x0000000000271F50 "`"
 *   insn=0x0000000000271F34 string=0x0000000000271F38 ""
 *   insn=0x0000000000271F38 string=0x0000000000271F3C ""
 *   insn=0x0000000000271F40 string=0x0000000000271F44 ""
 *   insn=0x0000000000271F44 string=0x0000000000271F48 ""
 *   insn=0x0000000000271F54 string=0x0000000000271F58 "@"
 *   insn=0x0000000000271F58 string=0x0000000000271F5C ""
 *   insn=0x0000000000271F5C string=0x0000000000271F60 ""
 *   insn=0x0000000000271F64 string=0x0000000000271F68 ""
 *   insn=0x0000000000271F68 string=0x0000000000271F6C ""
 *   insn=0x0000000000271F78 string=0x0000000000271F7C "@"
 *   insn=0x0000000000271F7C string=0x0000000000271F80 ""
 *   insn=0x0000000000271F80 string=0x0000000000271F84 ""
 *   insn=0x0000000000271F88 string=0x0000000000271F8C ""
 *   insn=0x0000000000271F8C string=0x0000000000271F90 ""
 *   insn=0x0000000000271F98 string=0x0000000000271F9C "IF"
 *   insn=0x0000000000271F9C string=0x0000000000271FA0 "`"
 *   insn=0x0000000000271FA0 string=0x0000000000271FA4 "\n"
 *   insn=0x0000000000271FA4 string=0x0000000000271FA8 "\tA"
 *   insn=0x0000000000271FA8 string=0x0000000000271FAC "@"
 *   insn=0x0000000000271FAC string=0x0000000000271FB0 ""
 *   insn=0x0000000000271FB4 string=0x0000000000271FB8 "i"
 *   insn=0x0000000000271FB8 string=0x0000000000271FBC "`"
 *   insn=0x0000000000271FC0 string=0x0000000000271FC4 "@"
 *   insn=0x0000000000271FC0 string=0x0000000000271FE0 "`"
 *   insn=0x0000000000271FC4 string=0x0000000000271FC8 ""
 *   insn=0x0000000000271FC8 string=0x0000000000271FCC ""
 *   insn=0x0000000000271FD0 string=0x0000000000271FD4 ""
 *   insn=0x0000000000271FD4 string=0x0000000000271FD8 ""
 *   insn=0x0000000000271FE4 string=0x00000000001F7640 "0'"
 *   insn=0x0000000000271FE8 string=0x0000000000271FEC "9!"
 *   insn=0x0000000000271FEC string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000271FF0 string=0x0000000000271FF4 "4>"
 *   insn=0x0000000000271FF8 string=0x0000000000271FFC "`"
 *   insn=0x000000000027200C string=0x0000000000272010 "0!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEntityComponent::HeroEntityComponent(Caver::HeroEntityComponent *this)
{
  __int128 v2; // q0

  Caver::EntityComponent::EntityComponent(this);
  *(_QWORD *)this = off_6BF270;
  *(_QWORD *)&v2 = &off_6BF388;
  *((_QWORD *)&v2 + 1) = &off_6BF3C8;
  *((_QWORD *)this + 41) = 0;
  *((_QWORD *)this + 42) = &byte_6FD2F8;
  *((_QWORD *)this + 39) = 0;
  *((_QWORD *)this + 40) = 0;
  *((_QWORD *)this + 38) = 0;
  *((_OWORD *)this + 1) = v2;
  memset((char *)this + 384, 0, 0x50u);
  *((_QWORD *)this + 45) = 0;
  *((_QWORD *)this + 46) = 0;
  *((_QWORD *)this + 43) = 0;
  *((_QWORD *)this + 44) = 0;
  *((_DWORD *)this + 94) = 0;
  return std::_Deque_base<Caver::HeroEntityComponent::SafePosition>::_M_initialize_map();
}

