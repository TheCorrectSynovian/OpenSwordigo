/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329444
 * Mangled: _ZN5Caver5Proto33GenericMonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 37
 *   insn=0x0000000000329454 string=0x0000000000329458 "U"
 *   insn=0x0000000000329468 string=0x000000000032946C "h"
 *   insn=0x0000000000329470 string=0x0000000000329474 """
 *   insn=0x0000000000329474 string=0x0000000000329478 "\t"
 *   insn=0x000000000032947C string=0x0000000000329480 "!"
 *   insn=0x0000000000329480 string=0x0000000000329484 ""
 *   insn=0x0000000000329484 string=0x0000000000329488 "a""
 *   insn=0x0000000000329488 string=0x000000000032948C "h"
 *   insn=0x000000000032948C string=0x0000000000329490 "? "
 *   insn=0x0000000000329494 string=0x0000000000329498 "A"
 *   insn=0x0000000000329494 string=0x00000000003294D0 "j"
 *   insn=0x0000000000329498 string=0x000000000032949C "("
 *   insn=0x00000000003294A8 string=0x00000000003294AC "\tQ"
 *   insn=0x00000000003294AC string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003294B0 string=0x00000000003294B4 "%"
 *   insn=0x00000000003294B8 string=0x00000000003294BC "a9"
 *   insn=0x00000000003294BC string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003294C0 string=0x00000000003294C4 "a""
 *   insn=0x00000000003294C4 string=0x00000000003294C8 "? "
 *   insn=0x00000000003294C8 string=0x00000000003294CC "a"
 *   insn=0x00000000003294D0 string=0x00000000003294D4 "_"
 *   insn=0x00000000003294D8 string=0x00000000003294DC "I"
 *   insn=0x00000000003294E0 string=0x00000000003294E4 ")"
 *   insn=0x00000000003294E4 string=0x00000000003294E8 "J"
 *   insn=0x00000000003294EC string=0x00000000003294F0 "j"
 *   insn=0x00000000003294F0 string=0x00000000003294F4 ""
 *   insn=0x0000000000329500 string=0x0000000000329504 " "
 *   insn=0x0000000000329500 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000329508 string=0x000000000032950C "j"
 *   insn=0x0000000000329514 string=0x0000000000329518 "_"
 *   insn=0x0000000000329518 string=0x000000000032951C "i"
 *   insn=0x0000000000329520 string=0x0000000000329524 "A"
 *   insn=0x0000000000329524 string=0x0000000000329528 "h.@"
 *   insn=0x0000000000329528 string=0x000000000032952C ""
 *   insn=0x0000000000329534 string=0x0000000000329538 "`"
 *   insn=0x0000000000329558 string=0x0000000000329570 "X3"
 *   insn=0x0000000000329570 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GenericMonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::GenericMonsterControllerComponent *this,
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

