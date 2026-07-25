/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3AA8
 * Mangled: _ZNK5Caver10QuestState21SaveToProtobufMessageEPNS_5Proto10QuestStateE
 * Demangled: Caver::QuestState::SaveToProtobufMessage(Caver::Proto::QuestState *)
 *
 * Callers: 1
 *   0x00000000001FDCF0  Caver::QuestState::SaveToProtobufMessage(Caver::Proto::QuestState *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 16
 *   insn=0x00000000003C3AB4 string=0x00000000003C3AB8 "\t"
 *   insn=0x00000000003C3ABC string=0x00000000003C3AC0 "h"
 *   insn=0x00000000003C3AC0 string=0x00000000003C3AC4 "`\n@"
 *   insn=0x00000000003C3AC4 string=0x00000000003C3AC8 ")"
 *   insn=0x00000000003C3AC8 string=0x00000000003C3ACC ""
 *   insn=0x00000000003C3ACC string=0x00000000003C3AD0 "h"
 *   insn=0x00000000003C3AE0 string=0x00000000003C3AE4 ""
 *   insn=0x00000000003C3AE0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003C3AE4 string=0x00000000003C3AE8 ""
 *   insn=0x00000000003C3AE8 string=0x00000000003C3AEC "a"
 *   insn=0x00000000003C3AEC string=0x00000000003C3AF0 ""
 *   insn=0x00000000003C3AF0 string=0x00000000003C3AF4 "`\n"
 *   insn=0x00000000003C3AFC string=0x00000000003C3B00 "h"
 *   insn=0x00000000003C3B04 string=0x00000000003C3B08 ""
 *   insn=0x00000000003C3B08 string=0x00000000003C3B0C "h"
 *   insn=0x00000000003C3B0C string=0x00000000003C3B10 "ib"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::QuestState::SaveToProtobufMessage(Caver::QuestState *this, Caver::Proto::QuestState *a2)
{
  __int64 *v4; // x0
  __int64 result; // x0
  char v6; // w9

  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 7) |= 1u;
  if ( v4 == &Caver::Proto::QuestState::_default_quest_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  result = sub_56A6A8(v4);
  v6 = *((_BYTE *)this + 8);
  *((_DWORD *)a2 + 7) |= 2u;
  *((_BYTE *)a2 + 24) = v6;
  return result;
}

