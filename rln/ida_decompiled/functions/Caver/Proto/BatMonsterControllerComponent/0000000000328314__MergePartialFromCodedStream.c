/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328314
 * Mangled: _ZN5Caver5Proto29BatMonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::BatMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 51
 *   insn=0x0000000000328324 string=0x0000000000328328 "U"
 *   insn=0x0000000000328338 string=0x000000000032833C "h"
 *   insn=0x0000000000328340 string=0x0000000000328344 """
 *   insn=0x0000000000328344 string=0x0000000000328348 "\t"
 *   insn=0x000000000032834C string=0x0000000000328350 "!"
 *   insn=0x0000000000328350 string=0x0000000000328354 ""
 *   insn=0x0000000000328354 string=0x0000000000328358 "a""
 *   insn=0x0000000000328358 string=0x000000000032835C "h"
 *   insn=0x0000000000328360 string=0x0000000000328364 "O"
 *   insn=0x0000000000328360 string=0x000000000032837C "(|"
 *   insn=0x000000000032836C string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000328370 string=0x0000000000328374 "a""
 *   insn=0x0000000000328374 string=0x0000000000328378 "A\t"
 *   insn=0x0000000000328384 string=0x00000000003283C0 "("
 *   insn=0x0000000000328388 string=0x000000000032838C "!"
 *   insn=0x000000000032838C string=0x0000000000328390 "("
 *   insn=0x000000000032838C string=0x00000000003283F0 "("
 *   insn=0x0000000000328394 string=0x0000000000328398 "i"
 *   insn=0x0000000000328398 string=0x000000000032839C "?"
 *   insn=0x00000000003283A0 string=0x00000000003283A4 "*"
 *   insn=0x00000000003283A8 string=0x00000000003283AC "J"
 *   insn=0x00000000003283AC string=0x00000000003283B0 ")"
 *   insn=0x00000000003283B4 string=0x00000000003283B8 "i"
 *   insn=0x00000000003283B8 string=0x00000000003283BC "-"
 *   insn=0x00000000003283C4 string=0x00000000003283C8 "i"
 *   insn=0x00000000003283C8 string=0x00000000003283CC "?"
 *   insn=0x00000000003283D0 string=0x00000000003283D4 "*"
 *   insn=0x00000000003283D8 string=0x00000000003283DC "J"
 *   insn=0x00000000003283DC string=0x00000000003283E0 ")"
 *   insn=0x00000000003283E4 string=0x00000000003283E8 "i"
 *   insn=0x00000000003283F4 string=0x00000000003283F8 "@"
 *   insn=0x00000000003283FC string=0x0000000000328400 "4U"
 *   insn=0x0000000000328400 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000328404 string=0x0000000000328408 "("
 *   insn=0x0000000000328414 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032841C string=0x0000000000328420 "i"
 *   insn=0x0000000000328428 string=0x000000000032842C "?"
 *   insn=0x000000000032842C string=0x0000000000328430 "j"
 *   insn=0x0000000000328434 string=0x0000000000328438 """
 *   insn=0x0000000000328438 string=0x000000000032843C "*"
 *   insn=0x000000000032843C string=0x0000000000328440 "_A"
 *   insn=0x0000000000328444 string=0x0000000000328448 ")"
 *   insn=0x0000000000328448 string=0x000000000032844C "i"
 *   insn=0x000000000032844C string=0x0000000000328450 "?"
 *   insn=0x0000000000328460 string=0x0000000000328464 " "
 *   insn=0x0000000000328468 string=0x000000000032846C "i"
 *   insn=0x0000000000328474 string=0x0000000000328478 "?"
 *   insn=0x0000000000328478 string=0x000000000032847C "j"
 *   insn=0x0000000000328484 string=0x0000000000328488 "h.@"
 *   insn=0x0000000000328494 string=0x0000000000328498 "`"
 *   insn=0x00000000003284D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BatMonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::BatMonsterControllerComponent *this,
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

