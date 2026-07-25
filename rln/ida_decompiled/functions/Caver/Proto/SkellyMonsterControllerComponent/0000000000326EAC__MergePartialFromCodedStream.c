/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326EAC
 * Mangled: _ZN5Caver5Proto32SkellyMonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 52
 *   insn=0x0000000000326EBC string=0x0000000000326EC0 "U"
 *   insn=0x0000000000326ED0 string=0x0000000000326ED4 "h"
 *   insn=0x0000000000326ED8 string=0x0000000000326EDC """
 *   insn=0x0000000000326EDC string=0x0000000000326EE0 "\t"
 *   insn=0x0000000000326EE4 string=0x0000000000326EE8 "!"
 *   insn=0x0000000000326EE8 string=0x0000000000326EEC ""
 *   insn=0x0000000000326EEC string=0x0000000000326EF0 "a""
 *   insn=0x0000000000326EF0 string=0x0000000000326EF4 "h"
 *   insn=0x0000000000326EF8 string=0x0000000000326EFC "O"
 *   insn=0x0000000000326EF8 string=0x0000000000326F14 "(|"
 *   insn=0x0000000000326F04 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000326F08 string=0x0000000000326F0C "a""
 *   insn=0x0000000000326F0C string=0x0000000000326F10 "A\t"
 *   insn=0x0000000000326F1C string=0x0000000000326F58 "("
 *   insn=0x0000000000326F20 string=0x0000000000326F24 "!"
 *   insn=0x0000000000326F24 string=0x0000000000326F28 "("
 *   insn=0x0000000000326F24 string=0x0000000000326F88 "("
 *   insn=0x0000000000326F2C string=0x0000000000326F30 "i"
 *   insn=0x0000000000326F30 string=0x0000000000326F34 "?"
 *   insn=0x0000000000326F38 string=0x0000000000326F3C "*"
 *   insn=0x0000000000326F40 string=0x0000000000326F44 "J"
 *   insn=0x0000000000326F44 string=0x0000000000326F48 ")"
 *   insn=0x0000000000326F4C string=0x0000000000326F50 "i"
 *   insn=0x0000000000326F50 string=0x0000000000326F54 "-"
 *   insn=0x0000000000326F5C string=0x0000000000326F60 "i"
 *   insn=0x0000000000326F60 string=0x0000000000326F64 "?"
 *   insn=0x0000000000326F68 string=0x0000000000326F6C "*"
 *   insn=0x0000000000326F70 string=0x0000000000326F74 "J"
 *   insn=0x0000000000326F74 string=0x0000000000326F78 ")"
 *   insn=0x0000000000326F7C string=0x0000000000326F80 "i"
 *   insn=0x0000000000326F8C string=0x0000000000326F90 "@"
 *   insn=0x0000000000326F94 string=0x0000000000326F98 "NZ"
 *   insn=0x0000000000326F98 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000326F9C string=0x0000000000326FA0 "("
 *   insn=0x0000000000326FA8 string=0x0000000000326FAC ")H"
 *   insn=0x0000000000326FAC string=0x00000000001F9050 "0'"
 *   insn=0x0000000000326FB4 string=0x0000000000326FB8 "i"
 *   insn=0x0000000000326FC0 string=0x0000000000326FC4 "?"
 *   insn=0x0000000000326FC4 string=0x0000000000326FC8 "j"
 *   insn=0x0000000000326FCC string=0x0000000000326FD0 """
 *   insn=0x0000000000326FD0 string=0x0000000000326FD4 "*"
 *   insn=0x0000000000326FD4 string=0x0000000000326FD8 "_A"
 *   insn=0x0000000000326FDC string=0x0000000000326FE0 ")"
 *   insn=0x0000000000326FE0 string=0x0000000000326FE4 "i"
 *   insn=0x0000000000326FE4 string=0x0000000000326FE8 "?"
 *   insn=0x0000000000326FF8 string=0x0000000000326FFC " "
 *   insn=0x0000000000327000 string=0x0000000000327004 "i"
 *   insn=0x000000000032700C string=0x0000000000327010 "?"
 *   insn=0x0000000000327010 string=0x0000000000327014 "j"
 *   insn=0x000000000032701C string=0x0000000000327020 "h.@"
 *   insn=0x000000000032702C string=0x0000000000327030 "`"
 *   insn=0x0000000000327068 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkellyMonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::SkellyMonsterControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  unsigned __int64 v9; // x8
  char *v10; // x9
  unsigned int v11; // w10
  unsigned __int8 *v12; // x9
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  int v16; // w11
  int v17; // w11
  __int64 result; // x0
  unsigned int v19; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v20; // [xsp+8h] [xbp-28h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  do
  {
    while ( 1 )
    {
      v5 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v5 >= *((_QWORD *)a2 + 2) || *v5 < 0 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
        v6 = TagFallback;
        *((_DWORD *)a2 + 8) = TagFallback;
        if ( !TagFallback )
          return 1;
      }
      else
      {
        v6 = (unsigned __int8)*v5;
        *((_DWORD *)a2 + 8) = v6;
        *((_QWORD *)a2 + 1) = v5 + 1;
        if ( !(_DWORD)v6 )
          return 1;
      }
      if ( (unsigned int)v6 >> 3 != 1 )
        break;
      v8 = v6 & 7;
      if ( (v6 & 7) != 0 )
        goto LABEL_18;
      v13 = (char *)*((_QWORD *)a2 + 1);
      v9 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v13 >= v9 || *v13 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v19) & 1) == 0 )
          return 0;
        v14 = v19;
        v15 = (_BYTE *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
      }
      else
      {
        v14 = (unsigned __int8)*v13;
        v15 = v13 + 1;
        v19 = v14;
        *((_QWORD *)a2 + 1) = v15;
      }
      v16 = *((_DWORD *)this + 5);
      *((_DWORD *)this + 3) = v14;
      *((_DWORD *)this + 5) = v16 | 1;
      if ( (unsigned __int64)v15 < v9 && *v15 == 16 )
      {
        v10 = v15 + 1;
        *((_QWORD *)a2 + 1) = v10;
        if ( (unsigned __int64)v10 >= v9 )
          goto LABEL_26;
LABEL_11:
        if ( (*v10 & 0x80000000) == 0 )
        {
          v11 = (unsigned __int8)*v10;
          v12 = (unsigned __int8 *)(v10 + 1);
          v19 = v11;
          *((_QWORD *)a2 + 1) = v12;
          goto LABEL_28;
        }
LABEL_26:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v19) & 1) == 0 )
          return 0;
        v11 = v19;
        v12 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
LABEL_28:
        v17 = *((_DWORD *)this + 5);
        *((_DWORD *)this + 4) = v11;
        *((_DWORD *)this + 5) = v17 | 2;
        if ( v12 == (unsigned __int8 *)v9 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
      }
    }
    if ( (unsigned int)v6 >> 3 == 2 )
    {
      v8 = v6 & 7;
      if ( (v6 & 7) == 0 )
      {
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 )
          goto LABEL_26;
        goto LABEL_11;
      }
    }
    else
    {
      v8 = v6 & 7;
    }
LABEL_18:
    if ( v8 == 4 )
      return 1;
  }
  while ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3)
         & 1) != 0 );
  return 0;
}

