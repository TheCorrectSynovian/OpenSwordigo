/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E7AA8
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto4ItemEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Item> const&)
 *
 * Callers: 1
 *   0x00000000001F56E0  google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Item> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FA290  Caver::Proto::Item::MergeFrom(Caver::Proto::Item const&)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 27
 *   insn=0x00000000002E7ACC string=0x00000000002E7AD0 "i\n@"
 *   insn=0x00000000002E7AD0 string=0x00000000002E7AD4 "!"
 *   insn=0x00000000002E7AD8 string=0x00000000002E7ADC "h\n@"
 *   insn=0x00000000002E7AD8 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E7AE4 string=0x00000000002E7AE8 " "
 *   insn=0x00000000002E7AE8 string=0x00000000002E7AEC "}A"
 *   insn=0x00000000002E7AF0 string=0x00000000002E7AF4 "JED"
 *   insn=0x00000000002E7AF8 string=0x00000000002E7AFC "k"
 *   insn=0x00000000002E7B04 string=0x00000000002E7B08 ""
 *   insn=0x00000000002E7B08 string=0x00000000002E7B0C "@"
 *   insn=0x00000000002E7B0C string=0x00000000002E7B10 "`"
 *   insn=0x00000000002E7B18 string=0x00000000002E7B1C " "
 *   insn=0x00000000002E7B1C string=0x00000000002E7B20 "\t"
 *   insn=0x00000000002E7B20 string=0x00000000002E7B24 "\tG"
 *   insn=0x00000000002E7B24 string=0x00000000002E7B28 "(1E"
 *   insn=0x00000000002E7B34 string=0x00000000002E7B38 "i"
 *   insn=0x00000000002E7B3C string=0x00000000002E7B40 "5yv"
 *   insn=0x00000000002E7B4C string=0x00000000002E7B50 "\n"
 *   insn=0x00000000002E7B50 string=0x00000000002E7B54 "\t"
 *   insn=0x00000000002E7B6C string=0x00000000002E7B80 ""
 *   insn=0x00000000002E7B74 string=0x00000000002E7B78 "jL"
 *   insn=0x00000000002E7B8C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E7B94 string=0x00000000002E7B98 ""
 *   insn=0x00000000002E7BAC string=0x00000000002E7BB0 "\t"
 *   insn=0x00000000002E7BC8 string=0x00000000002E7BCC "h\n"
 *   insn=0x00000000002E7BC8 string=0x00000000001FA290 "0'"
 *   insn=0x00000000002E7BD4 string=0x00000000002E7BD8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int128 v4; // q0
  __int64 v5; // x22
  int v6; // w8
  int v7; // w24
  __int64 v8; // x0
  __int64 v9; // x8
  __int128 v10; // [xsp+0h] [xbp-60h]
  __int128 v11; // [xsp+10h] [xbp-50h]

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    *(_QWORD *)&v4 = &Caver::Proto::Item::_default_name_;
    *((_QWORD *)&v4 + 1) = &Caver::Proto::Item::_default_title_;
    v11 = v4;
    *(_QWORD *)&v4 = &Caver::Proto::Item::_default_short_description_;
    v5 = 0;
    *((_QWORD *)&v4 + 1) = &Caver::Proto::Item::_default_description_;
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
        v8 = operator new(0x48u);
        *(_QWORD *)v8 = off_6C67F0;
        *(_QWORD *)(v8 + 8) = 0x100000000LL;
        *(_BYTE *)(v8 + 48) = 0;
        *(_OWORD *)(v8 + 16) = v11;
        *(_QWORD *)(v8 + 60) = 0;
        *(_QWORD *)(v8 + 52) = 0;
        *(_OWORD *)(v8 + 32) = v10;
        v9 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v7 + 1;
        *(_QWORD *)(v9 + 8LL * v7) = v8;
      }
      else
      {
        *((_DWORD *)a1 + 2) = v7 + 1;
      }
      Caver::Proto::Item::MergeFrom();
      ++v5;
    }
    while ( v5 < *(int *)(a2 + 8) );
  }
}

