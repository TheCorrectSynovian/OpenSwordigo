/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AB88
 * Mangled: _ZN5Caver5Proto24PhysicsPlatformComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::PhysicsPlatformComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 59
 *   insn=0x000000000031AB98 string=0x000000000031AB9C "U"
 *   insn=0x000000000031ABB4 string=0x000000000031ABB8 "h"
 *   insn=0x000000000031ABBC string=0x000000000031ABC0 """
 *   insn=0x000000000031ABC0 string=0x000000000031ABC4 "\t"
 *   insn=0x000000000031ABC8 string=0x000000000031ABCC "!"
 *   insn=0x000000000031ABCC string=0x000000000031ABD0 ""
 *   insn=0x000000000031ABD0 string=0x000000000031ABD4 "a""
 *   insn=0x000000000031ABD4 string=0x000000000031ABD8 "h"
 *   insn=0x000000000031ABDC string=0x000000000031ABE0 "f"
 *   insn=0x000000000031ABDC string=0x000000000031ABF8 "(|"
 *   insn=0x000000000031ABE8 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031ABEC string=0x000000000031ABF0 "a""
 *   insn=0x000000000031ABF0 string=0x000000000031ABF4 "!"
 *   insn=0x000000000031ABF8 string=0x000000000031ABFC ""
 *   insn=0x000000000031AC04 string=0x000000000031AD58 "("
 *   insn=0x000000000031AC08 string=0x000000000031AC0C ""
 *   insn=0x000000000031AC10 string=0x000000000031AC14 "("
 *   insn=0x000000000031AC10 string=0x000000000031AC68 "("
 *   insn=0x000000000031AC10 string=0x000000000031AC78 "("
 *   insn=0x000000000031AC10 string=0x000000000031AC88 "("
 *   insn=0x000000000031AC28 string=0x000000000031AC2C " \n"
 *   insn=0x000000000031AC28 string=0x00000000001FA750 "0'"
 *   insn=0x000000000031AC38 string=0x000000000031AC3C "("
 *   insn=0x000000000031AC40 string=0x000000000031AC44 "h"
 *   insn=0x000000000031AC48 string=0x000000000031AC4C "b"
 *   insn=0x000000000031AC4C string=0x000000000031AC50 "\t"
 *   insn=0x000000000031AC50 string=0x000000000031AC54 "?U"
 *   insn=0x000000000031AC58 string=0x000000000031AC5C ""
 *   insn=0x000000000031AC5C string=0x000000000031AC60 "h"
 *   insn=0x000000000031AC6C string=0x000000000031AC70 "@"
 *   insn=0x000000000031AC70 string=0x000000000031AC74 ":"
 *   insn=0x000000000031AC80 string=0x000000000031AC84 "6"
 *   insn=0x000000000031AC8C string=0x000000000031AC90 "a"
 *   insn=0x000000000031ACAC string=0x000000000031ACB0 "("
 *   insn=0x000000000031ACB4 string=0x000000000031ACB8 "h"
 *   insn=0x000000000031ACC0 string=0x000000000031ACC4 "\t"
 *   insn=0x000000000031ACC4 string=0x000000000031ACC8 "?u"
 *   insn=0x000000000031ACC8 string=0x000000000031ACCC "a"
 *   insn=0x000000000031ACCC string=0x000000000031ACD0 ""
 *   insn=0x000000000031ACD0 string=0x000000000031ACD4 "h"
 *   insn=0x000000000031ACE0 string=0x000000000031ACE4 "`"
 *   insn=0x000000000031ACF0 string=0x000000000031ACF4 "("
 *   insn=0x000000000031ACF8 string=0x000000000031ACFC "h"
 *   insn=0x000000000031AD04 string=0x000000000031AD08 "\t"
 *   insn=0x000000000031AD08 string=0x000000000031AD0C "?"
 *   insn=0x000000000031AD0C string=0x000000000031AD10 "A"
 *   insn=0x000000000031AD10 string=0x000000000031AD14 ""
 *   insn=0x000000000031AD14 string=0x000000000031AD18 "h"
 *   insn=0x000000000031AD24 string=0x000000000031AD28 "@"
 *   insn=0x000000000031AD34 string=0x000000000031AD38 "("
 *   insn=0x000000000031AD3C string=0x000000000031AD40 "h"
 *   insn=0x000000000031AD48 string=0x000000000031AD4C "h.@"
 *   insn=0x000000000031AD4C string=0x000000000031AD50 "H"
 *   insn=0x000000000031AD68 string=0x000000000031AD6C "`"
 *   insn=0x000000000031AD68 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031AD84 string=0x000000000031AD88 "A"
 *   insn=0x000000000031AD88 string=0x000000000031ADB0 "Hm"
 *   insn=0x000000000031ADA4 string=0x000000000031ADA8 "`"
 *   insn=0x000000000031ADB0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsPlatformComponent::MergePartialFromCodedStream(
        Caver::Proto::PhysicsPlatformComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  int v9; // w9
  _BYTE *v10; // x8
  int v11; // w9
  _BYTE *v12; // x8
  int v13; // w9
  _BYTE *v14; // x8
  int v15; // w9
  __int64 result; // x0
  unsigned int v17; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v18; // [xsp+8h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    v5 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && (*v5 & 0x80000000) == 0 )
    {
      v6 = (unsigned __int8)*v5;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( !(_DWORD)v6 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v6 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_31;
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v9 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 3) = v17;
        *((_DWORD *)this + 7) = v9 | 1;
        v10 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 >= *((_QWORD *)a2 + 2) || *v10 != 21 )
          continue;
        *((_QWORD *)a2 + 1) = v10 + 1;
        goto LABEL_18;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_31;
LABEL_18:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v11 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 4) = v17;
        *((_DWORD *)this + 7) = v11 | 2;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 >= *((_QWORD *)a2 + 2) || *v12 != 29 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
LABEL_22:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v13 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 5) = v17;
        *((_DWORD *)this + 7) = v13 | 4;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_26:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v15 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 6) = v17;
        *((_DWORD *)this + 7) = v15 | 8;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_31;
        goto LABEL_22;
      case 4u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_31;
        goto LABEL_26;
      default:
        v8 = v6 & 7;
LABEL_31:
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

