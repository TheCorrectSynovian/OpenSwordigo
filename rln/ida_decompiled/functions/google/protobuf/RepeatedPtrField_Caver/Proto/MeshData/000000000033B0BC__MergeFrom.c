/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B0BC
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto8MeshDataEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MeshData> const&)
 *
 * Callers: 1
 *   0x00000000001FBA00  google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MeshData> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000002015D0  Caver::Proto::MeshData::MergeFrom(Caver::Proto::MeshData const&)
 *
 * Referenced strings: 18
 *   insn=0x000000000033B0DC string=0x000000000033B0E0 "i\n@"
 *   insn=0x000000000033B0E0 string=0x000000000033B0E4 "!"
 *   insn=0x000000000033B0E8 string=0x000000000033B0EC "h\n@"
 *   insn=0x000000000033B0E8 string=0x00000000001FAD20 "0'"
 *   insn=0x000000000033B0F0 string=0x000000000033B0F4 "K"
 *   insn=0x000000000033B0F4 string=0x000000000033B0F8 "h"
 *   insn=0x000000000033B0F8 string=0x000000000033B0FC "1E"
 *   insn=0x000000000033B0FC string=0x000000000033B100 "h"
 *   insn=0x000000000033B100 string=0x000000000033B104 ""
 *   insn=0x000000000033B10C string=0x000000000033B110 "i"
 *   insn=0x000000000033B114 string=0x000000000033B118 "5yv"
 *   insn=0x000000000033B124 string=0x000000000033B128 "\n"
 *   insn=0x000000000033B128 string=0x000000000033B12C "\t"
 *   insn=0x000000000033B144 string=0x000000000033B158 ""
 *   insn=0x000000000033B164 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033B168 string=0x000000000033B16C ""
 *   insn=0x000000000033B174 string=0x000000000033B178 "\t"
 *   insn=0x000000000033B188 string=0x000000000033B18C "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  __int64 v4; // x22
  int v5; // w8
  int v6; // w24
  _QWORD *v7; // x0
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
        v7 = (_QWORD *)operator new(0x20u);
        *v7 = off_6C9C48;
        v7[1] = 0x100000000LL;
        v7[2] = 0;
        v7[3] = 0;
        v8 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v6 + 1;
        *(_QWORD *)(v8 + 8LL * v6) = v7;
      }
      else
      {
        *((_DWORD *)a1 + 2) = v6 + 1;
      }
      Caver::Proto::MeshData::MergeFrom();
      ++v4;
    }
    while ( v4 < *(int *)(a2 + 8) );
  }
}

