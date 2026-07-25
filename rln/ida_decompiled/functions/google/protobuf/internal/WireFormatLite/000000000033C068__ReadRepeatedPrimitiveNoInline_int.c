/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033C068
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite29ReadRepeatedPrimitiveNoInlineIiLNS2_9FieldTypeE15EEEbijPNS0_2io16CodedInputStreamEPNS0_13RepeatedFieldIT_EE
 * Demangled: google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(int,uint,google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *
 * Callers: 1
 *   0x00000000001FAD40  google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(int,uint,google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8840  google::protobuf::io::CodedInputStream::Skip(int)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 44
 *   insn=0x000000000033C084 string=0x000000000033C088 "X"
 *   insn=0x000000000033C088 string=0x000000000033C08C ""
 *   insn=0x000000000033C0AC string=0x000000000033C0B0 "`\t"
 *   insn=0x000000000033C0AC string=0x00000000001FA750 "0'"
 *   insn=0x000000000033C0B8 string=0x000000000033C0BC "_"
 *   insn=0x000000000033C0BC string=0x000000000033C0C0 "A"
 *   insn=0x000000000033C0C0 string=0x000000000033C0C4 "H"
 *   insn=0x000000000033C0C4 string=0x000000000033C0C8 "I{"
 *   insn=0x000000000033C0C8 string=0x000000000033C0CC "?"
 *   insn=0x000000000033C0CC string=0x000000000033C0D0 "("
 *   insn=0x000000000033C0D0 string=0x000000000033C0D4 "\t}@"
 *   insn=0x000000000033C0DC string=0x000000000033C0E0 ")}"
 *   insn=0x000000000033C0E4 string=0x000000000033C0E8 "}~"
 *   insn=0x000000000033C0F0 string=0x000000000033C0F4 "["
 *   insn=0x000000000033C0F8 string=0x000000000033C0FC "b"
 *   insn=0x000000000033C0F8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000033C120 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000033C128 string=0x000000000033C12C "H"
 *   insn=0x000000000033C130 string=0x000000000033C134 "9"
 *   insn=0x000000000033C134 string=0x000000000033C138 "j"
 *   insn=0x000000000033C138 string=0x000000000033C13C "h"
 *   insn=0x000000000033C13C string=0x000000000033C140 ""
 *   insn=0x000000000033C150 string=0x000000000033C154 "k"
 *   insn=0x000000000033C15C string=0x000000000033C160 "l"
 *   insn=0x000000000033C184 string=0x000000000033C188 "P"
 *   insn=0x000000000033C18C string=0x000000000033C190 "@"
 *   insn=0x000000000033C190 string=0x000000000033C1B8 "PE@"
 *   insn=0x000000000033C194 string=0x000000000033C1E8 "a}?"
 *   insn=0x000000000033C198 string=0x000000000033C19C "P"
 *   insn=0x000000000033C1A0 string=0x000000000033C1A4 "!"
 *   insn=0x000000000033C1A4 string=0x000000000033C1A8 "P"
 *   insn=0x000000000033C1B0 string=0x000000000033C1B4 "J\t"
 *   insn=0x000000000033C1BC string=0x000000000033C1C0 "k"
 *   insn=0x000000000033C1C4 string=0x000000000033C1C8 "2"
 *   insn=0x000000000033C1CC string=0x000000000033C1D0 "0y1"
 *   insn=0x000000000033C1D0 string=0x000000000033C1D4 "k"
 *   insn=0x000000000033C1DC string=0x000000000033C1E0 ""
 *   insn=0x000000000033C1E0 string=0x000000000033C200 ""
 *   insn=0x000000000033C1E8 string=0x000000000033C1EC "?"
 *   insn=0x000000000033C1EC string=0x000000000033C1F0 "k"
 *   insn=0x000000000033C1F8 string=0x00000000001F8840 "0'"
 *   insn=0x000000000033C208 string=0x000000000033C20C "!"
 *   insn=0x000000000033C20C string=0x000000000033C230 "("
 *   insn=0x000000000033C230 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(
        int a1,
        unsigned int a2,
        google::protobuf::io::CodedInputStream *this,
        __int64 a4)
{
  int v8; // w26
  unsigned int v9; // w25
  int v10; // w8
  _DWORD *v11; // x23
  __int64 v12; // x9
  __int64 v13; // x8
  unsigned __int64 v14; // x0
  void *v15; // x0
  _DWORD *v16; // x9
  unsigned __int8 *v17; // x10
  int v18; // w11
  int v19; // w11
  int v20; // w12
  int v21; // w11
  _DWORD *v22; // x10
  int v23; // t1
  int v24; // t1
  __int64 v25; // x17
  unsigned int v27; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v28; // [xsp+8h] [xbp-58h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(this, &v27) & 1) == 0 )
    return 0;
  v8 = *(_DWORD *)(a4 + 8);
  v9 = v27;
  if ( v8 == *(_DWORD *)(a4 + 12) )
  {
    v10 = 2 * v8 < v8 + 1 ? v8 + 1 : 2 * v8;
    v11 = *(_DWORD **)a4;
    v12 = ((unsigned __int64)v10 * (unsigned __int128)4uLL) >> 64;
    *(_DWORD *)(a4 + 12) = v10;
    v13 = 4LL * v10;
    v14 = v12 ? -1LL : v13;
    v15 = (void *)operator new[](v14);
    *(_QWORD *)a4 = v15;
    memcpy(v15, v11, 4LL * v8);
    if ( v11 != (_DWORD *)(a4 + 16) )
    {
      if ( v11 )
      {
        operator delete[](v11);
        v8 = *(_DWORD *)(a4 + 8);
      }
    }
  }
  v16 = *(_DWORD **)a4;
  *(_DWORD *)(a4 + 8) = v8 + 1;
  v16[v8] = v9;
  v17 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v18 = *((_DWORD *)this + 4) - (_DWORD)v17;
  if ( v18 >= 1 )
  {
    v19 = v18 / (a1 + 4);
    v20 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 8);
    if ( v19 < v20 )
      v20 = v19;
    if ( v20 >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( a2 > 0x7F )
        {
          if ( a2 >> 14 || (a2 & 0x7F | 0x80) != *v17 || v17[1] != (unsigned __int8)(a2 >> 7) )
            goto LABEL_28;
          v22 = v17 + 2;
        }
        else
        {
          v23 = *v17;
          v22 = v17 + 1;
          if ( v23 != a2 )
            goto LABEL_28;
        }
        v24 = *v22;
        v17 = (unsigned __int8 *)(v22 + 1);
        v25 = *(int *)(a4 + 8);
        ++v21;
        *(_DWORD *)(a4 + 8) = v25 + 1;
        v16[v25] = v24;
        if ( v21 >= v20 )
          goto LABEL_28;
      }
    }
    v21 = 0;
LABEL_28:
    if ( v21 * (a1 + 4) >= 1 )
      google::protobuf::io::CodedInputStream::Skip(this);
  }
  return 1;
}

