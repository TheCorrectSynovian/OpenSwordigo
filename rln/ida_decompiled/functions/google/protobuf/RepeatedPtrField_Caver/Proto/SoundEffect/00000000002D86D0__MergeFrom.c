/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D86D0
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto11SoundEffectEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect> const&)
 *
 * Callers: 1
 *   0x00000000001F4300  google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect> const&)
 *
 * Callees: 3
 *   0x00000000001F4670  Caver::Proto::SoundEffect::MergeFrom(Caver::Proto::SoundEffect const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 24
 *   insn=0x00000000002D86F4 string=0x00000000002D86F8 "i\n@"
 *   insn=0x00000000002D86F8 string=0x00000000002D86FC "!"
 *   insn=0x00000000002D8700 string=0x00000000002D8704 "h\n@"
 *   insn=0x00000000002D8700 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D870C string=0x00000000002D8710 "h "
 *   insn=0x00000000002D8710 string=0x00000000002D8714 ""
 *   insn=0x00000000002D8714 string=0x00000000002D8718 "i "
 *   insn=0x00000000002D8718 string=0x00000000002D871C ")"
 *   insn=0x00000000002D8724 string=0x00000000002D8728 "h "
 *   insn=0x00000000002D8728 string=0x00000000002D872C "uC"
 *   insn=0x00000000002D872C string=0x00000000002D8730 "H"
 *   insn=0x00000000002D8730 string=0x00000000002D8734 " "
 *   insn=0x00000000002D8740 string=0x00000000002D8744 "i"
 *   insn=0x00000000002D8748 string=0x00000000002D874C "5yv"
 *   insn=0x00000000002D8758 string=0x00000000002D875C "\n"
 *   insn=0x00000000002D875C string=0x00000000002D8760 "\t"
 *   insn=0x00000000002D8778 string=0x00000000002D878C ""
 *   insn=0x00000000002D8780 string=0x00000000002D8784 "g"
 *   insn=0x00000000002D8798 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D87A4 string=0x00000000002D87A8 ""
 *   insn=0x00000000002D87B4 string=0x00000000002D87B8 "\t"
 *   insn=0x00000000002D87C8 string=0x00000000002D87CC "h\n"
 *   insn=0x00000000002D87C8 string=0x00000000001F4670 "P'"
 *   insn=0x00000000002D87D4 string=0x00000000002D87D8 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int128 v4; // q0
  __int64 v5; // x22
  int v6; // w8
  int v7; // w24
  const Caver::Proto::SoundEffect *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x8
  __int128 v12; // [xsp+0h] [xbp-50h]

  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    *(_QWORD *)&v4 = &Caver::Proto::SoundEffect::_default_name_;
    v5 = 0;
    *((_QWORD *)&v4 + 1) = &Caver::Proto::SoundEffect::_default_resource_name_;
    v12 = v4;
    do
    {
      v7 = *((_DWORD *)a1 + 2);
      v6 = *((_DWORD *)a1 + 3);
      v8 = *(const Caver::Proto::SoundEffect **)(*(_QWORD *)a2 + 8 * v5);
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
        *(_QWORD *)v10 = off_6C6110;
        *(_DWORD *)(v10 + 8) = 0;
        *(_QWORD *)(v10 + 32) = 0x3DCCCCCD3F800000LL;
        *(_OWORD *)(v10 + 16) = v12;
        *(_DWORD *)(v10 + 40) = 0;
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
      Caver::Proto::SoundEffect::MergeFrom((Caver::Proto::SoundEffect *)v10, v8);
      ++v5;
    }
    while ( v5 < *(int *)(a2 + 8) );
  }
}

