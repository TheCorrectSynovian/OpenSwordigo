/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E588
 * Mangled: _ZN5Caver5Proto37BoneControlledCollisionShapeComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 47
 *   insn=0x000000000030E59C string=0x000000000030E5A0 "U"
 *   insn=0x000000000030E5B0 string=0x000000000030E5B4 ")"
 *   insn=0x000000000030E5C0 string=0x000000000030E5C4 "7a"
 *   insn=0x000000000030E5C4 string=0x000000000030E5C8 "h"
 *   insn=0x000000000030E5CC string=0x000000000030E5D0 """
 *   insn=0x000000000030E5D0 string=0x000000000030E5D4 "\t"
 *   insn=0x000000000030E5D8 string=0x000000000030E5DC "!"
 *   insn=0x000000000030E5DC string=0x000000000030E5E0 ""
 *   insn=0x000000000030E5E0 string=0x000000000030E5E4 "a""
 *   insn=0x000000000030E5E4 string=0x000000000030E5E8 "h"
 *   insn=0x000000000030E5EC string=0x000000000030E5F0 "J"
 *   insn=0x000000000030E5EC string=0x000000000030E608 "(|"
 *   insn=0x000000000030E5F8 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000030E5FC string=0x000000000030E600 "a""
 *   insn=0x000000000030E610 string=0x000000000030E630 "("
 *   insn=0x000000000030E614 string=0x000000000030E618 "A"
 *   insn=0x000000000030E618 string=0x000000000030E61C "("
 *   insn=0x000000000030E618 string=0x000000000030E660 "("
 *   insn=0x000000000030E628 string=0x000000000030E62C "%"
 *   insn=0x000000000030E634 string=0x000000000030E638 "i"
 *   insn=0x000000000030E638 string=0x000000000030E63C "?"
 *   insn=0x000000000030E640 string=0x000000000030E644 "*"
 *   insn=0x000000000030E648 string=0x000000000030E64C "J"
 *   insn=0x000000000030E64C string=0x000000000030E650 ")"
 *   insn=0x000000000030E654 string=0x000000000030E658 "i"
 *   insn=0x000000000030E670 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000030E674 string=0x000000000030E678 "*"
 *   insn=0x000000000030E680 string=0x000000000030E684 "s"
 *   insn=0x000000000030E684 string=0x00000000001F9050 "0'"
 *   insn=0x000000000030E68C string=0x000000000030E690 "i"
 *   insn=0x000000000030E698 string=0x000000000030E69C "?"
 *   insn=0x000000000030E69C string=0x000000000030E6A0 "j"
 *   insn=0x000000000030E6A8 string=0x000000000030E6AC "("
 *   insn=0x000000000030E6B4 string=0x000000000030E6B8 "("
 *   insn=0x000000000030E6B8 string=0x000000000030E6BC "h"
 *   insn=0x000000000030E6C0 string=0x000000000030E6C4 "H"
 *   insn=0x000000000030E6C8 string=0x000000000030E6CC "?"
 *   insn=0x000000000030E6D8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030E6DC string=0x000000000030E6E0 "7"
 *   insn=0x000000000030E6E8 string=0x000000000030E6EC "9"
 *   insn=0x000000000030E6EC string=0x00000000001F97D0 "0'"
 *   insn=0x000000000030E6F0 string=0x000000000030E6F4 "h"
 *   insn=0x000000000030E6F8 string=0x000000000030E6FC "a"
 *   insn=0x000000000030E6FC string=0x000000000030E700 "h.@"
 *   insn=0x000000000030E700 string=0x000000000030E704 "("
 *   insn=0x000000000030E70C string=0x000000000030E710 "`"
 *   insn=0x000000000030E74C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::MergePartialFromCodedStream(
        Caver::Proto::BoneControlledCollisionShapeComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  int v9; // w10
  unsigned __int64 v10; // x8
  char *v11; // x9
  unsigned int v12; // w10
  _BYTE *v13; // x9
  int v14; // w11
  __int64 *v15; // x1
  _QWORD *v16; // x0
  __int64 result; // x0
  unsigned int v18; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v19; // [xsp+8h] [xbp-38h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        goto LABEL_16;
      v11 = (char *)*((_QWORD *)a2 + 1);
      v10 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v11 >= v10 || *v11 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v18) & 1) == 0 )
          return 0;
        v12 = v18;
        v13 = (_BYTE *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
      }
      else
      {
        v12 = (unsigned __int8)*v11;
        v13 = v11 + 1;
        v18 = v12;
        *((_QWORD *)a2 + 1) = v13;
      }
      v14 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 3) = v12;
      v9 = v14 | 1;
      *((_DWORD *)this + 6) = v14 | 1;
      if ( (unsigned __int64)v13 < v10 && *v13 == 18 )
      {
        *((_QWORD *)a2 + 1) = v13 + 1;
LABEL_24:
        v15 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 6) = v9 | 2;
        if ( v15 == &Caver::Proto::BoneControlledCollisionShapeComponent::_default_controlling_bone_name_ )
        {
          v16 = (_QWORD *)operator new(8u);
          *v16 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v16;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
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
      if ( v8 == 2 )
      {
        v9 = *((_DWORD *)this + 6);
        goto LABEL_24;
      }
    }
    else
    {
      v8 = v6 & 7;
    }
LABEL_16:
    if ( v8 == 4 )
      return 1;
  }
  while ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3)
         & 1) != 0 );
  return 0;
}

