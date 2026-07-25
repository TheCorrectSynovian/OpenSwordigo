/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D33EC
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto18Texture_SubtextureEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture> const&)
 *
 * Callers: 1
 *   0x00000000001FEBC0  google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F77D0  Caver::Proto::Texture_Subtexture::MergeFrom(Caver::Proto::Texture_Subtexture const&)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 18
 *   insn=0x00000000002D340C string=0x00000000002D3410 "i\n@"
 *   insn=0x00000000002D3410 string=0x00000000002D3414 "!"
 *   insn=0x00000000002D3414 string=0x00000000002D3418 "B"
 *   insn=0x00000000002D3418 string=0x00000000002D341C "h\n@"
 *   insn=0x00000000002D3418 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D3428 string=0x00000000002D342C "1D"
 *   insn=0x00000000002D3440 string=0x00000000002D3444 "i"
 *   insn=0x00000000002D3448 string=0x00000000002D344C "5yv"
 *   insn=0x00000000002D344C string=0x00000000002D3450 "_"
 *   insn=0x00000000002D3458 string=0x00000000002D345C "J"
 *   insn=0x00000000002D345C string=0x00000000002D3460 "I"
 *   insn=0x00000000002D3478 string=0x00000000002D348C ""
 *   insn=0x00000000002D3480 string=0x00000000002D3484 "'"
 *   insn=0x00000000002D3494 string=0x00000000002D3498 "R"
 *   insn=0x00000000002D3498 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D34AC string=0x00000000002D34B0 "I"
 *   insn=0x00000000002D34C0 string=0x00000000002D34C4 "h\n"
 *   insn=0x00000000002D34C0 string=0x00000000001F77D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  int v5; // w8
  int v6; // w26
  const Caver::Proto::Texture_Subtexture *v7; // x21
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
      v7 = *(const Caver::Proto::Texture_Subtexture **)(*(_QWORD *)a2 + 8 * v4);
      if ( v6 >= v5 )
      {
        if ( v5 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v5 + 1);
          v6 = *((_DWORD *)a1 + 2);
          v5 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v5 + 1;
        v9 = operator new(0x28u);
        *(_QWORD *)v9 = off_6C5D50;
        *(_DWORD *)(v9 + 8) = 0;
        *(_QWORD *)(v9 + 16) = &Caver::Proto::Texture_Subtexture::_default_name_;
        *(_QWORD *)(v9 + 24) = 0;
        *(_QWORD *)(v9 + 32) = 1065353216;
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
      Caver::Proto::Texture_Subtexture::MergeFrom((Caver::Proto::Texture_Subtexture *)v9, v7);
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

