/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322B64
 * Mangled: _ZN5Caver5Proto23ParticleObjectComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ParticleObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 35
 *   insn=0x0000000000322B74 string=0x0000000000322B78 "U"
 *   insn=0x0000000000322B88 string=0x0000000000322B8C "h"
 *   insn=0x0000000000322B90 string=0x0000000000322B94 """
 *   insn=0x0000000000322B94 string=0x0000000000322B98 "\t"
 *   insn=0x0000000000322B9C string=0x0000000000322BA0 "!"
 *   insn=0x0000000000322BA0 string=0x0000000000322BA4 ""
 *   insn=0x0000000000322BA4 string=0x0000000000322BA8 "a""
 *   insn=0x0000000000322BA8 string=0x0000000000322BAC "h"
 *   insn=0x0000000000322BAC string=0x0000000000322BB0 "? "
 *   insn=0x0000000000322BB4 string=0x0000000000322BB8 "A"
 *   insn=0x0000000000322BB4 string=0x0000000000322BF0 "j"
 *   insn=0x0000000000322BB8 string=0x0000000000322BBC "("
 *   insn=0x0000000000322BC8 string=0x0000000000322BCC "Ak"
 *   insn=0x0000000000322BCC string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000322BD0 string=0x0000000000322BD4 "%"
 *   insn=0x0000000000322BDC string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000322BE0 string=0x0000000000322BE4 "a""
 *   insn=0x0000000000322BE4 string=0x0000000000322BE8 "? "
 *   insn=0x0000000000322BE8 string=0x0000000000322BEC "a"
 *   insn=0x0000000000322BF0 string=0x0000000000322BF4 "_"
 *   insn=0x0000000000322BF8 string=0x0000000000322BFC "I"
 *   insn=0x0000000000322C00 string=0x0000000000322C04 ")"
 *   insn=0x0000000000322C04 string=0x0000000000322C08 "J"
 *   insn=0x0000000000322C0C string=0x0000000000322C10 "j"
 *   insn=0x0000000000322C10 string=0x0000000000322C14 ""
 *   insn=0x0000000000322C20 string=0x0000000000322C24 " "
 *   insn=0x0000000000322C20 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000322C28 string=0x0000000000322C2C "j"
 *   insn=0x0000000000322C34 string=0x0000000000322C38 "_"
 *   insn=0x0000000000322C38 string=0x0000000000322C3C "i"
 *   insn=0x0000000000322C40 string=0x0000000000322C44 "A"
 *   insn=0x0000000000322C44 string=0x0000000000322C48 "h.@"
 *   insn=0x0000000000322C48 string=0x0000000000322C4C ""
 *   insn=0x0000000000322C54 string=0x0000000000322C58 "`"
 *   insn=0x0000000000322C90 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleObjectComponent::MergePartialFromCodedStream(
        Caver::Proto::ParticleObjectComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned __int8 *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned __int64 v8; // x8
  char *v9; // x10
  unsigned int v10; // w9
  unsigned __int8 *v11; // x10
  int v12; // w11
  __int64 result; // x0
  unsigned int v14; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v15; // [xsp+8h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  do
  {
    while ( 1 )
    {
      v5 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && ((char)*v5 & 0x80000000) == 0 )
        break;
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( TagFallback != 8 )
        goto LABEL_5;
LABEL_10:
      v9 = (char *)*((_QWORD *)a2 + 1);
      v8 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v9 >= v8 || *v9 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v14) & 1) == 0 )
          return 0;
        v10 = v14;
        v11 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v8 = *((_QWORD *)a2 + 2);
      }
      else
      {
        v10 = (unsigned __int8)*v9;
        v11 = (unsigned __int8 *)(v9 + 1);
        v14 = v10;
        *((_QWORD *)a2 + 1) = v11;
      }
      v12 = *((_DWORD *)this + 4);
      *((_DWORD *)this + 3) = v10;
      *((_DWORD *)this + 4) = v12 | 1;
      if ( v11 == (unsigned __int8 *)v8 && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
    v6 = *v5;
    *((_DWORD *)a2 + 8) = v6;
    *((_QWORD *)a2 + 1) = v5 + 1;
    if ( (_DWORD)v6 == 8 )
      goto LABEL_10;
LABEL_5:
    if ( !(_DWORD)v6 || (v6 & 7) == 4 )
      return 1;
  }
  while ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3)
         & 1) != 0 );
  return 0;
}

