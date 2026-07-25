/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323B54
 * Mangled: _ZN5Caver5Proto26MonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 * Referenced strings: 86
 *   insn=0x0000000000323B64 string=0x0000000000323B68 "U"
 *   insn=0x0000000000323B6C string=0x0000000000323B70 "V"
 *   insn=0x0000000000323B80 string=0x0000000000323B84 "h"
 *   insn=0x0000000000323B88 string=0x0000000000323B8C """
 *   insn=0x0000000000323B8C string=0x0000000000323B90 "\t"
 *   insn=0x0000000000323B94 string=0x0000000000323B98 "!"
 *   insn=0x0000000000323B98 string=0x0000000000323B9C ""
 *   insn=0x0000000000323B9C string=0x0000000000323BA0 "a""
 *   insn=0x0000000000323BA0 string=0x0000000000323BA4 "h"
 *   insn=0x0000000000323BA8 string=0x0000000000323BC4 "(|"
 *   insn=0x0000000000323BB4 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000323BB8 string=0x0000000000323BBC "a""
 *   insn=0x0000000000323BC4 string=0x0000000000323BC8 ""
 *   insn=0x0000000000323BCC string=0x0000000000323BD0 "h"
 *   insn=0x0000000000323BD0 string=0x0000000000323D9C "("
 *   insn=0x0000000000323BD4 string=0x0000000000323BD8 ""
 *   insn=0x0000000000323BDC string=0x0000000000323BE0 "("
 *   insn=0x0000000000323BDC string=0x0000000000323C54 "("
 *   insn=0x0000000000323BDC string=0x0000000000323C84 "("
 *   insn=0x0000000000323BDC string=0x0000000000323CB4 "("
 *   insn=0x0000000000323BF4 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000323C04 string=0x0000000000323C08 "("
 *   insn=0x0000000000323C0C string=0x0000000000323C10 "i"
 *   insn=0x0000000000323C10 string=0x0000000000323C14 "?"
 *   insn=0x0000000000323C14 string=0x0000000000323C18 "b"
 *   insn=0x0000000000323C18 string=0x0000000000323C1C "*"
 *   insn=0x0000000000323C1C string=0x0000000000323C20 "_A"
 *   insn=0x0000000000323C24 string=0x0000000000323C28 ")"
 *   insn=0x0000000000323C28 string=0x0000000000323C2C "i"
 *   insn=0x0000000000323C2C string=0x0000000000323C30 "?"
 *   insn=0x0000000000323C34 string=0x0000000000323C38 "*"
 *   insn=0x0000000000323C38 string=0x0000000000323C3C "j"
 *   insn=0x0000000000323C3C string=0x0000000000323C40 "J"
 *   insn=0x0000000000323C40 string=0x0000000000323C44 ")"
 *   insn=0x0000000000323C48 string=0x0000000000323C4C "i"
 *   insn=0x0000000000323C4C string=0x0000000000323C50 "$"
 *   insn=0x0000000000323C54 string=0x0000000000323C58 "A\n"
 *   insn=0x0000000000323C58 string=0x0000000000323C5C "i"
 *   insn=0x0000000000323C5C string=0x0000000000323C60 "?"
 *   insn=0x0000000000323C64 string=0x0000000000323C68 "*"
 *   insn=0x0000000000323C68 string=0x0000000000323C6C "J"
 *   insn=0x0000000000323C6C string=0x0000000000323C70 "J"
 *   insn=0x0000000000323C70 string=0x0000000000323C74 ")"
 *   insn=0x0000000000323C78 string=0x0000000000323C7C "i"
 *   insn=0x0000000000323C7C string=0x0000000000323C80 "+"
 *   insn=0x0000000000323C88 string=0x0000000000323C8C "i"
 *   insn=0x0000000000323C8C string=0x0000000000323C90 "?"
 *   insn=0x0000000000323C90 string=0x0000000000323C94 "b"
 *   insn=0x0000000000323C94 string=0x0000000000323C98 "*"
 *   insn=0x0000000000323C98 string=0x0000000000323C9C "*"
 *   insn=0x0000000000323C9C string=0x0000000000323CA0 "J"
 *   insn=0x0000000000323CA0 string=0x0000000000323CA4 ")"
 *   insn=0x0000000000323CA8 string=0x0000000000323CAC "i"
 *   insn=0x0000000000323CAC string=0x0000000000323CB0 "2"
 *   insn=0x0000000000323CB4 string=0x0000000000323CB8 "A"
 *   insn=0x0000000000323CB8 string=0x0000000000323CBC "i"
 *   insn=0x0000000000323CBC string=0x0000000000323CC0 "?"
 *   insn=0x0000000000323CD0 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000323CD8 string=0x0000000000323CDC "i"
 *   insn=0x0000000000323CE4 string=0x0000000000323CE8 "?"
 *   insn=0x0000000000323CE8 string=0x0000000000323CEC "j"
 *   insn=0x0000000000323CF4 string=0x0000000000323CF8 "*"
 *   insn=0x0000000000323CF8 string=0x0000000000323CFC "_a"
 *   insn=0x0000000000323CFC string=0x0000000000323D00 "!"
 *   insn=0x0000000000323D00 string=0x0000000000323D04 ")"
 *   insn=0x0000000000323D04 string=0x0000000000323D08 "i"
 *   insn=0x0000000000323D08 string=0x0000000000323D0C "?"
 *   insn=0x0000000000323D24 string=0x0000000000323D28 "i"
 *   insn=0x0000000000323D30 string=0x0000000000323D34 "?"
 *   insn=0x0000000000323D34 string=0x0000000000323D38 "j"
 *   insn=0x0000000000323D3C string=0x0000000000323D40 """
 *   insn=0x0000000000323D40 string=0x0000000000323D44 "*"
 *   insn=0x0000000000323D44 string=0x0000000000323D48 "_"
 *   insn=0x0000000000323D4C string=0x0000000000323D50 ")"
 *   insn=0x0000000000323D50 string=0x0000000000323D54 "i"
 *   insn=0x0000000000323D54 string=0x0000000000323D58 "?"
 *   insn=0x0000000000323D68 string=0x0000000000323D6C "@"
 *   insn=0x0000000000323D70 string=0x0000000000323D74 "i"
 *   insn=0x0000000000323D7C string=0x0000000000323D80 "?"
 *   insn=0x0000000000323D80 string=0x0000000000323D84 "j"
 *   insn=0x0000000000323D8C string=0x0000000000323D90 "h.@"
 *   insn=0x0000000000323DAC string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000323DC8 string=0x0000000000323DCC "A"
 *   insn=0x0000000000323DCC string=0x0000000000323DF4 "7I"
 *   insn=0x0000000000323DE8 string=0x0000000000323DEC "`"
 *   insn=0x0000000000323DF4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::MonsterControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  int v9; // w9
  unsigned __int64 v10; // x8
  _BYTE *v11; // x9
  char *v12; // x9
  unsigned int v13; // w10
  _BYTE *v14; // x9
  char *v15; // x9
  unsigned int v16; // w10
  _BYTE *v17; // x9
  char *v18; // x9
  unsigned int v19; // w10
  unsigned __int8 *v20; // x9
  int v21; // w11
  int v22; // w11
  int v23; // w11
  __int64 result; // x0
  unsigned int v25; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v26; // [xsp+8h] [xbp-28h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_41;
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v25) & 1) == 0 )
          return 0;
        v9 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 6) = v25;
        *((_DWORD *)this + 7) = v9 | 8;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v11 >= v10 || *v11 != 16 )
          continue;
        v12 = v11 + 1;
        *((_QWORD *)a2 + 1) = v12;
        if ( (unsigned __int64)v12 >= v10 )
          goto LABEL_25;
        goto LABEL_13;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_41;
        v12 = (char *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 >= v10 )
          goto LABEL_25;
LABEL_13:
        if ( *v12 < 0 )
        {
LABEL_25:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v25) & 1) == 0 )
            return 0;
          v13 = v25;
          v14 = (_BYTE *)*((_QWORD *)a2 + 1);
          v10 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v13 = (unsigned __int8)*v12;
          v14 = v12 + 1;
          v25 = v13;
          *((_QWORD *)a2 + 1) = v14;
        }
        v21 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 4) = v13;
        *((_DWORD *)this + 7) = v21 | 2;
        if ( (unsigned __int64)v14 >= v10 || *v14 != 24 )
          continue;
        v15 = v14 + 1;
        *((_QWORD *)a2 + 1) = v15;
        if ( (unsigned __int64)v15 >= v10 )
          goto LABEL_30;
LABEL_17:
        if ( *v15 < 0 )
        {
LABEL_30:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v25) & 1) == 0 )
            return 0;
          v16 = v25;
          v17 = (_BYTE *)*((_QWORD *)a2 + 1);
          v10 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v16 = (unsigned __int8)*v15;
          v17 = v15 + 1;
          v25 = v16;
          *((_QWORD *)a2 + 1) = v17;
        }
        v22 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 3) = v16;
        *((_DWORD *)this + 7) = v22 | 1;
        if ( (unsigned __int64)v17 >= v10 || *v17 != 32 )
          continue;
        v18 = v17 + 1;
        *((_QWORD *)a2 + 1) = v18;
        if ( (unsigned __int64)v18 >= v10 )
          goto LABEL_35;
LABEL_21:
        if ( *v18 < 0 )
        {
LABEL_35:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v25) & 1) == 0 )
            return 0;
          v19 = v25;
          v20 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v10 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v19 = (unsigned __int8)*v18;
          v20 = (unsigned __int8 *)(v18 + 1);
          v25 = v19;
          *((_QWORD *)a2 + 1) = v20;
        }
        v23 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 5) = v19;
        *((_DWORD *)this + 7) = v23 | 4;
        if ( v20 == (unsigned __int8 *)v10 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_41;
        v15 = (char *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v15 < v10 )
          goto LABEL_17;
        goto LABEL_30;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_41;
        v18 = (char *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v18 < v10 )
          goto LABEL_21;
        goto LABEL_35;
      default:
        v8 = v6 & 7;
LABEL_41:
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

