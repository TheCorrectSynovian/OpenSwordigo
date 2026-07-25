/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027DBA4
 * Mangled: _ZNK5Caver22MonsterEntityComponent5CloneEv
 * Demangled: Caver::MonsterEntityComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000027DB6C  Caver::MonsterEntityComponent::~MonsterEntityComponent()
 *
 * Callees: 6
 *   0x00000000001F4850  Caver::EntityComponent::EntityComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203E20  Caver::MonsterEntityComponent::InitWithComponent(Caver::MonsterEntityComponent const*)
 *   0x000000000027DC58  Caver::MonsterEntityComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x000000000027DBB8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027DBBC string=0x000000000027DBC0 "$"
 *   insn=0x000000000027DBC0 string=0x000000000027DBC4 "(#"
 *   insn=0x000000000027DBC0 string=0x00000000001F4850 "P'"
 *   insn=0x000000000027DBC4 string=0x000000000027DBC8 ""
 *   insn=0x000000000027DBC8 string=0x000000000027DBCC "I#"
 *   insn=0x000000000027DBCC string=0x000000000027DBD0 ")"
 *   insn=0x000000000027DBD0 string=0x000000000027DBD4 "+ "
 *   insn=0x000000000027DBD8 string=0x000000000027DBDC "A"
 *   insn=0x000000000027DBE0 string=0x000000000027DBE4 ""
 *   insn=0x000000000027DBE8 string=0x000000000027DBEC "`"
 *   insn=0x000000000027DBEC string=0x000000000027DBF0 ""
 *   insn=0x000000000027DBF8 string=0x000000000027DBFC ")a"
 *   insn=0x000000000027DC2C string=0x000000000027DC30 "|"
 *   insn=0x000000000027DC4C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterEntityComponent::Clone(Caver::MonsterEntityComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = operator new(0x1A0u);
  Caver::EntityComponent::EntityComponent((Caver::EntityComponent *)v2);
  *(_WORD *)(v2 + 408) = 257;
  *(_QWORD *)v2 = off_6BF7B0;
  *(_QWORD *)&v3 = &off_6BF8C8;
  *((_QWORD *)&v3 + 1) = &off_6BF908;
  *(_QWORD *)(v2 + 320) = 0;
  *(_QWORD *)(v2 + 328) = 0;
  *(_QWORD *)(v2 + 368) = 0;
  *(_QWORD *)(v2 + 376) = 0;
  *(_QWORD *)(v2 + 352) = 0;
  *(_QWORD *)(v2 + 360) = 0;
  *(_QWORD *)(v2 + 392) = 0;
  *(_QWORD *)(v2 + 400) = 0;
  *(_QWORD *)(v2 + 384) = 0x7F7FFFFF00000000LL;
  *(_QWORD *)(v2 + 336) = 0;
  *(_QWORD *)(v2 + 344) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 304) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 312) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_BYTE *)(v2 + 410) = 1;
  Caver::MonsterEntityComponent::InitWithComponent((Caver::MonsterEntityComponent *)v2, this);
  return v2;
}

