/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E7BF8
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto5SkillEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Skill> const&)
 *
 * Callers: 1
 *   0x00000000001F63A0  google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Skill> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FDD50  Caver::Proto::Skill::MergeFrom(Caver::Proto::Skill const&)
 *
 * Referenced strings: 23
 *   insn=0x00000000002E7C1C string=0x00000000002E7C20 "i\n@"
 *   insn=0x00000000002E7C20 string=0x00000000002E7C24 "!"
 *   insn=0x00000000002E7C24 string=0x00000000002E7C28 ">L"
 *   insn=0x00000000002E7C28 string=0x00000000002E7C2C "h\n@"
 *   insn=0x00000000002E7C28 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E7C3C string=0x00000000002E7C40 ""
 *   insn=0x00000000002E7C40 string=0x00000000002E7C44 ")"
 *   insn=0x00000000002E7C44 string=0x00000000002E7C48 "\n "
 *   insn=0x00000000002E7C48 string=0x00000000002E7C4C "J"
 *   insn=0x00000000002E7C50 string=0x00000000002E7C54 " "
 *   insn=0x00000000002E7C58 string=0x00000000002E7C5C "@"
 *   insn=0x00000000002E7C68 string=0x00000000002E7C6C "i"
 *   insn=0x00000000002E7C70 string=0x00000000002E7C74 "5yv"
 *   insn=0x00000000002E7C74 string=0x00000000002E7C78 "?"
 *   insn=0x00000000002E7C80 string=0x00000000002E7C84 "*"
 *   insn=0x00000000002E7C84 string=0x00000000002E7C88 ")"
 *   insn=0x00000000002E7CA0 string=0x00000000002E7CB4 ""
 *   insn=0x00000000002E7CBC string=0x00000000002E7CC0 "H6"
 *   insn=0x00000000002E7CC0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E7CDC string=0x00000000002E7CE0 ")"
 *   insn=0x00000000002E7CF0 string=0x00000000002E7CF4 "h\n"
 *   insn=0x00000000002E7CF0 string=0x00000000001FDD50 "0'"
 *   insn=0x00000000002E7CFC string=0x00000000002E7D00 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int128 v4; // q0
  __int64 v5; // x22
  int v6; // w8
  int v7; // w25
  const Caver::Proto::Skill *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x8
  __int128 v12; // [xsp+0h] [xbp-50h]

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    *(_QWORD *)&v4 = &Caver::Proto::Skill::_default_name_;
    v5 = 0;
    *((_QWORD *)&v4 + 1) = &Caver::Proto::Skill::_default_title_;
    v12 = v4;
    do
    {
      v7 = *((_DWORD *)a1 + 2);
      v6 = *((_DWORD *)a1 + 3);
      v8 = *(const Caver::Proto::Skill **)(*(_QWORD *)a2 + 8 * v5);
      if ( v7 >= v6 )
      {
        if ( v6 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v6 + 1);
          v7 = *((_DWORD *)a1 + 2);
          v6 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v6 + 1;
        v10 = operator new(0x38u);
        *(_QWORD *)v10 = off_6C6868;
        *(_DWORD *)(v10 + 8) = 0;
        *(_QWORD *)(v10 + 40) = 0;
        *(_QWORD *)(v10 + 48) = 0;
        *(_OWORD *)(v10 + 16) = v12;
        *(_QWORD *)(v10 + 32) = &Caver::Proto::Skill::_default_description_;
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
      Caver::Proto::Skill::MergeFrom((Caver::Proto::Skill *)v10, v8);
      ++v5;
    }
    while ( v5 < *(int *)(a2 + 8) );
  }
}

