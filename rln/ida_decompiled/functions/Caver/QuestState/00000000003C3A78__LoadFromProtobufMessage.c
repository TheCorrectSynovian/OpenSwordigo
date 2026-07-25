/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3A78
 * Mangled: _ZN5Caver10QuestState23LoadFromProtobufMessageERKNS_5Proto10QuestStateE
 * Demangled: Caver::QuestState::LoadFromProtobufMessage(Caver::Proto::QuestState const&)
 *
 * Callers: 1
 *   0x00000000001F7080  Caver::QuestState::LoadFromProtobufMessage(Caver::Proto::QuestState const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 2
 *   insn=0x00000000003C3A84 string=0x00000000003C3A88 "a\n@"
 *   insn=0x00000000003C3A90 string=0x00000000003C3A94 "hb@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::QuestState::LoadFromProtobufMessage(
        Caver::QuestState *this,
        const Caver::Proto::QuestState *a2)
{
  __int64 result; // x0

  result = sub_56A6A8(this);
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 24);
  return result;
}

