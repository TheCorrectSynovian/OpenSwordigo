/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8330
 * Mangled: _ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINS0_16RepeatedPtrFieldIN5Caver5Proto11GuideTargetEE11TypeHandlerEEEvRKS2_
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callers: 1
 *   0x00000000001F6C20  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F95F0  Caver::Proto::GuideTarget::MergeFrom(Caver::Proto::GuideTarget const&)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 31
 *   insn=0x00000000002E8358 string=0x00000000002E835C "i\n@"
 *   insn=0x00000000002E835C string=0x00000000002E8360 "!"
 *   insn=0x00000000002E8360 string=0x00000000002E8364 "oJ"
 *   insn=0x00000000002E8364 string=0x00000000002E8368 "h\n@"
 *   insn=0x00000000002E8364 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E836C string=0x00000000002E8370 ""
 *   insn=0x00000000002E8380 string=0x00000000002E8384 "EF"
 *   insn=0x00000000002E8384 string=0x00000000002E8388 ")"
 *   insn=0x00000000002E8388 string=0x00000000002E838C "J"
 *   insn=0x00000000002E838C string=0x00000000002E8390 "k"
 *   insn=0x00000000002E8398 string=0x00000000002E839C " "
 *   insn=0x00000000002E839C string=0x00000000002E83A0 "a"
 *   insn=0x00000000002E83A4 string=0x00000000002E83A8 ""
 *   insn=0x00000000002E83B0 string=0x00000000002E83B4 "@"
 *   insn=0x00000000002E83BC string=0x00000000002E83C0 "i"
 *   insn=0x00000000002E83C4 string=0x00000000002E83C8 "5yv"
 *   insn=0x00000000002E83C8 string=0x00000000002E83CC "?"
 *   insn=0x00000000002E83D4 string=0x00000000002E83D8 "*"
 *   insn=0x00000000002E83D8 string=0x00000000002E83DC ")"
 *   insn=0x00000000002E83F4 string=0x00000000002E8408 ""
 *   insn=0x00000000002E83FC string=0x00000000002E8400 "HJ"
 *   insn=0x00000000002E8410 string=0x00000000002E8414 "s4"
 *   insn=0x00000000002E8414 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E8418 string=0x00000000002E841C "@"
 *   insn=0x00000000002E8420 string=0x00000000002E8424 " "
 *   insn=0x00000000002E8430 string=0x00000000002E8434 ""
 *   insn=0x00000000002E843C string=0x00000000002E8440 ""
 *   insn=0x00000000002E8448 string=0x00000000002E844C ")"
 *   insn=0x00000000002E8458 string=0x00000000002E845C "eD"
 *   insn=0x00000000002E845C string=0x00000000002E8460 "h\n"
 *   insn=0x00000000002E845C string=0x00000000001F95F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int128 v4; // q0
  __int128 v5; // q1
  __int64 v6; // x22
  int v7; // w8
  int v8; // w25
  __int64 v9; // x0
  __int64 v10; // x8
  __int128 v11; // [xsp+0h] [xbp-60h]
  __int128 v12; // [xsp+10h] [xbp-50h]

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    *(_QWORD *)&v4 = &Caver::Proto::GuideTarget::_default_name_;
    *(_QWORD *)&v5 = &Caver::Proto::GuideTarget::_default_object_identifier_;
    v6 = 0;
    *((_QWORD *)&v4 + 1) = &Caver::Proto::GuideTarget::_default_level_name_;
    *((_QWORD *)&v5 + 1) = &Caver::Proto::GuideTarget::_default_carry_object_identifier_;
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
        v9 = operator new(0x78u);
        *(_QWORD *)v9 = off_6C6A48;
        *(_QWORD *)(v9 + 64) = 0;
        *(_OWORD *)(v9 + 16) = v12;
        *(_DWORD *)(v9 + 72) = 4;
        *(_QWORD *)(v9 + 8) = 0;
        *(_BYTE *)(v9 + 48) = 0;
        *(_OWORD *)(v9 + 32) = v11;
        *(_QWORD *)(v9 + 56) = v9 + 80;
        *(_DWORD *)(v9 + 112) = 0;
        v10 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v8 + 1;
        *(_QWORD *)(v10 + 8LL * v8) = v9;
      }
      else
      {
        *((_DWORD *)a1 + 2) = v8 + 1;
      }
      Caver::Proto::GuideTarget::MergeFrom();
      ++v6;
    }
    while ( v6 < *(int *)(a2 + 8) );
  }
}

