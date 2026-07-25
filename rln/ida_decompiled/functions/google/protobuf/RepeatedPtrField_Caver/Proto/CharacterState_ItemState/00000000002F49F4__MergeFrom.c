/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F49F4
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto24CharacterState_ItemStateEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState> const&)
 *
 * Callers: 1
 *   0x00000000001F3D10  google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FFA60  Caver::Proto::CharacterState_ItemState::MergeFrom(Caver::Proto::CharacterState_ItemState const&)
 *
 * Referenced strings: 16
 *   insn=0x00000000002F4A18 string=0x00000000002F4A1C "i\n@"
 *   insn=0x00000000002F4A1C string=0x00000000002F4A20 "!"
 *   insn=0x00000000002F4A24 string=0x00000000002F4A28 "h\n@"
 *   insn=0x00000000002F4A24 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002F4A34 string=0x00000000002F4A38 ""
 *   insn=0x00000000002F4A3C string=0x00000000002F4A40 ""
 *   insn=0x00000000002F4A50 string=0x00000000002F4A54 "i"
 *   insn=0x00000000002F4A58 string=0x00000000002F4A5C "5yv"
 *   insn=0x00000000002F4A5C string=0x00000000002F4A60 "?"
 *   insn=0x00000000002F4A68 string=0x00000000002F4A6C "*"
 *   insn=0x00000000002F4A6C string=0x00000000002F4A70 ")"
 *   insn=0x00000000002F4A88 string=0x00000000002F4A9C ""
 *   insn=0x00000000002F4AA8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F4AB4 string=0x00000000002F4AB8 ""
 *   insn=0x00000000002F4ABC string=0x00000000002F4AC0 ")"
 *   insn=0x00000000002F4AD0 string=0x00000000002F4AD4 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  int v5; // w8
  int v6; // w25
  const Caver::Proto::CharacterState_ItemState *v7; // x21
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
      v7 = *(const Caver::Proto::CharacterState_ItemState **)(*(_QWORD *)a2 + 8 * v4);
      if ( v6 >= v5 )
      {
        if ( v5 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v5 + 1);
          v6 = *((_DWORD *)a1 + 2);
          v5 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v5 + 1;
        v9 = operator new(0x20u);
        *(_QWORD *)v9 = off_6C7078;
        *(_DWORD *)(v9 + 8) = 0;
        *(_QWORD *)(v9 + 16) = &Caver::Proto::CharacterState_ItemState::_default_name_;
        *(_QWORD *)(v9 + 24) = 1;
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
      Caver::Proto::CharacterState_ItemState::MergeFrom((Caver::Proto::CharacterState_ItemState *)v9, v7);
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

