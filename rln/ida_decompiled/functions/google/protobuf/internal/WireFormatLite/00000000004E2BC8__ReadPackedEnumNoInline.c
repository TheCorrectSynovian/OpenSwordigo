/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2BC8
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite22ReadPackedEnumNoInlineEPNS0_2io16CodedInputStreamEPFbiEPNS0_13RepeatedFieldIiEE
 * Demangled: google::protobuf::internal::WireFormatLite::ReadPackedEnumNoInline(google::protobuf::io::CodedInputStream *,bool (*)(int),google::protobuf::RepeatedField<int> *)
 *
 * Callers: 0
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
 * Referenced strings: 29
 *   insn=0x00000000004E2BE4 string=0x00000000004E2BE8 "Y"
 *   insn=0x00000000004E2BE8 string=0x00000000004E2BEC "("
 *   insn=0x00000000004E2BFC string=0x00000000004E2C00 "h"
 *   insn=0x00000000004E2C08 string=0x00000000004E2C0C "\t"
 *   insn=0x00000000004E2C10 string=0x00000000004E2C14 "!"
 *   insn=0x00000000004E2C14 string=0x00000000004E2C18 ""
 *   insn=0x00000000004E2C1C string=0x00000000004E2C20 "h"
 *   insn=0x00000000004E2C2C string=0x00000000004E2C30 "Y"
 *   insn=0x00000000004E2C30 string=0x00000000001F9050 "0'"
 *   insn=0x00000000004E2C3C string=0x00000000004E2C40 "P"
 *   insn=0x00000000004E2C4C string=0x00000000001F67E0 "0'"
 *   insn=0x00000000004E2C5C string=0x00000000004E2C60 "h"
 *   insn=0x00000000004E2C68 string=0x00000000004E2C6C "\t"
 *   insn=0x00000000004E2C70 string=0x00000000004E2C74 "7"
 *   insn=0x00000000004E2C74 string=0x00000000004E2C78 ""
 *   insn=0x00000000004E2C7C string=0x00000000004E2C80 "h"
 *   insn=0x00000000004E2CB8 string=0x00000000004E2CBC "?"
 *   insn=0x00000000004E2CBC string=0x00000000004E2CC0 "("
 *   insn=0x00000000004E2CC0 string=0x00000000004E2CC4 "\t}@"
 *   insn=0x00000000004E2CC8 string=0x00000000004E2CCC ")}"
 *   insn=0x00000000004E2CD0 string=0x00000000004E2CD4 "}~"
 *   insn=0x00000000004E2CE0 string=0x00000000004E2CE4 "#V"
 *   insn=0x00000000004E2CE4 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004E2D08 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004E2D34 string=0x00000000004E2D38 "6"
 *   insn=0x00000000004E2D40 string=0x00000000004E2D48 "("
 *   insn=0x00000000004E2D50 string=0x00000000004E2D54 "!"
 *   insn=0x00000000004E2D54 string=0x00000000004E2D78 "VM"
 *   insn=0x00000000004E2D78 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::ReadPackedEnumNoInline(
        google::protobuf::io::CodedInputStream *this,
        __int64 (__fastcall *a2)(_QWORD),
        __int64 a3)
{
  char *v6; // x8
  unsigned int v7; // w1
  char *v8; // x8
  unsigned int v9; // w23
  int v10; // w28
  int v11; // w8
  _DWORD *v12; // x24
  __int64 v13; // x9
  __int64 v14; // x8
  unsigned __int64 v15; // x0
  void *v16; // x0
  _DWORD *v17; // x8
  int v19; // [xsp+Ch] [xbp-64h]
  unsigned int v20; // [xsp+10h] [xbp-60h] BYREF
  unsigned int v21; // [xsp+14h] [xbp-5Ch] BYREF
  __int64 v22; // [xsp+18h] [xbp-58h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)v6 >= *((_QWORD *)this + 2) || *v6 < 0 )
  {
    if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, &v20) & 1) == 0 )
      return 0;
    v7 = v20;
  }
  else
  {
    v7 = (unsigned __int8)*v6;
    v20 = v7;
    *((_QWORD *)this + 1) = v6 + 1;
  }
  v19 = google::protobuf::io::CodedInputStream::PushLimit(this, v7);
  if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(this) >= 1 )
  {
    do
    {
      v8 = (char *)*((_QWORD *)this + 1);
      if ( (unsigned __int64)v8 >= *((_QWORD *)this + 2) || *v8 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, &v21) & 1) == 0 )
          return 0;
        v9 = v21;
      }
      else
      {
        v9 = (unsigned __int8)*v8;
        v21 = v9;
        *((_QWORD *)this + 1) = v8 + 1;
      }
      if ( (a2(v9) & 1) != 0 )
      {
        v10 = *(_DWORD *)(a3 + 8);
        if ( v10 == *(_DWORD *)(a3 + 12) )
        {
          if ( 2 * v10 < v10 + 1 )
            v11 = v10 + 1;
          else
            v11 = 2 * v10;
          v12 = *(_DWORD **)a3;
          v13 = ((unsigned __int64)v11 * (unsigned __int128)4uLL) >> 64;
          *(_DWORD *)(a3 + 12) = v11;
          v14 = 4LL * v11;
          if ( v13 )
            v15 = -1;
          else
            v15 = v14;
          v16 = (void *)operator new[](v15);
          *(_QWORD *)a3 = v16;
          memcpy(v16, v12, 4LL * v10);
          if ( v12 != (_DWORD *)(a3 + 16) )
          {
            if ( v12 )
            {
              operator delete[](v12);
              v10 = *(_DWORD *)(a3 + 8);
            }
          }
        }
        v17 = *(_DWORD **)a3;
        *(_DWORD *)(a3 + 8) = v10 + 1;
        v17[v10] = v9;
      }
    }
    while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(this) > 0 );
  }
  google::protobuf::io::CodedInputStream::PopLimit(this, v19);
  return 1;
}

