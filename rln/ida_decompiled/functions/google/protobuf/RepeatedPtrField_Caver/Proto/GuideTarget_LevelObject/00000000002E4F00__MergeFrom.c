/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E4F00
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto23GuideTarget_LevelObjectEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject> const&)
 *
 * Callers: 1
 *   0x00000000001FD4C0  google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F9840  Caver::Proto::GuideTarget_LevelObject::MergeFrom(Caver::Proto::GuideTarget_LevelObject const&)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 23
 *   insn=0x00000000002E4F20 string=0x00000000002E4F24 "i\n@"
 *   insn=0x00000000002E4F24 string=0x00000000002E4F28 "!"
 *   insn=0x00000000002E4F28 string=0x00000000002E4F2C "}W"
 *   insn=0x00000000002E4F2C string=0x00000000002E4F30 "h\n@"
 *   insn=0x00000000002E4F2C string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E4F34 string=0x00000000002E4F38 "+"
 *   insn=0x00000000002E4F38 string=0x00000000002E4F3C " "
 *   insn=0x00000000002E4F3C string=0x00000000002E4F40 ""
 *   insn=0x00000000002E4F40 string=0x00000000002E4F44 "\t "
 *   insn=0x00000000002E4F44 string=0x00000000002E4F48 ")"
 *   insn=0x00000000002E4F50 string=0x00000000002E4F54 " "
 *   insn=0x00000000002E4F54 string=0x00000000002E4F58 ""
 *   insn=0x00000000002E4F58 string=0x00000000002E4F5C " "
 *   insn=0x00000000002E4F64 string=0x00000000002E4F68 "i"
 *   insn=0x00000000002E4F6C string=0x00000000002E4F70 "5yv"
 *   insn=0x00000000002E4F7C string=0x00000000002E4F80 "\n"
 *   insn=0x00000000002E4F80 string=0x00000000002E4F84 "\t"
 *   insn=0x00000000002E4F9C string=0x00000000002E4FB0 ""
 *   insn=0x00000000002E4FA4 string=0x00000000002E4FA8 "^W"
 *   insn=0x00000000002E4FBC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E4FD4 string=0x00000000002E4FD8 "\t"
 *   insn=0x00000000002E4FE8 string=0x00000000002E4FEC "h\n"
 *   insn=0x00000000002E4FE8 string=0x00000000001F9840 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  __int128 v5; // q0
  int v6; // w8
  int v7; // w24
  const Caver::Proto::GuideTarget_LevelObject *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x8
  __int128 v12; // [xsp+0h] [xbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    v4 = 0;
    *(_QWORD *)&v5 = &Caver::Proto::GuideTarget_LevelObject::_default_level_name_;
    *((_QWORD *)&v5 + 1) = &Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_;
    v12 = v5;
    do
    {
      v7 = *((_DWORD *)a1 + 2);
      v6 = *((_DWORD *)a1 + 3);
      v8 = *(const Caver::Proto::GuideTarget_LevelObject **)(*(_QWORD *)a2 + 8 * v4);
      if ( v7 >= v6 )
      {
        if ( v6 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v6 + 1);
          v7 = *((_DWORD *)a1 + 2);
          v6 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v6 + 1;
        v10 = operator new(0x28u);
        *(_QWORD *)v10 = off_6C69D0;
        *(_DWORD *)(v10 + 8) = 0;
        *(_DWORD *)(v10 + 32) = 0;
        *(_OWORD *)(v10 + 16) = v12;
        v11 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v7 + 1;
        *(_QWORD *)(v11 + 8LL * v7) = v10;
      }
      else
      {
        v9 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v7 + 1;
        v10 = *(_QWORD *)(v9 + 8LL * v7);
      }
      Caver::Proto::GuideTarget_LevelObject::MergeFrom((Caver::Proto::GuideTarget_LevelObject *)v10, v8);
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

