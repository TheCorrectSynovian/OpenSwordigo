/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9B7C
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10MusicTrackEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack> const&)
 *
 * Callers: 1
 *   0x00000000001FAA40  google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x0000000000202670  Caver::Proto::MusicTrack::MergeFrom(Caver::Proto::MusicTrack const&)
 *
 * Referenced strings: 20
 *   insn=0x00000000002D9B9C string=0x00000000002D9BA0 "i\n@"
 *   insn=0x00000000002D9BA0 string=0x00000000002D9BA4 "!"
 *   insn=0x00000000002D9BA4 string=0x00000000002D9BA8 "^"
 *   insn=0x00000000002D9BA8 string=0x00000000002D9BAC "h\n@"
 *   insn=0x00000000002D9BA8 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D9BB0 string=0x00000000002D9BB4 "k"
 *   insn=0x00000000002D9BB4 string=0x00000000002D9BB8 "h "
 *   insn=0x00000000002D9BB8 string=0x00000000002D9BBC "}B"
 *   insn=0x00000000002D9BBC string=0x00000000002D9BC0 "w "
 *   insn=0x00000000002D9BD0 string=0x00000000002D9BD4 "i"
 *   insn=0x00000000002D9BD8 string=0x00000000002D9BDC "5yv"
 *   insn=0x00000000002D9BDC string=0x00000000002D9BE0 "_"
 *   insn=0x00000000002D9BE8 string=0x00000000002D9BEC "J"
 *   insn=0x00000000002D9BEC string=0x00000000002D9BF0 "I"
 *   insn=0x00000000002D9C08 string=0x00000000002D9C1C ""
 *   insn=0x00000000002D9C10 string=0x00000000002D9C14 "C"
 *   insn=0x00000000002D9C24 string=0x00000000002D9C28 "nn"
 *   insn=0x00000000002D9C28 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D9C38 string=0x00000000002D9C3C "I"
 *   insn=0x00000000002D9C4C string=0x00000000002D9C50 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom(
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
        v7 = operator new(0x20u);
        *(_QWORD *)v7 = off_6C6200;
        *(_DWORD *)(v7 + 8) = 0;
        *(_QWORD *)(v7 + 16) = &Caver::Proto::MusicTrack::_default_resource_name_;
        *(_QWORD *)(v7 + 24) = 1065353216;
        v8 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v6 + 1;
        *(_QWORD *)(v8 + 8LL * v6) = v7;
      }
      else
      {
        *((_DWORD *)a1 + 2) = v6 + 1;
      }
      Caver::Proto::MusicTrack::MergeFrom();
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

