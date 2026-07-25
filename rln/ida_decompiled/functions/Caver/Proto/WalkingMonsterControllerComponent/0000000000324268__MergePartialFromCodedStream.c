/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324268
 * Mangled: _ZN5Caver5Proto33WalkingMonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   insn=0x0000000000324278 string=0x000000000032427C "U"
 *   insn=0x000000000032428C string=0x0000000000324290 "h"
 *   insn=0x0000000000324294 string=0x0000000000324298 """
 *   insn=0x0000000000324298 string=0x000000000032429C "\t"
 *   insn=0x00000000003242A0 string=0x00000000003242A4 "!"
 *   insn=0x00000000003242A4 string=0x00000000003242A8 ""
 *   insn=0x00000000003242A8 string=0x00000000003242AC "a""
 *   insn=0x00000000003242AC string=0x00000000003242B0 "h"
 *   insn=0x00000000003242B0 string=0x00000000003242B4 "? "
 *   insn=0x00000000003242B8 string=0x00000000003242BC "A"
 *   insn=0x00000000003242B8 string=0x00000000003242F4 "j"
 *   insn=0x00000000003242BC string=0x00000000003242C0 "("
 *   insn=0x00000000003242D0 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003242D4 string=0x00000000003242D8 "%"
 *   insn=0x00000000003242E0 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003242E4 string=0x00000000003242E8 "a""
 *   insn=0x00000000003242E8 string=0x00000000003242EC "? "
 *   insn=0x00000000003242EC string=0x00000000003242F0 "a"
 *   insn=0x00000000003242F4 string=0x00000000003242F8 "_"
 *   insn=0x00000000003242FC string=0x0000000000324300 "I"
 *   insn=0x0000000000324304 string=0x0000000000324308 ")"
 *   insn=0x0000000000324308 string=0x000000000032430C "J"
 *   insn=0x0000000000324310 string=0x0000000000324314 "j"
 *   insn=0x0000000000324314 string=0x0000000000324318 ""
 *   insn=0x0000000000324320 string=0x0000000000324324 "KS"
 *   insn=0x0000000000324324 string=0x0000000000324328 " "
 *   insn=0x0000000000324324 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032432C string=0x0000000000324330 "j"
 *   insn=0x0000000000324338 string=0x000000000032433C "_"
 *   insn=0x000000000032433C string=0x0000000000324340 "i"
 *   insn=0x0000000000324344 string=0x0000000000324348 "A"
 *   insn=0x0000000000324348 string=0x000000000032434C "h.@"
 *   insn=0x000000000032434C string=0x0000000000324350 ""
 *   insn=0x0000000000324358 string=0x000000000032435C "`"
 *   insn=0x0000000000324394 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WalkingMonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::WalkingMonsterControllerComponent *this,
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

