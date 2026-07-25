/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304C80
 * Mangled: _ZN5Caver5Proto23BlendAnimationComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::BlendAnimationComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 80
 *   insn=0x0000000000304C90 string=0x0000000000304C94 "U"
 *   insn=0x0000000000304C98 string=0x0000000000304C9C "6"
 *   insn=0x0000000000304CAC string=0x0000000000304CB0 "h"
 *   insn=0x0000000000304CB4 string=0x0000000000304CB8 """
 *   insn=0x0000000000304CB8 string=0x0000000000304CBC "\t"
 *   insn=0x0000000000304CC0 string=0x0000000000304CC4 "!"
 *   insn=0x0000000000304CC4 string=0x0000000000304CC8 ""
 *   insn=0x0000000000304CC8 string=0x0000000000304CCC "a""
 *   insn=0x0000000000304CCC string=0x0000000000304CD0 "h"
 *   insn=0x0000000000304CD4 string=0x0000000000304CD8 "{"
 *   insn=0x0000000000304CD4 string=0x0000000000304CF0 "(|"
 *   insn=0x0000000000304CDC string=0x0000000000304CE0 "X"
 *   insn=0x0000000000304CE0 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000304CE4 string=0x0000000000304CE8 "a""
 *   insn=0x0000000000304CF0 string=0x0000000000304CF4 ""
 *   insn=0x0000000000304CFC string=0x0000000000304D8C "("
 *   insn=0x0000000000304D00 string=0x0000000000304D04 ""
 *   insn=0x0000000000304D08 string=0x0000000000304D0C "("
 *   insn=0x0000000000304D08 string=0x0000000000304D3C "("
 *   insn=0x0000000000304D08 string=0x0000000000304D4C "("
 *   insn=0x0000000000304D08 string=0x0000000000304D5C "("
 *   insn=0x0000000000304D10 string=0x0000000000304D14 "i"
 *   insn=0x0000000000304D14 string=0x0000000000304D18 "?"
 *   insn=0x0000000000304D18 string=0x0000000000304D1C "b"
 *   insn=0x0000000000304D1C string=0x0000000000304D20 "*"
 *   insn=0x0000000000304D20 string=0x0000000000304D24 "*"
 *   insn=0x0000000000304D24 string=0x0000000000304D28 "J"
 *   insn=0x0000000000304D28 string=0x0000000000304D2C ")"
 *   insn=0x0000000000304D30 string=0x0000000000304D34 "i"
 *   insn=0x0000000000304D34 string=0x0000000000304D38 """
 *   insn=0x0000000000304D40 string=0x0000000000304D44 "a"
 *   insn=0x0000000000304D44 string=0x0000000000304D48 "<"
 *   insn=0x0000000000304D54 string=0x0000000000304D58 "I"
 *   insn=0x0000000000304D60 string=0x0000000000304D64 "i"
 *   insn=0x0000000000304D64 string=0x0000000000304D68 "?"
 *   insn=0x0000000000304D68 string=0x0000000000304D6C "B"
 *   insn=0x0000000000304D6C string=0x0000000000304D70 "*"
 *   insn=0x0000000000304D70 string=0x0000000000304D74 "\n"
 *   insn=0x0000000000304D74 string=0x0000000000304D78 "J"
 *   insn=0x0000000000304D78 string=0x0000000000304D7C ")"
 *   insn=0x0000000000304D80 string=0x0000000000304D84 "i"
 *   insn=0x0000000000304D84 string=0x0000000000304D88 "!"
 *   insn=0x0000000000304D9C string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000304DA0 string=0x0000000000304DA4 "J"
 *   insn=0x0000000000304DB0 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000304DB8 string=0x0000000000304DBC "i"
 *   insn=0x0000000000304DC4 string=0x0000000000304DC8 "?"
 *   insn=0x0000000000304DC8 string=0x0000000000304DCC "j"
 *   insn=0x0000000000304DD4 string=0x0000000000304DD8 "*"
 *   insn=0x0000000000304DD8 string=0x0000000000304DDC "_A"
 *   insn=0x0000000000304DE0 string=0x0000000000304DE4 ")"
 *   insn=0x0000000000304DE4 string=0x0000000000304DE8 "i"
 *   insn=0x0000000000304DE8 string=0x0000000000304DEC "?"
 *   insn=0x0000000000304DFC string=0x0000000000304E00 "`"
 *   insn=0x0000000000304E04 string=0x0000000000304E08 "i"
 *   insn=0x0000000000304E10 string=0x0000000000304E14 "?"
 *   insn=0x0000000000304E14 string=0x0000000000304E18 "j"
 *   insn=0x0000000000304E20 string=0x0000000000304E24 "("
 *   insn=0x0000000000304E28 string=0x0000000000304E2C "!"
 *   insn=0x0000000000304E2C string=0x0000000000304E30 "("
 *   insn=0x0000000000304E30 string=0x0000000000304E34 "h"
 *   insn=0x0000000000304E3C string=0x0000000000304E40 "D"
 *   insn=0x0000000000304E40 string=0x0000000000304E44 "@"
 *   insn=0x0000000000304E40 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000304E50 string=0x0000000000304E54 "("
 *   insn=0x0000000000304E58 string=0x0000000000304E5C "h"
 *   insn=0x0000000000304E60 string=0x0000000000304E64 "b"
 *   insn=0x0000000000304E64 string=0x0000000000304E68 "\t"
 *   insn=0x0000000000304E68 string=0x0000000000304E6C "?"
 *   insn=0x0000000000304E70 string=0x0000000000304E74 ""
 *   insn=0x0000000000304E74 string=0x0000000000304E78 "h"
 *   insn=0x0000000000304E80 string=0x0000000000304E84 "3"
 *   insn=0x0000000000304E84 string=0x0000000000304E88 " "
 *   insn=0x0000000000304E94 string=0x0000000000304E98 "("
 *   insn=0x0000000000304E9C string=0x0000000000304EA0 "h"
 *   insn=0x0000000000304EA4 string=0x0000000000304EA8 "A"
 *   insn=0x0000000000304EA8 string=0x0000000000304EAC "h.@"
 *   insn=0x0000000000304EAC string=0x0000000000304EB0 ""
 *   insn=0x0000000000304EB8 string=0x0000000000304EBC "`"
 *   insn=0x0000000000304EF4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BlendAnimationComponent::MergePartialFromCodedStream(
        Caver::Proto::BlendAnimationComponent *this,
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
  _BYTE *v12; // x9
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  int v16; // w11
  int v17; // w11
  int v18; // w9
  _BYTE *v19; // x8
  int v20; // w9
  __int64 result; // x0
  unsigned int v22; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v23; // [xsp+8h] [xbp-28h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
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
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_21;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v22) & 1) == 0 )
            return 0;
          v11 = v22;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v22 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v16 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 7) = v16 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v13 = v12 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 < v9 )
          goto LABEL_18;
        goto LABEL_29;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_21;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_29;
LABEL_18:
        if ( *v13 < 0 )
        {
LABEL_29:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v22) & 1) == 0 )
            return 0;
          v14 = v22;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v22 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v17 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 4) = v14;
        *((_DWORD *)this + 7) = v17 | 2;
        if ( (unsigned __int64)v15 >= v9 || *v15 != 29 )
          continue;
        *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_34:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v22) & 1) == 0 )
          return 0;
        v18 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 5) = v22;
        *((_DWORD *)this + 7) = v18 | 4;
        v19 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v19 >= *((_QWORD *)a2 + 2) || *v19 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v19 + 1;
LABEL_38:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v22) & 1) != 0 )
        {
          v20 = *((_DWORD *)this + 7);
          *((_DWORD *)this + 6) = v22;
          *((_DWORD *)this + 7) = v20 | 8;
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_34;
        goto LABEL_21;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_38;
        goto LABEL_21;
      default:
        v8 = v6 & 7;
LABEL_21:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

