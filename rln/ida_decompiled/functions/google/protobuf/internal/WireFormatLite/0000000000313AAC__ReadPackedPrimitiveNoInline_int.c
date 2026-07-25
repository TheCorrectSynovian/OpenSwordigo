/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000313AAC
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite27ReadPackedPrimitiveNoInlineIiLNS2_9FieldTypeE5EEEbPNS0_2io16CodedInputStreamEPNS0_13RepeatedFieldIT_EE
 * Demangled: google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *
 * Callers: 1
 *   0x0000000000202A10  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F67E0  google::protobuf::io::CodedInputStream::BytesUntilLimit(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x0000000000201760  .memcpy
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 32
 *   insn=0x0000000000313AC8 string=0x0000000000313ACC "W"
 *   insn=0x0000000000313ADC string=0x0000000000313AE0 "h"
 *   insn=0x0000000000313AE8 string=0x0000000000313AEC "\t"
 *   insn=0x0000000000313AF0 string=0x0000000000313AF4 "!"
 *   insn=0x0000000000313AF4 string=0x0000000000313AF8 ""
 *   insn=0x0000000000313AFC string=0x0000000000313B00 "h"
 *   insn=0x0000000000313B0C string=0x0000000000313B10 "P"
 *   insn=0x0000000000313B10 string=0x0000000000313B14 " "
 *   insn=0x0000000000313B10 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000313B28 string=0x0000000000313B2C "-"
 *   insn=0x0000000000313B2C string=0x00000000001F67E0 "0'"
 *   insn=0x0000000000313B3C string=0x0000000000313B40 "h"
 *   insn=0x0000000000313B48 string=0x0000000000313B4C "\t"
 *   insn=0x0000000000313B50 string=0x0000000000313B54 ":"
 *   insn=0x0000000000313B54 string=0x0000000000313B58 ""
 *   insn=0x0000000000313B5C string=0x0000000000313B60 "h"
 *   insn=0x0000000000313B6C string=0x0000000000313B70 "8"
 *   insn=0x0000000000313B70 string=0x0000000000313B74 " "
 *   insn=0x0000000000313B84 string=0x0000000000313B88 "h"
 *   insn=0x0000000000313B88 string=0x0000000000313B8C "i{"
 *   insn=0x0000000000313B8C string=0x0000000000313B90 "?"
 *   insn=0x0000000000313B90 string=0x0000000000313B94 "("
 *   insn=0x0000000000313B94 string=0x0000000000313B98 "\t}@"
 *   insn=0x0000000000313B9C string=0x0000000000313BA0 ")}"
 *   insn=0x0000000000313BA4 string=0x0000000000313BA8 "}~"
 *   insn=0x0000000000313BB0 string=0x0000000000313BB4 "|"
 *   insn=0x0000000000313BB4 string=0x0000000000313BB8 "n"
 *   insn=0x0000000000313BB8 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000313BDC string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000313BE4 string=0x0000000000313BE8 "i"
 *   insn=0x0000000000313C24 string=0x0000000000313C28 "!"
 *   insn=0x0000000000313C4C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
        google::protobuf::io::CodedInputStream *this,
        __int64 a2)
{
  char *v4; // x8
  int v5; // w1
  int v6; // w21
  char *v7; // x8
  unsigned int v8; // w26
  int v9; // w27
  int v10; // w8
  _DWORD *v11; // x22
  __int64 v12; // x9
  __int64 v13; // x8
  unsigned __int64 v14; // x0
  void *v15; // x0
  _DWORD *v16; // x8
  int v18; // [xsp+0h] [xbp-60h] BYREF
  unsigned int v19; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v20; // [xsp+8h] [xbp-58h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)v4 >= *((_QWORD *)this + 2) || *v4 < 0 )
  {
    if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, (unsigned int *)&v18) & 1) == 0 )
      return 0;
    v5 = v18;
  }
  else
  {
    v5 = (unsigned __int8)*v4;
    v18 = v5;
    *((_QWORD *)this + 1) = v4 + 1;
  }
  v6 = google::protobuf::io::CodedInputStream::PushLimit(this, v5);
  if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(this) >= 1 )
  {
    do
    {
      v7 = (char *)*((_QWORD *)this + 1);
      if ( (unsigned __int64)v7 >= *((_QWORD *)this + 2) || *v7 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, &v19) & 1) == 0 )
          return 0;
        v8 = v19;
      }
      else
      {
        v8 = (unsigned __int8)*v7;
        v19 = v8;
        *((_QWORD *)this + 1) = v7 + 1;
      }
      v9 = *(_DWORD *)(a2 + 8);
      if ( v9 == *(_DWORD *)(a2 + 12) )
      {
        if ( 2 * v9 < v9 + 1 )
          v10 = v9 + 1;
        else
          v10 = 2 * v9;
        v11 = *(_DWORD **)a2;
        v12 = ((unsigned __int64)v10 * (unsigned __int128)4uLL) >> 64;
        *(_DWORD *)(a2 + 12) = v10;
        v13 = 4LL * v10;
        if ( v12 )
          v14 = -1;
        else
          v14 = v13;
        v15 = (void *)operator new[](v14);
        *(_QWORD *)a2 = v15;
        memcpy(v15, v11, 4LL * v9);
        if ( v11 != (_DWORD *)(a2 + 16) )
        {
          if ( v11 )
          {
            operator delete[](v11);
            v9 = *(_DWORD *)(a2 + 8);
          }
        }
      }
      v16 = *(_DWORD **)a2;
      *(_DWORD *)(a2 + 8) = v9 + 1;
      v16[v9] = v8;
    }
    while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(this) > 0 );
  }
  google::protobuf::io::CodedInputStream::PopLimit(this, v6);
  return 1;
}

