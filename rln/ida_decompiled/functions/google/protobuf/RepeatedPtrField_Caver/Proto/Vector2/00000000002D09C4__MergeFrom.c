/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D09C4
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto7Vector2EE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Vector2> const&)
 *
 * Callers: 1
 *   0x00000000002032A0  google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Vector2> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *
 * Referenced strings: 13
 *   insn=0x00000000002D09E0 string=0x00000000002D09E4 "i\n@"
 *   insn=0x00000000002D09E4 string=0x00000000002D09E8 "!"
 *   insn=0x00000000002D09EC string=0x00000000002D09F0 "h\n@"
 *   insn=0x00000000002D09EC string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D09FC string=0x00000000002D0A00 ""
 *   insn=0x00000000002D0A08 string=0x00000000002D0A0C "i"
 *   insn=0x00000000002D0A10 string=0x00000000002D0A14 "5yv"
 *   insn=0x00000000002D0A20 string=0x00000000002D0A24 "\n"
 *   insn=0x00000000002D0A24 string=0x00000000002D0A28 "\t"
 *   insn=0x00000000002D0A40 string=0x00000000002D0A54 ""
 *   insn=0x00000000002D0A60 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D0A6C string=0x00000000002D0A70 "\t"
 *   insn=0x00000000002D0A80 string=0x00000000002D0A84 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  int v5; // w8
  int v6; // w24
  const Caver::Proto::Vector2 *v7; // x21
  __int64 v8; // x8
  Caver::Proto::Vector2 *v9; // x0
  __int64 v10; // x8

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    v4 = 0;
    do
    {
      v6 = *((_DWORD *)a1 + 2);
      v5 = *((_DWORD *)a1 + 3);
      v7 = *(const Caver::Proto::Vector2 **)(*(_QWORD *)a2 + 8 * v4);
      if ( v6 >= v5 )
      {
        if ( v5 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v5 + 1);
          v6 = *((_DWORD *)a1 + 2);
          v5 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v5 + 1;
        v9 = (Caver::Proto::Vector2 *)operator new(0x18u);
        *((_QWORD *)v9 + 1) = 0;
        *((_QWORD *)v9 + 2) = 0;
        *(_QWORD *)v9 = off_6C5A08;
        v10 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v6 + 1;
        *(_QWORD *)(v10 + 8LL * v6) = v9;
      }
      else
      {
        v8 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v6 + 1;
        v9 = *(Caver::Proto::Vector2 **)(v8 + 8LL * v6);
      }
      Caver::Proto::Vector2::MergeFrom(v9, v7);
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

