/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033DCBC
 * Mangled: _ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINS0_16RepeatedPtrFieldIN5Caver5Proto4MeshEE11TypeHandlerEEEvRKS2_
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callers: 1
 *   0x00000000001F88C0  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FA9D0  Caver::Proto::Mesh::MergeFrom(Caver::Proto::Mesh const&)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 26
 *   insn=0x000000000033DCE4 string=0x000000000033DCE8 "i\n@"
 *   insn=0x000000000033DCE8 string=0x000000000033DCEC "!"
 *   insn=0x000000000033DCF0 string=0x000000000033DCF4 "h\n@"
 *   insn=0x000000000033DCF0 string=0x00000000001FAD20 "0'"
 *   insn=0x000000000033DCFC string=0x000000000033DD00 "H"
 *   insn=0x000000000033DD00 string=0x000000000033DD04 ""
 *   insn=0x000000000033DD04 string=0x000000000033DD08 "I"
 *   insn=0x000000000033DD08 string=0x000000000033DD0C ")qE"
 *   insn=0x000000000033DD14 string=0x000000000033DD18 "H"
 *   insn=0x000000000033DD18 string=0x000000000033DD1C "%F"
 *   insn=0x000000000033DD1C string=0x000000000033DD20 " "
 *   insn=0x000000000033DD20 string=0x000000000033DD24 ""
 *   insn=0x000000000033DD30 string=0x000000000033DD34 "i"
 *   insn=0x000000000033DD38 string=0x000000000033DD3C "5yv"
 *   insn=0x000000000033DD3C string=0x000000000033DD40 "?"
 *   insn=0x000000000033DD48 string=0x000000000033DD4C "*"
 *   insn=0x000000000033DD4C string=0x000000000033DD50 ")"
 *   insn=0x000000000033DD68 string=0x000000000033DD7C ""
 *   insn=0x000000000033DD88 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033DD8C string=0x000000000033DD90 " "
 *   insn=0x000000000033DD94 string=0x000000000033DD98 ""
 *   insn=0x000000000033DD9C string=0x000000000033DDA0 ""
 *   insn=0x000000000033DDC4 string=0x000000000033DDC8 ")"
 *   insn=0x000000000033DDD8 string=0x000000000033DDDC "h\n"
 *   insn=0x000000000033DDD8 string=0x00000000001FA9D0 "0'"
 *   insn=0x000000000033DDE4 string=0x000000000033DDE8 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  __int128 v5; // q0
  int v6; // w8
  int v7; // w25
  const Caver::Proto::Mesh *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x8
  __int128 v12; // [xsp+0h] [xbp-50h]

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    v4 = 0;
    *(_QWORD *)&v5 = &Caver::Proto::Mesh::_default_vertex_data_;
    *((_QWORD *)&v5 + 1) = &Caver::Proto::Mesh::_default_index_data_;
    v12 = v5;
    do
    {
      v7 = *((_DWORD *)a1 + 2);
      v6 = *((_DWORD *)a1 + 3);
      v8 = *(const Caver::Proto::Mesh **)(*(_QWORD *)a2 + 8 * v4);
      if ( v7 >= v6 )
      {
        if ( v6 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v6 + 1);
          v7 = *((_DWORD *)a1 + 2);
          v6 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v6 + 1;
        v10 = operator new(0xA8u);
        *(_QWORD *)v10 = off_6C9D38;
        *(_QWORD *)(v10 + 56) = 0;
        *(_DWORD *)(v10 + 64) = 4;
        *(_QWORD *)(v10 + 8) = 0;
        *(_DWORD *)(v10 + 16) = 0;
        *(_QWORD *)(v10 + 24) = 0;
        *(_QWORD *)(v10 + 32) = 0;
        *(_QWORD *)(v10 + 128) = 0;
        *(_QWORD *)(v10 + 136) = 0;
        *(_QWORD *)(v10 + 112) = 0;
        *(_QWORD *)(v10 + 120) = 0;
        *(_QWORD *)(v10 + 104) = 0;
        *(_OWORD *)(v10 + 144) = v12;
        *(_QWORD *)(v10 + 40) = 0;
        *(_QWORD *)(v10 + 48) = v10 + 72;
        *(_DWORD *)(v10 + 160) = 0;
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
      Caver::Proto::Mesh::MergeFrom((Caver::Proto::Mesh *)v10, v8);
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

