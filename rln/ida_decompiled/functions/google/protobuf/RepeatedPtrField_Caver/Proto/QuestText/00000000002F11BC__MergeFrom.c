/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F11BC
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto9QuestTextEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestText> const&)
 *
 * Callers: 1
 *   0x00000000001FFD10  google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestText> const&)
 *
 * Callees: 3
 *   0x00000000001F4390  Caver::Proto::QuestText::MergeFrom(Caver::Proto::QuestText const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 20
 *   insn=0x00000000002F11DC string=0x00000000002F11E0 "i\n@"
 *   insn=0x00000000002F11E0 string=0x00000000002F11E4 "!"
 *   insn=0x00000000002F11E8 string=0x00000000002F11EC "h\n@"
 *   insn=0x00000000002F11E8 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002F11F8 string=0x00000000002F11FC ""
 *   insn=0x00000000002F1200 string=0x00000000002F1204 "9"
 *   insn=0x00000000002F1210 string=0x00000000002F1214 "i"
 *   insn=0x00000000002F1218 string=0x00000000002F121C "5yv"
 *   insn=0x00000000002F121C string=0x00000000002F1220 "_"
 *   insn=0x00000000002F1228 string=0x00000000002F122C "J"
 *   insn=0x00000000002F122C string=0x00000000002F1230 "I"
 *   insn=0x00000000002F1248 string=0x00000000002F125C ""
 *   insn=0x00000000002F1268 string=0x00000000002F126C ""
 *   insn=0x00000000002F1268 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F1270 string=0x00000000002F1274 ""
 *   insn=0x00000000002F1288 string=0x00000000002F128C "I"
 *   insn=0x00000000002F1298 string=0x00000000002F129C "="
 *   insn=0x00000000002F129C string=0x00000000002F12A0 "h\n"
 *   insn=0x00000000002F129C string=0x00000000001F4390 "P'"
 *   insn=0x00000000002F12A8 string=0x00000000002F12AC "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  int v5; // w8
  int v6; // w26
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
        v7 = operator new(0x58u);
        *(_QWORD *)v7 = off_6C6F10;
        *(_QWORD *)(v7 + 24) = v7 + 48;
        *(_QWORD *)(v7 + 32) = 0;
        *(_DWORD *)(v7 + 40) = 4;
        *(_DWORD *)(v7 + 8) = 0;
        *(_QWORD *)(v7 + 16) = &Caver::Proto::QuestText::_default_quest_name_;
        *(_DWORD *)(v7 + 80) = 0;
        v8 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v6 + 1;
        *(_QWORD *)(v8 + 8LL * v6) = v7;
      }
      else
      {
        *((_DWORD *)a1 + 2) = v6 + 1;
      }
      Caver::Proto::QuestText::MergeFrom();
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

