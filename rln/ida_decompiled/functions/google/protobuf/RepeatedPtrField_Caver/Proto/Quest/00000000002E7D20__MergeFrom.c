/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E7D20
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto5QuestEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Quest> const&)
 *
 * Callers: 1
 *   0x0000000000200340  google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Quest> const&)
 *
 * Callees: 3
 *   0x00000000001F3A30  Caver::Proto::Quest::MergeFrom(Caver::Proto::Quest const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 22
 *   insn=0x00000000002E7D40 string=0x00000000002E7D44 "i\n@"
 *   insn=0x00000000002E7D44 string=0x00000000002E7D48 "!"
 *   insn=0x00000000002E7D4C string=0x00000000002E7D50 "h\n@"
 *   insn=0x00000000002E7D4C string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E7D54 string=0x00000000002E7D58 "+"
 *   insn=0x00000000002E7D68 string=0x00000000002E7D6C ""
 *   insn=0x00000000002E7D6C string=0x00000000002E7D70 ")"
 *   insn=0x00000000002E7D70 string=0x00000000002E7D74 "J"
 *   insn=0x00000000002E7D74 string=0x00000000002E7D78 "k"
 *   insn=0x00000000002E7D80 string=0x00000000002E7D84 " "
 *   insn=0x00000000002E7D84 string=0x00000000002E7D88 "a"
 *   insn=0x00000000002E7D90 string=0x00000000002E7D94 "@"
 *   insn=0x00000000002E7D9C string=0x00000000002E7DA0 "i"
 *   insn=0x00000000002E7DA4 string=0x00000000002E7DA8 "5yv"
 *   insn=0x00000000002E7DB4 string=0x00000000002E7DB8 "\n"
 *   insn=0x00000000002E7DB8 string=0x00000000002E7DBC "\t"
 *   insn=0x00000000002E7DD4 string=0x00000000002E7DE8 ""
 *   insn=0x00000000002E7DF4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E7E0C string=0x00000000002E7E10 "\t"
 *   insn=0x00000000002E7E28 string=0x00000000002E7E2C "h\n"
 *   insn=0x00000000002E7E28 string=0x00000000001F3A30 "P'"
 *   insn=0x00000000002E7E34 string=0x00000000002E7E38 "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int128 v4; // q0
  __int128 v5; // q1
  __int64 v6; // x22
  int v7; // w8
  int v8; // w24
  __int64 v9; // x0
  __int64 v10; // x8
  __int128 v11; // [xsp+0h] [xbp-50h]
  __int128 v12; // [xsp+10h] [xbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    *(_QWORD *)&v4 = &Caver::Proto::Quest::_default_name_;
    *(_QWORD *)&v5 = &Caver::Proto::Quest::_default_follow_up_quest_;
    v6 = 0;
    *((_QWORD *)&v4 + 1) = &Caver::Proto::Quest::_default_title_;
    *((_QWORD *)&v5 + 1) = &Caver::Proto::Quest::_default_map_location_;
    v11 = v5;
    v12 = v4;
    do
    {
      v8 = *((_DWORD *)a1 + 2);
      v7 = *((_DWORD *)a1 + 3);
      if ( v8 >= v7 )
      {
        if ( v7 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v7 + 1);
          v8 = *((_DWORD *)a1 + 2);
          v7 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v7 + 1;
        v9 = operator new(0x38u);
        *(_QWORD *)v9 = off_6C68E0;
        *(_DWORD *)(v9 + 8) = 0;
        *(_DWORD *)(v9 + 48) = 0;
        *(_OWORD *)(v9 + 16) = v12;
        *(_OWORD *)(v9 + 32) = v11;
        v10 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v8 + 1;
        *(_QWORD *)(v10 + 8LL * v8) = v9;
      }
      else
      {
        *((_DWORD *)a1 + 2) = v8 + 1;
      }
      Caver::Proto::Quest::MergeFrom();
      ++v6;
    }
    while ( v6 < *(int *)(a2 + 8) );
  }
}

