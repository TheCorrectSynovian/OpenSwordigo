/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FDE24
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto14ObjectTemplateEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate> const&)
 *
 * Callers: 1
 *   0x00000000001F6DB0  google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FC7D0  Caver::Proto::ObjectTemplate::MergeFrom(Caver::Proto::ObjectTemplate const&)
 *
 * Referenced strings: 18
 *   insn=0x00000000002FDE44 string=0x00000000002FDE48 "i\n@"
 *   insn=0x00000000002FDE48 string=0x00000000002FDE4C "!"
 *   insn=0x00000000002FDE50 string=0x00000000002FDE54 "h\n@"
 *   insn=0x00000000002FDE50 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002FDE58 string=0x00000000002FDE5C "+"
 *   insn=0x00000000002FDE5C string=0x00000000002FDE60 "H"
 *   insn=0x00000000002FDE60 string=0x00000000002FDE64 "AG"
 *   insn=0x00000000002FDE70 string=0x00000000002FDE74 "i"
 *   insn=0x00000000002FDE78 string=0x00000000002FDE7C "5yv"
 *   insn=0x00000000002FDE7C string=0x00000000002FDE80 "?"
 *   insn=0x00000000002FDE88 string=0x00000000002FDE8C "*"
 *   insn=0x00000000002FDE8C string=0x00000000002FDE90 ")"
 *   insn=0x00000000002FDEA8 string=0x00000000002FDEBC ""
 *   insn=0x00000000002FDEC8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FDED8 string=0x00000000002FDEDC ")"
 *   insn=0x00000000002FDEE8 string=0x00000000002FDEEC "9"
 *   insn=0x00000000002FDEEC string=0x00000000002FDEF0 "h\n"
 *   insn=0x00000000002FDEEC string=0x00000000001FC7D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  int v5; // w8
  int v6; // w25
  const Caver::Proto::ObjectTemplate *v7; // x21
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
      v7 = *(const Caver::Proto::ObjectTemplate **)(*(_QWORD *)a2 + 8 * v4);
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
        *(_QWORD *)v9 = off_6C7308;
        *(_DWORD *)(v9 + 8) = 0;
        *(_QWORD *)(v9 + 16) = 0;
        *(_QWORD *)(v9 + 24) = 1065353216;
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
      Caver::Proto::ObjectTemplate::MergeFrom((Caver::Proto::ObjectTemplate *)v9, v7);
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

