/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F08C
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto15ParticleEmitterEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter> const&)
 *
 * Callers: 1
 *   0x00000000001F3740  google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FE980  Caver::Proto::ParticleEmitter::MergeFrom(Caver::Proto::ParticleEmitter const&)
 *
 * Referenced strings: 21
 *   insn=0x000000000031F0AC string=0x000000000031F0B0 "i\n@"
 *   insn=0x000000000031F0B0 string=0x000000000031F0B4 "!"
 *   insn=0x000000000031F0B8 string=0x000000000031F0BC "h\n@"
 *   insn=0x000000000031F0B8 string=0x00000000001FAD20 "0'"
 *   insn=0x000000000031F0C4 string=0x000000000031F0C8 "h"
 *   insn=0x000000000031F0C8 string=0x000000000031F0CC "9B"
 *   insn=0x000000000031F0CC string=0x000000000031F0D0 "("
 *   insn=0x000000000031F0D0 string=0x000000000031F0D4 "=A"
 *   insn=0x000000000031F0DC string=0x000000000031F0E0 "i"
 *   insn=0x000000000031F0E4 string=0x000000000031F0E8 "5yv"
 *   insn=0x000000000031F0F4 string=0x000000000031F0F8 "\n"
 *   insn=0x000000000031F0F8 string=0x000000000031F0FC "\t"
 *   insn=0x000000000031F114 string=0x000000000031F128 ""
 *   insn=0x000000000031F130 string=0x000000000031F134 "+Y"
 *   insn=0x000000000031F134 string=0x000000000031F138 ""
 *   insn=0x000000000031F134 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031F138 string=0x000000000031F13C ""
 *   insn=0x000000000031F14C string=0x000000000031F150 ""
 *   insn=0x000000000031F158 string=0x000000000031F15C "\t"
 *   insn=0x000000000031F16C string=0x000000000031F170 "h\n"
 *   insn=0x000000000031F178 string=0x000000000031F17C "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  int v5; // w8
  int v6; // w24
  const Caver::Proto::ParticleEmitter *v7; // x21
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
      v7 = *(const Caver::Proto::ParticleEmitter **)(*(_QWORD *)a2 + 8 * v4);
      if ( v6 >= v5 )
      {
        if ( v5 == *((_DWORD *)a1 + 4) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a1, v5 + 1);
          v6 = *((_DWORD *)a1 + 2);
          v5 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v5 + 1;
        v9 = operator new(0x58u);
        *(_QWORD *)(v9 + 56) = 0x400000000LL;
        *(_DWORD *)(v9 + 80) = 0;
        *(_DWORD *)(v9 + 40) = 0;
        *(_QWORD *)(v9 + 24) = 0;
        *(_QWORD *)(v9 + 32) = 0;
        *(_QWORD *)(v9 + 8) = 0;
        *(_QWORD *)(v9 + 16) = 0;
        *(_QWORD *)(v9 + 48) = v9 + 64;
        *(_QWORD *)v9 = off_6C8730;
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
      Caver::Proto::ParticleEmitter::MergeFrom((Caver::Proto::ParticleEmitter *)v9, v7);
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

