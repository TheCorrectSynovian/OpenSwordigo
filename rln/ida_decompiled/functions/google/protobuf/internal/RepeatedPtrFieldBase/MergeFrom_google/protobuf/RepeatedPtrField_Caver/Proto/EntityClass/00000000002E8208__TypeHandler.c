/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8208
 * Mangled: _ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINS0_16RepeatedPtrFieldIN5Caver5Proto11EntityClassEE11TypeHandlerEEEvRKS2_
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::EntityClass>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callers: 1
 *   0x00000000001FFF20  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::EntityClass>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FC700  Caver::Proto::EntityClass::MergeFrom(Caver::Proto::EntityClass const&)
 *
 * Referenced strings: 21
 *   insn=0x00000000002E822C string=0x00000000002E8230 "i\n@"
 *   insn=0x00000000002E8230 string=0x00000000002E8234 "!"
 *   insn=0x00000000002E8238 string=0x00000000002E823C "h\n@"
 *   insn=0x00000000002E8238 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E824C string=0x00000000002E8250 ""
 *   insn=0x00000000002E8250 string=0x00000000002E8254 ")F"
 *   insn=0x00000000002E8258 string=0x00000000002E825C "J}C"
 *   insn=0x00000000002E8260 string=0x00000000002E8264 " "
 *   insn=0x00000000002E826C string=0x00000000002E8270 "@"
 *   insn=0x00000000002E8270 string=0x00000000002E8274 "8 "
 *   insn=0x00000000002E8278 string=0x00000000002E827C "i"
 *   insn=0x00000000002E8280 string=0x00000000002E8284 "5yv"
 *   insn=0x00000000002E8284 string=0x00000000002E8288 "?"
 *   insn=0x00000000002E8290 string=0x00000000002E8294 "*"
 *   insn=0x00000000002E8294 string=0x00000000002E8298 ")"
 *   insn=0x00000000002E82B0 string=0x00000000002E82C4 ""
 *   insn=0x00000000002E82D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E82EC string=0x00000000002E82F0 ")"
 *   insn=0x00000000002E8300 string=0x00000000002E8304 "h\n"
 *   insn=0x00000000002E8300 string=0x00000000001FC700 "0'"
 *   insn=0x00000000002E830C string=0x00000000002E8310 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::EntityClass>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int128 v4; // q0
  __int64 v5; // x22
  int v6; // w8
  int v7; // w25
  const Caver::Proto::EntityClass *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x8
  __int128 v12; // [xsp+0h] [xbp-50h]

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    *(_QWORD *)&v4 = &Caver::Proto::EntityClass::_default_name_;
    v5 = 0;
    *((_QWORD *)&v4 + 1) = &Caver::Proto::EntityClass::_default_title_;
    v12 = v4;
    do
    {
      v7 = *((_DWORD *)a1 + 2);
      v6 = *((_DWORD *)a1 + 3);
      v8 = *(const Caver::Proto::EntityClass **)(*(_QWORD *)a2 + 8 * v5);
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
        *(_QWORD *)v10 = off_6C6958;
        *(_DWORD *)(v10 + 8) = 0;
        *(_QWORD *)(v10 + 32) = 16843008;
        *(_OWORD *)(v10 + 16) = v12;
        *(_QWORD *)(v10 + 40) = 0;
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
      Caver::Proto::EntityClass::MergeFrom((Caver::Proto::EntityClass *)v10, v8);
      ++v5;
    }
    while ( v5 < *(int *)(a2 + 8) );
  }
}

