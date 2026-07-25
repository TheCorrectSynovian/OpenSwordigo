/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2BE4
 * Mangled: _ZN5Caver5Proto24CharacterState_ItemState27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::CharacterState_ItemState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F98C0  Caver::Proto::CharacterState_ItemState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 54
 *   insn=0x00000000002F2BF8 string=0x00000000002F2BFC "U"
 *   insn=0x00000000002F2C0C string=0x00000000002F2C10 ")"
 *   insn=0x00000000002F2C1C string=0x00000000002F2C20 "7a"
 *   insn=0x00000000002F2C20 string=0x00000000002F2C24 "h"
 *   insn=0x00000000002F2C28 string=0x00000000002F2C2C """
 *   insn=0x00000000002F2C2C string=0x00000000002F2C30 "\t"
 *   insn=0x00000000002F2C34 string=0x00000000002F2C38 "!"
 *   insn=0x00000000002F2C38 string=0x00000000002F2C3C ""
 *   insn=0x00000000002F2C3C string=0x00000000002F2C40 "a""
 *   insn=0x00000000002F2C40 string=0x00000000002F2C44 "h"
 *   insn=0x00000000002F2C48 string=0x00000000002F2C4C "I"
 *   insn=0x00000000002F2C48 string=0x00000000002F2C64 "(|"
 *   insn=0x00000000002F2C50 string=0x00000000002F2C54 "{"
 *   insn=0x00000000002F2C54 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002F2C58 string=0x00000000002F2C5C "a""
 *   insn=0x00000000002F2C6C string=0x00000000002F2CA8 "("
 *   insn=0x00000000002F2C74 string=0x00000000002F2C78 "("
 *   insn=0x00000000002F2C74 string=0x00000000002F2D50 "("
 *   insn=0x00000000002F2C7C string=0x00000000002F2C80 "i"
 *   insn=0x00000000002F2C80 string=0x00000000002F2C84 "?"
 *   insn=0x00000000002F2C84 string=0x00000000002F2C88 "b"
 *   insn=0x00000000002F2C88 string=0x00000000002F2C8C "*"
 *   insn=0x00000000002F2C8C string=0x00000000002F2C90 "*"
 *   insn=0x00000000002F2C90 string=0x00000000002F2C94 "J"
 *   insn=0x00000000002F2C94 string=0x00000000002F2C98 ")"
 *   insn=0x00000000002F2C9C string=0x00000000002F2CA0 "i"
 *   insn=0x00000000002F2CA0 string=0x00000000002F2CA4 """
 *   insn=0x00000000002F2CAC string=0x00000000002F2CB0 "!"
 *   insn=0x00000000002F2CB8 string=0x00000000002F2CBC ""
 *   insn=0x00000000002F2CBC string=0x00000000002F2CC0 "?"
 *   insn=0x00000000002F2CCC string=0x00000000002F2CD0 "D\n"
 *   insn=0x00000000002F2CD0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F2CD4 string=0x00000000002F2CD8 "7"
 *   insn=0x00000000002F2CE4 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002F2CE8 string=0x00000000002F2CEC "i"
 *   insn=0x00000000002F2CEC string=0x00000000002F2CF0 "?"
 *   insn=0x00000000002F2CF4 string=0x00000000002F2CF8 "*"
 *   insn=0x00000000002F2CF8 string=0x00000000002F2CFC "_A"
 *   insn=0x00000000002F2CFC string=0x00000000002F2D00 "!"
 *   insn=0x00000000002F2D00 string=0x00000000002F2D04 ")"
 *   insn=0x00000000002F2D04 string=0x00000000002F2D08 "i"
 *   insn=0x00000000002F2D08 string=0x00000000002F2D0C "?"
 *   insn=0x00000000002F2D1C string=0x00000000002F2D20 "@"
 *   insn=0x00000000002F2D1C string=0x00000000001F9050 "0'"
 *   insn=0x00000000002F2D24 string=0x00000000002F2D28 "i"
 *   insn=0x00000000002F2D30 string=0x00000000002F2D34 "?"
 *   insn=0x00000000002F2D34 string=0x00000000002F2D38 "j"
 *   insn=0x00000000002F2D3C string=0x00000000002F2D40 "!"
 *   insn=0x00000000002F2D40 string=0x00000000002F2D44 "h.@"
 *   insn=0x00000000002F2D60 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002F2D7C string=0x00000000002F2D80 "a"
 *   insn=0x00000000002F2D80 string=0x00000000002F2DAC "I"
 *   insn=0x00000000002F2DA0 string=0x00000000002F2DA4 "`"
 *   insn=0x00000000002F2DAC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState_ItemState::MergePartialFromCodedStream(
        Caver::Proto::CharacterState_ItemState *this,
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
  __int64 *v13; // x1
  _QWORD *v14; // x0
  _BYTE *v15; // x9
  int v16; // w11
  __int64 result; // x0
  unsigned int v18; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v19; // [xsp+8h] [xbp-38h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
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
      if ( v8 != 2 )
        goto LABEL_26;
      v13 = (__int64 *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 7) |= 1u;
      if ( v13 == &Caver::Proto::CharacterState_ItemState::_default_name_ )
      {
        v14 = (_QWORD *)operator new(8u);
        *v14 = &byte_6FD2F8;
        *((_QWORD *)this + 2) = v14;
      }
      if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
        return 0;
      v15 = (_BYTE *)*((_QWORD *)a2 + 1);
      v9 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v15 < v9 && *v15 == 16 )
      {
        v10 = v15 + 1;
        *((_QWORD *)a2 + 1) = v10;
        if ( (unsigned __int64)v10 >= v9 )
          goto LABEL_20;
LABEL_11:
        if ( (*v10 & 0x80000000) == 0 )
        {
          v11 = (unsigned __int8)*v10;
          v12 = (unsigned __int8 *)(v10 + 1);
          v18 = v11;
          *((_QWORD *)a2 + 1) = v12;
          goto LABEL_22;
        }
LABEL_20:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v18) & 1) == 0 )
          return 0;
        v11 = v18;
        v12 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
LABEL_22:
        v16 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 6) = v11;
        *((_DWORD *)this + 7) = v16 | 2;
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
          goto LABEL_20;
        goto LABEL_11;
      }
    }
    else
    {
      v8 = v6 & 7;
    }
LABEL_26:
    if ( v8 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

