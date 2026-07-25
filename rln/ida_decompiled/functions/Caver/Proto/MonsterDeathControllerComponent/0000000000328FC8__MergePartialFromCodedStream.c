/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328FC8
 * Mangled: _ZN5Caver5Proto31MonsterDeathControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 36
 *   insn=0x0000000000328FD8 string=0x0000000000328FDC "U"
 *   insn=0x0000000000328FEC string=0x0000000000328FF0 "h"
 *   insn=0x0000000000328FF4 string=0x0000000000328FF8 """
 *   insn=0x0000000000328FF8 string=0x0000000000328FFC "\t"
 *   insn=0x0000000000329000 string=0x0000000000329004 "!"
 *   insn=0x0000000000329004 string=0x0000000000329008 ""
 *   insn=0x0000000000329008 string=0x000000000032900C "a""
 *   insn=0x000000000032900C string=0x0000000000329010 "h"
 *   insn=0x0000000000329010 string=0x0000000000329014 "? "
 *   insn=0x0000000000329018 string=0x000000000032901C "A"
 *   insn=0x0000000000329018 string=0x0000000000329054 "j"
 *   insn=0x000000000032901C string=0x0000000000329020 "("
 *   insn=0x000000000032902C string=0x0000000000329030 "(R"
 *   insn=0x0000000000329030 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000329034 string=0x0000000000329038 "%"
 *   insn=0x0000000000329040 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000329044 string=0x0000000000329048 "a""
 *   insn=0x0000000000329048 string=0x000000000032904C "? "
 *   insn=0x000000000032904C string=0x0000000000329050 "a"
 *   insn=0x0000000000329054 string=0x0000000000329058 "_"
 *   insn=0x000000000032905C string=0x0000000000329060 "I"
 *   insn=0x0000000000329064 string=0x0000000000329068 ")"
 *   insn=0x0000000000329068 string=0x000000000032906C "J"
 *   insn=0x0000000000329070 string=0x0000000000329074 "j"
 *   insn=0x0000000000329074 string=0x0000000000329078 ""
 *   insn=0x0000000000329084 string=0x0000000000329088 " "
 *   insn=0x0000000000329084 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032908C string=0x0000000000329090 "j"
 *   insn=0x0000000000329098 string=0x000000000032909C "_"
 *   insn=0x000000000032909C string=0x00000000003290A0 "i"
 *   insn=0x00000000003290A4 string=0x00000000003290A8 "A"
 *   insn=0x00000000003290A8 string=0x00000000003290AC "h.@"
 *   insn=0x00000000003290AC string=0x00000000003290B0 ""
 *   insn=0x00000000003290B8 string=0x00000000003290BC "`"
 *   insn=0x00000000003290DC string=0x00000000003290F4 "w4"
 *   insn=0x00000000003290F4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterDeathControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::MonsterDeathControllerComponent *this,
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

