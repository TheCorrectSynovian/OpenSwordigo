/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3CA4
 * Mangled: _ZN5Caver5Skill23LoadFromProtobufMessageERKNS_5Proto5SkillE
 * Demangled: Caver::Skill::LoadFromProtobufMessage(Caver::Proto::Skill const&)
 *
 * Callers: 1
 *   0x0000000000202EA0  Caver::Skill::LoadFromProtobufMessage(Caver::Proto::Skill const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 8
 *   insn=0x00000000003C3CB0 string=0x00000000003C3CB4 "a\n@"
 *   insn=0x00000000003C3CB8 string=0x00000000003C3CBC "{"
 *   insn=0x00000000003C3CBC string=0x00000000003C3CC0 "a"
 *   insn=0x00000000003C3CC4 string=0x00000000003C3CC8 "x"
 *   insn=0x00000000003C3CC8 string=0x00000000003C3CCC "a"
 *   insn=0x00000000003C3CD0 string=0x00000000003C3CD4 "u"
 *   insn=0x00000000003C3CD4 string=0x00000000003C3CD8 "h"
 *   insn=0x00000000003C3CDC string=0x00000000003C3CE0 "h2@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Skill::LoadFromProtobufMessage(Caver::Skill *this, const Caver::Proto::Skill *a2)
{
  __int64 result; // x0

  sub_56A6A8(this);
  sub_56A6A8((char *)this + 8);
  result = sub_56A6A8((char *)this + 16);
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 5);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 12);
  return result;
}

