/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F0FA8
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10LevelStateEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::LevelState> const&)
 *
 * Callers: 1
 *   0x0000000000201960  google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::LevelState> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB0C0  Caver::Proto::LevelState::MergeFrom(Caver::Proto::LevelState const&)
 *
 * Referenced strings: 21
 *   insn=0x00000000002F0FCC string=0x00000000002F0FD0 "i\n@"
 *   insn=0x00000000002F0FD0 string=0x00000000002F0FD4 "!"
 *   insn=0x00000000002F0FD4 string=0x00000000002F0FD8 "R'"
 *   insn=0x00000000002F0FD8 string=0x00000000002F0FDC "h\n@"
 *   insn=0x00000000002F0FD8 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002F0FE8 string=0x00000000002F0FEC "1E"
 *   insn=0x00000000002F1000 string=0x00000000002F1004 "i"
 *   insn=0x00000000002F1008 string=0x00000000002F100C "5yv"
 *   insn=0x00000000002F100C string=0x00000000002F1010 "?"
 *   insn=0x00000000002F1018 string=0x00000000002F101C "*"
 *   insn=0x00000000002F101C string=0x00000000002F1020 ")"
 *   insn=0x00000000002F1038 string=0x00000000002F104C ""
 *   insn=0x00000000002F1040 string=0x00000000002F1044 "7'"
 *   insn=0x00000000002F1054 string=0x00000000002F1058 "b"
 *   insn=0x00000000002F1058 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F106C string=0x00000000002F1070 ""
 *   insn=0x00000000002F1078 string=0x00000000002F107C ")"
 *   insn=0x00000000002F1088 string=0x00000000002F108C "("
 *   insn=0x00000000002F108C string=0x00000000002F1090 "h\n"
 *   insn=0x00000000002F108C string=0x00000000001FB0C0 "0'"
 *   insn=0x00000000002F1098 string=0x00000000002F109C "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  int v5; // w8
  int v6; // w25
  const Caver::Proto::LevelState *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x8

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    v4 = 0;
    do
    {
      v6 = *((_DWORD *)a1 + 2);
      v5 = *((_DWORD *)a1 + 3);
      v7 = *(const Caver::Proto::LevelState **)(*(_QWORD *)a2 + 8 * v4);
      if ( v6 >= v5 )
      {
        if ( v5 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v5 + 1);
          v6 = *((_DWORD *)a1 + 2);
          v5 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v5 + 1;
        v9 = operator new(0x38u);
        *(_QWORD *)v9 = off_6C7000;
        *(_DWORD *)(v9 + 8) = 0;
        *(_QWORD *)(v9 + 16) = &Caver::Proto::LevelState::_default_level_name_;
        *(_BYTE *)(v9 + 24) = 0;
        *(_QWORD *)(v9 + 32) = 0;
        *(_QWORD *)(v9 + 40) = 0xFFFFFFFFLL;
        *(_DWORD *)(v9 + 48) = 0;
        v10 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v6 + 1;
        *(_QWORD *)(v10 + 8LL * v6) = v9;
      }
      else
      {
        v8 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v6 + 1;
        v9 = *(_QWORD *)(v8 + 8LL * v6);
      }
      Caver::Proto::LevelState::MergeFrom((Caver::Proto::LevelState *)v9, v7);
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

