/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327D60
 * Mangled: _ZN5Caver5Proto34ShootingMonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 53
 *   insn=0x0000000000327D70 string=0x0000000000327D74 "U"
 *   insn=0x0000000000327D84 string=0x0000000000327D88 "h"
 *   insn=0x0000000000327D8C string=0x0000000000327D90 """
 *   insn=0x0000000000327D90 string=0x0000000000327D94 "\t"
 *   insn=0x0000000000327D98 string=0x0000000000327D9C "!"
 *   insn=0x0000000000327D9C string=0x0000000000327DA0 ""
 *   insn=0x0000000000327DA0 string=0x0000000000327DA4 "a""
 *   insn=0x0000000000327DA4 string=0x0000000000327DA8 "h"
 *   insn=0x0000000000327DAC string=0x0000000000327DB0 "O"
 *   insn=0x0000000000327DAC string=0x0000000000327DC8 "(|"
 *   insn=0x0000000000327DB4 string=0x0000000000327DB8 ""?"
 *   insn=0x0000000000327DB8 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000327DBC string=0x0000000000327DC0 "a""
 *   insn=0x0000000000327DC0 string=0x0000000000327DC4 "A\t"
 *   insn=0x0000000000327DD0 string=0x0000000000327E0C "("
 *   insn=0x0000000000327DD4 string=0x0000000000327DD8 "!"
 *   insn=0x0000000000327DD8 string=0x0000000000327DDC "("
 *   insn=0x0000000000327DD8 string=0x0000000000327E3C "("
 *   insn=0x0000000000327DE0 string=0x0000000000327DE4 "i"
 *   insn=0x0000000000327DE4 string=0x0000000000327DE8 "?"
 *   insn=0x0000000000327DEC string=0x0000000000327DF0 "*"
 *   insn=0x0000000000327DF4 string=0x0000000000327DF8 "J"
 *   insn=0x0000000000327DF8 string=0x0000000000327DFC ")"
 *   insn=0x0000000000327E00 string=0x0000000000327E04 "i"
 *   insn=0x0000000000327E04 string=0x0000000000327E08 "-"
 *   insn=0x0000000000327E10 string=0x0000000000327E14 "i"
 *   insn=0x0000000000327E14 string=0x0000000000327E18 "?"
 *   insn=0x0000000000327E1C string=0x0000000000327E20 "*"
 *   insn=0x0000000000327E24 string=0x0000000000327E28 "J"
 *   insn=0x0000000000327E28 string=0x0000000000327E2C ")"
 *   insn=0x0000000000327E30 string=0x0000000000327E34 "i"
 *   insn=0x0000000000327E40 string=0x0000000000327E44 "@"
 *   insn=0x0000000000327E4C string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000327E50 string=0x0000000000327E54 "("
 *   insn=0x0000000000327E5C string=0x0000000000327E60 "|D"
 *   insn=0x0000000000327E60 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000327E68 string=0x0000000000327E6C "i"
 *   insn=0x0000000000327E74 string=0x0000000000327E78 "?"
 *   insn=0x0000000000327E78 string=0x0000000000327E7C "j"
 *   insn=0x0000000000327E80 string=0x0000000000327E84 """
 *   insn=0x0000000000327E84 string=0x0000000000327E88 "*"
 *   insn=0x0000000000327E88 string=0x0000000000327E8C "_A"
 *   insn=0x0000000000327E90 string=0x0000000000327E94 ")"
 *   insn=0x0000000000327E94 string=0x0000000000327E98 "i"
 *   insn=0x0000000000327E98 string=0x0000000000327E9C "?"
 *   insn=0x0000000000327EA8 string=0x0000000000327EAC "iD"
 *   insn=0x0000000000327EAC string=0x0000000000327EB0 " "
 *   insn=0x0000000000327EB4 string=0x0000000000327EB8 "i"
 *   insn=0x0000000000327EC0 string=0x0000000000327EC4 "?"
 *   insn=0x0000000000327EC4 string=0x0000000000327EC8 "j"
 *   insn=0x0000000000327ED0 string=0x0000000000327ED4 "h.@"
 *   insn=0x0000000000327EE0 string=0x0000000000327EE4 "`"
 *   insn=0x0000000000327F1C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShootingMonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::ShootingMonsterControllerComponent *this,
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

