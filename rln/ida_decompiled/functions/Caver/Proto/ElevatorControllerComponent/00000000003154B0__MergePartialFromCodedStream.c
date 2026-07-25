/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003154B0
 * Mangled: _ZN5Caver5Proto27ElevatorControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ElevatorControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   insn=0x00000000003154C0 string=0x00000000003154C4 "U"
 *   insn=0x00000000003154D4 string=0x00000000003154D8 "h"
 *   insn=0x00000000003154DC string=0x00000000003154E0 """
 *   insn=0x00000000003154E0 string=0x00000000003154E4 "\t"
 *   insn=0x00000000003154E8 string=0x00000000003154EC "!"
 *   insn=0x00000000003154EC string=0x00000000003154F0 ""
 *   insn=0x00000000003154F0 string=0x00000000003154F4 "a""
 *   insn=0x00000000003154F4 string=0x00000000003154F8 "h"
 *   insn=0x00000000003154FC string=0x0000000000315500 "Q"
 *   insn=0x00000000003154FC string=0x0000000000315518 "(|"
 *   insn=0x0000000000315504 string=0x0000000000315508 "N"
 *   insn=0x0000000000315508 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031550C string=0x0000000000315510 "a""
 *   insn=0x0000000000315520 string=0x000000000031555C "("
 *   insn=0x0000000000315524 string=0x0000000000315528 "!"
 *   insn=0x0000000000315528 string=0x000000000031552C "("
 *   insn=0x0000000000315528 string=0x000000000031558C "("
 *   insn=0x0000000000315530 string=0x0000000000315534 "i"
 *   insn=0x0000000000315534 string=0x0000000000315538 "?"
 *   insn=0x000000000031553C string=0x0000000000315540 "("
 *   insn=0x0000000000315544 string=0x0000000000315548 ""
 *   insn=0x0000000000315548 string=0x000000000031554C ")"
 *   insn=0x0000000000315550 string=0x0000000000315554 "i"
 *   insn=0x0000000000315554 string=0x0000000000315558 ","
 *   insn=0x0000000000315558 string=0x0000000000315608 "\t"
 *   insn=0x0000000000315560 string=0x0000000000315564 "i"
 *   insn=0x0000000000315564 string=0x0000000000315568 "?"
 *   insn=0x000000000031556C string=0x0000000000315570 "*"
 *   insn=0x0000000000315574 string=0x0000000000315578 "J"
 *   insn=0x0000000000315578 string=0x000000000031557C ")"
 *   insn=0x0000000000315580 string=0x0000000000315584 "i"
 *   insn=0x000000000031559C string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003155A0 string=0x00000000003155A4 "*"
 *   insn=0x00000000003155B0 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003155B8 string=0x00000000003155BC "i"
 *   insn=0x00000000003155C4 string=0x00000000003155C8 "?"
 *   insn=0x00000000003155C8 string=0x00000000003155CC "j"
 *   insn=0x00000000003155D0 string=0x00000000003155D4 """
 *   insn=0x00000000003155D4 string=0x00000000003155D8 "*"
 *   insn=0x00000000003155D8 string=0x00000000003155DC "_A"
 *   insn=0x00000000003155E0 string=0x00000000003155E4 ")"
 *   insn=0x00000000003155E4 string=0x00000000003155E8 "i"
 *   insn=0x00000000003155E8 string=0x00000000003155EC "?"
 *   insn=0x00000000003155FC string=0x0000000000315600 "`"
 *   insn=0x0000000000315608 string=0x000000000031560C "?\t"
 *   insn=0x0000000000315610 string=0x0000000000315620 "h"
 *   insn=0x0000000000315614 string=0x0000000000315618 ")"
 *   insn=0x0000000000315628 string=0x000000000031562C "h.@"
 *   insn=0x000000000031562C string=0x0000000000315630 "H"
 *   insn=0x0000000000315638 string=0x000000000031563C "`"
 *   insn=0x0000000000315674 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ElevatorControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::ElevatorControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  char *v9; // x9
  unsigned int v10; // w8
  unsigned __int64 v11; // x8
  char *v12; // x9
  unsigned int v13; // w10
  _BYTE *v14; // x9
  int v15; // w11
  int v16; // w9
  __int64 result; // x0
  unsigned int v18; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v19; // [xsp+8h] [xbp-28h]

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
        goto LABEL_18;
      v12 = (char *)*((_QWORD *)a2 + 1);
      v11 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v12 >= v11 || *v12 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v18) & 1) == 0 )
          return 0;
        v13 = v18;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
      }
      else
      {
        v13 = (unsigned __int8)*v12;
        v14 = v12 + 1;
        v18 = v13;
        *((_QWORD *)a2 + 1) = v14;
      }
      v15 = *((_DWORD *)this + 5);
      *((_DWORD *)this + 3) = v13;
      *((_DWORD *)this + 5) = v15 | 1;
      if ( (unsigned __int64)v14 < v11 && *v14 == 16 )
      {
        v9 = v14 + 1;
        *((_QWORD *)a2 + 1) = v9;
        if ( (unsigned __int64)v9 >= v11 )
          goto LABEL_26;
LABEL_11:
        if ( (*v9 & 0x80000000) == 0 )
        {
          v10 = (unsigned __int8)*v9;
          v18 = v10;
          *((_QWORD *)a2 + 1) = v9 + 1;
          goto LABEL_28;
        }
LABEL_26:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v18) & 1) == 0 )
          return 0;
        v10 = v18;
LABEL_28:
        if ( v10 - 1 <= 2 )
        {
          v16 = *((_DWORD *)this + 5) | 2;
          *((_DWORD *)this + 4) = v10;
          *((_DWORD *)this + 5) = v16;
        }
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
      if ( (v6 & 7) == 0 )
      {
        v9 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v9 >= *((_QWORD *)a2 + 2) )
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

