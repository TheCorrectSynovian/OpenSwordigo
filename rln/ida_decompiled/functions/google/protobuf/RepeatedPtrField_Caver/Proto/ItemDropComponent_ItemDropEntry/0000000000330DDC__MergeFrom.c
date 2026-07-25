/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330DDC
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto31ItemDropComponent_ItemDropEntryEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry> const&)
 *
 * Callers: 1
 *   0x00000000001F8D60  google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FE410  Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *
 * Referenced strings: 18
 *   insn=0x0000000000330DFC string=0x0000000000330E00 "i\n@"
 *   insn=0x0000000000330E00 string=0x0000000000330E04 "!"
 *   insn=0x0000000000330E08 string=0x0000000000330E0C "h\n@"
 *   insn=0x0000000000330E08 string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000330E10 string=0x0000000000330E14 "+"
 *   insn=0x0000000000330E18 string=0x0000000000330E1C ""
 *   insn=0x0000000000330E20 string=0x0000000000330E24 ")B"
 *   insn=0x0000000000330E30 string=0x0000000000330E34 ""
 *   insn=0x0000000000330E34 string=0x0000000000330E38 " "
 *   insn=0x0000000000330E40 string=0x0000000000330E44 "i"
 *   insn=0x0000000000330E48 string=0x0000000000330E4C "5yv"
 *   insn=0x0000000000330E58 string=0x0000000000330E5C "\n"
 *   insn=0x0000000000330E5C string=0x0000000000330E60 "\t"
 *   insn=0x0000000000330E78 string=0x0000000000330E8C ""
 *   insn=0x0000000000330E98 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000330EB0 string=0x0000000000330EB4 "\t"
 *   insn=0x0000000000330EC0 string=0x0000000000330EC4 "S5"
 *   insn=0x0000000000330EC4 string=0x0000000000330EC8 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  __int128 v5; // q0
  int v6; // w8
  int v7; // w24
  const Caver::Proto::ItemDropComponent_ItemDropEntry *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x8
  __int128 v12; // [xsp+0h] [xbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    v4 = 0;
    *(_QWORD *)&v5 = &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_template_name_;
    *((_QWORD *)&v5 + 1) = &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_item_identifier_;
    v12 = v5;
    do
    {
      v7 = *((_DWORD *)a1 + 2);
      v6 = *((_DWORD *)a1 + 3);
      v8 = *(const Caver::Proto::ItemDropComponent_ItemDropEntry **)(*(_QWORD *)a2 + 8 * v4);
      if ( v7 >= v6 )
      {
        if ( v6 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v6 + 1);
          v7 = *((_DWORD *)a1 + 2);
          v6 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v6 + 1;
        v10 = operator new(0x30u);
        *(_QWORD *)v10 = off_6C9540;
        *(_DWORD *)(v10 + 8) = 0;
        *(_QWORD *)(v10 + 32) = 0;
        *(_QWORD *)(v10 + 40) = 0;
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
      Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom((Caver::Proto::ItemDropComponent_ItemDropEntry *)v10, v8);
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

