/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D534C
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10Font_GlyphEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph> const&)
 *
 * Callers: 1
 *   0x00000000001FCD90  google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph> const&)
 *
 * Callees: 3
 *   0x00000000001F5560  Caver::Proto::Font_Glyph::MergeFrom(Caver::Proto::Font_Glyph const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 19
 *   insn=0x00000000002D5368 string=0x00000000002D536C "i\n@"
 *   insn=0x00000000002D536C string=0x00000000002D5370 "!"
 *   insn=0x00000000002D5370 string=0x00000000002D5374 "k"
 *   insn=0x00000000002D5374 string=0x00000000002D5378 "h\n@"
 *   insn=0x00000000002D5374 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D537C string=0x00000000002D5380 "K"
 *   insn=0x00000000002D5384 string=0x00000000002D5388 ""
 *   insn=0x00000000002D5390 string=0x00000000002D5394 "i"
 *   insn=0x00000000002D5398 string=0x00000000002D539C "5yv"
 *   insn=0x00000000002D53A8 string=0x00000000002D53AC "\n"
 *   insn=0x00000000002D53AC string=0x00000000002D53B0 "\t"
 *   insn=0x00000000002D53C8 string=0x00000000002D53DC ""
 *   insn=0x00000000002D53D0 string=0x00000000002D53D4 "S"
 *   insn=0x00000000002D53E4 string=0x00000000002D53E8 "~"
 *   insn=0x00000000002D53E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D5400 string=0x00000000002D5404 "\t"
 *   insn=0x00000000002D5410 string=0x00000000002D5414 "S"
 *   insn=0x00000000002D5414 string=0x00000000002D5418 "h\n"
 *   insn=0x00000000002D5414 string=0x00000000001F5560 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  int v5; // w8
  int v6; // w24
  const Caver::Proto::Font_Glyph *v7; // x21
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
      v7 = *(const Caver::Proto::Font_Glyph **)(*(_QWORD *)a2 + 8 * v4);
      if ( v6 >= v5 )
      {
        if ( v5 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v5 + 1);
          v6 = *((_DWORD *)a1 + 2);
          v5 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v5 + 1;
        v9 = operator new(0x30u);
        *(_QWORD *)(v9 + 32) = 0;
        *(_DWORD *)(v9 + 40) = 0;
        *(_DWORD *)(v9 + 24) = 0;
        *(_QWORD *)(v9 + 8) = 0;
        *(_QWORD *)(v9 + 16) = 0;
        *(_QWORD *)v9 = off_6C5EB8;
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
      Caver::Proto::Font_Glyph::MergeFrom((Caver::Proto::Font_Glyph *)v9, v7);
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

