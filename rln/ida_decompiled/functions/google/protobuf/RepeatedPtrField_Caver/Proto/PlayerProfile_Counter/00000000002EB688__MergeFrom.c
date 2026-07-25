/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EB688
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto21PlayerProfile_CounterEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter> const&)
 *
 * Callers: 1
 *   0x00000000001F6160  google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x0000000000200D40  Caver::Proto::PlayerProfile_Counter::MergeFrom(Caver::Proto::PlayerProfile_Counter const&)
 *
 * Referenced strings: 16
 *   insn=0x00000000002EB6A8 string=0x00000000002EB6AC "i\n@"
 *   insn=0x00000000002EB6AC string=0x00000000002EB6B0 "!"
 *   insn=0x00000000002EB6B4 string=0x00000000002EB6B8 "h\n@"
 *   insn=0x00000000002EB6B4 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002EB6BC string=0x00000000002EB6C0 "K"
 *   insn=0x00000000002EB6C4 string=0x00000000002EB6C8 ""
 *   insn=0x00000000002EB6D8 string=0x00000000002EB6DC "i"
 *   insn=0x00000000002EB6E0 string=0x00000000002EB6E4 "5yv"
 *   insn=0x00000000002EB6E4 string=0x00000000002EB6E8 "?"
 *   insn=0x00000000002EB6F0 string=0x00000000002EB6F4 "*"
 *   insn=0x00000000002EB6F4 string=0x00000000002EB6F8 ")"
 *   insn=0x00000000002EB710 string=0x00000000002EB724 ""
 *   insn=0x00000000002EB730 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002EB740 string=0x00000000002EB744 ")"
 *   insn=0x00000000002EB750 string=0x00000000002EB754 "{U"
 *   insn=0x00000000002EB754 string=0x00000000002EB758 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter>::MergeFrom(
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
        *(_QWORD *)v7 = off_6C6D30;
        *(_DWORD *)(v7 + 8) = 0;
        *(_QWORD *)(v7 + 16) = &Caver::Proto::PlayerProfile_Counter::_default_name_;
        *(_QWORD *)(v7 + 24) = 0;
        v8 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v6 + 1;
        *(_QWORD *)(v8 + 8LL * v6) = v7;
      }
      else
      {
        *((_DWORD *)a1 + 2) = v6 + 1;
      }
      Caver::Proto::PlayerProfile_Counter::MergeFrom();
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

