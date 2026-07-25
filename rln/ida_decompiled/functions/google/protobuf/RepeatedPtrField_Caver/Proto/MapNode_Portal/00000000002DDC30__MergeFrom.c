/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DDC30
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto14MapNode_PortalEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal> const&)
 *
 * Callers: 1
 *   0x0000000000202150  google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x0000000000200DC0  Caver::Proto::MapNode_Portal::MergeFrom(Caver::Proto::MapNode_Portal const&)
 *
 * Referenced strings: 23
 *   insn=0x00000000002DDC54 string=0x00000000002DDC58 "i\n@"
 *   insn=0x00000000002DDC58 string=0x00000000002DDC5C "!"
 *   insn=0x00000000002DDC5C string=0x00000000002DDC60 "0t"
 *   insn=0x00000000002DDC60 string=0x00000000002DDC64 "h\n@"
 *   insn=0x00000000002DDC60 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002DDC6C string=0x00000000002DDC70 "h"
 *   insn=0x00000000002DDC70 string=0x00000000002DDC74 ""
 *   insn=0x00000000002DDC74 string=0x00000000002DDC78 "H "
 *   insn=0x00000000002DDC78 string=0x00000000002DDC7C "aD"
 *   insn=0x00000000002DDC7C string=0x00000000002DDC80 "X "
 *   insn=0x00000000002DDC8C string=0x00000000002DDC90 "i"
 *   insn=0x00000000002DDC94 string=0x00000000002DDC98 "5yv"
 *   insn=0x00000000002DDC98 string=0x00000000002DDC9C "?"
 *   insn=0x00000000002DDCA4 string=0x00000000002DDCA8 "*"
 *   insn=0x00000000002DDCA8 string=0x00000000002DDCAC ")"
 *   insn=0x00000000002DDCC4 string=0x00000000002DDCD8 ""
 *   insn=0x00000000002DDCE0 string=0x00000000002DDCE4 "?^"
 *   insn=0x00000000002DDCE4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DDCF0 string=0x00000000002DDCF4 ""
 *   insn=0x00000000002DDD00 string=0x00000000002DDD04 ")"
 *   insn=0x00000000002DDD10 string=0x00000000002DDD14 "+"
 *   insn=0x00000000002DDD14 string=0x00000000002DDD18 "h\n"
 *   insn=0x00000000002DDD20 string=0x00000000002DDD24 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom(
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
        v7 = operator new(0x28u);
        *(_QWORD *)v7 = off_6C6610;
        *(_DWORD *)(v7 + 8) = 0;
        *(_QWORD *)(v7 + 16) = &Caver::Proto::MapNode_Portal::_default_destination_name_;
        *(_QWORD *)(v7 + 24) = 1;
        *(_BYTE *)(v7 + 32) = 0;
        *(_DWORD *)(v7 + 36) = 0;
        v8 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v6 + 1;
        *(_QWORD *)(v8 + 8LL * v6) = v7;
      }
      else
      {
        *((_DWORD *)a1 + 2) = v6 + 1;
      }
      Caver::Proto::MapNode_Portal::MergeFrom();
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

