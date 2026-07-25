/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E80CC
 * Mangled: _ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINS0_16RepeatedPtrFieldIN5Caver5Proto7MapZoneEE11TypeHandlerEEEvRKS2_
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callers: 1
 *   0x00000000001FC4C0  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callees: 3
 *   0x00000000001F5320  Caver::Proto::MapZone::MergeFrom(Caver::Proto::MapZone const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 25
 *   insn=0x00000000002E80F0 string=0x00000000002E80F4 "i\n@"
 *   insn=0x00000000002E80F4 string=0x00000000002E80F8 "!"
 *   insn=0x00000000002E80F8 string=0x00000000002E80FC "\tK"
 *   insn=0x00000000002E80FC string=0x00000000002E8100 "h\n@"
 *   insn=0x00000000002E80FC string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E8104 string=0x00000000002E8108 "+"
 *   insn=0x00000000002E8110 string=0x00000000002E8114 "5A"
 *   insn=0x00000000002E8114 string=0x00000000002E8118 ")"
 *   insn=0x00000000002E811C string=0x00000000002E8120 "J"
 *   insn=0x00000000002E8124 string=0x00000000002E8128 " "
 *   insn=0x00000000002E812C string=0x00000000002E8130 "@"
 *   insn=0x00000000002E8134 string=0x00000000002E8138 "9"
 *   insn=0x00000000002E8140 string=0x00000000002E8144 "i"
 *   insn=0x00000000002E8148 string=0x00000000002E814C "5yv"
 *   insn=0x00000000002E814C string=0x00000000002E8150 "_"
 *   insn=0x00000000002E8158 string=0x00000000002E815C "J"
 *   insn=0x00000000002E815C string=0x00000000002E8160 "I"
 *   insn=0x00000000002E8178 string=0x00000000002E818C ""
 *   insn=0x00000000002E8198 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E819C string=0x00000000002E81A0 ""
 *   insn=0x00000000002E81A4 string=0x00000000002E81A8 "|"
 *   insn=0x00000000002E81C4 string=0x00000000002E81C8 "I"
 *   insn=0x00000000002E81D4 string=0x00000000002E81D8 "R4"
 *   insn=0x00000000002E81D8 string=0x00000000002E81DC "h\n"
 *   insn=0x00000000002E81D8 string=0x00000000001F5320 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int128 v4; // q0
  __int64 v5; // x22
  int v6; // w8
  int v7; // w26
  __int64 v8; // x0
  __int64 v9; // x8
  __int128 v10; // [xsp+0h] [xbp-50h]

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    *(_QWORD *)&v4 = &Caver::Proto::MapZone::_default_name_;
    v5 = 0;
    *((_QWORD *)&v4 + 1) = &Caver::Proto::MapZone::_default_title_;
    v10 = v4;
    do
    {
      v7 = *((_DWORD *)a1 + 2);
      v6 = *((_DWORD *)a1 + 3);
      if ( v7 >= v6 )
      {
        if ( v6 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v6 + 1);
          v7 = *((_DWORD *)a1 + 2);
          v6 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v6 + 1;
        v8 = operator new(0x70u);
        *(_QWORD *)v8 = off_6C6700;
        *(_QWORD *)(v8 + 32) = v8 + 56;
        *(_QWORD *)(v8 + 40) = 0;
        *(_DWORD *)(v8 + 48) = 4;
        *(_DWORD *)(v8 + 8) = 0;
        *(_OWORD *)(v8 + 16) = v10;
        *(_DWORD *)(v8 + 88) = 0;
        *(_QWORD *)(v8 + 96) = &Caver::Proto::MapZone::_default_music_;
        *(_DWORD *)(v8 + 104) = 0;
        v9 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v7 + 1;
        *(_QWORD *)(v9 + 8LL * v7) = v8;
      }
      else
      {
        *((_DWORD *)a1 + 2) = v7 + 1;
      }
      Caver::Proto::MapZone::MergeFrom();
      ++v5;
    }
    while ( v5 < *(int *)(a2 + 8) );
  }
}

