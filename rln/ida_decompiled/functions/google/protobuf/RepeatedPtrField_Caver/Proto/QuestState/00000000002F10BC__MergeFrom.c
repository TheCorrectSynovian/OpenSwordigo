/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F10BC
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10QuestStateEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestState> const&)
 *
 * Callers: 1
 *   0x00000000001F6690  google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestState> const&)
 *
 * Callees: 3
 *   0x00000000001F3770  Caver::Proto::QuestState::MergeFrom(Caver::Proto::QuestState const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 16
 *   insn=0x00000000002F10DC string=0x00000000002F10E0 "i\n@"
 *   insn=0x00000000002F10E0 string=0x00000000002F10E4 "!"
 *   insn=0x00000000002F10E8 string=0x00000000002F10EC "h\n@"
 *   insn=0x00000000002F10E8 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002F10F8 string=0x00000000002F10FC ""
 *   insn=0x00000000002F110C string=0x00000000002F1110 "i"
 *   insn=0x00000000002F1114 string=0x00000000002F1118 "5yv"
 *   insn=0x00000000002F1118 string=0x00000000002F111C "?"
 *   insn=0x00000000002F1124 string=0x00000000002F1128 "*"
 *   insn=0x00000000002F1128 string=0x00000000002F112C ")"
 *   insn=0x00000000002F1144 string=0x00000000002F1158 ""
 *   insn=0x00000000002F1164 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F117C string=0x00000000002F1180 ")"
 *   insn=0x00000000002F118C string=0x00000000002F1190 "x\t"
 *   insn=0x00000000002F1190 string=0x00000000002F1194 "h\n"
 *   insn=0x00000000002F1190 string=0x00000000001F3770 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  int v5; // w8
  int v6; // w25
  __int64 v7; // x0
  __int64 v8; // x8

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    v4 = 0;
    do
    {
      v6 = *((_DWORD *)a1 + 2);
      v5 = *((_DWORD *)a1 + 3);
      if ( v6 >= v5 )
      {
        if ( v5 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v5 + 1);
          v6 = *((_DWORD *)a1 + 2);
          v5 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v5 + 1;
        v7 = operator new(0x20u);
        *(_QWORD *)v7 = off_6C6E98;
        *(_DWORD *)(v7 + 8) = 0;
        *(_QWORD *)(v7 + 16) = &Caver::Proto::QuestState::_default_quest_name_;
        *(_BYTE *)(v7 + 24) = 0;
        *(_DWORD *)(v7 + 28) = 0;
        v8 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v6 + 1;
        *(_QWORD *)(v8 + 8LL * v6) = v7;
      }
      else
      {
        *((_DWORD *)a1 + 2) = v6 + 1;
      }
      Caver::Proto::QuestState::MergeFrom();
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

