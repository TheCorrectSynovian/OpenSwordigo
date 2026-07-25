/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031D6E0
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite27ReadPackedPrimitiveNoInlineIfLNS2_9FieldTypeE2EEEbPNS0_2io16CodedInputStreamEPNS0_13RepeatedFieldIT_EE
 * Demangled: google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<float> *)
 *
 * Callers: 2
 *   0x00000000001F7F60  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<float> *)
 *   0x000000000031D0F4  Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 9
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F67E0  google::protobuf::io::CodedInputStream::BytesUntilLimit(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x0000000000201760  .memcpy
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 29
 *   insn=0x000000000031D6FC string=0x000000000031D700 "W"
 *   insn=0x000000000031D710 string=0x000000000031D714 "h"
 *   insn=0x000000000031D71C string=0x000000000031D720 "\t"
 *   insn=0x000000000031D724 string=0x000000000031D728 "!"
 *   insn=0x000000000031D728 string=0x000000000031D72C ""
 *   insn=0x000000000031D730 string=0x000000000031D734 "h"
 *   insn=0x000000000031D740 string=0x000000000031D744 "Cn"
 *   insn=0x000000000031D744 string=0x00000000001F9050 "0'"
 *   insn=0x000000000031D75C string=0x000000000031D760 " d"
 *   insn=0x000000000031D760 string=0x00000000001F67E0 "0'"
 *   insn=0x000000000031D764 string=0x000000000031D768 "K"
 *   insn=0x000000000031D77C string=0x000000000031D780 " "
 *   insn=0x000000000031D77C string=0x00000000001FA750 "0'"
 *   insn=0x000000000031D790 string=0x000000000031D794 "h"
 *   insn=0x000000000031D794 string=0x000000000031D798 "i{"
 *   insn=0x000000000031D798 string=0x000000000031D79C "?"
 *   insn=0x000000000031D79C string=0x000000000031D7A0 "("
 *   insn=0x000000000031D7A0 string=0x000000000031D7A4 "\t}@"
 *   insn=0x000000000031D7A8 string=0x000000000031D7AC ")}"
 *   insn=0x000000000031D7B0 string=0x000000000031D7B4 "}~"
 *   insn=0x000000000031D7BC string=0x000000000031D7C0 "|"
 *   insn=0x000000000031D7C0 string=0x000000000031D7C4 "kk"
 *   insn=0x000000000031D7C4 string=0x00000000001F8570 "0'"
 *   insn=0x000000000031D7E8 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000031D7F0 string=0x000000000031D7F4 "i"
 *   insn=0x000000000031D808 string=0x000000000031D80C "L"
 *   insn=0x000000000031D814 string=0x000000000031D818 "~"
 *   insn=0x000000000031D830 string=0x000000000031D834 "!"
 *   insn=0x000000000031D858 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(
        google::protobuf::io::CodedInputStream *this,
        __int64 a2)
{
  char *v4; // x8
  int v5; // w1
  int v6; // w21
  int v7; // w27
  unsigned int v8; // w26
  int v9; // w8
  _DWORD *v10; // x22
  __int64 v11; // x9
  __int64 v12; // x8
  unsigned __int64 v13; // x0
  void *v14; // x0
  _DWORD *v15; // x8
  int v17; // [xsp+0h] [xbp-60h] BYREF
  unsigned int v18; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v19; // [xsp+8h] [xbp-58h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)v4 >= *((_QWORD *)this + 2) || *v4 < 0 )
  {
    if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, (unsigned int *)&v17) & 1) == 0 )
      return 0;
    v5 = v17;
  }
  else
  {
    v5 = (unsigned __int8)*v4;
    v17 = v5;
    *((_QWORD *)this + 1) = v4 + 1;
  }
  v6 = google::protobuf::io::CodedInputStream::PushLimit(this, v5);
  if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(this) < 1 )
  {
LABEL_19:
    google::protobuf::io::CodedInputStream::PopLimit(this, v6);
    return 1;
  }
  while ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(this, &v18) & 1) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    v8 = v18;
    if ( v7 == *(_DWORD *)(a2 + 12) )
    {
      if ( 2 * v7 < v7 + 1 )
        v9 = v7 + 1;
      else
        v9 = 2 * v7;
      v10 = *(_DWORD **)a2;
      v11 = ((unsigned __int64)v9 * (unsigned __int128)4uLL) >> 64;
      *(_DWORD *)(a2 + 12) = v9;
      v12 = 4LL * v9;
      if ( v11 )
        v13 = -1;
      else
        v13 = v12;
      v14 = (void *)operator new[](v13);
      *(_QWORD *)a2 = v14;
      memcpy(v14, v10, 4LL * v7);
      if ( v10 != (_DWORD *)(a2 + 16) )
      {
        if ( v10 )
        {
          operator delete[](v10);
          v7 = *(_DWORD *)(a2 + 8);
        }
      }
    }
    v15 = *(_DWORD **)a2;
    *(_DWORD *)(a2 + 8) = v7 + 1;
    v15[v7] = v8;
    if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(this) <= 0 )
      goto LABEL_19;
  }
  return 0;
}

